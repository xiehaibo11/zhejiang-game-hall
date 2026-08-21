
/* v8::internal::interpreter::BytecodeGenerator::BuildInvalidPropertyAccess(v8::internal::MessageTemplate,
   v8::internal::Property*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildInvalidPropertyAccess
          (BytecodeGenerator *this,ulong param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  BytecodeArrayBuilder *pBVar5;
  long lVar6;
  ulong uVar7;
  AstRawString *pAVar8;
  
  lVar6 = *(long *)(param_3 + 0x10);
  uVar3 = *(uint *)(this + 0x118);
  if ((*(uint *)(lVar6 + 4) & 0x3f) != 0x35) {
    lVar6 = 0;
  }
  plVar4 = (long *)(lVar6 + 8);
  if ((*(byte *)(lVar6 + 5) & 1) != 0) {
    plVar4 = (long *)(*plVar4 + 8);
  }
  pAVar8 = (AstRawString *)*plVar4;
  plVar4 = *(long **)(this + 0x120);
  iVar1 = uVar3 + 2;
  uVar7 = (ulong)uVar3 | 0x200000000;
  iVar2 = *(int *)(this + 0x11c);
  if (*(int *)(this + 0x11c) <= iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(this + 0x118) = iVar1;
  *(int *)(this + 0x11c) = iVar2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar7);
  }
  pBVar5 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::LoadLiteral
                     ((BytecodeArrayBuilder *)(this + 0x18),
                      -((param_2 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 |
                      (param_2 & 0xffffffff) << 1);
  pBVar5 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar5,(ulong)uVar3);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(pBVar5,pAVar8);
  pBVar5 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar5,uVar3 + 1);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::CallRuntime(pBVar5,0x9a,uVar7);
  BytecodeArrayBuilder::Throw(pBVar5);
  plVar4 = *(long **)(this + 0x120);
  iVar1 = *(int *)(this + 0x118);
  *(uint *)(this + 0x118) = uVar3;
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01512e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar1 - uVar3,uVar3));
    return;
  }
  return;
}

