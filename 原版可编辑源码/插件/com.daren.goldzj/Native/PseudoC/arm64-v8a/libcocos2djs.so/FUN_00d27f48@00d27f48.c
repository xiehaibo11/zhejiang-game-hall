
bool FUN_00d27f48(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    plVar7 = (long *)param_2[-1];
    if (plVar7 == (long *)0x0) {
      return true;
    }
    plVar6 = (long *)*param_1;
    if (plVar6 == (long *)0x0) {
      return true;
    }
    uVar2 = (**(code **)(*plVar7 + 0x30))(plVar7);
    uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if (uVar2 < uVar3) {
      lVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = lVar8;
      return true;
    }
    break;
  case 3:
    FUN_00d27adc(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_00d27c80(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_00d27db8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_00d27adc(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      plVar7 = param_1 + 3;
      plVar6 = param_1 + 2;
      do {
        plVar4 = plVar7;
        if (((long *)*plVar4 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
          uVar2 = (**(code **)(*(long *)*plVar4 + 0x30))();
          uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
          if (uVar2 < uVar3) {
            plVar7 = (long *)*plVar4;
            lVar1 = lVar8;
            do {
              lVar5 = lVar1;
              *(undefined8 *)((long)param_1 + lVar5 + 0x18) =
                   *(undefined8 *)((long)param_1 + lVar5 + 0x10);
              plVar6 = param_1;
              if (lVar5 == -0x10) goto LAB_00d280c4;
              if ((plVar7 == (long *)0x0) ||
                 (plVar6 = *(long **)((long)param_1 + lVar5 + 8), plVar6 == (long *)0x0)) break;
              uVar2 = (**(code **)(*plVar7 + 0x30))(plVar7);
              uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
              lVar1 = lVar5 + -8;
            } while (uVar2 < uVar3);
            plVar6 = (long *)((long)param_1 + lVar5 + 0x10);
LAB_00d280c4:
            iVar9 = iVar9 + 1;
            *plVar6 = (long)plVar7;
            if (iVar9 == 8) {
              return plVar4 + 1 == param_2;
            }
          }
        }
        lVar8 = lVar8 + 8;
        plVar7 = plVar4 + 1;
        plVar6 = plVar4;
      } while (plVar4 + 1 != param_2);
    }
  }
  return true;
}

