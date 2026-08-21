
/* v8::internal::RelocInfo::RequiresRelocationAfterCodegen(v8::internal::CodeDesc const&) */

bool v8::internal::RelocInfo::RequiresRelocationAfterCodegen(CodeDesc *param_1)

{
  long local_50;
  long lStack_48;
  long local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  char local_18;
  undefined4 local_14;
  
  local_40 = *(long *)param_1;
  local_50 = local_40 + *(int *)(param_1 + 8);
  local_30 = 0;
  uStack_28 = 0;
  local_14 = 0x14f;
  lStack_48 = local_50 - *(int *)(param_1 + 0x34);
  local_18 = '\0';
  local_20 = 0;
  RelocIterator::next((RelocIterator *)&local_50);
  return local_18 == '\0';
}

