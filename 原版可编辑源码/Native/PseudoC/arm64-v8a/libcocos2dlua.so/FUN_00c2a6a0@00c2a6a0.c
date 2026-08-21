
undefined8 FUN_00c2a6a0(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  byte *local_8;
  
  iVar3 = FUN_00c29da0(param_1,2,10);
  if (iVar3 == 10) {
    puVar6 = (ulong *)FUN_00c29a84(param_1,1);
    uVar5 = *puVar6;
    uVar8 = (uint)((long)uVar5 >> 0x2f);
    if (uVar8 < 0xfffffff3) {
LAB_00c2a7bc:
      *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) = *puVar6;
      return 2;
    }
    if (uVar8 == 0xfffffffb) {
      iVar3 = FUN_00c1f7ac(uVar5 & 0x7fffffffffff,puVar6);
      if (iVar3 != 0) goto LAB_00c2a7bc;
      uVar5 = *puVar6;
    }
    if ((int)((long)uVar5 >> 0x2f) == -0xb) {
      plVar10 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
      plVar10[2] = param_1;
      puVar7 = (ulong *)FUN_00c0eb40(plVar10,*(undefined2 *)((*puVar6 & 0x7fffffffffff) + 10));
      uVar8 = (uint)*puVar7;
      uVar9 = uVar8 >> 0x1c;
      if (uVar9 == 5) {
        lVar4 = (ulong)(ushort)uVar8 * 0x18;
        puVar7 = (ulong *)(*plVar10 + lVar4);
        uVar8 = *(uint *)(*plVar10 + lVar4);
        uVar9 = uVar8 >> 0x1c;
      }
      if (uVar9 == 0) {
        if ((((uVar8 & 0xf4000000) == 0) && (*(uint *)((long)puVar7 + 4) < 5)) &&
           ((*puVar7 & 0xffffffff00800000) != 0x400800000)) {
          FUN_00c22594(plVar10,*plVar10 + 0xd8,&local_8,puVar6,0);
          lVar4 = *(long *)(param_1 + 0x20);
          *(undefined4 *)(lVar4 + -0x10) = local_8._0_4_;
          *(undefined4 *)(lVar4 + -0xc) = 0xfff90000;
          return 2;
        }
      }
      else if ((uVar8 & 0xf4000000) != 0x34000000) goto LAB_00c2a79c;
      FUN_00c22594(plVar10,*plVar10 + 0x150,*(long *)(param_1 + 0x20) + -0x10,puVar6,0);
      return 2;
    }
  }
  else {
    lVar4 = FUN_00c29ac0(param_1,1);
    if (0x22 < iVar3 - 2U) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb458(param_1,2,0x459);
    }
    uVar5 = strtoul((char *)(lVar4 + 0x18),(char **)&local_8,iVar3);
    if ((byte *)(lVar4 + 0x18) != local_8) {
      bVar1 = *local_8;
      bVar2 = (&DAT_01410f61)[bVar1];
      while ((bVar2 >> 1 & 1) != 0) {
        local_8 = local_8 + 1;
        bVar1 = *local_8;
        bVar2 = (&DAT_01410f61)[bVar1];
      }
      if (bVar1 == 0) {
        if (0x7fffffff < uVar5) {
          *(double *)(*(long *)(param_1 + 0x20) + -0x10) = (double)uVar5;
          return 2;
        }
        lVar4 = *(long *)(param_1 + 0x20);
        *(int *)(lVar4 + -0x10) = (int)uVar5;
        *(undefined4 *)(lVar4 + -0xc) = 0xfff90000;
        return 2;
      }
    }
  }
LAB_00c2a79c:
  *(undefined8 *)(*(long *)(param_1 + 0x20) + -0x10) = 0xffffffffffffffff;
  return 2;
}

