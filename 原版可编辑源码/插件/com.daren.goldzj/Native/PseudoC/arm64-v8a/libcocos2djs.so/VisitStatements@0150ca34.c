
/* v8::internal::interpreter::BytecodeGenerator::VisitStatements(v8::internal::ZoneList<v8::internal::Statement*>
   const*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitStatements
          (BytecodeGenerator *this,ZoneList *param_1)

{
  int iVar1;
  int iVar2;
  BytecodeGenerator BVar3;
  ulong uVar4;
  long *plVar5;
  AstNode *pAVar6;
  long lVar7;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar7 = 0;
    do {
      iVar1 = *(int *)(this + 0x118);
      if (this[8] == (BytecodeGenerator)0x0) {
        pAVar6 = *(AstNode **)(*(long *)param_1 + lVar7 * 8);
        uVar4 = GetCurrentStackPosition();
        if (uVar4 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar6);
        }
      }
      BVar3 = this[0x1b2];
      plVar5 = *(long **)(this + 0x120);
      iVar2 = *(int *)(this + 0x118);
      *(int *)(this + 0x118) = iVar1;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar2 - iVar1,iVar1));
      }
    } while ((BVar3 == (BytecodeGenerator)0x0) &&
            (lVar7 = lVar7 + 1, lVar7 < *(int *)(param_1 + 0xc)));
  }
  return;
}

