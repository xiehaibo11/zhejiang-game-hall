
undefined8 FUN_00a3e704(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long local_28;
  
  uVar1 = FUN_00a232e8(*(long *)(param_1 + 0x58),*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x260),
                       (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x38)) -
                       *(long *)(param_1 + 0x30),*(long *)(param_1 + 0x30),&local_28);
  if ((int)uVar1 == 0) {
    local_28 = *(long *)(param_1 + 0x30) - local_28;
    if (local_28 == 0) {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(long *)(param_1 + 0x28) = 0;
      auVar2 = FUN_00a18e40();
      uVar1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
    }
    else {
      uVar1 = 0;
      *(long *)(param_1 + 0x30) = local_28;
    }
  }
  return uVar1;
}

