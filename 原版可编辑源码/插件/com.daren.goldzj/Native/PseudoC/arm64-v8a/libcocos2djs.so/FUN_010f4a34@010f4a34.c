
bool FUN_010f4a34(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar3 = v8::internal::String::Compare(*(undefined8 *)*param_3,param_2[-1],*param_1);
    if (iVar3 == 0) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
      return true;
    }
    break;
  case 3:
    FUN_010f4730(param_1,param_1 + 1,param_2 + -1,param_3);
    return true;
  case 4:
    FUN_010f4840(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    return true;
  case 5:
    FUN_010f491c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_010f4730(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar3 = 0;
      puVar5 = param_1 + 2;
      puVar7 = param_1 + 3;
      do {
        iVar4 = v8::internal::String::Compare(*(undefined8 *)*param_3,*puVar7,*puVar5);
        if (iVar4 == 0) {
          uVar6 = *puVar7;
          lVar2 = lVar8;
          do {
            lVar9 = lVar2;
            *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x10);
            puVar5 = param_1;
            if (lVar9 == -0x10) goto LAB_010f4ae8;
            iVar4 = v8::internal::String::Compare
                              (*(undefined8 *)*param_3,uVar6,
                               *(undefined8 *)((long)param_1 + lVar9 + 8));
            lVar2 = lVar9 + -8;
          } while (iVar4 == 0);
          puVar5 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_010f4ae8:
          iVar3 = iVar3 + 1;
          *puVar5 = uVar6;
          if (iVar3 == 8) {
            return puVar7 + 1 == param_2;
          }
        }
        puVar1 = puVar7 + 1;
        lVar8 = lVar8 + 8;
        puVar5 = puVar7;
        puVar7 = puVar1;
      } while (puVar1 != param_2);
    }
  }
  return true;
}

