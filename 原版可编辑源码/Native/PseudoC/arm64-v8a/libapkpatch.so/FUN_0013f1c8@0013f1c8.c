
bool FUN_0013f1c8(long param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 200) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = (**(code **)(param_1 + 0xb0))
                      (param_1 + 0x98,*(undefined8 *)(param_1 + 0xb8),param_2,param_2 + param_3);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}

