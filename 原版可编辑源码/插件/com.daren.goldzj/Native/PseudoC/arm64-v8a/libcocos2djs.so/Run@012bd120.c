
/* v8::internal::compiler::SerializerForBackgroundCompilation::Run() */

undefined8 __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::Run
          (SerializerForBackgroundCompilation *this)

{
  undefined8 *puVar1;
  Hints *pHVar2;
  bool bVar3;
  char cVar4;
  basic_ostream *pbVar5;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  JSHeapBroker *pJVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  Hints *pHVar16;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  Zone *local_90;
  ObjectRef aOStack_88 [16];
  ObjectRef aOStack_78 [16];
  JSHeapBroker *local_68;
  char local_44 [4];
  
  TraceScope::TraceScope
            ((TraceScope *)&local_68,*(JSHeapBroker **)this,this,
             "SerializerForBackgroundCompilation::Run");
  pJVar10 = *(JSHeapBroker **)this;
  if ((pJVar10[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_memory != '\0')) {
    pbVar5 = (basic_ostream *)JSHeapBroker::Trace(pJVar10);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"[serializer start] Broker zone usage: ",0x26);
    plVar11 = *(long **)(*(long *)this + 0x10);
    lVar13 = 0;
    if (plVar11[5] != 0) {
      lVar13 = (plVar11[2] - plVar11[5]) + -0x18;
    }
    pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *plVar11 + lVar13);
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_a8,(id *)&std::__ndk1::ctype<char>::id);
    cVar4 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)&local_a8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(pbVar6,cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(pbVar6);
    pJVar10 = *(JSHeapBroker **)this;
  }
  ObjectRef::ObjectRef(aOStack_78,pJVar10,**(undefined8 **)(this + 0x28),0);
  uVar7 = ObjectRef::IsSharedFunctionInfo(aOStack_78);
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
  ObjectRef::ObjectRef(aOStack_88,*(undefined8 *)this,*(undefined8 *)(*(long *)(this + 0x28) + 8),0)
  ;
  uVar7 = ObjectRef::IsFeedbackVector(aOStack_88);
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsFeedbackVector()");
  }
  uVar7 = JSHeapBroker::ShouldBeSerializedForCompilation
                    (*(JSHeapBroker **)this,(SharedFunctionInfoRef *)aOStack_78,
                     (FeedbackVectorRef *)aOStack_88,(ZoneVector *)(this + 0x70));
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
    if (((*(JSHeapBroker **)this)[0x74] != (JSHeapBroker)0x0) &&
       (FLAG_trace_heap_broker_verbose != '\0')) {
      pbVar5 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)this);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"Already ran serializer for SharedFunctionInfo ",0x2e);
      local_a8 = (undefined8 *)SharedFunctionInfoRef::object((SharedFunctionInfoRef *)aOStack_78);
      local_a8 = (undefined8 *)*local_a8;
      pbVar5 = (basic_ostream *)internal::operator<<(pbVar5,(Brief *)&local_a8);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,", bailing out.\n",0xf);
      local_44[0] = '\n';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,local_44,1);
      uVar8 = 0;
    }
    goto LAB_012bd5a4;
  }
  pJVar10 = *(JSHeapBroker **)this;
  local_90 = *(Zone **)(pJVar10 + 0x10);
  local_a8 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  pHVar2 = *(Hints **)(this + 0x78);
  for (pHVar16 = *(Hints **)(this + 0x70); pHVar16 != pHVar2; pHVar16 = pHVar16 + 8) {
    uVar8 = Hints::CopyToParentZone(pHVar16,*(Zone **)(pJVar10 + 0x10));
    if (local_a0 < local_98) {
      *local_a0 = uVar8;
      puVar12 = local_a8;
      puVar1 = local_a0;
    }
    else {
      lVar13 = (long)local_a0 - (long)local_a8 >> 3;
      uVar7 = lVar13 + 1;
      if (uVar7 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar14 = (long)local_98 - (long)local_a8 >> 2;
      if (uVar7 <= uVar14) {
        uVar7 = uVar14;
      }
      if (0x7fffffe < (ulong)((long)local_98 - (long)local_a8 >> 3)) {
        uVar7 = 0xfffffff;
      }
      if (uVar7 == 0) {
        lVar9 = 0;
      }
      else {
        uVar14 = uVar7 * 8;
        lVar9 = *(long *)(local_90 + 0x10);
        if (uVar14 < (ulong)(*(long *)(local_90 + 0x18) - lVar9) ||
            uVar14 - (*(long *)(local_90 + 0x18) - lVar9) == 0) {
          *(ulong *)(local_90 + 0x10) = lVar9 + uVar14;
        }
        else {
          lVar9 = Zone::NewExpand(local_90,uVar14);
        }
      }
      puVar1 = (undefined8 *)(lVar9 + lVar13 * 8);
      *puVar1 = uVar8;
      local_98 = (undefined8 *)(lVar9 + uVar7 * 8);
      puVar12 = puVar1;
      while (local_a0 != local_a8) {
        local_a0 = local_a0 + -1;
        puVar12 = puVar12 + -1;
        *puVar12 = *local_a0;
      }
    }
    local_a8 = puVar12;
    local_a0 = puVar1 + 1;
    pJVar10 = *(JSHeapBroker **)this;
  }
  JSHeapBroker::SetSerializedForCompilation
            (pJVar10,(SharedFunctionInfoRef *)aOStack_78,(FeedbackVectorRef *)aOStack_88,
             (ZoneVector *)&local_a8);
  if (local_a8 != (undefined8 *)0x0) {
    local_a0 = local_a8;
  }
  if (((byte)this[0x68] >> 1 & 1) != 0) {
    uVar15 = **(undefined8 **)this;
    uVar8 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)aOStack_78);
    SharedFunctionInfo::EnsureSourcePositionsAvailable(uVar15,uVar8);
  }
  FeedbackVectorRef::Serialize((FeedbackVectorRef *)aOStack_88);
  TraverseBytecode(this);
  pHVar16 = (Hints *)(this + 0x90);
  plVar11 = *(long **)pHVar16;
  if (plVar11 == (long *)0x0) {
    bVar3 = true;
  }
  else if ((((*plVar11 == 0) && (plVar11[1] == 0)) && (plVar11[2] == 0)) && (plVar11[3] == 0)) {
    bVar3 = plVar11[4] == 0;
  }
  else {
    bVar3 = false;
  }
  pJVar10 = *(JSHeapBroker **)this;
  if (bVar3) {
    if (pJVar10[0x74] != (JSHeapBroker)0x0 && FLAG_trace_heap_broker_verbose != '\0') {
      pbVar5 = (basic_ostream *)JSHeapBroker::Trace(pJVar10);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"Return value hints: none",0x18);
LAB_012bd4e4:
      local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,10);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar5,(char *)&local_a8,1);
    }
  }
  else if (pJVar10[0x74] != (JSHeapBroker)0x0 && FLAG_trace_heap_broker_verbose != '\0') {
    pbVar5 = (basic_ostream *)JSHeapBroker::Trace(pJVar10);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"Return value hints: ",0x14);
    pbVar5 = (basic_ostream *)compiler::operator<<(pbVar5,pHVar16);
    goto LAB_012bd4e4;
  }
  if (((*(JSHeapBroker **)this)[0x74] != (JSHeapBroker)0x0) &&
     (FLAG_trace_heap_broker_memory != '\0')) {
    pbVar5 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)this);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"[serializer end] Broker zone usage: ",0x24);
    plVar11 = *(long **)(*(long *)this + 0x10);
    lVar13 = 0;
    if (plVar11[5] != 0) {
      lVar13 = (plVar11[2] - plVar11[5]) + -0x18;
    }
    pbVar6 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *plVar11 + lVar13);
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_a8,(id *)&std::__ndk1::ctype<char>::id);
    cVar4 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)&local_a8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(pbVar6,cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(pbVar6);
  }
  uVar8 = *(undefined8 *)pHVar16;
LAB_012bd5a4:
  JSHeapBroker::DecrementTracingIndentation(local_68);
  return uVar8;
}

