
/* v8::internal::Expression::IsPrivateName() const */

bool __thiscall v8::internal::Expression::IsPrivateName(Expression *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  Expression *pEVar5;
  Expression *pEVar6;
  
  uVar2 = *(uint *)(this + 4);
  if ((uVar2 & 0x3f) == 0x35) {
    pEVar5 = this + 8;
    pEVar6 = pEVar5;
    if ((uVar2 >> 8 & 1) != 0) {
      pEVar6 = (Expression *)(*(long *)pEVar5 + 8);
    }
    iVar3 = *(int *)(*(long *)pEVar6 + 0x10);
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar3 + 1;
    }
    iVar1 = iVar1 >> 1;
    if (*(char *)(*(long *)pEVar6 + 0x1c) != '\0') {
      iVar1 = iVar3;
    }
    if (0 < iVar1) {
      if ((uVar2 >> 8 & 1) != 0) {
        pEVar5 = (Expression *)(*(long *)pEVar5 + 8);
      }
      sVar4 = AstRawString::FirstCharacter(*(AstRawString **)pEVar5);
      return sVar4 == 0x23;
    }
  }
  return false;
}

