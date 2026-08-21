
void FUN_00c0dcb0(long *param_1)

{
  long lVar1;
  undefined8 local_10;
  undefined4 local_8;
  undefined1 local_4;
  undefined1 local_3;
  
  local_3 = 0;
  lVar1 = *param_1;
  local_4 = (undefined1)*(undefined4 *)(lVar1 + 0x38);
  local_10 = *(undefined8 *)(lVar1 + 0x18);
  local_8 = *(undefined4 *)(*(long *)(lVar1 + 8) + 0x9c);
  *(undefined8 **)(lVar1 + 0x18) = &local_10;
  FUN_00c0c9c0();
  FUN_00c096b4(lVar1);
  return;
}

