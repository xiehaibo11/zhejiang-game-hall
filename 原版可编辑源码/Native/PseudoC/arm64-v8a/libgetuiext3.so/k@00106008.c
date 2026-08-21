
undefined8 k(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x580))(param_1,5);
  (**(code **)(*param_1 + 0x680))(param_1,uVar1,0,5,"1.0.0");
  return uVar1;
}

