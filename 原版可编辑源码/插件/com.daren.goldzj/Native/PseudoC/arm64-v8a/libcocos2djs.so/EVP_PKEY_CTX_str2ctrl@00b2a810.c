
undefined8 EVP_PKEY_CTX_str2ctrl(long *param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_3);
  if (sVar1 >> 0x1f != 0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2a878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,sVar1 & 0xffffffff,param_3);
  return uVar2;
}

