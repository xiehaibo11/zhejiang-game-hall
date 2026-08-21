
undefined8 j(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = thunk_EXT_FUN_00002bb0();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = thunk_EXT_FUN_00002bb0(lVar2);
    uVar3 = (**(code **)(*param_1 + 0x580))(param_1,uVar1);
    (**(code **)(*param_1 + 0x680))(param_1,uVar3,0,uVar1,lVar2);
  }
  return uVar3;
}

