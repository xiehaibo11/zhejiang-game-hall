
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void getAndroidApiLevel(void)

{
  int iVar1;
  ulong uVar2;
  char acStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = property_get("ro.build.version.sdk",acStack_18,0);
  if (iVar1 < 1) {
    log2Console(5,"CrashReport-Native","Failed to get API level (will set to %s).",&DAT_00126808);
    uVar2 = 0x15;
  }
  else {
    uVar2 = strtoul(acStack_18,(char **)0x0,10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

