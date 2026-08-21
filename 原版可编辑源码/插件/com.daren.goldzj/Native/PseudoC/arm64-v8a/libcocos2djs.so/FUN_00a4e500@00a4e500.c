
undefined8 FUN_00a4e500(long *param_1,undefined8 *param_2,int *param_3)

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
  uVar10 = *param_2;
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
  do {
    *param_1 = lVar9;
    if (1 < iVar11) {
      do {
        if (iVar5 != 0) goto LAB_00a4e694;
        lVar9 = FUN_00a3dfbc(plVar1);
        if (lVar9 < 1) {
LAB_00a4e6a0:
                    /* catch() { ... } // from try @ 00a4e4cc with catch @ 00a4e6a0 */
                    /* catch() { ... } // from try @ 00a4e4c0 with catch @ 00a4e6a4 */
                    /* catch() { ... } // from try @ 00a4e4a0 with catch @ 00a4e6a8 */
          FUN_00a23020(uVar10,"FTP response timeout");
          return 0x1c;
        }
        uVar7 = FUN_00a11350(param_2,0);
        if ((uVar7 & 1) != 0) goto LAB_00a4e5dc;
        if (999 < lVar9) {
          lVar9 = 1000;
        }
        iVar5 = FUN_00a159e8(uVar2,0xffffffff,0xffffffff,lVar9);
        if (iVar5 != 0) goto LAB_00a4e5d4;
        iVar5 = FUN_00a1ace8(param_2);
        if (iVar5 != 0) {
          return 0x2a;
        }
        iVar5 = *param_3;
      } while( true );
    }
    while( true ) {
      if (iVar5 != 0) goto LAB_00a4e694;
      lVar9 = FUN_00a3dfbc(plVar1);
      if (lVar9 < 1) goto LAB_00a4e6a0;
      if (999 < lVar9) {
        lVar9 = 1000;
      }
      if ((*plVar1 != 0) || (uVar7 = FUN_00a11350(param_2,0), (uVar7 & 1) != 0)) goto LAB_00a4e5dc;
      iVar5 = FUN_00a159e8(uVar2,0xffffffff,0xffffffff,lVar9);
      if (iVar5 != 0) break;
      iVar5 = FUN_00a1ace8(param_2);
      if (iVar5 != 0) {
        return 0x2a;
      }
      iVar5 = *param_3;
    }
LAB_00a4e5d4:
    if (iVar5 == -1) {
      puVar8 = (undefined4 *)__errno();
      FUN_00a23020(uVar10,"FTP response aborted due to select/poll error: %d",*puVar8);
      return 0x38;
    }
LAB_00a4e5dc:
    plVar12 = (long *)param_2[0xce];
    lVar9 = *plVar12;
    uVar6 = FUN_00a3e418(uVar2,plVar1,&local_64,&local_70);
    iVar5 = local_64;
    bVar4 = local_64 == 0x1a5;
    *(int *)(lVar9 + 0x8d68) = local_64;
    *param_3 = local_64;
    if (bVar4) {
      FUN_00a22d58(lVar9,"We got a 421 - timeout!\n");
      uVar6 = 0x1c;
                    /* try { // try from 00a4e710 to 00b4e763 has its CatchHandler @ 00a4e710
                       catch() { ... } // from try @ 00a4e710 with catch @ 00a4e710
                       catch() { ... } // from try @ 00a4e8c4 with catch @ 00a4e710 */
      *(undefined4 *)(plVar12 + 0xd9) = 0;
      goto LAB_00a4e698;
    }
    if ((int)uVar6 != 0) goto LAB_00a4e698;
    if (local_70 == 0) {
                    /* try { // try from 00a4e62c to 00b4e70f has its CatchHandler @ 00a4e44c */
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
LAB_00a4e694:
  uVar6 = 0;
LAB_00a4e698:
  *(undefined1 *)(param_2 + 199) = 0;
  return uVar6;
}

