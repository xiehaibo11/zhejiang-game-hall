
undefined8 uv_tcp_open(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_011a394c(*(undefined8 *)(param_1 + 8));
  if (iVar1 != 0) {
    return 0xffffffef;
  }
  uVar2 = FUN_011a2ca0(param_2,1);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_011a8740(param_1,param_2,0xc000);
  return uVar2;
}

