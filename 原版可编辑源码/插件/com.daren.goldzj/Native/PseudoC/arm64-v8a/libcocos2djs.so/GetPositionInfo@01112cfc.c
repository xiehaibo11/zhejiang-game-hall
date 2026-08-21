
/* v8::internal::Script::GetPositionInfo(v8::internal::Handle<v8::internal::Script>, int,
   v8::internal::Script::PositionInfo*, v8::internal::Script::OffsetFlag) */

uint v8::internal::Script::GetPositionInfo
               (long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  long local_38;
  
  local_38 = *param_1;
  if ((*(uint *)(local_38 + 0x17) & 0xfffffffe) != 6) {
    InitLineEnds();
    local_38 = *param_1;
  }
  uVar1 = GetPositionInfo((Script *)&local_38,param_2,param_3,param_4);
  return uVar1 & 1;
}

