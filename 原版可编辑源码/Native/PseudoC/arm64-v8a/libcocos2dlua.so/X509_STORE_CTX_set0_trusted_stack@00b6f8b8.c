
void X509_STORE_CTX_set0_trusted_stack(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(code **)(param_1 + 0x40) = FUN_00b6f8d8;
  *(undefined1 **)(param_1 + 0x78) = &LAB_00b6f99c;
  return;
}

