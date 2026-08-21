
void FUN_01077554(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 ushort *param_5)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined4 local_50;
  
  lVar6 = tpidr_el0;
  lVar9 = *(long *)(lVar6 + 0x28);
  if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
    local_50 = *(undefined4 *)(param_1 + 0x90);
    puVar12 = (ushort *)(param_1 + 0x214);
    local_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    local_70 = *(undefined8 *)(param_1 + 0xb8);
    uVar3 = *(ushort *)(param_1 + 0x94);
    uVar4 = *(undefined2 *)(param_1 + 0x96);
    lVar10 = *(long *)(param_1 + 0x98);
    lVar11 = *(long *)(param_1 + 0xa0);
    uVar8 = *(undefined8 *)(param_1 + 0xb0);
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
  }
  else {
    local_50 = *(undefined4 *)(param_1 + 0x50);
    puVar12 = (ushort *)(param_1 + 0x212);
    local_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_68 = *(undefined8 *)(param_1 + 0x80);
    local_70 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = *(ushort *)(param_1 + 0x54);
    uVar4 = *(undefined2 *)(param_1 + 0x56);
    lVar10 = *(long *)(param_1 + 0x58);
    lVar11 = *(long *)(param_1 + 0x60);
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    uVar7 = *(undefined8 *)(param_1 + 0x68);
  }
                    /* try { // try from 010775e8 to 01177693 has its CatchHandler @ 010775e8
                       catch(type#1 @ 00000000) { ... } // from try @ 010775e8 with catch @ 010775e8
                       catch(type#1 @ 00000000) { ... } // from try @ 0107770c with catch @ 010775e8
                        */
  uVar5 = *puVar12;
  if (uVar5 < uVar3) {
    *(undefined4 *)(param_4 + 1) = local_50;
    *(ushort *)((long)param_4 + 0xc) = uVar3;
    *(undefined2 *)((long)param_4 + 0xe) = uVar4;
    param_4[2] = lVar10;
    param_4[3] = lVar11;
    *param_4 = local_58;
    plVar1 = (long *)(lVar11 + (ulong)uVar5 * 0x10);
    plVar2 = (long *)(lVar10 + (ulong)uVar5 * 0x10);
    param_4[7] = uStack_68;
    param_4[6] = local_70;
    param_4[5] = uVar8;
    param_4[4] = uVar7;
    *param_5 = uVar5;
    uVar7 = (**(code **)(param_1 + 0x3d8))(param_1,*plVar1 - *plVar2,plVar1[1] - plVar2[1]);
    uVar8 = FT_MulDiv(uVar7,(long)*(short *)(param_1 + 0x21e),*(undefined8 *)(param_1 + 0x3c8));
    *param_2 = uVar8;
    uVar8 = FT_MulDiv(uVar7,(long)*(short *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x3c8));
    uVar7 = 0;
    *param_3 = uVar8;
  }
  else {
    if (*(char *)(param_1 + 0x3c1) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x86;
    }
                    /* try { // try from 01077694 to 0117769b has its CatchHandler @ 010777c8 */
    *param_5 = 0;
    uVar7 = 1;
  }
  if (*(long *)(lVar6 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

