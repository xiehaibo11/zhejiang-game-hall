
/* v8::base::PosixDefaultTimezoneCache::LocalTimeOffset(double, bool) */

undefined1  [16] v8::base::PosixDefaultTimezoneCache::LocalTimeOffset(double param_1,bool param_2)

{
  tm *ptVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  tm tStack_50;
  time_t local_18;
  
  local_18 = time((time_t *)0x0);
  ptVar1 = localtime_r(&local_18,&tStack_50);
  pcVar2 = 
  "ure2DEEENS_22__unordered_map_hasherIS7_SC_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SC_NS_8equal_toIS7_EELb1EEENS5_ISC_EEE6rehashEm"
  ;
  if (ptVar1->tm_isdst < 1) {
    pcVar2 = (char *)0x0;
  }
  auVar3._0_8_ = (double)(ptVar1->tm_gmtoff * 1000 - (long)pcVar2);
  auVar3._8_8_ = 0;
  return auVar3;
}

