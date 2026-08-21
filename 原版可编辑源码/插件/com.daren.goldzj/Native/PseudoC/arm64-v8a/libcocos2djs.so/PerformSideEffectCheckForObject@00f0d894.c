
/* v8::internal::Debug::PerformSideEffectCheckForObject(v8::internal::Handle<v8::internal::Object>)
    */

undefined8 __thiscall
v8::internal::Debug::PerformSideEffectCheckForObject(Debug *this,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (((((uVar2 & 1) == 0) ||
       (uVar3 = uVar2 & 0xffffffff00000000 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x42))
      || (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x41)) ||
     (uVar2 = TemporaryObjectsTracker::HasObject(*(TemporaryObjectsTracker **)(this + 0x20)),
     (uVar2 & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
      PrintF("[debug-evaluate] failed runtime side effect check.\n");
    }
    this[0x10] = (Debug)0x1;
    Isolate::TerminateExecution(*(Isolate **)(this + 0x88));
    uVar1 = 0;
  }
  return uVar1;
}

