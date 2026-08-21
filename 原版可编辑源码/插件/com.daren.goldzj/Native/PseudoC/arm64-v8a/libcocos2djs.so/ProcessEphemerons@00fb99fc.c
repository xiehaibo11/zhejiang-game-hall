
/* v8::internal::MarkCompactCollector::ProcessEphemerons() */

uint __thiscall v8::internal::MarkCompactCollector::ProcessEphemerons(MarkCompactCollector *this)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = Worklist<v8::internal::Ephemeron,64>::Pop
                    ((Worklist<v8::internal::Ephemeron,64> *)(this + 0xdf0),0,(Ephemeron *)&local_40
                    );
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    do {
      uVar1 = ProcessEphemeron(this,local_40,uStack_38);
      uVar3 = uVar3 | uVar1;
      uVar2 = Worklist<v8::internal::Ephemeron,64>::Pop
                        ((Worklist<v8::internal::Ephemeron,64> *)(this + 0xdf0),0,
                         (Ephemeron *)&local_40);
    } while ((uVar2 & 1) != 0);
  }
  ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)0>
            (this,0);
  while (uVar2 = Worklist<v8::internal::Ephemeron,64>::Pop
                           ((Worklist<v8::internal::Ephemeron,64> *)(this + 0x1360),0,
                            (Ephemeron *)&local_40), (uVar2 & 1) != 0) {
    uVar1 = ProcessEphemeron(this,local_40,uStack_38);
    uVar3 = uVar3 | uVar1;
  }
  Worklist<v8::internal::EphemeronHashTable,64>::FlushToGlobal
            ((Worklist<v8::internal::EphemeronHashTable,64> *)(this + 0xb38),0);
  Worklist<v8::internal::Ephemeron,64>::FlushToGlobal
            ((Worklist<v8::internal::Ephemeron,64> *)(this + 0x10a8),0);
  return uVar3 & 1;
}

