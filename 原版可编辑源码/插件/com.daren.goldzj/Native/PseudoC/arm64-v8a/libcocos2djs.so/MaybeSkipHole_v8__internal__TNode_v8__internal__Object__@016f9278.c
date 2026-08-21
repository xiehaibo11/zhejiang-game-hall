
/* v8::internal::TNode<v8::internal::Object>
   v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::MaybeSkipHole<v8::internal::TNode<v8::internal::Object>
   >(v8::internal::TNode<v8::internal::Object>, v8::internal::ElementsKind,
   v8::internal::compiler::GraphAssemblerLabel<1>*, v8::internal::TNode<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::
MaybeSkipHole<v8::internal::TNode<v8::internal::Object>>
          (IteratingArrayBuiltinReducerAssembler *this,undefined8 param_2,byte param_3,
          undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  GraphAssemblerLabel local_88 [4];
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 < 6) && ((param_3 & 1) != 0)) {
    local_80 = GraphAssembler::NewBasicBlock((GraphAssembler *)this,false);
    uStack_78 = 0;
    local_88[0] = (GraphAssemblerLabel)0x0;
    local_84 = 1;
    local_50 = 8;
    if ((param_3 & 0xfe) == 4) {
      uVar2 = GraphAssembler::NumberIsFloat64Hole();
    }
    else {
      uVar2 = GraphAssembler::IsTheHole((GraphAssembler *)this,param_2);
    }
    GraphAssembler::BranchImpl<v8::internal::TNode<v8::internal::Object>>
              ((GraphAssembler *)this,uVar2,param_4,local_88,2,2,param_5);
    GraphAssembler::Bind<1ul>((GraphAssembler *)this,local_88);
    param_2 = GraphAssembler::TypeGuard((GraphAssembler *)this,0xc7f7fff,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

