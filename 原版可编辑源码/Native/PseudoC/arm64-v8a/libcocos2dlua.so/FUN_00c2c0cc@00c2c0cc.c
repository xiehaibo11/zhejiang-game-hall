
undefined8 FUN_00c2c0cc(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int local_3c;
  long local_20;
  long local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_3c = 0;
  lVar5 = *(long *)(param_1 + 0x28);
  lVar13 = *(long *)(param_1 + 0x20);
  do {
    lVar14 = *(long *)(param_1 + 0x10);
    iVar12 = 1;
    lVar1 = lVar14 + 0x88;
    *(long *)(lVar14 + 0xa0) = param_1;
    *(undefined8 *)(lVar14 + 0x88) = *(undefined8 *)(lVar14 + 0x98);
    lVar6 = FUN_00c29ac0(param_1);
    local_20 = lVar6 + 0x18;
    local_18 = local_20 + (ulong)*(uint *)(lVar6 + 0x10);
switchD_00c2c194_default:
    iVar2 = local_3c;
    uVar3 = FUN_00bff14c(&local_20);
    if (uVar3 != 0) {
LAB_00c2c15c:
      if (uVar3 != 2) {
        if (uVar3 == 1) {
          lVar5 = FUN_00bfba1c(param_1,local_10,local_8);
                    /* WARNING: Subroutine does not return */
          FUN_00bfb308(param_1,0x760,lVar5 + 0x18);
        }
        iVar12 = iVar12 + 1;
        if ((int)((ulong)(lVar5 - lVar13) >> 3) < iVar12) {
          luaL_argerror(param_1,iVar12,"no value");
        }
        switch(uVar3 & 0xf) {
        case 3:
          lVar6 = (long)iVar12 * 8 + -8;
          if ((int)((long)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6) >> 0x2f) == -0xe) {
            iVar2 = *(int *)(*(long *)(param_1 + 0x20) + lVar6);
            if (uVar3 == 3) {
              FUN_00bff62c(lVar1,iVar2);
            }
            else {
              FUN_00bffbc4(lVar1,uVar3,(long)iVar2);
            }
          }
          else {
            FUN_00c29c50(param_1,iVar12);
            FUN_00c00600(lVar1,uVar3);
          }
          goto switchD_00c2c194_default;
        case 4:
          lVar6 = (long)iVar12 * 8 + -8;
          if ((int)((long)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6) >> 0x2f) == -0xe) {
            FUN_00bffbc4(lVar1,uVar3,(long)*(int *)(*(long *)(param_1 + 0x20) + lVar6));
          }
          else {
            FUN_00c29c50(param_1,iVar12);
            FUN_00c00628(lVar1,uVar3);
          }
          goto switchD_00c2c194_default;
        case 5:
          FUN_00c29c50(param_1,iVar12);
          FUN_00c030d0(lVar1,uVar3);
          goto switchD_00c2c194_default;
        case 6:
          lVar10 = *(long *)(param_1 + 0x20);
          lVar6 = (long)iVar12 * 8 + -8;
          if ((int)((long)*(ulong *)(lVar10 + lVar6) >> 0x2f) == -5) {
            uVar7 = *(ulong *)(lVar10 + lVar6) & 0x7fffffffffff;
          }
          else {
            if (local_3c != 2) {
              plVar9 = (long *)FUN_00c1cd14(param_1,lVar10 + lVar6,0x12);
              if (*plVar9 != -1) {
                plVar11 = *(long **)(param_1 + 0x28);
                local_3c = 1;
                *plVar11 = *plVar9;
                *(long **)(param_1 + 0x28) = plVar11 + 2;
                plVar11[1] = *(long *)(lVar10 + lVar6);
                lua_call(param_1,1,1);
                uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + -8);
                *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
                *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6) = uVar8;
                goto switchD_00c2c194_default;
              }
            }
            uVar7 = FUN_00c006dc(param_1,lVar10 + lVar6);
          }
          if (uVar7 == 0) {
            local_3c = 1;
          }
          else if ((uVar3 >> 4 & 1) == 0) {
            FUN_00bffab4(lVar1,uVar3);
          }
          else {
            FUN_00bff850(lVar1,uVar7);
          }
          goto switchD_00c2c194_default;
        case 7:
          goto switchD_00c2c194_caseD_7;
        case 8:
          uVar8 = FUN_00bfb70c(*(long *)(param_1 + 0x20) + (long)iVar12 * 8 + -8);
          FUN_00bff758(lVar1,uVar8);
        default:
          goto switchD_00c2c194_default;
        }
      }
      FUN_00c1a5d8(lVar1,local_10,local_8);
      goto switchD_00c2c194_default;
    }
LAB_00c2c1c4:
    local_3c = 2;
    if (iVar2 != 1) {
      lVar5 = *(long *)(param_1 + 0x28);
      uVar7 = FUN_00bfba1c(param_1,*(undefined8 *)(lVar14 + 0x98),
                           (int)*(undefined8 *)(lVar14 + 0x88) - (int)*(undefined8 *)(lVar14 + 0x98)
                          );
      *(ulong *)(lVar5 + -8) = uVar7 | 0xfffd800000000000;
      if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <=
          *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)) {
        FUN_00c19f80(param_1);
      }
      return 1;
    }
  } while( true );
switchD_00c2c194_caseD_7:
  uVar4 = FUN_00c29cf0(param_1,iVar12);
  FUN_00bffa00(lVar1,uVar3,uVar4);
  uVar3 = FUN_00bff14c(&local_20);
  if (uVar3 == 0) goto LAB_00c2c1c4;
  goto LAB_00c2c15c;
}

