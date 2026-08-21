
void FUN_00ff558c(long param_1,MemoryChunk *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  MinorMarkCompactCollector *pMVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte **local_70;
  byte *local_68;
  char *local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  if (DAT_01d3f400 == (byte *)0x0) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f400 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f400;
  local_70 = (byte **)0x0;
  if ((*DAT_01d3f400 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"YoungGenerationEvacuator::RawEvacuatePage",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar2 = local_48;
    local_48 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_50;
    local_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_70 = &local_68;
    local_60 = "YoungGenerationEvacuator::RawEvacuatePage";
    local_68 = pbVar1;
    local_58 = uVar3;
  }
  lVar6 = *(long *)(param_1 + 0x378);
  *param_3 = *(undefined8 *)(param_2 + 0x100);
  lVar6 = lVar6 + 0x69;
  uVar5 = (uint)*(ulong *)(param_2 + 8);
  if ((uVar5 >> 9 & 1) == 0) {
    if ((uVar5 >> 10 & 1) == 0) {
      if ((*(ulong *)(param_2 + 8) & 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      v8::internal::LiveObjectVisitor::
      VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpaceVisitor,v8::internal::MinorNonAtomicMarkingState>
                (param_2,lVar6,param_1 + 0x38,1);
      goto joined_r0x00ff5790;
    }
    v8::internal::LiveObjectVisitor::
    VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>,v8::internal::MinorNonAtomicMarkingState>
              (param_2,lVar6,param_1 + 0xb0,0);
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + *(long *)(param_2 + 0x100);
    lVar7 = *(long *)(param_2 + 0xf8);
  }
  else {
    v8::internal::LiveObjectVisitor::
    VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MinorNonAtomicMarkingState>
              (param_2,lVar6,param_1 + 0xd8,0);
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + *(long *)(param_2 + 0x100);
    if (((byte)param_2[8] >> 5 & 1) != 0) goto joined_r0x00ff5790;
    lVar7 = *(long *)(param_2 + 0xf8);
  }
  if ((lVar7 != 0) &&
     (v8::internal::LocalArrayBufferTracker::
      Free<v8::internal::ArrayBufferTracker::FreeDead<v8::internal::MinorNonAtomicMarkingState>(v8::internal::Page*,v8::internal::MinorNonAtomicMarkingState*)::_lambda(v8::internal::JSArrayBuffer)_1_>
                (lVar7,lVar6), *(long *)(lVar7 + 0x20) == 0)) {
    v8::internal::MemoryChunk::ReleaseLocalTracker(param_2);
  }
  if (v8::internal::FLAG_verify_heap == '\0') {
    if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x828) + 0x58) < 2) goto joined_r0x00ff5790;
    pMVar4 = *(MinorMarkCompactCollector **)(param_1 + 0x378);
    uVar3 = 0;
  }
  else {
    pMVar4 = *(MinorMarkCompactCollector **)(param_1 + 0x378);
    uVar3 = 1;
  }
  v8::internal::MinorMarkCompactCollector::MakeIterable(pMVar4,param_2,0,uVar3);
joined_r0x00ff5790:
  if ((local_70 != (byte **)0x0) && (*local_68 != 0)) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_68,local_60,local_58);
  }
  return;
}

