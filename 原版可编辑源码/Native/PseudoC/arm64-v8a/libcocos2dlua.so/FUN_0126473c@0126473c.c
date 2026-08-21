
void FUN_0126473c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 1) != 0) {
    lVar2 = __strlen_chk(" const",7);
    FUN_01258064(param_2," const"," const" + lVar2);
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    lVar2 = __strlen_chk(" volatile",10);
    FUN_01258064(param_2," volatile"," volatile" + lVar2);
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    lVar2 = __strlen_chk(" restrict",10);
    FUN_01258064(param_2," restrict"," restrict" + lVar2);
    return;
  }
  return;
}

