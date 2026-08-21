
bool FUN_01044258(ulong *param_1,ulong *param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  ushort *__s2;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  uVar5 = *param_2;
  uVar4 = param_1[1];
  iVar3 = (int)uVar4;
  if (*(int *)(uVar5 + 7) == iVar3) {
    __s2 = (ushort *)(uVar5 + 0xb);
    bVar2 = (*(ushort *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 7) & 7) == 2;
    if ((*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) >> 3 & 1) == 0)
    {
      if (bVar2) {
        __s2 = (ushort *)(**(code **)(**(long **)__s2 + 0x30))();
        uVar4 = param_1[1];
      }
      if (0 < (long)(uVar4 << 0x20)) {
        pbVar6 = (byte *)*param_1;
        pbVar1 = pbVar6 + (int)uVar4;
        do {
          iVar3 = (uint)*pbVar6 - (uint)*__s2;
          if (iVar3 != 0) goto LAB_01044330;
          pbVar6 = pbVar6 + 1;
          __s2 = __s2 + 1;
        } while (pbVar6 < pbVar1);
      }
      iVar3 = 0;
    }
    else {
      if (bVar2) {
        __s2 = (ushort *)(**(code **)(**(long **)__s2 + 0x30))();
        iVar3 = (int)param_1[1];
      }
      iVar3 = memcmp((void *)*param_1,__s2,(long)iVar3);
    }
LAB_01044330:
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

