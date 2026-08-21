
void FUN_00e03604(float param_1,undefined8 *param_2)

{
  int iVar1;
  
  memcpy(param_2 + 1,&DAT_01970de4,0xdc);
  *param_2 = 0x1f00000000;
  if (0.0 <= param_1) {
    if (param_1 <= 1.0) {
      iVar1 = (int)(param_1 * 256.0);
    }
    else {
      iVar1 = 0x100;
    }
  }
  else {
    iVar1 = 0;
  }
  *(int *)((long)param_2 + 0xe4) = iVar1;
  return;
}

