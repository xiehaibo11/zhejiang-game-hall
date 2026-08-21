
undefined8 EVP_MD_meth_set_ctrl(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 1;
}

