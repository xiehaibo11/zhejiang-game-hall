
/* v8::internal::Script::GetLineNumber(v8::internal::Handle<v8::internal::Script>, int) */

ulong v8::internal::Script::GetLineNumber(long *param_1,undefined4 param_2)

{
  ulong local_38 [2];
  long local_28;
  
  local_38[0] = 0xffffffffffffffff;
  local_38[1] = 0xffffffffffffffff;
  local_28 = *param_1;
  if ((*(uint *)(local_28 + 0x17) & 0xfffffffe) != 6) {
    InitLineEnds();
    local_28 = *param_1;
  }
  GetPositionInfo((Script *)&local_28,param_2,local_38,1);
  return local_38[0] & 0xffffffff;
}

