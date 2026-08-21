
/* v8::internal::MarkCompactCollector::RecordLiveSlotsOnPage(v8::internal::Page*) */

void __thiscall
v8::internal::MarkCompactCollector::RecordLiveSlotsOnPage(MarkCompactCollector *this,Page *param_1)

{
  undefined **local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(this + 8);
  local_20 = &PTR__HeapObjectVisitor_01ca85a0;
  LiveObjectVisitor::
  VisitBlackObjectsNoFail<v8::internal::EvacuateRecordOnlyVisitor,v8::internal::MajorNonAtomicMarkingState>
            (param_1,this + 0x2701,&local_20,0);
  return;
}

