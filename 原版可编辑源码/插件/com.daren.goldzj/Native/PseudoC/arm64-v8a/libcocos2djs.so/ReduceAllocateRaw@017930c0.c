
/* v8::internal::compiler::MemoryLowering::ReduceAllocateRaw(v8::internal::compiler::Node*,
   v8::internal::AllocationType, v8::internal::AllowLargeObjects,
   v8::internal::compiler::MemoryLowering::AllocationState const**) */

Node * __thiscall
v8::internal::compiler::MemoryLowering::ReduceAllocateRaw
          (MemoryLowering *this,long param_1,
          __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
          param_3,int param_4,long *param_5)

{
  long lVar1;
  GraphAssembler *pGVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  CallDescriptor *pCVar8;
  Node *pNVar9;
  Zone *pZVar10;
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
  *p_Var11;
  undefined8 *puVar12;
  Operator *pOVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 local_108;
  Node *pNStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8 [2];
  BasicBlock *local_e0;
  undefined8 uStack_d8;
  Node *local_c0;
  undefined1 local_b0;
  GraphAssemblerLabel local_a8 [4];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  plVar14 = (long *)(param_1 + 0x20);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar14 = (long *)(*plVar14 + 0x10);
  }
  pNVar9 = (Node *)*plVar14;
  GraphAssembler::InitializeEffectControl
            (*(GraphAssembler **)(this + 0x38),(Node *)plVar14[1],(Node *)plVar14[2]);
  pGVar2 = *(GraphAssembler **)(this + 0x38);
  if (param_3 ==
      (__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
       )0x0) {
    if (param_4 == 1) {
      pNVar3 = (Node *)GraphAssembler::AllocateInYoungGenerationStubConstant(pGVar2);
    }
    else {
      pNVar3 = (Node *)GraphAssembler::AllocateRegularInYoungGenerationStubConstant(pGVar2);
    }
    uVar17 = *(undefined8 *)(this + 0x38);
    uVar4 = ExternalReference::new_space_allocation_top_address(*(Isolate **)(this + 0x10));
    uVar4 = GraphAssembler::ExternalConstant(uVar17,uVar4);
    uVar18 = *(undefined8 *)(this + 0x38);
    uVar17 = ExternalReference::new_space_allocation_limit_address(*(Isolate **)(this + 0x10));
  }
  else {
    if (param_4 == 1) {
      pNVar3 = (Node *)GraphAssembler::AllocateInOldGenerationStubConstant(pGVar2);
    }
    else {
      pNVar3 = (Node *)GraphAssembler::AllocateRegularInOldGenerationStubConstant(pGVar2);
    }
    uVar17 = *(undefined8 *)(this + 0x38);
    uVar4 = ExternalReference::old_space_allocation_top_address(*(Isolate **)(this + 0x10));
    uVar4 = GraphAssembler::ExternalConstant(uVar17,uVar4);
    uVar18 = *(undefined8 *)(this + 0x38);
    uVar17 = ExternalReference::old_space_allocation_limit_address(*(Isolate **)(this + 0x10));
  }
  uVar17 = GraphAssembler::ExternalConstant(uVar18,uVar17);
  lVar15 = *(long *)pNVar9;
  if (*(short *)(lVar15 + 0x10) == 0x18) {
    uVar19 = *(ulong *)(lVar15 + 0x30);
joined_r0x01793200:
    if (((uVar19 < 0x20001) && (FLAG_inline_new != '\0')) && (*(int *)(this + 0x40) == 0)) {
      puVar12 = (undefined8 *)*param_5;
      if (((long)(0x20000 - uVar19) < (long)puVar12[1]) ||
         (p_Var11 = (__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
                     *)*puVar12, p_Var11[0x20] != param_3)) {
        local_a0 = GraphAssembler::NewBasicBlock(*(GraphAssembler **)(this + 0x38),true);
        local_a8[0] = (GraphAssemblerLabel)0x0;
        local_a4 = 0;
        uStack_98 = 0;
        local_e0 = (BasicBlock *)
                   GraphAssembler::NewBasicBlock(*(GraphAssembler **)(this + 0x38),false);
        local_e8[0] = local_e8[0] & 0xffffff00;
        local_e8[1] = 1;
        uStack_d8 = 0;
        local_b0 = 5;
        pNVar9 = (Node *)GraphAssembler::UniqueIntPtrConstant
                                   (*(GraphAssembler **)(this + 0x38),uVar19);
        pGVar2 = *(GraphAssembler **)(this + 0x38);
        uVar18 = GraphAssembler::IntPtrConstant(pGVar2,0);
        pNVar5 = (Node *)GraphAssembler::Load(pGVar2,5,uVar4,uVar18);
        pGVar2 = *(GraphAssembler **)(this + 0x38);
        uVar18 = GraphAssembler::IntPtrConstant(pGVar2,0);
        pNVar6 = (Node *)GraphAssembler::Load(pGVar2,5,uVar17,uVar18);
        pGVar2 = *(GraphAssembler **)(this + 0x38);
        pNVar7 = (Node *)GraphAssembler::IntAdd(pGVar2,pNVar5,pNVar9);
        pNVar6 = (Node *)GraphAssembler::UintLessThan(pGVar2,pNVar7,pNVar6);
        GraphAssembler::GotoIfNot<>(*(GraphAssembler **)(this + 0x38),pNVar6,local_a8);
        pGVar2 = *(GraphAssembler **)(this + 0x38);
        GraphAssembler::MergeState<v8::internal::compiler::Node*>
                  (pGVar2,(GraphAssemblerLabel *)local_e8,pNVar5);
        GraphAssembler::GotoBasicBlock(pGVar2,local_e0);
        *(undefined8 *)(pGVar2 + 0x20) = 0;
        *(undefined8 *)(pGVar2 + 0x28) = 0;
        GraphAssembler::Bind<0ul>(*(GraphAssembler **)(this + 0x38),local_a8);
        pOVar13 = *(Operator **)(this + 8);
        if (pOVar13 == (Operator *)0x0) {
          pNStack_100 = (Node *)0x1d2c260;
          local_108 = &PTR__CallInterfaceDescriptor_01ca1260;
          pCVar8 = (CallDescriptor *)
                   Linkage::GetStubCallDescriptor
                             (*(undefined8 *)(this + 0x20),&local_108,
                              CallDescriptors::call_descriptor_data_._48_4_ -
                              CallDescriptors::call_descriptor_data_._40_4_,4,0x20,0);
          pOVar13 = (Operator *)
                    CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(this + 0x28),pCVar8);
          *(Operator **)(this + 8) = pOVar13;
        }
        pGVar2 = *(GraphAssembler **)(this + 0x38);
        uStack_f0 = *(undefined8 *)(pGVar2 + 0x28);
        local_f8 = *(undefined8 *)(pGVar2 + 0x20);
        local_108 = (undefined **)pNVar3;
        pNStack_100 = pNVar9;
        pNVar3 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(pGVar2 + 0x18),pOVar13,
                                        *(int *)(pOVar13 + 0x18) + *(int *)(pOVar13 + 0x1c) + 2,
                                        (Node **)&local_108,false);
        *(Node **)(pGVar2 + 0x20) = pNVar3;
        pNVar3 = (Node *)GraphAssembler::AddNode(pGVar2,pNVar3);
        pNVar3 = (Node *)GraphAssembler::BitcastTaggedToWord(pGVar2,pNVar3);
        pGVar2 = *(GraphAssembler **)(this + 0x38);
        pNVar5 = (Node *)GraphAssembler::IntPtrConstant(pGVar2,1);
        pNVar3 = (Node *)GraphAssembler::IntSub(pGVar2,pNVar3,pNVar5);
        pGVar2 = *(GraphAssembler **)(this + 0x38);
        GraphAssembler::MergeState<v8::internal::compiler::Node*>
                  (pGVar2,(GraphAssemblerLabel *)local_e8,pNVar3);
        GraphAssembler::GotoBasicBlock(pGVar2,local_e0);
        *(undefined8 *)(pGVar2 + 0x20) = 0;
        *(undefined8 *)(pGVar2 + 0x28) = 0;
        GraphAssembler::Bind<1ul>(*(GraphAssembler **)(this + 0x38),(GraphAssemblerLabel *)local_e8)
        ;
        pNVar3 = local_c0;
        pGVar2 = *(GraphAssembler **)(this + 0x38);
        pNVar5 = (Node *)GraphAssembler::IntPtrConstant(pGVar2,uVar19);
        uVar17 = GraphAssembler::IntAdd(pGVar2,pNVar3,pNVar5);
        pGVar2 = *(GraphAssembler **)(this + 0x38);
        uVar18 = GraphAssembler::IntPtrConstant(pGVar2,0);
        GraphAssembler::Store(pGVar2,5,uVar4,uVar18,uVar17);
        pGVar2 = *(GraphAssembler **)(this + 0x38);
        pNVar3 = (Node *)GraphAssembler::IntPtrConstant(pGVar2,1);
        pNVar3 = (Node *)GraphAssembler::IntAdd(pGVar2,local_c0,pNVar3);
        pNVar3 = (Node *)GraphAssembler::BitcastWordToTagged(pGVar2,pNVar3);
        pZVar10 = *(Zone **)(this + 0x18);
        p_Var11 = *(__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
                    **)(pZVar10 + 0x10);
        uVar4 = *(undefined8 *)(*(long *)(this + 0x38) + 0x20);
        if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)p_Var11) < 0x30) {
          p_Var11 = (__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
                     *)Zone::NewExpand(pZVar10,0x30);
        }
        else {
          *(__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
            **)(pZVar10 + 0x10) = p_Var11 + 0x30;
        }
        uVar18 = *(undefined8 *)(this + 0x18);
        *(undefined8 *)(p_Var11 + 8) = 0;
        p_Var11[0x20] = param_3;
        *(__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
          **)p_Var11 = p_Var11 + 8;
        *(undefined8 *)(p_Var11 + 0x10) = uVar18;
        *(undefined8 *)(p_Var11 + 0x18) = 0;
        *(Node **)(p_Var11 + 0x28) = pNVar9;
        local_108 = (undefined **)
                    (CONCAT44(local_108._4_4_,*(undefined4 *)(pNVar3 + 0x14)) & 0xffffffff00ffffff);
        std::__ndk1::
        __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
        ::__emplace_unique_key_args<unsigned_int,unsigned_int>
                  (p_Var11,(uint *)&local_108,(uint *)&local_108);
        pZVar10 = *(Zone **)(this + 0x18);
        puVar12 = *(undefined8 **)(pZVar10 + 0x10);
        if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)puVar12) < 0x20) {
          puVar12 = (undefined8 *)Zone::NewExpand(pZVar10,0x20);
        }
        else {
          *(undefined8 **)(pZVar10 + 0x10) = puVar12 + 4;
        }
        *puVar12 = p_Var11;
        puVar12[1] = uVar19;
        puVar12[2] = uVar17;
        puVar12[3] = uVar4;
        *param_5 = (long)puVar12;
        goto LAB_01793510;
      }
      pNVar3 = *(Node **)(p_Var11 + 0x28);
      lVar15 = puVar12[1] + uVar19;
      lVar16 = *(long *)pNVar3;
      if (*(char *)(*(long *)(this + 0x30) + 0x10) == '\x05') {
        if (*(long *)(lVar16 + 0x30) < lVar15) {
          pOVar13 = (Operator *)
                    CommonOperatorBuilder::Int64Constant
                              (*(CommonOperatorBuilder **)(this + 0x28),lVar15);
LAB_017938d8:
          NodeProperties::ChangeOp(pNVar3,pOVar13);
        }
      }
      else if (*(int *)(lVar16 + 0x2c) < lVar15) {
        pOVar13 = (Operator *)
                  CommonOperatorBuilder::Int32Constant
                            (*(CommonOperatorBuilder **)(this + 0x28),(int)lVar15);
        goto LAB_017938d8;
      }
      uVar17 = GraphAssembler::IntAdd(*(GraphAssembler **)(this + 0x38),(Node *)puVar12[2],pNVar9);
      pGVar2 = *(GraphAssembler **)(this + 0x38);
      uVar18 = GraphAssembler::IntPtrConstant(pGVar2,0);
      GraphAssembler::Store(pGVar2,5,uVar4,uVar18,uVar17);
      pGVar2 = *(GraphAssembler **)(this + 0x38);
      pNVar3 = (Node *)puVar12[2];
      pNVar9 = (Node *)GraphAssembler::IntPtrConstant(pGVar2,1);
      pNVar9 = (Node *)GraphAssembler::IntAdd(pGVar2,pNVar3,pNVar9);
      pNVar3 = (Node *)GraphAssembler::BitcastWordToTagged(pGVar2,pNVar9);
      uVar4 = *(undefined8 *)(*(long *)(this + 0x38) + 0x20);
      local_e8[0] = *(uint *)(pNVar3 + 0x14) & 0xffffff;
      std::__ndk1::
      __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
      ::__emplace_unique_key_args<unsigned_int,unsigned_int>(p_Var11,local_e8,local_e8);
      pZVar10 = *(Zone **)(this + 0x18);
      puVar12 = *(undefined8 **)(pZVar10 + 0x10);
      if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)puVar12) < 0x20) {
        puVar12 = (undefined8 *)Zone::NewExpand(pZVar10,0x20);
      }
      else {
        *(undefined8 **)(pZVar10 + 0x10) = puVar12 + 4;
      }
      *puVar12 = p_Var11;
      puVar12[1] = lVar15;
      puVar12[2] = uVar17;
      puVar12[3] = uVar4;
      *param_5 = (long)puVar12;
      goto LAB_01793510;
    }
  }
  else if (*(short *)(lVar15 + 0x10) == 0x17) {
    uVar19 = (ulong)*(int *)(lVar15 + 0x2c);
    goto joined_r0x01793200;
  }
  local_a0 = GraphAssembler::NewBasicBlock(*(GraphAssembler **)(this + 0x38),true);
  local_a8[0] = (GraphAssemblerLabel)0x0;
  local_a4 = 0;
  uStack_98 = 0;
  local_e0 = (BasicBlock *)GraphAssembler::NewBasicBlock(*(GraphAssembler **)(this + 0x38),false);
  local_e8[0] = local_e8[0] & 0xffffff00;
  local_e8[1] = 1;
  uStack_d8 = 0;
  local_b0 = 7;
  pGVar2 = *(GraphAssembler **)(this + 0x38);
  uVar18 = GraphAssembler::IntPtrConstant(pGVar2,0);
  pNVar5 = (Node *)GraphAssembler::Load(pGVar2,5,uVar4,uVar18);
  pGVar2 = *(GraphAssembler **)(this + 0x38);
  uVar18 = GraphAssembler::IntPtrConstant(pGVar2,0);
  pNVar6 = (Node *)GraphAssembler::Load(pGVar2,5,uVar17,uVar18);
  pNVar7 = (Node *)GraphAssembler::IntAdd(*(GraphAssembler **)(this + 0x38),pNVar5,pNVar9);
  pNVar6 = (Node *)GraphAssembler::UintLessThan(*(GraphAssembler **)(this + 0x38),pNVar7,pNVar6);
  GraphAssembler::GotoIfNot<>(*(GraphAssembler **)(this + 0x38),pNVar6,local_a8);
  if (param_4 == 1) {
    pGVar2 = *(GraphAssembler **)(this + 0x38);
    pNVar6 = (Node *)GraphAssembler::IntPtrConstant(pGVar2,0x20000);
    pNVar6 = (Node *)GraphAssembler::UintLessThan(pGVar2,pNVar9,pNVar6);
    GraphAssembler::GotoIfNot<>(pGVar2,pNVar6,local_a8);
  }
  pGVar2 = *(GraphAssembler **)(this + 0x38);
  uVar17 = GraphAssembler::IntPtrConstant(pGVar2,0);
  GraphAssembler::Store(pGVar2,5,uVar4,uVar17,pNVar7);
  pGVar2 = *(GraphAssembler **)(this + 0x38);
  pNVar6 = (Node *)GraphAssembler::IntPtrConstant(pGVar2,1);
  pNVar5 = (Node *)GraphAssembler::IntAdd(pGVar2,pNVar5,pNVar6);
  pNVar5 = (Node *)GraphAssembler::BitcastWordToTagged(pGVar2,pNVar5);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (pGVar2,(GraphAssemblerLabel *)local_e8,pNVar5);
  GraphAssembler::GotoBasicBlock(pGVar2,local_e0);
  *(undefined8 *)(pGVar2 + 0x20) = 0;
  *(undefined8 *)(pGVar2 + 0x28) = 0;
  GraphAssembler::Bind<0ul>(*(GraphAssembler **)(this + 0x38),local_a8);
  pOVar13 = *(Operator **)(this + 8);
  if (pOVar13 == (Operator *)0x0) {
    pNStack_100 = (Node *)0x1d2c260;
    local_108 = &PTR__CallInterfaceDescriptor_01ca1260;
    pCVar8 = (CallDescriptor *)
             Linkage::GetStubCallDescriptor
                       (*(undefined8 *)(this + 0x20),&local_108,
                        CallDescriptors::call_descriptor_data_._48_4_ -
                        CallDescriptors::call_descriptor_data_._40_4_,4,0x20,0);
    pOVar13 = (Operator *)
              CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(this + 0x28),pCVar8);
    *(Operator **)(this + 8) = pOVar13;
  }
  pGVar2 = *(GraphAssembler **)(this + 0x38);
  uStack_f0 = *(undefined8 *)(pGVar2 + 0x28);
  local_f8 = *(undefined8 *)(pGVar2 + 0x20);
  local_108 = (undefined **)pNVar3;
  pNStack_100 = pNVar9;
  pNVar9 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(pGVar2 + 0x18),pOVar13,
                                  *(int *)(pOVar13 + 0x18) + *(int *)(pOVar13 + 0x1c) + 2,
                                  (Node **)&local_108,false);
  *(Node **)(pGVar2 + 0x20) = pNVar9;
  pNVar9 = (Node *)GraphAssembler::AddNode(pGVar2,pNVar9);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (pGVar2,(GraphAssemblerLabel *)local_e8,pNVar9);
  GraphAssembler::GotoBasicBlock(pGVar2,local_e0);
  *(undefined8 *)(pGVar2 + 0x20) = 0;
  *(undefined8 *)(pGVar2 + 0x28) = 0;
  GraphAssembler::Bind<1ul>(*(GraphAssembler **)(this + 0x38),(GraphAssemblerLabel *)local_e8);
  pNVar3 = local_c0;
  if (param_5 != (long *)0x0) {
    pZVar10 = *(Zone **)(this + 0x18);
    p_Var11 = *(__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
                **)(pZVar10 + 0x10);
    uVar4 = *(undefined8 *)(*(long *)(this + 0x38) + 0x20);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)p_Var11) < 0x30) {
      p_Var11 = (__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
                 *)Zone::NewExpand(pZVar10,0x30);
    }
    else {
      *(__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
        **)(pZVar10 + 0x10) = p_Var11 + 0x30;
    }
    uVar17 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(p_Var11 + 8) = 0;
    p_Var11[0x20] = param_3;
    *(__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
      **)p_Var11 = p_Var11 + 8;
    *(undefined8 *)(p_Var11 + 0x10) = uVar17;
    *(undefined8 *)(p_Var11 + 0x18) = 0;
    *(undefined8 *)(p_Var11 + 0x28) = 0;
    local_108 = (undefined **)
                (CONCAT44(local_108._4_4_,*(undefined4 *)(local_c0 + 0x14)) & 0xffffffff00ffffff);
    std::__ndk1::
    __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
    __emplace_unique_key_args<unsigned_int,unsigned_int>
              (p_Var11,(uint *)&local_108,(uint *)&local_108);
    pZVar10 = *(Zone **)(this + 0x18);
    puVar12 = *(undefined8 **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)puVar12) < 0x20) {
      puVar12 = (undefined8 *)Zone::NewExpand(pZVar10,0x20);
    }
    else {
      *(undefined8 **)(pZVar10 + 0x10) = puVar12 + 4;
    }
    puVar12[2] = 0;
    puVar12[3] = uVar4;
    *puVar12 = p_Var11;
    puVar12[1] = 0x7fffffff;
    *param_5 = (long)puVar12;
  }
LAB_01793510:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return pNVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

