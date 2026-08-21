
void BN_swap(BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = b->flags;
  puVar3 = a->d;
  iVar5 = a->top;
  iVar6 = a->dmax;
  iVar1 = a->neg;
  uVar2 = a->flags;
  a->d = b->d;
  a->top = b->top;
  a->dmax = b->dmax;
  a->neg = b->neg;
  b->d = puVar3;
  b->top = iVar5;
  b->dmax = iVar6;
  b->neg = iVar1;
  a->flags = uVar4 & 2 | uVar2 & 1;
  b->flags = uVar2 & 2 | uVar4 & 1;
  return;
}

