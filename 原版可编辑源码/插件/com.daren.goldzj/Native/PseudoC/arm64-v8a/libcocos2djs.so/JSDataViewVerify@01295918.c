
/* v8::internal::TorqueGeneratedClassVerifiers::JSDataViewVerify(v8::internal::JSDataView,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSDataViewVerify(ulong param_1,Isolate *param_2)

{
  ulong local_18;
  
  local_18 = param_1;
  JSArrayBufferView::JSArrayBufferViewVerify((JSArrayBufferView *)&local_18,param_2);
  if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x41a) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsJSDataView()");
}

