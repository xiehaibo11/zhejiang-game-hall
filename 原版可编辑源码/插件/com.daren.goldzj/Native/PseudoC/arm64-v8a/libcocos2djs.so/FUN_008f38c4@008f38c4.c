
void FUN_008f38c4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  bVar3 = true;
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    goto switchD_008f391c_caseD_0;
  case 2:
    puVar5 = param_2 + -2;
    uVar4 = FUN_008f3374(puVar5,param_1);
    if ((uVar4 & 1) != 0) {
      uStack_68 = param_1[1];
      local_70 = *param_1;
      bVar3 = true;
      uVar11 = *puVar5;
      param_1[1] = param_2[-1];
      *param_1 = uVar11;
      param_2[-1] = uStack_68;
      *puVar5 = local_70;
      goto switchD_008f391c_caseD_0;
    }
    break;
  case 3:
    FUN_008f35c8(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    puVar5 = param_1 + 2;
    puVar7 = param_1 + 4;
    puVar6 = param_2 + -2;
    FUN_008f35c8(param_1,puVar5,puVar7);
    uVar4 = FUN_008f3374(puVar6,puVar7);
    if ((uVar4 & 1) != 0) {
      uStack_68 = param_1[5];
      local_70 = *puVar7;
      uVar11 = *puVar6;
      param_1[5] = param_2[-1];
      *puVar7 = uVar11;
      param_2[-1] = uStack_68;
      *puVar6 = local_70;
      uVar4 = FUN_008f3374(puVar7,puVar5);
      if ((uVar4 & 1) != 0) {
        uStack_68 = param_1[3];
        local_70 = *puVar5;
        param_1[3] = param_1[5];
        *puVar5 = *puVar7;
        param_1[5] = uStack_68;
        *puVar7 = local_70;
        uVar4 = FUN_008f3374(puVar5,param_1);
        if ((uVar4 & 1) != 0) {
          uStack_68 = param_1[1];
          local_70 = *param_1;
          bVar3 = true;
          param_1[1] = param_1[3];
          *param_1 = *puVar5;
          param_1[3] = uStack_68;
          *puVar5 = local_70;
          goto switchD_008f391c_caseD_0;
        }
      }
    }
    break;
  case 5:
    FUN_008f3704(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    FUN_008f35c8(param_1,param_1 + 2,param_1 + 4);
    if (param_1 + 6 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      puVar5 = param_1 + 6;
      puVar7 = param_1 + 4;
      do {
        puVar6 = puVar5;
        uVar4 = FUN_008f3374(puVar6,puVar7);
        if ((uVar4 & 1) != 0) {
          uStack_68 = puVar6[1];
          local_70 = *puVar6;
          lVar2 = lVar8;
          do {
            lVar10 = lVar2;
            *(undefined8 *)((long)param_1 + lVar10 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x28);
            *(undefined8 *)((long)param_1 + lVar10 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x20);
            puVar5 = param_1;
            if (lVar10 == -0x20) goto LAB_008f39e8;
            uVar4 = FUN_008f3374(&local_70,(long)param_1 + lVar10 + 0x10);
            lVar2 = lVar10 + -0x10;
          } while ((uVar4 & 1) != 0);
          puVar5 = (undefined8 *)((long)param_1 + lVar10 + 0x20);
LAB_008f39e8:
          iVar9 = iVar9 + 1;
          puVar5[1] = uStack_68;
          *puVar5 = local_70;
          if (iVar9 == 8) {
            bVar3 = puVar6 + 2 == param_2;
            goto switchD_008f391c_caseD_0;
          }
        }
        lVar8 = lVar8 + 0x10;
        puVar5 = puVar6 + 2;
        puVar7 = puVar6;
      } while (puVar6 + 2 != param_2);
    }
  }
  bVar3 = true;
switchD_008f391c_caseD_0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}

