
/* v8::internal::Runtime_StringMaxLength(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StringMaxLength(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  
  if (TracingFlags::runtime_stats == 0) {
    return 0x1fffffe0;
  }
  uVar1 = FUN_01597d8c(param_1);
  return uVar1;
}

