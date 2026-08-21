
/* v8::internal::compiler::JSCallReducer::ReduceJSConstructWithSpread(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSCallReducer::ReduceJSConstructWithSpread
          (JSCallReducer *this,Node *param_1)

{
  long lVar1;
  int *piVar2;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  piVar2 = (int *)ConstructParametersOf(*(Operator **)param_1);
  local_58[0] = piVar2[1];
  uStack_48 = *(undefined8 *)(piVar2 + 4);
  local_50 = *(undefined8 *)(piVar2 + 2);
  ReduceCallOrConstructWithArrayLikeOrSpread(this,param_1,*piVar2 + -2,local_58,&local_50,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

