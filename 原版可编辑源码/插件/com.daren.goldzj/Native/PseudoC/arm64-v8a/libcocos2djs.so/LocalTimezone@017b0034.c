
/* v8::base::PosixDefaultTimezoneCache::LocalTimezone(double) */

char * v8::base::PosixDefaultTimezoneCache::LocalTimezone(double param_1)

{
  tm *ptVar1;
  char *pcVar2;
  tm tStack_50;
  long local_18;
  
  if (!NAN(param_1)) {
    local_18 = (long)(param_1 / 1000.0);
    ptVar1 = localtime_r(&local_18,&tStack_50);
    pcVar2 = "";
    if ((ptVar1 != (tm *)0x0) && (ptVar1->tm_zone != (char *)0x0)) {
      pcVar2 = ptVar1->tm_zone;
    }
    return pcVar2;
  }
  return "";
}

