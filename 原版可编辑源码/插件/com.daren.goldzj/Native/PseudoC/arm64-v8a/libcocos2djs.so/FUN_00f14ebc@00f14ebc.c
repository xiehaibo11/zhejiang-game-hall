
bool FUN_00f14ebc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    puVar4 = param_2 + -2;
    uVar2 = (*(code *)*param_3)(puVar4,param_1);
    if ((uVar2 & 1) != 0) {
      uVar12 = param_1[1];
      uVar10 = *param_1;
      uVar11 = *puVar4;
      param_1[1] = param_2[-1];
      *param_1 = uVar11;
      param_2[-1] = uVar12;
      *puVar4 = uVar10;
      return true;
    }
    break;
  case 3:
    puVar4 = param_1 + 2;
    puVar6 = param_2 + -2;
    uVar2 = (*(code *)*param_3)(puVar4,param_1);
    uVar3 = (*(code *)*param_3)(puVar6,puVar4);
    if ((uVar2 & 1) != 0) {
      if ((uVar3 & 1) == 0) {
        uStack_58 = param_1[1];
        local_60 = *param_1;
        param_1[1] = param_1[3];
        *param_1 = *puVar4;
        param_1[3] = uStack_58;
        *puVar4 = local_60;
        uVar2 = (*(code *)*param_3)(puVar6,puVar4);
        if ((uVar2 & 1) == 0) {
          return true;
        }
        uStack_58 = param_1[3];
        local_60 = *puVar4;
        uVar10 = *puVar6;
        param_1[3] = param_2[-1];
        *puVar4 = uVar10;
      }
      else {
        uStack_58 = param_1[1];
        local_60 = *param_1;
        uVar10 = *puVar6;
        param_1[1] = param_2[-1];
        *param_1 = uVar10;
      }
      param_2[-1] = uStack_58;
      *puVar6 = local_60;
      return true;
    }
    if ((uVar3 & 1) == 0) {
      return true;
    }
    uStack_58 = param_1[3];
    local_60 = *puVar4;
    uVar10 = *puVar6;
    param_1[3] = param_2[-1];
    *puVar4 = uVar10;
    param_2[-1] = uStack_58;
    *puVar6 = local_60;
    goto LAB_00f152d4;
  case 4:
    puVar4 = param_1 + 2;
    puVar6 = param_1 + 4;
    puVar5 = param_2 + -2;
    uVar2 = (*(code *)*param_3)(puVar4,param_1);
    uVar3 = (*(code *)*param_3)(puVar6,puVar4);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        uStack_58 = param_1[3];
        local_60 = *puVar4;
        param_1[3] = param_1[5];
        *puVar4 = *puVar6;
        param_1[5] = uStack_58;
        *puVar6 = local_60;
        uVar2 = (*(code *)*param_3)(puVar4,param_1);
        if ((uVar2 & 1) != 0) {
          uStack_58 = param_1[1];
          local_60 = *param_1;
          param_1[1] = param_1[3];
          *param_1 = *puVar4;
          param_1[3] = uStack_58;
          *puVar4 = local_60;
        }
      }
    }
    else {
      if ((uVar3 & 1) == 0) {
        uStack_58 = param_1[1];
        local_60 = *param_1;
        param_1[1] = param_1[3];
        *param_1 = *puVar4;
        param_1[3] = uStack_58;
        *puVar4 = local_60;
        uVar2 = (*(code *)*param_3)(puVar6,puVar4);
        if ((uVar2 & 1) == 0) goto LAB_00f15274;
        uStack_58 = param_1[3];
        local_60 = *puVar4;
        param_1[3] = param_1[5];
        *puVar4 = *puVar6;
      }
      else {
        uStack_58 = param_1[1];
        local_60 = *param_1;
        param_1[1] = param_1[5];
        *param_1 = *puVar6;
      }
      param_1[5] = uStack_58;
      *puVar6 = local_60;
    }
