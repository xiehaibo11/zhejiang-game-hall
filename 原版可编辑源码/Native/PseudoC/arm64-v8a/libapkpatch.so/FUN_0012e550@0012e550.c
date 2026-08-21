
undefined4 FUN_0012e550(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0012e6a0();
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    iVar1 = *(int *)(lVar2 + 8);
    if (*(long *)(lVar2 + 0x10) != 0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x10));
      lVar2 = *(long *)(param_1 + 0x38);
    }
    if (*(long *)(lVar2 + 0x78) != 0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x78));
      lVar2 = *(long *)(param_1 + 0x38);
    }
    if (*(long *)(lVar2 + 0x70) != 0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x70));
      lVar2 = *(long *)(param_1 + 0x38);
    }
    if (*(long *)(lVar2 + 0x60) != 0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x60));
      lVar2 = *(long *)(param_1 + 0x38);
    }
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),lVar2);
    uVar3 = 0xfffffffd;
    if (iVar1 != 0x71) {
      uVar3 = 0;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

