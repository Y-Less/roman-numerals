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

```pawn
#include <roman-numerals>
#include <a_samp>

#undef MAX_PLAYERS
#define MAX_PLAYERS (CC)

main()
{
	// There's no Roman numeral for zero.
	for (new i = 0; i != XCIV; ++i)
	{
		printf("i + CIII = %d", i + CIII);
	}
}
```

## Testing

<!--
Depending on whether your package is tested via in-game "demo tests" or
y_testing unit-tests, you should indicate to readers what to expect below here.
-->

To test, simply run the package:

```bash
sampctl package run
```
