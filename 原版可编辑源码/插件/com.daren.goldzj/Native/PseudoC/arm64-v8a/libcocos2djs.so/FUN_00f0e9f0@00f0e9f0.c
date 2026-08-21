
void FUN_00f0e9f0(Debug *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_28;
  
  param_2 = (undefined8 *)*param_2;
  lVar1 = *(long *)(param_1 + 8);
  v8::internal::Debug::ClearBreakPoints(param_1,param_2);
  local_28 = *param_2;
  v8::internal::DebugInfo::ClearBreakInfo((DebugInfo *)&local_28,*(Isolate **)(lVar1 + 0x88));
  return;
}

