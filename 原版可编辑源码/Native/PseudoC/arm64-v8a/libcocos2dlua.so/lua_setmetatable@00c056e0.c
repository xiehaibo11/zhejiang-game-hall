
undefined8 lua_setmetatable(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  puVar3 = (ulong *)FUN_00c03214();
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(ulong *)(lVar4 + -8) == 0xffffffffffffffff) {
    lVar7 = *(long *)(param_1 + 0x10);
    uVar2 = (uint)((long)*puVar3 >> 0x2f);
    if ((uVar2 == 0xfffffff4) || (uVar2 == 0xfffffff3)) {
      *(undefined8 *)((*puVar3 & 0x7fffffffffff) + 0x20) = 0;
      lVar4 = *(long *)(param_1 + 0x28);
      goto LAB_00c0574c;
    }
    uVar5 = 0;
  }
  else {
    uVar6 = *puVar3;
    uVar5 = *(ulong *)(lVar4 + -8) & 0x7fffffffffff;
    lVar7 = *(long *)(param_1 + 0x10);
    uVar2 = (uint)((long)uVar6 >> 0x2f);
    if (uVar2 == 0xfffffff4) {
      *(ulong *)((uVar6 & 0x7fffffffffff) + 0x20) = uVar5;
      if ((uVar5 != 0) && ((*(byte *)(uVar5 + 8) & 3) != 0)) {
        uVar5 = *puVar3 & 0x7fffffffffff;
        if ((*(byte *)(uVar5 + 8) >> 2 & 1) != 0) {
          lVar4 = *(long *)(param_1 + 0x10);
          *(byte *)(uVar5 + 8) = *(byte *)(uVar5 + 8) & 0xfb;
          *(undefined8 *)(uVar5 + 0x18) = *(undefined8 *)(lVar4 + 0x50);
          *(ulong *)(lVar4 + 0x50) = uVar5;
        }
      }
LAB_00c057a4:
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
      return 1;
    }
    if (uVar2 == 0xfffffff3) {
      *(ulong *)((uVar6 & 0x7fffffffffff) + 0x20) = uVar5;
      if (((uVar5 != 0) && ((*(byte *)(uVar5 + 8) & 3) != 0)) &&
         ((*(byte *)((*puVar3 & 0x7fffffffffff) + 8) >> 2 & 1) != 0)) {
        FUN_00c1a1ac(*(undefined8 *)(param_1 + 0x10));
        lVar4 = *(long *)(param_1 + 0x28);
        goto LAB_00c0574c;
      }
      goto LAB_00c057a4;
    }
  }
  if (uVar2 + 3 < 2) {
    *(ulong *)(lVar7 + 0x230) = uVar5;
    *(ulong *)(lVar7 + 0x228) = uVar5;
  }
  else {
    uVar1 = 0x23;
    if (0xfffffff2 < uVar2) {
      uVar1 = 0x15 - uVar2;
    }
    *(ulong *)(lVar7 + (ulong)uVar1 * 8 + 0x170) = uVar5;
  }
LAB_00c0574c:
  *(long *)(param_1 + 0x28) = lVar4 + -8;
  return 1;
}

