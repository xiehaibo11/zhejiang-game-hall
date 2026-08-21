
/* v8::internal::compiler::RunSerializerForBackgroundCompilation(v8::internal::compiler::ZoneStats*,
   v8::internal::compiler::JSHeapBroker*, v8::internal::compiler::CompilationDependencies*,
   v8::internal::Handle<v8::internal::JSFunction>,
   v8::base::Flags<v8::internal::compiler::SerializerForBackgroundCompilationFlag, int>,
   v8::internal::BailoutId) */

void v8::internal::compiler::RunSerializerForBackgroundCompilation
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  SerializerForBackgroundCompilation aSStack_c0 [24];
  Zone *local_a8;
  long local_a0;
  undefined8 local_90;
  long *local_78;
  long local_50;
  long local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  SerializerForBackgroundCompilation::SerializerForBackgroundCompilation
            (aSStack_c0,param_1,param_2,param_3,param_4,param_5,param_6);
  SerializerForBackgroundCompilation::Run(aSStack_c0);
  if (local_50 != 0) {
    local_48 = local_50;
  }
  for (; local_78 != (long *)0x0; local_78 = (long *)*local_78) {
  }
  local_90 = 0;
  if (local_a0 != 0) {
    ZoneStats::ReturnZone(local_a8);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

