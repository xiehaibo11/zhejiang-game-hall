
void getAndroidApiLevel(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  char acStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = __system_property_get("ro.build.version.sdk",acStack_38);
  if (iVar2 < 1) {
    log2Console(5,"eup","Failed to get API level (will set to %s).",&DAT_0012a2f8);
    uVar3 = 0x15;
  }
  else {
    uVar3 = strtoul(acStack_38,(char **)0x0,10);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

