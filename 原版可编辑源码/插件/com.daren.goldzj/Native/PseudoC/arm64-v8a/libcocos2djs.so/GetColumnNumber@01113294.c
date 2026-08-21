
/* v8::internal::Script::GetColumnNumber(v8::internal::Handle<v8::internal::Script>, int) */

undefined4 v8::internal::Script::GetColumnNumber(long *param_1,undefined4 param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_28 = *param_1;
  if ((*(uint *)(local_28 + 0x17) & 0xfffffffe) != 6) {
    InitLineEnds();
    local_28 = *param_1;
  }
  GetPositionInfo((Script *)&local_28,param_2,&local_38,1);
  return local_38._4_4_;
}

