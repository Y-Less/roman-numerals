#define ROMAN_LITERALS
#define ROMAN_PREFIX
#define RUN_TESTS

#include <YSI_Core\y_testing>

#include "roman-numerals.inc"

enum E_TEST_DATA {
	E_TEST_DATA_STR[32],
	E_TEST_DATA_NUM,
}

static gTestData[][E_TEST_DATA] = {
	#include "stringified_numerals.pwn"
};

TEST__ RomanNumerals()
{
	new
		i = 0rXVI,
		str[64];
	ASSERT_EQ(i + 0rCCC, 0rCCCXVI);
	ASSERT_EQ(i + 0rN, i);
	ASSERT_EQ(FromRomanNumeral("CCCCXXXXIIII"), 444);
	ASSERT_EQ(FromRomanNumeral("CDXXXXIIII  "), 444);
	ASSERT_EQ(FromRomanNumeral("CCCCXXXXIV  "), 444);
	ASSERT_EQ(FromRomanNumeral("CCCCXLIV    "), 444);
	ASSERT_EQ(FromRomanNumeral("CDXXXXIV    "), 444);
	ASSERT_EQ(FromRomanNumeral("CDXLIIII    "), 444);
	ASSERT_EQ(FromRomanNumeral("CDXLIV      "), 444);
	ASSERT_EQ(FromRomanNumeral("MMMMDCCCCLXXXXVIIII"), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMDCCCCLXXXXIX   "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMDCCCCXCVIIII   "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMDCCCCXCIX      "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMDCCCCIC        "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMCMLXXXXVIIII   "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMCMLXXXXIX      "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMCMXCVIIII      "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMCMXCIX         "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMCMIC           "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMIM             "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMXMVIIII        "), 4999);
	ASSERT_EQ(FromRomanNumeral("MMMMXMIX           "), 4999);
	for (i = 0; i != 31000; ++i)
	{
		ToRomanNumeral(i, str, .subtractive = false);
		ASSERT_EQ(i, FromRomanNumeral(str));
		ToRomanNumeral(i, str, .subtractive = true);
		ASSERT_EQ(i, FromRomanNumeral(str));
	}
	for (i = 0; i != sizeof (gTestData); ++i)
	{
		ASSERT_EQ(gTestData[i][E_TEST_DATA_NUM], FromRomanNumeral(gTestData[i][E_TEST_DATA_STR]));
	}
}

