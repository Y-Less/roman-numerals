# roman-numerals

[![sampctl](https://shields.southcla.ws/badge/sampctl-roman--numerals-2f2f2f.svg?style=for-the-badge)](https://github.com/Y-Less/roman-numerals)

<!--
Short description of your library, why it's useful, some examples, pictures or
videos. Link to your forum release thread too.

Remember: You can use "forumfmt" to convert this readme to forum BBCode!

What the sections below should be used for:

`## Installation`: Leave this section un-edited unless you have some specific
additional installation procedure.

`## Testing`: Whether your library is tested with a simple `main()` and `print`,
unit-tested, or demonstrated via prompting the player to connect, you should
include some basic information for users to try out your code in some way.

And finally, maintaining your version number`:

* Follow [Semantic Versioning](https://semver.org/)
* When you release a new version, update `VERSION` and `git tag` it
* Versioning is important for sampctl to use the version control features

Happy Pawning!
-->

## Installation

Simply install to your project:

```bash
sampctl package install Y-Less/roman-numerals
```

Include in your code and begin using the library:

```pawn
#include <roman-numerals>
```

## Usage

<!--
Write your code documentation or examples here. If your library is documented in
the source code, direct users there. If not, list your API and describe it well
in this section. If your library is passive and has no API, simply omit this
section.
-->

There are two ways to use this include - prefixed and unprefixed (default):

```pawn
#define ROMAN_LITERALS

#include <roman-numerals>
#include <a_samp>

#undef MAX_PLAYERS
#define MAX_PLAYERS (CC)

main()
{
	for (new i = nulla; i != XCIV; ++i)
	{
		printf("i + CIII = %d", i + CIII);
	}
}
```

Prefixed mode requires `0r` in front of the numbers, but improves compatibility:

```pawn
#define ROMAN_PREFIX
#define ROMAN_LITERALS

#include <roman-numerals>
#include <a_samp>

#undef MAX_PLAYERS
#define MAX_PLAYERS (0rCC)

main()
{
	for (new i = 0rN; i != 0rXCIV; ++i)
	{
		printf("i + 0rCIII = %d", i + 0rCIII);
	}
}
```

Note that there's no Roman numeral for zero, use `nulla` or `0rN` instead.  `ROMAN_LITERALS` includes the defines to make the numbers work (since there are several thousand of them).  Without this you can't use the literals, but can still use the two functions for converting to and from strings:

```pawn
// Remove this for much faster compiling.
//#define ROMAN_LITERALS

#include <a_samp>
#include "roman-numerals.inc"

main()
{
	printf("%d", FromRomanNumeral("MCCVIIII"))
	new str[32];

	ToRomanNumeral(54, str, .subtractive = false);
	printf(str); // LIIII

	ToRomanNumeral(54, str, .subtractive = true);
	printf(str); // LIV
}
```

## Numbers

Contrary to popular belief, there is no fixed standard on how to write certain numbers.  These are all valid versions of `449`:

```
CCCCXXXXVIIII
CCCCXLVIIII
CDXXXXVIIII
CCCCXXXXIX
CDXLVIIII
CDXXXXIX
CCCCXLIX
CDXLVIII
CCCCIL
CDIL
```

Normally it is only `4` and `9` that has this ambiguity, so this library handles every variant of those.  There is some evidence that any number can use this scheme, so `8` could be `IIX`, but these extra extended numbers are not yet handled.  Unsurprisingly, Tom Scott has a relevant video:

https://www.youtube.com/watch?v=jMxoGqsmk5Y

There is also no standard for numbers over 3000, since there is no symbol for 5000.  Two methods are to simply use more `M`s, or to add a bar over numbers indicating `* 1000`.  This library uses the former, up to pawn symbol limits (31 characters).  Thus the largest possible number you can represent without modifying the compiler is in unprefixed mode and is `31000` (`MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM`).

## Testing

<!--
Depending on whether your package is tested via in-game "demo tests" or
y_testing unit-tests, you should indicate to readers what to expect below here.
-->

To test, simply run the package:

```bash
sampctl package run
```

