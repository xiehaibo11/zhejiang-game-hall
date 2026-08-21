
/* v8::internal::Debug::PerformSideEffectCheckForCallback(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Debug::AccessorKind) */

undefined8 __thiscall
v8::internal::Debug::PerformSideEffectCheckForCallback
          (Debug *this,ulong *param_2,ulong *param_3,int param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_18;
  
  if ((param_2 == (ulong *)0x0) || (uVar5 = *param_2, (uVar5 & 1) == 0)) goto LAB_00f0d944;
  uVar6 = uVar5 & 0xffffffff00000000;
  uVar3 = uVar6 | 7;
  if ((*(short *)(uVar3 + *(uint *)(uVar5 - 1)) == 0x59) &&
     (*(int *)(uVar5 - 1) == *(int *)(uVar6 + 0x260))) {
    uVar3 = *(ulong *)(uVar6 + 0x250);
    if ((int)uVar3 == 0) {
      *(undefined4 *)(uVar5 - 1) = 0;
      return 1;
    }
    Heap::VerifyObjectLayoutChange((Heap *)(uVar6 + 0x8850),uVar5,uVar3);
    *(int *)(uVar5 - 1) = (int)uVar3;
    if (((uVar3 & 1) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar5,0,uVar3);
      return 1;
    }
LAB_00f0dad0:
    uVar1 = 1;
  }
  else {
    if (*(short *)(uVar3 + *(uint *)(uVar5 - 1)) == 0x51) {
      uVar4 = 8;
      if (param_4 != 2) {
        uVar4 = 6;
      }
      uVar4 = *(uint *)(uVar5 + 7) >> (ulong)uVar4 & 3;
      if (uVar4 == 1) goto LAB_00f0dad0;
      if (uVar4 == 2) {
        uVar5 = *param_3;
        if (((((uVar5 & 1) == 0) ||
             (uVar3 = uVar5 & 0xffffffff00000000 | 7,
             *(short *)(uVar3 + *(uint *)(uVar5 - 1)) == 0x42)) ||
            (*(ushort *)(uVar3 + *(uint *)(uVar5 - 1)) < 0x41)) ||
           (uVar5 = TemporaryObjectsTracker::HasObject
                              (*(TemporaryObjectsTracker **)(this + 0x20),param_3), (uVar5 & 1) != 0
           )) goto LAB_00f0dad0;
        if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
          pcVar2 = "[debug-evaluate] failed runtime side effect check.\n";
          goto LAB_00f0db44;
        }
      }
      else if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
        PrintF("[debug-evaluate] API Callback \'");
        local_18 = uVar6 | *(uint *)(uVar5 + 3);
        Object::ShortPrint((Object *)&local_18,(__sFILE *)waitpid);
        pcVar2 = "\' may cause side effect.\n";
LAB_00f0db44:
        PrintF(pcVar2);
      }
    }
    else if (*(short *)(uVar3 + *(uint *)(uVar5 - 1)) == 0x5f) {
      if ((*(byte *)(uVar5 + 0x23) >> 5 & 1) != 0) goto LAB_00f0dad0;
      if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
        pcVar2 = "[debug-evaluate] API Interceptor may cause side effect.\n";
        goto LAB_00f0db44;
      }
    }
    else if (*(short *)(uVar3 + *(uint *)(uVar5 - 1)) == 0x59) {
      if (*(int *)(uVar5 - 1) == *(int *)(uVar6 + 600)) goto LAB_00f0dad0;
      if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
        pcVar2 = "[debug-evaluate] API CallHandlerInfo may cause side effect.\n";
        goto LAB_00f0db44;
      }
    }
LAB_00f0d944:
    this[0x10] = (Debug)0x1;
    Isolate::TerminateExecution(*(Isolate **)(this + 0x88));
    Isolate::OptionalRescheduleException(*(Isolate **)(this + 0x88),false);
    uVar1 = 0;
  }
  return uVar1;
}

