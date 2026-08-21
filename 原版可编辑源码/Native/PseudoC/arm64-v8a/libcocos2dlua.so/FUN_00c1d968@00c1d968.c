
undefined8 * FUN_00c1d968(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong local_8;
  
  uVar4 = (uint)param_2;
  if ((param_2 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x20);
    uVar12 = param_2 >> 8 & 0xff;
    puVar9 = &DAT_00c1793c;
    puVar7 = (ulong *)(lVar10 + (param_2 >> 8 & 0xff) * 8);
    if ((uVar4 & 0xfe) == 4) goto LAB_00c1daa4;
LAB_00c1d9a8:
    if ((uVar4 & 0xfe) == 6) {
      local_8 = *(ulong *)(*(long *)(*(long *)((*(ulong *)(lVar10 + -0x10) & 0x7fffffffffff) + 0x20)
                                    + -0x48) + ~(param_2 >> 0x10 & 0xffff) * 8) | 0xfffd800000000000
      ;
      puVar11 = &local_8;
    }
    else if ((uVar4 & 0xfe) == 8) {
      puVar11 = (ulong *)(*(long *)(*(long *)((*(ulong *)(lVar10 + -0x10) & 0x7fffffffffff) + 0x20)
                                   + -0x48) + (ulong)(uVar4 >> 0x10) * 8);
    }
    else {
      local_8 = ~((param_2 >> 0x10 & 0xffff) << 0x2f);
      puVar11 = &local_8;
    }
LAB_00c1d9c8:
    uVar5 = (uint)((long)*puVar7 >> 0x2f);
    if ((uVar5 != 0xfffffff4) && (uVar5 != 0xfffffff3)) {
      lVar8 = *(long *)(param_1 + 0x10);
      uVar1 = 0x23;
      puVar7 = puVar11;
      if (0xfffffff2 < uVar5) goto LAB_00c1dac4;
      goto LAB_00c1d9f4;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)((*puVar7 & 0x7fffffffffff) + 0x20);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x20);
    uVar12 = param_2 >> 8 & 0xff;
    puVar9 = &DAT_00c1794c;
    puVar7 = (ulong *)(lVar10 + (param_2 >> 8 & 0xff) * 8);
    if ((uVar4 & 0xfe) != 4) goto LAB_00c1d9a8;
LAB_00c1daa4:
    puVar7 = (ulong *)(lVar10 + (param_2 >> 0x10 & 0xffff) * 8);
    puVar11 = puVar7;
    if ((int)((long)*(undefined8 *)(lVar10 + uVar12 * 8) >> 0x2f) != -0xb) goto LAB_00c1d9c8;
    lVar8 = *(long *)(param_1 + 0x10);
    uVar5 = 0xfffffff5;
LAB_00c1dac4:
    uVar1 = (ulong)(0x15 - uVar5);
LAB_00c1d9f4:
    lVar2 = *(long *)(lVar8 + uVar1 * 8 + 0x170);
    puVar11 = puVar7;
  }
  if (lVar2 != 0) {
    plVar3 = (long *)FUN_00c1bc28(lVar2,*(undefined8 *)(lVar8 + 400));
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      goto joined_r0x00c1daec;
    }
    lVar8 = *(long *)(param_1 + 0x10);
  }
  plVar3 = (long *)(lVar8 + 0xe8);
  lVar8 = *plVar3;
joined_r0x00c1daec:
  if (lVar8 != -1) {
    puVar6 = *(undefined8 **)(param_1 + 0x28);
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
    if (*(char *)(uVar1 + 10) == '\0') {
      puVar6 = (undefined8 *)
               (*(long *)(param_1 + 0x20) + (ulong)*(byte *)(*(long *)(uVar1 + 0x20) + -0x5d) * 8);
    }
    *puVar6 = puVar9;
    puVar6[1] = 0xffffffffffffffff;
    puVar6[2] = *plVar3;
    puVar6[3] = 0xffffffffffffffff;
    puVar6[4] = *(undefined8 *)(lVar10 + uVar12 * 8);
    puVar6[5] = *puVar11;
    return puVar6 + 4;
  }
  return (undefined8 *)(ulong)(uVar4 & 1);
}