LAB_00f15274:
    uVar2 = (*(code *)*param_3)(puVar5,puVar6);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    uStack_58 = param_1[5];
    local_60 = *puVar6;
    uVar10 = *puVar5;
    param_1[5] = param_2[-1];
    *puVar6 = uVar10;
    param_2[-1] = uStack_58;
    *puVar5 = local_60;
    uVar2 = (*(code *)*param_3)(puVar6,puVar4);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    uStack_58 = param_1[3];
    local_60 = *puVar4;
    param_1[3] = param_1[5];
    *puVar4 = *puVar6;
    param_1[5] = uStack_58;
    *puVar6 = local_60;
LAB_00f152d4:
    puVar4 = param_1 + 2;
    uVar2 = (*(code *)*param_3)(puVar4,param_1);
    if ((uVar2 & 1) != 0) {
      uVar11 = param_1[1];
      uVar10 = *param_1;
      param_1[1] = param_1[3];
      *param_1 = *puVar4;
      param_1[3] = uVar11;
      *puVar4 = uVar10;
      return true;
    }
    break;
  case 5:
    FUN_00f14c14(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
    break;
  default:
    puVar4 = param_1 + 2;
    puVar6 = param_1 + 4;
    uVar2 = (*(code *)*param_3)(puVar4,param_1);
    uVar3 = (*(code *)*param_3)(puVar6,puVar4);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        uStack_58 = param_1[3];
        local_60 = *puVar4;
        param_1[3] = param_1[5];
        *puVar4 = *puVar6;
        param_1[5] = uStack_58;
        *puVar6 = local_60;
        uVar2 = (*(code *)*param_3)(puVar4,param_1);
        if ((uVar2 & 1) != 0) {
          uStack_58 = param_1[1];
          local_60 = *param_1;
          param_1[1] = param_1[3];
          *param_1 = *puVar4;
          param_1[3] = uStack_58;
          *puVar4 = local_60;
        }
      }
    }
    else {
      if ((uVar3 & 1) == 0) {
        uStack_58 = param_1[1];
        local_60 = *param_1;
        param_1[1] = param_1[3];
        *param_1 = *puVar4;
        param_1[3] = uStack_58;
        *puVar4 = local_60;
        uVar2 = (*(code *)*param_3)(puVar6,puVar4);
        if ((uVar2 & 1) == 0) goto LAB_00f15148;
        uStack_58 = param_1[3];
        local_60 = *puVar4;
        param_1[3] = param_1[5];
        *puVar4 = *puVar6;
      }
      else {
        uStack_58 = param_1[1];
        local_60 = *param_1;
        param_1[1] = param_1[5];
        *param_1 = *puVar6;
      }
      param_1[5] = uStack_58;
      *puVar6 = local_60;
    }
LAB_00f15148:
    if (param_1 + 6 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar4 = param_1 + 6;
      do {
        puVar5 = puVar4;
        uVar2 = (*(code *)*param_3)(puVar5,puVar6);
        if ((uVar2 & 1) != 0) {
          uStack_58 = puVar5[1];
          local_60 = *puVar5;
          lVar1 = lVar7;
          do {
            lVar9 = lVar1;
            *(undefined8 *)((long)param_1 + lVar9 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x28);
            *(undefined8 *)((long)param_1 + lVar9 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x20);
            puVar4 = param_1;
            if (lVar9 == -0x20) goto LAB_00f15164;
            uVar2 = (*(code *)*param_3)(&local_60,(long)param_1 + lVar9 + 0x10);
            lVar1 = lVar9 + -0x10;
          } while ((uVar2 & 1) != 0);
          puVar4 = (undefined8 *)((long)param_1 + lVar9 + 0x20);
LAB_00f15164:
          iVar8 = iVar8 + 1;
          puVar4[1] = uStack_58;
          *puVar4 = local_60;
          if (iVar8 == 8) {
            return puVar5 + 2 == param_2;
          }
        }
        lVar7 = lVar7 + 0x10;
        puVar4 = puVar5 + 2;
        puVar6 = puVar5;
      } while (puVar5 + 2 != param_2);
    }
  }
  return true;
}

