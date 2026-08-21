
void FUN_00e351ec(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 ushort *param_5)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined4 local_50;
  
  lVar9 = tpidr_el0;
  lVar8 = *(long *)(lVar9 + 0x28);
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    local_50 = *(undefined4 *)(param_1 + 0x90);
    local_58 = *(undefined8 *)(param_1 + 0x88);
    uVar3 = *(ushort *)(param_1 + 0x94);
    uVar4 = *(undefined2 *)(param_1 + 0x96);
    uStack_78 = *(undefined8 *)(param_1 + 0xb0);
    local_80 = *(undefined8 *)(param_1 + 0xa8);
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 0xb8);
    lVar10 = *(long *)(param_1 + 0x98);
    lVar11 = *(long *)(param_1 + 0xa0);
    uVar5 = *(ushort *)(param_1 + 0x21c);
    if (uVar5 < uVar3) {
LAB_00e352c0:
      *(ushort *)((long)param_4 + 0xc) = uVar3;
      *(undefined2 *)((long)param_4 + 0xe) = uVar4;
      param_4[2] = lVar10;
      param_4[3] = lVar11;
      *(undefined4 *)(param_4 + 1) = local_50;
      *param_4 = local_58;
      plVar1 = (long *)(lVar11 + (ulong)uVar5 * 0x10);
      plVar2 = (long *)(lVar10 + (ulong)uVar5 * 0x10);
      param_4[5] = uStack_78;
      param_4[4] = local_80;
      param_4[7] = uStack_68;
      param_4[6] = uStack_70;
      *param_5 = uVar5;
      uVar6 = (**(code **)(param_1 + 0x3e0))(param_1,*plVar1 - *plVar2,plVar1[1] - plVar2[1]);
      uVar7 = FT_MulDiv(uVar6,(long)*(short *)(param_1 + 0x226),*(undefined8 *)(param_1 + 0x3d0));
      *param_2 = uVar7;
      uVar7 = FT_MulDiv(uVar6,(long)*(short *)(param_1 + 0x228),*(undefined8 *)(param_1 + 0x3d0));
      uVar6 = 0;
      *param_3 = uVar7;
      lVar9 = *(long *)(lVar9 + 0x28);
      goto joined_r0x00e3534c;
    }
  }
  else {
    local_50 = *(undefined4 *)(param_1 + 0x50);
    local_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_78 = *(undefined8 *)(param_1 + 0x70);
    local_80 = *(undefined8 *)(param_1 + 0x68);
    uStack_68 = *(undefined8 *)(param_1 + 0x80);
    uStack_70 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = *(ushort *)(param_1 + 0x54);
    uVar4 = *(undefined2 *)(param_1 + 0x56);
    lVar10 = *(long *)(param_1 + 0x58);
    lVar11 = *(long *)(param_1 + 0x60);
    uVar5 = *(ushort *)(param_1 + 0x21a);
    if (uVar5 < uVar3) goto LAB_00e352c0;
  }
  if (*(char *)(param_1 + 0x3c9) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  *param_5 = 0;
  uVar6 = 1;
  lVar9 = *(long *)(lVar9 + 0x28);
joined_r0x00e3534c:
  if (lVar9 != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

