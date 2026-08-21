
bool FUN_01021558(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    uVar9 = *param_1;
    if (uVar9 <= param_2[-2]) {
      return true;
    }
    *param_1 = param_2[-2];
    param_2[-2] = uVar9;
LAB_010215d8:
    uVar9 = param_1[1];
    param_1[1] = param_2[-1];
    goto LAB_010215e4;
  case 3:
    uVar2 = param_1[2];
    uVar9 = *param_1;
    uVar4 = param_2[-2];
    if (uVar9 <= uVar2) {
      if (uVar2 <= uVar4) {
        return true;
      }
      param_1[2] = uVar4;
      param_2[-2] = uVar2;
      uVar9 = param_1[3];
      param_1[3] = param_2[-1];
      param_2[-1] = uVar9;
      uVar9 = *param_1;
      if (uVar9 <= param_1[2]) {
        return true;
      }
      uVar2 = param_1[1];
      *param_1 = param_1[2];
      param_1[1] = param_1[3];
      param_1[2] = uVar9;
      param_1[3] = uVar2;
      return true;
    }
    if (uVar4 < uVar2) {
      *param_1 = uVar4;
      param_2[-2] = uVar9;
      goto LAB_010215d8;
    }
    uVar4 = param_1[1];
    *param_1 = uVar2;
    param_1[1] = param_1[3];
    param_1[2] = uVar9;
    param_1[3] = uVar4;
    if (uVar9 <= param_2[-2]) {
      return true;
    }
    param_1[2] = param_2[-2];
    param_2[-2] = uVar9;
    uVar9 = param_1[3];
    param_1[3] = param_2[-1];
LAB_010215e4:
    param_2[-1] = uVar9;
    break;
  case 4:
    FUN_010213e4(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_010213e4(param_1,param_1 + 2,param_1 + 4,param_1 + 6);
    uVar9 = param_1[6];
    if (param_2[-2] < uVar9) {
      param_1[6] = param_2[-2];
      param_2[-2] = uVar9;
      uVar9 = param_1[7];
      param_1[7] = param_2[-1];
      param_2[-1] = uVar9;
      uVar9 = param_1[6];
      uVar2 = param_1[4];
      if (uVar9 < uVar2) {
        uVar6 = param_1[2];
        uVar4 = param_1[7];
        uVar10 = param_1[5];
        param_1[4] = uVar9;
        param_1[5] = uVar4;
        param_1[6] = uVar2;
        param_1[7] = uVar10;
        if (uVar9 < uVar6) {
          uVar2 = *param_1;
          uVar10 = param_1[3];
          param_1[2] = uVar9;
          param_1[3] = uVar4;
          param_1[4] = uVar6;
          param_1[5] = uVar10;
          if (uVar9 < uVar2) {
            uVar6 = param_1[1];
            *param_1 = uVar9;
            param_1[1] = uVar4;
            param_1[2] = uVar2;
            param_1[3] = uVar6;
            return true;
          }
        }
      }
    }
    break;
  default:
    uVar2 = param_1[2];
    uVar4 = *param_1;
    uVar6 = param_1[4];
    uVar9 = uVar6;
    if (uVar2 < uVar4) {
      if (uVar6 < uVar2) {
        uVar9 = param_1[1];
        *param_1 = uVar6;
        param_1[1] = param_1[5];
        param_1[4] = uVar4;
        param_1[5] = uVar9;
        uVar9 = uVar4;
      }
      else {
        *param_1 = uVar2;
        uVar2 = param_1[1];
        param_1[1] = param_1[3];
        param_1[2] = uVar4;
        param_1[3] = uVar2;
        if (uVar6 < uVar4) {
          uVar9 = param_1[5];
          param_1[2] = uVar6;
          param_1[5] = uVar2;
          param_1[3] = uVar9;
          param_1[4] = uVar4;
          uVar9 = uVar4;
        }
      }
    }
    else if (uVar6 < uVar2) {
      uVar10 = param_1[5];
      uVar9 = param_1[3];
      param_1[2] = uVar6;
      param_1[3] = uVar10;
      param_1[4] = uVar2;
      param_1[5] = uVar9;
      uVar9 = uVar2;
      if (uVar6 < uVar4) {
        uVar2 = param_1[1];
        *param_1 = uVar6;
        param_1[1] = uVar10;
        param_1[2] = uVar4;
        param_1[3] = uVar2;
      }
    }
    if (param_1 + 6 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar5 = param_1 + 6;
      do {
        uVar2 = *puVar5;
        if (uVar2 < uVar9) {
          uVar4 = puVar5[1];
          lVar1 = lVar7;
          do {
            lVar11 = lVar1;
            *(ulong *)((long)param_1 + lVar11 + 0x30) = uVar9;
            *(undefined8 *)((long)param_1 + lVar11 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x28);
            puVar3 = param_1;
            if (lVar11 == -0x20) goto LAB_01021808;
            uVar9 = *(ulong *)((long)param_1 + lVar11 + 0x10);
            lVar1 = lVar11 + -0x10;
          } while (uVar2 < uVar9);
          puVar3 = (ulong *)((long)param_1 + lVar11 + 0x20);
LAB_01021808:
          iVar8 = iVar8 + 1;
          *puVar3 = uVar2;
          *(ulong *)((long)param_1 + lVar11 + 0x28) = uVar4;
          if (iVar8 == 8) {
            return puVar5 + 2 == param_2;
          }
        }
        if (puVar5 + 2 == param_2) {
          return true;
        }
        uVar9 = *puVar5;
        lVar7 = lVar7 + 0x10;
        puVar5 = puVar5 + 2;
      } while( true );
    }
  }
  return true;
}

