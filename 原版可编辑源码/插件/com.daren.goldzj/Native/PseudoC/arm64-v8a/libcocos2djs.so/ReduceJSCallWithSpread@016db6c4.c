
/* v8::internal::compiler::JSCallReducer::ReduceJSCallWithSpread(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSCallReducer::ReduceJSCallWithSpread(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  uint *puVar2;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar2 = (uint *)CallParametersOf(*(Operator **)param_1);
  local_58[0] = puVar2[1];
  uStack_48 = *(undefined8 *)(puVar2 + 4);
  local_50 = *(undefined8 *)(puVar2 + 2);
  ReduceCallOrConstructWithArrayLikeOrSpread
            (this,param_1,(*puVar2 & 0x7ffffff) - 1,local_58,&local_50,*puVar2 >> 0x1c & 1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

