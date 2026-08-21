
undefined8 engine_free_util(void *param_1,int param_2)

{
  int *piVar1;
  int local_14;
  
  if (param_1 != (void *)0x0) {
    piVar1 = (int *)((long)param_1 + 0x9c);
    if (param_2 == 0) {
      local_14 = *piVar1 + -1;
      *piVar1 = local_14;
    }
    else {
      CRYPTO_atomic_add(piVar1,0xffffffff,&local_14,global_engine_lock);
    }
    if (local_14 < 1) {
      engine_pkey_meths_free(param_1);
      engine_pkey_asn1_meths_free(param_1);
      if (*(code **)((long)param_1 + 0x58) != (code *)0x0) {
        (**(code **)((long)param_1 + 0x58))(param_1);
      }
      CRYPTO_free_ex_data(10,param_1,(CRYPTO_EX_DATA *)((long)param_1 + 0xa8));
      CRYPTO_free(param_1);
    }
  }
  return 1;
}

