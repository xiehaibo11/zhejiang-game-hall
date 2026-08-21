
/* void 
   std::__ndk1::__invoke_void_return_wrapper<void>::__call<v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ThrowIfNotCallable(v8::internal::TNode<v8::internal::Object>,
   v8::internal::compiler::FrameState)::{lambda()#1}&>(v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ThrowIfNotCallable(v8::internal::TNode<v8::internal::Object>,
   v8::internal::compiler::FrameState)::{lambda()#1}&) */

void std::__ndk1::__invoke_void_return_wrapper<void>::
     __call<v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ThrowIfNotCallable(v8::internal::TNode<v8::internal::Object>,v8::internal::compiler::FrameState)::_lambda()_1_&>
               (_lambda___1_ *param_1)

{
  long lVar1;
  code *pcVar2;
  GraphAssembler *this;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = *(GraphAssembler **)param_1;
  uStack_78 = v8::internal::compiler::GraphAssembler::NumberConstant(this,24.0);
  local_80 = **(undefined8 **)(param_1 + 8);
  local_88 = **(undefined8 **)(param_1 + 0x10);
  local_8c = 0xb6;
  local_50 = operator_new(0x30);
  *local_50 = (long)&PTR_FUN_01ccd450;
  local_50[1] = (long)this;
  local_50[2] = (long)&local_8c;
  local_50[3] = (long)&uStack_78;
  local_50[4] = (long)&local_80;
  local_50[5] = (long)&local_88;
  v8::internal::compiler::JSCallReducerAssembler::MayThrow
            ((JSCallReducerAssembler *)this,(function *)alStack_70);
  if (alStack_70 == local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_016f5a5c;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_016f5a5c:
  v8::internal::compiler::GraphAssembler::Unreachable(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

