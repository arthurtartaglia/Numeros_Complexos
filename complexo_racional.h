#ifndef COMPLEXO_RACIONAL_H
#define COMPLEXO_RACIONAL_H

#undef TYPE
#undef TYPED
#undef TIPO

#define TYPE long int
#define TYPED(COISA) R_ ## COISA
#define TIPO "ld"

#include "Complexo.h"
#include "racional.h"

#undef TYPE
#undef TYPED
#undef TIPO

#endif