#define RUN_TESTS

#include <YSI_Core\y_testing>

#include "roman-numerals.inc"

TEST__ RomanNumerals()
{
	new i = XVI;
	ASSERT_EQ(i + CCC, CCCXVI);
	ASSERT_EQ(i + nulla, i);
}

