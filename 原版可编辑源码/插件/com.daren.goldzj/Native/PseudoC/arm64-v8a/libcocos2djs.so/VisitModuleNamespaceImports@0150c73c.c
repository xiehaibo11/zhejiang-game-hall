
/* v8::internal::interpreter::BytecodeGenerator::VisitModuleNamespaceImports() */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitModuleNamespaceImports(BytecodeGenerator *this)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  BytecodeArrayBuilder *pBVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(char *)(*(long *)(this + 0x1e0) + 0x80) == '\x03') {
    iVar2 = *(int *)(this + 0x118);
    iVar3 = *(int *)(this + 0x11c);
    plVar7 = *(long **)(this + 0x120);
    if (iVar3 <= iVar2 + 1) {
      iVar3 = iVar2 + 1;
    }
    *(int *)(this + 0x118) = iVar2 + 1;
    *(int *)(this + 0x11c) = iVar3;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,iVar2);
    }
    lVar4 = Scope::AsModuleScope();
    plVar7 = *(long **)(*(long *)(lVar4 + 0xe0) + 0x40);
    plVar1 = *(long **)(*(long *)(lVar4 + 0xe0) + 0x48);
    if (plVar7 != plVar1) {
      do {
        plVar8 = plVar7 + 1;
        lVar4 = *plVar7;
        pBVar5 = (BytecodeArrayBuilder *)
                 BytecodeArrayBuilder::LoadLiteral
                           ((BytecodeArrayBuilder *)(this + 0x18),(long)*(int *)(lVar4 + 0x20) << 1)
        ;
        pBVar5 = (BytecodeArrayBuilder *)
                 BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar5,iVar2);
        BytecodeArrayBuilder::CallRuntime(pBVar5,0xc1,iVar2);
        uVar6 = VariableMap::Lookup((VariableMap *)(*(long *)(this + 0x1e0) + 0x20),
                                    *(AstRawString **)(lVar4 + 0x10));
        BuildVariableAssignment(this,uVar6,0x10,1,0);
        plVar7 = plVar8;
      } while (plVar1 != plVar8);
    }
    plVar7 = *(long **)(this + 0x120);
    iVar3 = *(int *)(this + 0x118);
    *(int *)(this + 0x118) = iVar2;
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0150c844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT44(iVar3 - iVar2,iVar2));
      return;
    }
  }
  return;
}

