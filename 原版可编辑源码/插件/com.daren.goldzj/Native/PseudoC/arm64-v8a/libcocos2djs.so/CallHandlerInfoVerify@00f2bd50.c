
/* v8::internal::CallHandlerInfo::CallHandlerInfoVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::CallHandlerInfo::CallHandlerInfoVerify(CallHandlerInfo *this,Isolate *param_1)

{
  long lVar1;
  
  TorqueGeneratedClassVerifiers::CallHandlerInfoVerify(*(undefined8 *)this);
  lVar1 = *(long *)this;
  if (((*(int *)(lVar1 + -1) != *(int *)(param_1 + 0x250)) &&
      (*(int *)(lVar1 + -1) != *(int *)(param_1 + 600))) &&
     (*(int *)(lVar1 + -1) != *(int *)(param_1 + 0x260))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "map() == ReadOnlyRoots(isolate).side_effect_call_handler_info_map() || map() == ReadOnlyRoots(isolate).side_effect_free_call_handler_info_map() || map() == ReadOnlyRoots(isolate) .next_call_side_effect_free_call_handler_info_map()"
            );
  }
  return;
}

