
/* v8::internal::SetupIsolateDelegate::SetupHeap(v8::internal::Heap*) */

undefined8 v8::internal::SetupIsolateDelegate::SetupHeap(Heap *param_1)

{
  if (param_1[8] == (Heap)0x0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!create_heap_objects_");
}

