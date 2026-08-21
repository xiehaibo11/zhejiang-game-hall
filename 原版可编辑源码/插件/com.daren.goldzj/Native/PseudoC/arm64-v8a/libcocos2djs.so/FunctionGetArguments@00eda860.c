
/* v8::internal::Accessors::FunctionGetArguments(v8::internal::JavaScriptFrame*, int) */

void v8::internal::Accessors::FunctionGetArguments(JavaScriptFrame *param_1,int param_2)

{
  long lVar1;
  Isolate *pIVar2;
  long lVar3;
  StackFrameIterator aSStack_5e8 [1416];
  long local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pIVar2 = *(Isolate **)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x20);
  StackFrameIterator::StackFrameIterator(aSStack_5e8,pIVar2);
  if (local_60 != 0) {
    while( true ) {
      JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5e8);
      if (local_60 == 0) break;
      if (*(long *)(local_60 + 0x20) == lVar3) {
        FUN_00eda908(pIVar2,aSStack_5e8,param_2);
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

