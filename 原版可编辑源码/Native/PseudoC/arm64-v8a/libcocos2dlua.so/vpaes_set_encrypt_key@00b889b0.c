
undefined8 vpaes_set_encrypt_key(undefined8 param_1,uint param_2,long param_3)

{
  *(uint *)(param_3 + 0xf0) = (param_2 >> 5) + 5;
  FUN_00b886e0(0x30);
  return 0;
}

