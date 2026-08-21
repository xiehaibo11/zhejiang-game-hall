
/* v8::internal::TNode<v8::internal::Object>
   v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::MaybeSkipHole<>(v8::internal::TNode<v8::internal::Object>,
   v8::internal::ElementsKind, v8::internal::compiler::GraphAssemblerLabel<0>*) */

undefined8 __thiscall
v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::MaybeSkipHole<>
          (IteratingArrayBuiltinReducerAssembler *this,undefined8 param_2,byte param_3,
          undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  GraphAssemblerLabel local_80 [4];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 < 6) && ((param_3 & 1) != 0)) {
    local_78 = GraphAssembler::NewBasicBlock((GraphAssembler *)this,false);
    uStack_70 = 0;
    local_80[0] = (GraphAssemblerLabel)0x0;
    local_7c = 1;
    if ((param_3 & 0xfe) == 4) {
      uVar2 = GraphAssembler::NumberIsFloat64Hole();
    }
    else {
      uVar2 = GraphAssembler::IsTheHole((GraphAssembler *)this,param_2);
    }
    GraphAssembler::BranchImpl<>((GraphAssembler *)this,uVar2,param_4,local_80,2,2);
    GraphAssembler::Bind<0ul>((GraphAssembler *)this,local_80);
    param_2 = GraphAssembler::TypeGuard((GraphAssembler *)this,0xc7f7fff,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

