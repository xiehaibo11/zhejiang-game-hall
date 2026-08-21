
/* v8::internal::compiler::JSCallReducerAssembler::ForBuilder0::Do(std::__ndk1::function<void
   (v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi, v8::internal::HeapNumber> >)>
   const&) */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::ForBuilder0::Do(ForBuilder0 *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  GraphAssembler *pGVar5;
  undefined8 local_100;
  GraphAssemblerLabel local_f8 [4];
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  GraphAssemblerLabel local_c0 [4];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  GraphAssemblerLabel local_88 [4];
  undefined4 local_84;
  BasicBlock *local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80 = (BasicBlock *)GraphAssembler::NewBasicBlock(*(GraphAssembler **)this,false);
  local_88[0] = (GraphAssemblerLabel)0x0;
  uStack_78 = 0;
  local_84 = 2;
  local_50 = 8;
  local_b8 = GraphAssembler::NewBasicBlock(*(GraphAssembler **)this,false);
  local_c0[0] = (GraphAssemblerLabel)0x0;
  local_bc = 1;
  uStack_b0 = 0;
  local_f0 = GraphAssembler::NewBasicBlock(*(GraphAssembler **)this,false);
  local_f8[0] = (GraphAssemblerLabel)0x0;
  local_f4 = 1;
  uStack_e8 = 0;
  pGVar5 = *(GraphAssembler **)this;
  GraphAssembler::
  MergeState<v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>>
            (pGVar5,local_88,*(undefined8 *)(this + 8));
  GraphAssembler::GotoBasicBlock(pGVar5,local_80);
  *(undefined8 *)(pGVar5 + 0x20) = 0;
  *(undefined8 *)(pGVar5 + 0x28) = 0;
  GraphAssembler::Bind<1ul>(*(GraphAssembler **)this,local_88);
  pGVar5 = *(GraphAssembler **)this;
  uVar4 = *(undefined8 *)(pGVar5 + 0x28);
  local_100 = local_60;
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_100);
    GraphAssembler::BranchImpl<>(pGVar5,uVar3,local_c0,local_f8,1,2);
    GraphAssembler::Bind<0ul>(*(GraphAssembler **)this,local_c0);
    local_100 = local_60;
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_100);
      pGVar5 = *(GraphAssembler **)this;
      local_100 = local_60;
      plVar2 = *(long **)(this + 0x60);
      if (plVar2 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_100);
        GraphAssembler::
        MergeState<v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>>
                  (pGVar5,local_88,uVar3);
        GraphAssembler::GotoBasicBlock(pGVar5,local_80);
        *(undefined8 *)(pGVar5 + 0x20) = 0;
        *(undefined8 *)(pGVar5 + 0x28) = 0;
        GraphAssembler::Bind<0ul>(*(GraphAssembler **)this,local_f8);
        GraphAssembler::LoopExit(*(GraphAssembler **)this,uVar4);
        GraphAssembler::LoopExitEffect(*(GraphAssembler **)this);
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

