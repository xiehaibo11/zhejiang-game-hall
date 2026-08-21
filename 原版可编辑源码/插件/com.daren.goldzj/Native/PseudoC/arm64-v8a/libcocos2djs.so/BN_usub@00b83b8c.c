
int BN_usub(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  int num;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  iVar1 = a->top;
  num = b->top;
  if (iVar1 - num < 0) {
    ERR_put_error(3,0x73,100,"crypto/bn/bn_add.c",0x79);
    iVar4 = 0;
  }
  else {
    lVar2 = bn_wexpand(r,iVar1);
    iVar4 = 0;
    if (lVar2 != 0) {
      puVar7 = a->d;
      puVar6 = r->d;
      uVar3 = bn_sub_words(puVar6,puVar7,b->d,num);
      if (iVar1 != num) {
        iVar4 = num - iVar1;
        puVar6 = puVar6 + num;
        puVar7 = puVar7 + num;
        do {
          uVar5 = *puVar7;
          iVar4 = iVar4 + 1;
          *puVar6 = uVar5 - uVar3;
          uVar3 = uVar3 & uVar5 == 0;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar4 != 0);
      }
      r->top = iVar1;
      r->neg = 0;
      bn_correct_top(r);
      iVar4 = 1;
    }
  }
  return iVar4;
}

