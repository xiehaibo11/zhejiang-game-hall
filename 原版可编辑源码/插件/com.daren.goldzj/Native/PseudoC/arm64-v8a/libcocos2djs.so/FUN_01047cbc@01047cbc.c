
bool FUN_01047cbc(ulong *param_1,ulong *param_2)

{
  ushort *puVar1;
  bool bVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort *puVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *param_2;
  uVar4 = param_1[1];
  if (*(int *)(uVar7 + 7) == (int)uVar4) {
    puVar3 = (ushort *)(uVar7 + 0xb);
    bVar2 = (*(ushort *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7) & 7) == 2;
    if ((*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) >> 3 & 1) == 0)
    {
      if (bVar2) {
        puVar3 = (ushort *)(**(code **)(**(long **)puVar3 + 0x30))();
        uVar4 = param_1[1];
      }
      if (0 < (long)(uVar4 << 0x20)) {
        puVar5 = (ushort *)*param_1;
        puVar1 = (ushort *)((long)puVar5 + ((long)(uVar4 << 0x20) >> 0x1f));
        do {
          iVar6 = (uint)*puVar5 - (uint)*puVar3;
          if (iVar6 != 0) goto LAB_01047db4;
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
        } while (puVar5 < puVar1);
      }
    }
    else {
      if (bVar2) {
        puVar3 = (ushort *)(**(code **)(**(long **)puVar3 + 0x30))();
        uVar4 = param_1[1];
      }
      if (0 < (long)(uVar4 << 0x20)) {
        puVar5 = (ushort *)*param_1;
        puVar1 = (ushort *)((long)puVar5 + ((long)(uVar4 << 0x20) >> 0x1f));
        do {
          iVar6 = (uint)*puVar5 - (uint)(byte)*puVar3;
          if (iVar6 != 0) goto LAB_01047db4;
          puVar5 = puVar5 + 1;
          puVar3 = (ushort *)((long)puVar3 + 1);
        } while (puVar5 < puVar1);
      }
    }
    iVar6 = 0;
LAB_01047db4:
    bVar2 = iVar6 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

