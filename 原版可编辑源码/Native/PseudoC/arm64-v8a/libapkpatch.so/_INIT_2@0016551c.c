
void _INIT_2(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  char acStack_6c [92];
  
  uVar3 = getauxval(0x10);
  if (((uint)uVar3 >> 8 & 1) != 0) {
    iVar2 = __system_property_get("ro.arch",acStack_6c);
    uVar1 = (uint)((ulong)uVar3 >> 8);
    if (iVar2 < 1) {
      uVar4 = uVar1 & 1;
    }
    else {
      iVar2 = strncmp(acStack_6c,"exynos9810",10);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = uVar1 & 1;
      }
    }
    DAT_0016c560 = uVar4 != 0;
    return;
  }
  DAT_0016c560 = 0;
  return;
}

