
void FUN_00e5a870(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x5b8);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    FUN_00e1d86c(*(undefined8 *)(param_1 + 0xc0),lVar2 + 0x18);
    FUN_00e139fc(uVar1,lVar2);
    return;
  }
  return;
}

