
/* v8::internal::compiler::JSCallReducer::ReduceJSConstructWithArrayLike(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSCallReducer::ReduceJSConstructWithArrayLike
          (JSCallReducer *this,Node *param_1)

{
  long lVar1;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = CallFrequencyOf(*(Operator **)param_1);
  local_48 = 0;
  local_40 = 0xffffffff;
  ReduceCallOrConstructWithArrayLikeOrSpread(this,param_1,1,local_50,&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

