
undefined8 *
FUN_00c1d1a0(long param_1,undefined8 *param_2,double *param_3,double *param_4,ulong param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  double *pdVar9;
  undefined8 *puVar10;
  long lVar11;
  double *pdVar12;
  undefined8 uVar13;
  double local_10;
  double local_8;
  
  dVar4 = *param_3;
  uVar8 = (uint)((long)dVar4 >> 0x2f);
  uVar1 = *(ushort *)(&DAT_01411070 + (param_5 & 0xffffffff) * 2) >> 0xb;
  if (uVar8 < 0xfffffff2) {
    dVar4 = *param_4;
    iVar2 = (int)((ulong)dVar4 >> 0x20);
    pdVar12 = param_3;
joined_r0x00c1d3f4:
    uVar8 = iVar2 >> 0xf;
    pdVar9 = param_4;
    if (uVar8 < 0xfffffff2) {
LAB_00c1d24c:
      uVar13 = FUN_00c1e3cc(*pdVar12,*pdVar9,uVar1 - 10);
      *param_2 = uVar13;
      return (undefined8 *)0x0;
    }
    if (uVar8 == 0xfffffff2) {
      local_8 = (double)*(int *)param_4;
      pdVar9 = &local_8;
      goto LAB_00c1d24c;
    }
    if (uVar8 == 0xfffffffb) {
      iVar2 = FUN_00c1f784((ulong)dVar4 & 0x7fffffffffff,&local_8);
      pdVar9 = &local_8;
      if (iVar2 != 0) goto LAB_00c1d24c;
    }
LAB_00c1d27c:
    dVar4 = *param_3;
  }
  else {
    if (uVar8 == 0xfffffff2) {
      local_10 = (double)*(int *)param_3;
LAB_00c1d20c:
      pdVar12 = &local_10;
      dVar4 = *param_4;
      iVar2 = (int)((ulong)dVar4 >> 0x20);
      goto joined_r0x00c1d3f4;
    }
    if (uVar8 == 0xfffffffb) {
      iVar2 = FUN_00c1f784((ulong)dVar4 & 0x7fffffffffff);
      if (iVar2 != 0) goto LAB_00c1d20c;
      goto LAB_00c1d27c;
    }
  }
  uVar8 = (uint)((long)dVar4 >> 0x2f);
  if ((uVar8 == 0xfffffff4) || (uVar8 == 0xfffffff3)) {
    lVar11 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(((ulong)dVar4 & 0x7fffffffffff) + 0x20);
  }
  else {
    lVar11 = *(long *)(param_1 + 0x10);
    uVar3 = 0x23;
    if (0xfffffff2 < uVar8) {
      uVar3 = 0x15 - uVar8;
    }
    lVar5 = *(long *)(lVar11 + (ulong)uVar3 * 8 + 0x170);
  }
  if (lVar5 != 0) {
    plVar6 = (long *)FUN_00c1bc28(lVar5,*(undefined8 *)(lVar11 + ((ulong)uVar1 + 0x2e) * 8));
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      goto joined_r0x00c1d2e0;
    }
    lVar11 = *(long *)(param_1 + 0x10);
  }
  plVar6 = (long *)(lVar11 + 0xe8);
  lVar11 = *plVar6;
joined_r0x00c1d2e0:
  if ((lVar11 == -1) && (plVar6 = (long *)FUN_00c1cd14(param_1,param_4,(ulong)uVar1), *plVar6 == -1)
     ) {
    uVar8 = (uint)((long)*param_3 >> 0x2f);
    if (0xfffffff1 < uVar8) {
      if (uVar8 == 0xfffffff2) {
        local_10 = (double)*(int *)param_3;
      }
      else if ((uVar8 != 0xfffffffb) ||
              (iVar2 = FUN_00c1f784((ulong)*param_3 & 0x7fffffffffff,&local_10), iVar2 == 0)) {
        param_4 = param_3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00bfb020(param_1,param_4,0x199);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x28);
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar7 + 10) == '\0') {
    puVar10 = (undefined8 *)
              (*(long *)(param_1 + 0x20) + (ulong)*(byte *)(*(long *)(uVar7 + 0x20) + -0x5d) * 8);
  }
  puVar10[1] = 0xffffffffffffffff;
  *puVar10 = &DAT_00c17928;
  puVar10[2] = *plVar6;
  puVar10[3] = 0xffffffffffffffff;
  puVar10[4] = *param_3;
  puVar10[5] = *param_4;
  return puVar10 + 4;
}

