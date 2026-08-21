
/* v8::internal::AstNodeFactory::NewAssignment(v8::internal::Token::Value,
   v8::internal::Expression*, v8::internal::Expression*, int) */

Assignment * __thiscall
v8::internal::AstNodeFactory::NewAssignment
          (AstNodeFactory *this,uint param_2,long param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  Zone *pZVar2;
  Assignment *pAVar3;
  int *piVar4;
  
  if ((param_2 & 0xff) != 0x10) {
    uVar1 = *(uint *)(param_3 + 4);
    if (((uVar1 & 0x3f) == 0x35) && (*(uint *)(param_3 + 4) = uVar1 | 0x80, (uVar1 >> 8 & 1) != 0))
    {
      Variable::SetMaybeAssigned(*(Variable **)(param_3 + 8));
    }
    if ((param_2 & 0xfe) != 0x10) {
      pZVar2 = *(Zone **)this;
      pAVar3 = *(Assignment **)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pAVar3) < 0x20) {
        pAVar3 = (Assignment *)Zone::NewExpand(pZVar2,0x20);
      }
      else {
        *(Assignment **)(pZVar2 + 0x10) = pAVar3 + 0x20;
      }
      pZVar2 = *(Zone **)this;
      piVar4 = *(int **)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)piVar4) < 0x18) {
        piVar4 = (int *)Zone::NewExpand(pZVar2,0x18);
      }
      else {
        *(int **)(pZVar2 + 0x10) = piVar4 + 6;
      }
      *(long *)(piVar4 + 2) = param_3;
      *(undefined8 *)(piVar4 + 4) = param_4;
      *piVar4 = param_5 + 1;
      piVar4[1] = (param_2 + 0x10 & 0xff) << 7 | 0x1a;
      Assignment::Assignment(pAVar3,0x21,param_2,param_3,param_4,param_5);
      *(int **)(pAVar3 + 0x18) = piVar4;
      return pAVar3;
    }
  }
  pZVar2 = *(Zone **)this;
  pAVar3 = *(Assignment **)(pZVar2 + 0x10);
  if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pAVar3) < 0x18) {
    pAVar3 = (Assignment *)Zone::NewExpand(pZVar2,0x18);
  }
  else {
    *(Assignment **)(pZVar2 + 0x10) = pAVar3 + 0x18;
  }
  Assignment::Assignment(pAVar3,0x18,param_2,param_3,param_4,param_5);
  return pAVar3;
}

