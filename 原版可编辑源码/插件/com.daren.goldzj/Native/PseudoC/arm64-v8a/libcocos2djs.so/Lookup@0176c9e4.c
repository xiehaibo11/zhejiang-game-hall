
/* v8::internal::compiler::LoadElimination::AbstractField::Lookup(v8::internal::compiler::Node*)
   const */

AbstractField * __thiscall
v8::internal::compiler::LoadElimination::AbstractField::Lookup(AbstractField *this,Node *param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  AbstractField *pAVar4;
  uint uVar5;
  long lVar6;
  AbstractField *pAVar7;
  
  pAVar7 = *(AbstractField **)this;
  while( true ) {
    if (pAVar7 == this + 8) {
      return (AbstractField *)0x0;
    }
    uVar5 = *(byte *)(*(long *)(pAVar7 + 0x20) + 0x17) & 0xf;
    plVar3 = (long *)(*(long *)(pAVar7 + 0x20) + 0x20);
    if (uVar5 == 0xf) {
      uVar5 = *(uint *)(*plVar3 + 8);
      plVar3 = (long *)(*plVar3 + 0x10);
    }
    if ((((int)uVar5 < 1) || (*plVar3 != 0)) &&
       (uVar2 = thunk_FUN_0176bf74(param_1), (uVar2 & 1) != 0)) break;
    pAVar4 = *(AbstractField **)(pAVar7 + 8);
    if (*(AbstractField **)(pAVar7 + 8) == (AbstractField *)0x0) {
      pAVar4 = pAVar7 + 0x10;
      bVar1 = *(AbstractField **)*(AbstractField **)pAVar4 != pAVar7;
      pAVar7 = *(AbstractField **)pAVar4;
      if (bVar1) {
        do {
          lVar6 = *(long *)pAVar4;
          pAVar4 = (AbstractField *)(lVar6 + 0x10);
          pAVar7 = *(AbstractField **)pAVar4;
        } while (*(long *)pAVar7 != lVar6);
      }
    }
    else {
      do {
        pAVar7 = pAVar4;
        pAVar4 = *(AbstractField **)pAVar7;
      } while (*(AbstractField **)pAVar7 != (AbstractField *)0x0);
    }
  }
  return pAVar7 + 0x28;
}

