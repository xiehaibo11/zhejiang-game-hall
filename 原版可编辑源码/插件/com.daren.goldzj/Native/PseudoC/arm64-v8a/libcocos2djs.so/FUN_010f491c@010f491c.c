
int FUN_010f491c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_010f4840();
  iVar2 = v8::internal::String::Compare(*(undefined8 *)*param_6,*param_5,*param_4);
  if (iVar2 == 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    iVar2 = v8::internal::String::Compare(*(undefined8 *)*param_6,*param_4,*param_3);
    if (iVar2 == 0) {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      iVar2 = v8::internal::String::Compare(*(undefined8 *)*param_6,*param_3,*param_2);
      if (iVar2 == 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        iVar2 = v8::internal::String::Compare(*(undefined8 *)*param_6,*param_2,*param_1);
        if (iVar2 == 0) {
          uVar3 = *param_1;
          iVar1 = iVar1 + 4;
          *param_1 = *param_2;
          *param_2 = uVar3;
        }
        else {
          iVar1 = iVar1 + 3;
        }
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

