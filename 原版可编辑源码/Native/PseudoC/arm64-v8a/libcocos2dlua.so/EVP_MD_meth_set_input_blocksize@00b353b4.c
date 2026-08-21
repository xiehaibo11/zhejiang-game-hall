
undefined8 EVP_MD_meth_set_input_blocksize(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return 1;
}

