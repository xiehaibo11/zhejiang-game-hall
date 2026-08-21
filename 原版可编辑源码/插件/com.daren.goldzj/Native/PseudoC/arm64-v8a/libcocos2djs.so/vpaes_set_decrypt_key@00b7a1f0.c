
void vpaes_set_decrypt_key(undefined8 param_1,uint param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (param_2 >> 5) + 5;
  *(int *)(param_3 + 0xf0) = iVar1;
  FUN_00b79ee0(param_2 >> 1 & 0x20 ^ 0x20,param_1,param_2,
               param_3 + 0x10 + (ulong)(uint)(iVar1 * 0x10),1);
  return;
}

