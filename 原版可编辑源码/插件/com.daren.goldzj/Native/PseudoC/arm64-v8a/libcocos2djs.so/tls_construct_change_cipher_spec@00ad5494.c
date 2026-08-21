
undefined8 tls_construct_change_cipher_spec(long param_1)

{
  **(undefined1 **)(*(long *)(param_1 + 0x78) + 8) = 1;
  *(undefined8 *)(param_1 + 0x88) = 1;
  return 1;
}

