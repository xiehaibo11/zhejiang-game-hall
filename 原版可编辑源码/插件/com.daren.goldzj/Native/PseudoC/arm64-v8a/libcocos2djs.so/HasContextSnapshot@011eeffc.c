
/* v8::internal::Snapshot::HasContextSnapshot(v8::internal::Isolate*, unsigned long) */

bool v8::internal::Snapshot::HasContextSnapshot(Isolate *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb7e8);
  if ((puVar1 != (undefined8 *)0x0) && ((uint *)*puVar1 != (uint *)0x0)) {
    if (0 < *(int *)(puVar1 + 1)) {
      return param_2 < *(uint *)*puVar1;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kNumberOfContextsOffset < data->raw_size");
  }
  return false;
}

