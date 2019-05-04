#define ROMAN_LITERALS
#define ROMAN_PREFIX
#define RUN_TESTS

#include <YSI_Core\y_testing>

#include "roman-numerals.inc"

TEST__ RomanNumerals()
{
	new i = 0rXVI;
	ASSERT_EQ(i + 0rCCC, 0rCCCXVI);
	ASSERT_EQ(i + 0rN, i);
}

