
undefined8 FUN_00b5de00(undefined8 param_1,X509 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  X509_check_purpose(param_2,-1,0);
  if (((param_3 >> 2 & 1) == 0) && ((*(byte *)((long)&param_2[1].sig_alg + 1) >> 5 & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

