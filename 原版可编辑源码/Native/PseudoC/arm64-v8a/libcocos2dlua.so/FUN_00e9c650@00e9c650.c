
void FUN_00e9c650(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  
  if ((param_2[0x70] & 1) == 0) {
    bVar1 = param_2[0x58];
  }
  else {
    operator_delete(*(void **)(param_2 + 0x80));
    bVar1 = param_2[0x58];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_2[0x40];
  }
  else {
    operator_delete(*(void **)(param_2 + 0x68));
    bVar1 = param_2[0x40];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_2[0x20];
  }
  else {
    operator_delete(*(void **)(param_2 + 0x50));
    bVar1 = param_2[0x20];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_2;
  }
  else {
    operator_delete(*(void **)(param_2 + 0x30));
    bVar1 = *param_2;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_2 + 0x10));
  return;
}

