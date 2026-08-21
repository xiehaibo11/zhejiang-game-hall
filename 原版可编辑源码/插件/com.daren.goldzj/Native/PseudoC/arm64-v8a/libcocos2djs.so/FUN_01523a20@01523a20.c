
void FUN_01523a20(int param_1,int *param_2,Bignum *param_3,Bignum *param_4,char *param_5,
                 undefined8 param_6,int *param_7)

{
  bool bVar1;
  char cVar2;
  byte extraout_var;
  char *pcVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = param_1 - 1;
  bVar1 = 0 < (int)uVar4;
  cVar2 = v8::internal::Bignum::DivideModuloIntBignum(param_3,param_4);
  if ((int)uVar4 < 1) {
    bVar1 = false;
  }
  else {
    uVar5 = (ulong)uVar4;
    pcVar3 = param_5;
    do {
      *pcVar3 = cVar2 + '0';
      v8::internal::Bignum::MultiplyByUInt32(param_3,10);
      cVar2 = v8::internal::Bignum::DivideModuloIntBignum(param_3,param_4);
      uVar5 = uVar5 - 1;
      pcVar3 = pcVar3 + 1;
    } while (uVar5 != 0);
  }
  v8::internal::Bignum::PlusCompare(param_3,param_3,param_4);
  param_5[(int)uVar4] = (cVar2 - ((char)~extraout_var >> 7)) + '0';
  if (bVar1) {
    pcVar3 = param_5 + (param_1 + -2);
    do {
      if (param_5[uVar4] != ':') break;
      param_5[uVar4] = '0';
      uVar4 = uVar4 - 1;
      *pcVar3 = *pcVar3 + '\x01';
      pcVar3 = pcVar3 + -1;
    } while (0 < (int)uVar4);
  }
  if (*param_5 == ':') {
    *param_5 = '1';
    *param_2 = *param_2 + 1;
  }
  *param_7 = param_1;
  return;
}

