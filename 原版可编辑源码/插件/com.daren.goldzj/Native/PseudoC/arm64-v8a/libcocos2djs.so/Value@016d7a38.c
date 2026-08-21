
/* v8::internal::compiler::JSCallReducerAssembler::IfBuilder1<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber> >::Value() */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::
IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>::Value
          (IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>> *this)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  GraphAssembler *pGVar5;
  undefined4 uVar6;
  GraphAssemblerLabel local_108 [4];
  undefined4 local_104;
  BasicBlock *local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined1 local_d0;
  GraphAssemblerLabel local_c8 [4];
  uint local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  GraphAssemblerLabel local_90 [4];
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  bVar2 = this[0x10] ==
          (IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)0x2;
  local_88 = GraphAssembler::NewBasicBlock(*(GraphAssembler **)this,bVar2);
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = (uint)!bVar2;
  uStack_80 = 0;
  bVar3 = this[0x10] ==
          (IfBuilder1<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)0x1;
  uVar6 = 1;
  if (!bVar3) {
    uVar6 = 2;
  }
  local_c0 = GraphAssembler::NewBasicBlock(*(GraphAssembler **)this,bVar3);
  local_c8[0] = (GraphAssemblerLabel)0x0;
  local_c4 = (uint)!bVar3;
  uStack_b8 = 0;
  local_100 = (BasicBlock *)GraphAssembler::NewBasicBlock(*(GraphAssembler **)this,false);
  local_108[0] = (GraphAssemblerLabel)0x0;
  local_104 = 1;
  uStack_f8 = 0;
  local_d0 = 8;
  if (bVar2 == bVar3) {
    uVar6 = 0;
  }
  GraphAssembler::BranchImpl<>
            (*(GraphAssembler **)this,*(undefined8 *)(this + 8),local_90,local_c8,uVar6,2);
  GraphAssembler::Bind<0ul>(*(GraphAssembler **)this,local_90);
  if (*(long **)(this + 0x40) != (long *)0x0) {
    uVar4 = (**(code **)(**(long **)(this + 0x40) + 0x30))();
    pGVar5 = *(GraphAssembler **)this;
    GraphAssembler::
    MergeState<v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>>
              (pGVar5,local_108,uVar4);
    GraphAssembler::GotoBasicBlock(pGVar5,local_100);
    *(undefined8 *)(pGVar5 + 0x20) = 0;
    *(undefined8 *)(pGVar5 + 0x28) = 0;
    GraphAssembler::Bind<0ul>(*(GraphAssembler **)this,local_c8);
    if (*(long **)(this + 0x70) != (long *)0x0) {
      uVar4 = (**(code **)(**(long **)(this + 0x70) + 0x30))();
      pGVar5 = *(GraphAssembler **)this;
      GraphAssembler::
      MergeState<v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>>
                (pGVar5,local_108,uVar4);
      GraphAssembler::GotoBasicBlock(pGVar5,local_100);
      *(undefined8 *)(pGVar5 + 0x20) = 0;
      *(undefined8 *)(pGVar5 + 0x28) = 0;
      GraphAssembler::Bind<1ul>(*(GraphAssembler **)this,local_108);
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_e0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

