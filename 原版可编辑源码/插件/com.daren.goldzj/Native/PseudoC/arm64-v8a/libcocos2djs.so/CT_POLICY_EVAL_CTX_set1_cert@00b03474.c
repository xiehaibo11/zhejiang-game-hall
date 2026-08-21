
undefined8 CT_POLICY_EVAL_CTX_set1_cert(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_up_ref(param_2);
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *param_1 = param_2;
  }
  return uVar1;
}

