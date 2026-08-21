
undefined8 EVP_MD_meth_set_result_size(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return 1;
}

