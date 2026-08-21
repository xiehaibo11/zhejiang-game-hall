
undefined8 EVP_MD_meth_set_app_datasize(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return 1;
}

