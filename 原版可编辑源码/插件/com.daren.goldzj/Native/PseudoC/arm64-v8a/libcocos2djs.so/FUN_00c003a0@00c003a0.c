
bool FUN_00c003a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    plVar8 = (long *)*param_1;
    uVar2 = (**(code **)(*(long *)param_2[-1] + 0x20))();
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8);
    if (uVar2 < uVar3) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
      return true;
    }
    break;
  case 3:
    FUN_00bfff98(param_1,param_1 + 1,param_2 + -1);
    return true;
  case 4:
    FUN_00c0010c(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_00c00230(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    FUN_00bfff98(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar10 = 0;
      iVar11 = 0;
      puVar5 = param_1 + 3;
      puVar7 = param_1 + 2;
      do {
        puVar4 = puVar5;
        plVar8 = (long *)*puVar7;
        uVar2 = (**(code **)(*(long *)*puVar4 + 0x20))();
        uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8);
        if (uVar2 < uVar3) {
          plVar8 = (long *)*puVar4;
          lVar1 = lVar10;
          do {
            lVar12 = lVar1;
            *(undefined8 *)((long)param_1 + lVar12 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar12 + 0x10);
            puVar5 = param_1;
            if (lVar12 == -0x10) goto LAB_00c004f8;
            plVar9 = *(long **)((long)param_1 + lVar12 + 8);
            uVar2 = (**(code **)(*plVar8 + 0x20))(plVar8);
            uVar3 = (**(code **)(*plVar9 + 0x20))(plVar9);
            lVar1 = lVar12 + -8;
          } while (uVar2 < uVar3);
          puVar5 = (undefined8 *)((long)param_1 + lVar12 + 0x10);
LAB_00c004f8:
          iVar11 = iVar11 + 1;
          *puVar5 = plVar8;
          if (iVar11 == 8) {
            return puVar4 + 1 == param_2;
          }
        }
        lVar10 = lVar10 + 8;
        puVar5 = puVar4 + 1;
        puVar7 = puVar4;
      } while (puVar4 + 1 != param_2);
    }
  }
  return true;
}

