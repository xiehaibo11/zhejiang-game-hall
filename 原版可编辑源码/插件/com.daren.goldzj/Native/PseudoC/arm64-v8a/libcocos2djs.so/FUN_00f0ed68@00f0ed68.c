
void FUN_00f0ed68(long param_1,undefined8 *param_2)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)*param_2;
  v8::internal::DebugInfo::ClearCoverageInfo
            ((DebugInfo *)&local_18,*(Isolate **)(*(long *)(param_1 + 8) + 0x88));
  return;
}

