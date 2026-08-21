
undefined8
FUN_010f4730(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = v8::internal::String::Compare(*(undefined8 *)*param_4,*param_2,*param_1);
  iVar2 = v8::internal::String::Compare(*(undefined8 *)*param_4,*param_3,*param_2);
  if (iVar1 == 0) {
    uVar3 = *param_1;
    if (iVar2 == 0) {
      *param_1 = *param_3;
      *param_3 = uVar3;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = uVar3;
    iVar1 = v8::internal::String::Compare(*(undefined8 *)*param_4,*param_3);
    if (iVar1 == 0) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      return 2;
    }
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    iVar1 = v8::internal::String::Compare(*(undefined8 *)*param_4,*param_2,*param_1);
    if (iVar1 == 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  return 1;
}

