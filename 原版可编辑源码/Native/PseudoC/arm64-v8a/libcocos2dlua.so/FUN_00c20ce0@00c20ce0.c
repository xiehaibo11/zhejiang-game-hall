
void FUN_00c20ce0(long param_1,undefined8 param_2,int param_3)

{
  undefined2 uVar1;
  long lVar2;
  
  uVar1 = FUN_00c0e7d0(param_1,param_3 + 0x22830000,8);
  lVar2 = FUN_00c1a314(*(undefined8 *)(param_1 + 0x10),0x18);
  *(undefined2 *)(lVar2 + 10) = uVar1;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined1 *)(lVar2 + 9) = 10;
  return;
}

