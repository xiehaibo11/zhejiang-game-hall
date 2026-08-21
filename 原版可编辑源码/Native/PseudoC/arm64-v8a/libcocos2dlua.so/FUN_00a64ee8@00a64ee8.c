
undefined8 FUN_00a64ee8(long *param_1,undefined8 *param_2,int *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  int local_74;
  long local_70;
  int local_64;
  
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
                    /* catch() { ... } // from try @ 00a64e78 with catch @ 00a64f10 */
  uVar10 = *param_2;
                    /* catch() { ... } // from try @ 00a64e90 with catch @ 00a64f14 */
  local_74 = 0;
  if (param_3 == (int *)0x0) {
    param_3 = &local_74;
  }
  else {
    *param_3 = 0;
  }
  iVar5 = 0;
  lVar9 = 0;
  iVar11 = 0;
  plVar1 = param_2 + 0xc3;
                    /* catch() { ... } // from try @ 00a64e44 with catch @ 00a64f44 */
  do {
    *param_1 = lVar9;
    if (1 < iVar11) {
      do {
        if (iVar5 != 0) goto LAB_00a6507c;
        lVar9 = FUN_00a549a4(plVar1);
        if (lVar9 < 1) {
LAB_00a65088:
          FUN_00a38a08(uVar10,"FTP response timeout");
          return 0x1c;
        }
        uVar7 = FUN_00a26d38(param_2,0);
        if ((uVar7 & 1) != 0) goto LAB_00a64fc4;
        if (999 < lVar9) {
          lVar9 = 1000;
        }
        iVar5 = FUN_00a2b3d0(uVar2,0xffffffff,0xffffffff,lVar9);
        if (iVar5 != 0) goto LAB_00a64fbc;
        iVar5 = FUN_00a306d0(param_2);
        if (iVar5 != 0) {
          return 0x2a;
        }
        iVar5 = *param_3;
      } while( true );
    }
    while( true ) {
      if (iVar5 != 0) goto LAB_00a6507c;
      lVar9 = FUN_00a549a4(plVar1);
      if (lVar9 < 1) goto LAB_00a65088;
      if (999 < lVar9) {
        lVar9 = 1000;
      }
      if ((*plVar1 != 0) || (uVar7 = FUN_00a26d38(param_2,0), (uVar7 & 1) != 0)) goto LAB_00a64fc4;
      iVar5 = FUN_00a2b3d0(uVar2,0xffffffff,0xffffffff,lVar9);
      if (iVar5 != 0) break;
      iVar5 = FUN_00a306d0(param_2);
      if (iVar5 != 0) {
        return 0x2a;
      }
      iVar5 = *param_3;
    }
LAB_00a64fbc:
    if (iVar5 == -1) {
      puVar8 = (undefined4 *)__errno();
      FUN_00a38a08(uVar10,"FTP response aborted due to select/poll error: %d",*puVar8);
      return 0x38;
    }
LAB_00a64fc4:
    plVar12 = (long *)param_2[0xce];
    lVar9 = *plVar12;
    uVar6 = FUN_00a54e00(uVar2,plVar1,&local_64,&local_70);
    iVar5 = local_64;
    bVar4 = local_64 == 0x1a5;
    *(int *)(lVar9 + 0x8d68) = local_64;
    *param_3 = local_64;
    if (bVar4) {
      FUN_00a38740(lVar9,"We got a 421 - timeout!\n");
      uVar6 = 0x1c;
      *(undefined4 *)(plVar12 + 0xd9) = 0;
      goto LAB_00a65080;
    }
    if ((int)uVar6 != 0) goto LAB_00a65080;
    if (local_70 == 0) {
      iVar3 = 0;
      if (*plVar1 != 0) {
        iVar3 = iVar11 + 1;
      }
    }
    else {
      iVar3 = 0;
    }
    iVar11 = iVar3;
    lVar9 = *param_1 + local_70;
  } while( true );
LAB_00a6507c:
  uVar6 = 0;
LAB_00a65080:
  *(undefined1 *)(param_2 + 199) = 0;
  return uVar6;
}

