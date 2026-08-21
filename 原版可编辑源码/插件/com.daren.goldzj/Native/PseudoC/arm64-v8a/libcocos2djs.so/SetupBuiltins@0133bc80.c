
/* v8::internal::SetupIsolateDelegate::SetupBuiltins(v8::internal::Isolate*) */

void v8::internal::SetupIsolateDelegate::SetupBuiltins(Isolate *param_1)

{
  if (param_1[8] == (Isolate)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!create_heap_objects_");
}

