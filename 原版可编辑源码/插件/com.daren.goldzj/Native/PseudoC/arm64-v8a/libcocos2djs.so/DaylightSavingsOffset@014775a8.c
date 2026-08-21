
/* v8::base::PosixTimezoneCache::DaylightSavingsOffset(double) */

undefined1  [16] v8::base::PosixTimezoneCache::DaylightSavingsOffset(double param_1)

{
  int iVar1;
  tm *ptVar2;
  double dVar3;
  undefined1 auVar4 [16];
  tm tStack_50;
  long local_18;
  
  if (NAN(param_1)) {
    return ZEXT816(0x7ff8000000000000);
  }
  local_18 = (long)(param_1 / 1000.0);
  ptVar2 = localtime_r(&local_18,&tStack_50);
  if (ptVar2 == (tm *)0x0) {
    dVar3 = NAN;
  }
  else {
    iVar1 = 3600000;
    if (ptVar2->tm_isdst < 1) {
      iVar1 = 0;
    }
    dVar3 = (double)iVar1;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar3;
  return auVar4;
}

