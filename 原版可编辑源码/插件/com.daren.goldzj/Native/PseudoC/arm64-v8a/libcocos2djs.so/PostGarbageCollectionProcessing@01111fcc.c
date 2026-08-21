
/* v8::internal::Relocatable::PostGarbageCollectionProcessing(v8::internal::Isolate*) */

void v8::internal::Relocatable::PostGarbageCollectionProcessing(Isolate *param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0xb790); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}

