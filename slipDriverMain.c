#include "slip.h"
#include "slip.c"
#include "slhc.c"
#include "slipConfig.h"
#include "slipProtoChars.h"

extern _WINMAIN(struct slip, int func)
{
  if (func="free")
    slhc_free
}

extern _onDriverLoad()
{
  slip_init();
  slhc_init();
}

EXPORT_SYMBOL(slhc_init);
EXPORT_SYMBOL(slhc_free);
EXPORT_SYMBOL(slhc_remember);
EXPORT_SYMBOL(slhc_compress);
EXPORT_SYMBOL(slhc_uncompress);
EXPORT_SYMBOL(slhc_toss);