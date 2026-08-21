
/* v8::internal::compiler::JSCallReducerAssembler::ForBuilder1::Value() */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::ForBuilder1::Value(ForBuilder1 *this)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  GraphAssembler *pGVar5;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  GraphAssemblerLabel local_120 [4];
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined1 local_e8;
  GraphAssemblerLabel local_e0 [4];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_a8;
  GraphAssemblerLabel local_a0 [4];
  undefined4 local_9c;
  BasicBlock *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_98 = (BasicBlock *)GraphAssembler::NewBasicBlock(*(GraphAssembler **)this,false);
  local_a0[0] = (GraphAssemblerLabel)0x0;
  uStack_90 = 0;
  local_9c = 2;
  local_60 = 0x808;
  local_d8 = GraphAssembler::NewBasicBlock(*(GraphAssembler **)this,true);
  local_e0[0] = (GraphAssemblerLabel)0x0;
  local_dc = 0;
  uStack_d0 = 0;
  local_a8 = 8;
  local_118 = GraphAssembler::NewBasicBlock(*(GraphAssembler **)this,true);
  local_120[0] = (GraphAssemblerLabel)0x0;
  local_11c = 0;
  uStack_110 = 0;
  local_e8 = 8;
  pGVar5 = *(GraphAssembler **)this;
  GraphAssembler::
  MergeState<v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>,v8::internal::TNode<v8::internal::Object>>
            (pGVar5,local_a0,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0xa0));
  GraphAssembler::GotoBasicBlock(pGVar5,local_98);
  *(undefined8 *)(pGVar5 + 0x20) = 0;
  *(undefined8 *)(pGVar5 + 0x28) = 0;
  GraphAssembler::Bind<2ul>(*(GraphAssembler **)this,local_a0);
  pGVar5 = *(GraphAssembler **)this;
  uVar4 = *(undefined8 *)(pGVar5 + 0x28);
  local_138 = uStack_70;
  local_128 = local_78;
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_128);
    GraphAssembler::BranchImpl<v8::internal::TNode<v8::internal::Object>>
              (pGVar5,uVar3,local_e0,local_120,1,2,uStack_70);
    GraphAssembler::Bind<1ul>(*(GraphAssembler **)this,local_e0);
    local_130 = &local_138;
    local_128 = local_78;
    plVar2 = *(long **)(this + 0x90);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_128,&local_130);
      pGVar5 = *(GraphAssembler **)this;
      local_128 = local_78;
      plVar2 = *(long **)(this + 0x60);
      if (plVar2 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_128);
        GraphAssembler::
        MergeState<v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>,v8::internal::TNode<v8::internal::Object>>
                  (pGVar5,local_a0,uVar3,local_138);
        GraphAssembler::GotoBasicBlock(pGVar5,local_98);
        *(undefined8 *)(pGVar5 + 0x20) = 0;
        *(undefined8 *)(pGVar5 + 0x28) = 0;
        GraphAssembler::Bind<1ul>(*(GraphAssembler **)this,local_120);
        GraphAssembler::LoopExit(*(GraphAssembler **)this,uVar4);
        GraphAssembler::LoopExitEffect(*(GraphAssembler **)this);
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(local_f8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

