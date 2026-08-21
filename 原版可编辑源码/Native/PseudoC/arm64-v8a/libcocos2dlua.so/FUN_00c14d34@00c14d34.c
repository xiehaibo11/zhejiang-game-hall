
undefined8 FUN_00c14d34(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  uint local_4;
  
  uVar6 = *(ulong *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x28);
  plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar7[2] = param_1;
  if (uVar6 < uVar5) {
    uVar8 = 0;
    FUN_00c22594(plVar7,*plVar7 + 0xd8,&local_4,uVar6,0x100);
    if ((local_4 != 0) && (local_4 < *(uint *)(plVar7 + 1))) {
      lVar9 = *plVar7;
      lua_createtable(param_1,0,4);
      lVar1 = lVar9 + (ulong)local_4 * 0x18;
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x28) + -8);
      uVar8 = FUN_00bfba1c(param_1,&DAT_01410ec8,4);
      uVar5 = uVar5 & 0x7fffffffffff;
      puVar2 = (undefined4 *)FUN_00c1c6dc(param_1,uVar5,uVar8);
      *puVar2 = *(undefined4 *)(lVar9 + (ulong)local_4 * 0x18);
      puVar2[1] = 0xfff90000;
      if (*(int *)(lVar1 + 4) != -1) {
        uVar8 = FUN_00bfba1c(param_1,&DAT_01410ed0,4);
        puVar2 = (undefined4 *)FUN_00c1c6dc(param_1,uVar5,uVar8);
        *puVar2 = *(undefined4 *)(lVar1 + 4);
        puVar2[1] = 0xfff90000;
      }
      if (*(short *)(lVar1 + 8) != 0) {
        uVar8 = FUN_00bfba1c(param_1,&DAT_01410ed8,3);
        puVar4 = (uint *)FUN_00c1c6dc(param_1,uVar5,uVar8);
        *puVar4 = (uint)*(ushort *)(lVar1 + 8);
        puVar4[1] = 0xfff90000;
      }
      uVar6 = *(ulong *)(lVar1 + 0x10);
      if (uVar6 != 0) {
        uVar8 = FUN_00bfba1c(param_1,&DAT_01410ee0,4);
        puVar3 = (ulong *)FUN_00c1c6dc(param_1,uVar5,uVar8);
        *puVar3 = uVar6 | 0xfffd800000000000;
      }
      uVar8 = 1;
      if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <=
          *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)) {
        FUN_00c19f80(param_1);
      }
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb458(param_1,1,0x227);
}

