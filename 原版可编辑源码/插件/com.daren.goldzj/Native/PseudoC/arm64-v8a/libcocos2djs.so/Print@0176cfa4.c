
/* v8::internal::compiler::LoadElimination::AbstractField::Print() const */

void __thiscall v8::internal::compiler::LoadElimination::AbstractField::Print(AbstractField *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  AbstractField *pAVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  AbstractField *pAVar9;
  
  pAVar9 = *(AbstractField **)this;
  while (pAVar9 != this + 8) {
    uVar1 = *(uint *)((long)*(long **)(pAVar9 + 0x20) + 0x14);
    uVar2 = *(uint *)((long)*(long **)(pAVar9 + 0x28) + 0x14);
    uVar7 = *(undefined8 *)(**(long **)(pAVar9 + 0x20) + 8);
    uVar8 = *(undefined8 *)(**(long **)(pAVar9 + 0x28) + 8);
    uVar4 = MachineReprToString(pAVar9[0x30]);
    PrintF("    #%d:%s -> #%d:%s [repr=%s]\n",(ulong)(uVar1 & 0xffffff),uVar7,
           (ulong)(uVar2 & 0xffffff),uVar8,uVar4);
    pAVar5 = *(AbstractField **)(pAVar9 + 8);
    if (*(AbstractField **)(pAVar9 + 8) == (AbstractField *)0x0) {
      pAVar5 = pAVar9 + 0x10;
      bVar3 = *(AbstractField **)*(AbstractField **)pAVar5 != pAVar9;
      pAVar9 = *(AbstractField **)pAVar5;
      if (bVar3) {
        do {
          lVar6 = *(long *)pAVar5;
          pAVar5 = (AbstractField *)(lVar6 + 0x10);
          pAVar9 = *(AbstractField **)pAVar5;
        } while (*(long *)pAVar9 != lVar6);
      }
    }
    else {
      do {
        pAVar9 = pAVar5;
        pAVar5 = *(AbstractField **)pAVar9;
      } while (*(AbstractField **)pAVar9 != (AbstractField *)0x0);
    }
  }
  return;
}

