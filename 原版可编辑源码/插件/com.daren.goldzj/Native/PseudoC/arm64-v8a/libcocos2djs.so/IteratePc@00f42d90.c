
/* v8::internal::StackFrame::IteratePc(v8::internal::RootVisitor*, unsigned long*, unsigned long*,
   v8::internal::Code) */

void v8::internal::StackFrame::IteratePc
               (long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long local_40;
  long local_38;
  
  lVar1 = *param_2;
  local_38 = param_4;
  if (*(int *)(param_4 + 0x17) < 0) {
    param_4 = Code::OffHeapInstructionStart((Code *)&local_38);
  }
  else {
    param_4 = param_4 + 0x3f;
  }
  local_40 = local_38;
  (**(code **)(*param_1 + 0x18))(param_1,6,0,&local_40);
  if ((int)local_40 != (int)local_38) {
    local_38 = local_40;
    if (*(int *)(local_40 + 0x17) < 0) {
      local_40 = Code::OffHeapInstructionStart((Code *)&local_38);
    }
    else {
      local_40 = local_40 + 0x3f;
    }
    *param_2 = local_40 + (lVar1 - param_4 & 0xffffffffU);
  }
  return;
}

