
undefined8 FUN_00c2bb94(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = FUN_00c23b40(param_1,1);
  *(undefined4 *)(lVar2 + -0x10) = uVar1;
  *(undefined4 *)(lVar2 + -0xc) = 0xfff90000;
  return 2;
}

