#include <config.h>
#include "f2c.h"

#ifdef INTEGER_STAR_8

longint qbit_shift(longint a, integer b)
{
	return b >= 0 ? a << b : (longint)((ulongint)a >> -b);
}

#endif
