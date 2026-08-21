
/* v8::internal::interpreter::BytecodeGenerator::BuildPrivateBrandInitialization(v8::internal::interpreter::Register)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildPrivateBrandInitialization
          (BytecodeGenerator *this,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  BytecodeArrayBuilder *pBVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar4 = *(uint *)(this + 0x118);
  uVar9 = (ulong)uVar4;
  plVar5 = *(long **)(this + 0x120);
  iVar1 = uVar4 + 2;
  iVar3 = *(int *)(this + 0x11c);
  if (*(int *)(this + 0x11c) <= iVar1) {
    iVar3 = iVar1;
  }
  *(int *)(this + 0x118) = iVar1;
  *(int *)(this + 0x11c) = iVar3;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar9 | 0x200000000);
  }
  UnoptimizedCompilationInfo::scope(*(UnoptimizedCompilationInfo **)(this + 0x1d0));
  lVar6 = Scope::AsClassScope();
  uVar2 = *(ulong *)(lVar6 + 0x88) & 0xfffffffffffffff8;
  if (uVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(uVar2 + 0x28);
  }
  BuildVariableLoad(this,uVar8,1,1);
  pBVar7 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::StoreAccumulatorInRegister
                     ((BytecodeArrayBuilder *)(this + 0x18),uVar4 + 1);
  pBVar7 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::MoveRegister(pBVar7,param_2,uVar9);
  BytecodeArrayBuilder::CallRuntime(pBVar7,0xcf,uVar9 | 0x200000000);
  return;
}

