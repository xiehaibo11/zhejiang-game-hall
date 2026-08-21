
undefined8 CT_POLICY_EVAL_CTX_set1_issuer(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_up_ref(param_2);
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *(undefined8 *)(param_1 + 8) = param_2;
  }
  return uVar1;
}

