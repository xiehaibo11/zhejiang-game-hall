
/* v8::internal::interpreter::BytecodeGenerator::VisitFunctionDeclaration(v8::internal::FunctionDeclaration*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitFunctionDeclaration
          (BytecodeGenerator *this,FunctionDeclaration *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  vector<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration>>
  *this_00;
  BytecodeArrayBuilder *pBVar9;
  BytecodeArrayBuilder *pBVar10;
  ulong uVar11;
  vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
  *this_01;
  long *plVar12;
  long lVar13;
  FunctionLiteral *this_02;
  AstNode *pAVar14;
  ulong unaff_x23;
  FunctionLiteral *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  lVar13 = *(long *)(param_1 + 8);
  uVar5 = *(ushort *)(lVar13 + 0x28);
  if (((uVar5 >> 0xb & 1) == 0) || (((uVar5 >> 7 ^ 0xffff) & 7) == 0)) goto LAB_0150db24;
  pBVar10 = (BytecodeArrayBuilder *)this;
  switch(uVar5 >> 7 & 7) {
  case 0:
    uVar7 = GetCachedLoadGlobalICSlot(this,1,lVar13);
    uVar8 = GetCachedCreateClosureSlot(this,*(FunctionLiteral **)(param_1 + 0x18));
    local_68 = *(FunctionLiteral **)(lVar13 + 8);
    local_58 = *(undefined8 *)(param_1 + 0x18);
    this_00 = *(vector<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration>>
                **)(this + 0x200);
    uStack_60 = (BytecodeGenerator *)CONCAT44(uVar8,uVar7);
    puVar2 = *(undefined8 **)(this_00 + 8);
    if (puVar2 < *(undefined8 **)(this_00 + 0x10)) {
      puVar2[2] = local_58;
      puVar2[1] = uStack_60;
      *puVar2 = local_68;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 0x18;
    }
    else {
      std::__ndk1::
      vector<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration>>
      ::
      __push_back_slow_path<v8::internal::interpreter::BytecodeGenerator::GlobalDeclarationsBuilder::Declaration>
                (this_00,(Declaration *)&local_68);
    }
    this_02 = *(FunctionLiteral **)(param_1 + 0x18);
    local_68 = this_02;
    if ((*(long *)(this + 0x1f0) != 0) &&
       (uVar11 = FunctionLiteral::ShouldEagerCompile(this_02), (uVar11 & 1) != 0)) {
      this_01 = *(vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
                  **)(this + 0x1f0);
      if (*(undefined8 **)(this_01 + 8) == *(undefined8 **)(this_01 + 0x10)) {
        std::__ndk1::
        vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
        ::__push_back_slow_path<v8::internal::FunctionLiteral*const&>(this_01,&local_68);
      }
      else {
        **(undefined8 **)(this_01 + 8) = this_02;
        *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
      }
    }
    break;
  default:
    VisitFunctionLiteral(this,*(FunctionLiteral **)(param_1 + 0x18));
    goto LAB_0150db0c;
  case 3:
  case 6:
    VisitFunctionLiteral(this,*(FunctionLiteral **)(param_1 + 0x18));
    BytecodeArrayBuilder::StoreContextSlot
              ((BytecodeArrayBuilder *)(this + 0x18),*(undefined4 *)(*(long *)(this + 0x2f8) + 0x18)
               ,*(undefined4 *)(lVar13 + 0x20),0);
    break;
  case 4:
    uVar3 = *(uint *)(this + 0x118);
    plVar12 = *(long **)(this + 0x120);
    iVar4 = uVar3 + 2;
    iVar1 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar4) {
      iVar1 = iVar4;
    }
    unaff_x23 = (ulong)uVar3 | 0x200000000;
    *(int *)(this + 0x118) = iVar4;
    *(int *)(this + 0x11c) = iVar1;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12,unaff_x23);
    }
    pBVar10 = (BytecodeArrayBuilder *)(this + 0x18);
    pBVar9 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::LoadLiteral(pBVar10,*(AstRawString **)(lVar13 + 8));
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar9,(ulong)uVar3);
    VisitFunctionLiteral(this,*(FunctionLiteral **)(param_1 + 0x18));
    param_1 = (FunctionDeclaration *)(ulong)(uVar3 + 1);
  case 7:
    pBVar10 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar10,param_1);
    BytecodeArrayBuilder::CallRuntime(pBVar10,300,unaff_x23);
    break;
  case 5:
    local_68 = *(FunctionLiteral **)(this + 0x300);
    pAVar14 = *(AstNode **)(param_1 + 0x18);
    local_50 = 2;
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(this + 0x118));
    *(FunctionLiteral ***)(this + 0x300) = &local_68;
    uStack_60 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar11 = GetCurrentStackPosition();
      if (uVar11 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar14);
      }
    }
    *(FunctionLiteral **)(uStack_60 + 0x300) = local_68;
    plVar12 = *(long **)(uStack_60 + 0x120);
    iVar4 = *(int *)(uStack_60 + 0x118);
    *(int *)(uStack_60 + 0x118) = (int)local_58;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12,CONCAT44(iVar4 - (int)local_58,(int)local_58));
    }
LAB_0150db0c:
    BuildVariableAssignment(this,lVar13,0x10,1,0);
  }
LAB_0150db24:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

