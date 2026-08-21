
undefined8 FUN_00c14420(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = (ulong *)FUN_00c142a0();
  if ((int)((long)*puVar4 >> 0x2f) == -0xb) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
    plVar7[2] = param_1;
    lVar6 = *plVar7;
    uVar1 = *(uint *)(lVar6 + (ulong)*(ushort *)((*puVar4 & 0x7fffffffffff) + 10) * 0x18);
    if (uVar1 >> 0x1c == 0xc) {
      uVar5 = (ulong)(uVar1 & 0xffff);
      lVar2 = uVar5 * 0x18;
      uVar1 = *(uint *)(lVar6 + lVar2);
      while (uVar1 >> 0x1c == 8) {
        lVar2 = (ulong)(ushort)uVar1 * 0x18;
        uVar1 = *(uint *)(lVar6 + lVar2);
      }
      iVar3 = FUN_00c21fa4(plVar7,lVar6 + lVar2,uVar5,*(long *)(param_1 + 0x28) + -8,
                           *(undefined8 *)((*puVar4 & 0x7fffffffffff) + 0x10));
      if (iVar3 == 0) {
        return 1;
      }
      if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x20) <
          *(ulong *)(*(long *)(param_1 + 0x10) + 0x28)) {
        return 1;
      }
      FUN_00c19f80(param_1);
      return 1;
    }
  }
  *(ulong *)(*(long *)(param_1 + 0x28) + -8) = *puVar4;
  return 1;
}

