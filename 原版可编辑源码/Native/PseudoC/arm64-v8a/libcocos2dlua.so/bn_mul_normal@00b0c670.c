
void bn_mul_normal(ulong *param_1,ulong *param_2,uint param_3,ulong *param_4,uint param_5)

{
  ulong *ap;
  int iVar1;
  uint uVar2;
  uint num;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  ap = param_4;
  uVar2 = param_3;
  num = param_5;
  if ((int)param_5 <= (int)param_3) {
    ap = param_2;
    param_2 = param_4;
    uVar2 = param_5;
    num = param_3;
  }
  lVar5 = (long)(int)num;
  if ((int)uVar2 < 1) {
    bn_mul_words(param_1,ap,num,0);
    return;
  }
  uVar4 = bn_mul_words(param_1,ap,num,*param_2);
  param_1[lVar5] = uVar4;
  if (uVar2 != 1) {
    param_5 = ~param_5;
    if ((int)param_5 < (int)~param_3) {
      param_5 = ~param_3;
    }
    lVar7 = 0;
    iVar6 = 3 - param_5;
    do {
      uVar4 = bn_mul_add_words((ulong *)((long)param_1 + lVar7 + 8),ap,num,
                               *(ulong *)((long)param_2 + lVar7 + 8));
      lVar3 = lVar7 + lVar5 * 8;
      *(ulong *)((long)param_1 + lVar3 + 8) = uVar4;
      if (iVar6 == 6) {
        return;
      }
      iVar1 = iVar6 + -4;
      uVar4 = bn_mul_add_words((ulong *)((long)param_1 + lVar7 + 0x10),ap,num,
                               *(ulong *)((long)param_2 + lVar7 + 0x10));
      *(ulong *)((long)param_1 + lVar3 + 0x10) = uVar4;
      if (iVar1 < 4) {
        return;
      }
      uVar4 = bn_mul_add_words((ulong *)((long)param_1 + lVar7 + 0x18),ap,num,
                               *(ulong *)((long)param_2 + lVar7 + 0x18));
      lVar3 = lVar7 + lVar5 * 8;
      *(ulong *)((long)param_1 + lVar3 + 0x18) = uVar4;
      if (iVar6 == 8) {
        return;
      }
      uVar4 = bn_mul_add_words((ulong *)((long)param_1 + lVar7 + 0x20),ap,num,
                               *(ulong *)((long)param_2 + lVar7 + 0x20));
      lVar7 = lVar7 + 0x20;
      *(ulong *)((long)param_1 + lVar3 + 0x20) = uVar4;
      iVar6 = iVar1;
    } while (5 < iVar1);
  }
  return;
}

