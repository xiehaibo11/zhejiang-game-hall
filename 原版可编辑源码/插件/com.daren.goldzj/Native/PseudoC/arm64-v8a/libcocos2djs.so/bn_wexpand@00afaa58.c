
void bn_wexpand(BIGNUM *param_1,int param_2)

{
  if (param_1->dmax < param_2) {
    bn_expand2(param_1,param_2);
    return;
  }
  return;
}

