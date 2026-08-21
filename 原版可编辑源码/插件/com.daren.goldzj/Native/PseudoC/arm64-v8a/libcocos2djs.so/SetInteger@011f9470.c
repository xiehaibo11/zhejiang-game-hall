
/* v8::tracing::TracedValue::SetInteger(char const*, int) */

void __thiscall v8::tracing::TracedValue::SetInteger(TracedValue *this,char *param_1,int param_2)

{
  int extraout_w1;
  byte local_38 [16];
  void *local_28;
  
  WriteName(this,param_1);
  std::__ndk1::to_string((__ndk1 *)(ulong)(uint)param_2,extraout_w1);
  FUN_011f9614(this + 8,local_38);
  if ((local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  return;
}

