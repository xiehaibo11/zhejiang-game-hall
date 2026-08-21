
undefined8 FUN_0013278c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_00130b1c();
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (*(long *)(lVar3 + 0x48) != 0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar3 + 0x48));
      lVar3 = *(long *)(param_1 + 0x38);
    }
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),lVar3);
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

