
/* v8::internal::compiler::JSCallReducer::ReduceObjectGetPrototype(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceObjectGetPrototype
          (JSCallReducer *this,Node *param_1,Node *param_2)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  Node *pNVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  locale *this_00;
  basic_ostream *pbVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_b8 [16];
  ObjectRef aOStack_a8 [16];
  undefined1 local_98 [16];
  ObjectRef aOStack_88 [16];
  MapInference aMStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar4 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  MapInference::MapInference(aMStack_78,*(JSHeapBroker **)(this + 0x18),param_2,pNVar4);
  uVar5 = MapInference::HaveMaps(aMStack_78);
  if ((uVar5 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    plVar6 = (long *)MapInference::GetMaps(aMStack_78);
    ObjectRef::ObjectRef(aOStack_88,*(undefined8 *)(this + 0x18),*(undefined8 *)*plVar6,0);
    uVar5 = ObjectRef::IsMap(aOStack_88);
    if ((uVar5 & 1) == 0) {
LAB_016dd670:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    if ((FLAG_concurrent_inlining == '\0') ||
       (uVar5 = MapRef::serialized_prototype((MapRef *)aOStack_88), (uVar5 & 1) != 0)) {
      local_98 = MapRef::prototype((MapRef *)aOStack_88);
      lVar10 = *plVar6;
      if (plVar6[1] != lVar10) {
        uVar5 = 0;
        do {
          ObjectRef::ObjectRef
                    (aOStack_a8,*(undefined8 *)(this + 0x18),*(undefined8 *)(lVar10 + uVar5 * 8),0);
          uVar7 = ObjectRef::IsMap(aOStack_a8);
          if ((uVar7 & 1) == 0) goto LAB_016dd670;
          if ((FLAG_concurrent_inlining != '\0') &&
             (uVar7 = MapRef::serialized_prototype((MapRef *)aOStack_a8), (uVar7 & 1) == 0)) {
            if ((*(JSHeapBroker **)(this + 0x18))[0x74] == (JSHeapBroker)0x0) goto LAB_016dd56c;
            pbVar9 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
            pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar9,"Missing ",8);
            pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar9,"prototype for map ",0x12);
            pbVar9 = (basic_ostream *)compiler::operator<<(pbVar9,aOStack_a8);
            pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar9," (",2);
            pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar9,"../../src/compiler/js-call-reducer.cc",0x25);
            pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar9,":",1);
            pbVar9 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,0x69d);
            pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar9,")",1);
            std::__ndk1::ios_base::getloc();
            plVar6 = (long *)std::__ndk1::locale::use_facet
                                       ((locale *)local_b8,(id *)&std::__ndk1::ctype<char>::id);
            cVar2 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
            this_00 = (locale *)local_b8;
            goto LAB_016dd554;
          }
          uVar3 = MapRef::instance_type((MapRef *)aOStack_a8);
          if (uVar3 < 0x411) goto LAB_016dd56c;
          auVar11 = MapRef::prototype((MapRef *)aOStack_a8);
          local_b8 = auVar11;
          uVar7 = ObjectRef::equals((ObjectRef *)local_b8,(ObjectRef *)local_98);
          if ((uVar7 & 1) == 0) goto LAB_016dd56c;
          lVar10 = *plVar6;
          uVar5 = uVar5 + 1;
        } while (uVar5 < (ulong)(plVar6[1] - lVar10 >> 3));
      }
      uVar5 = MapInference::RelyOnMapsViaStability
                        (aMStack_78,*(CompilationDependencies **)(this + 0x30));
      if ((uVar5 & 1) != 0) {
        uVar8 = JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_98);
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar8,0,0);
        goto LAB_016dd578;
      }
    }
    else if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
      pbVar9 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9,"Missing ",8);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9,"prototype for map ",0x12);
      pbVar9 = (basic_ostream *)compiler::operator<<(pbVar9,aOStack_88);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9," (",2);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9,"../../src/compiler/js-call-reducer.cc",0x25);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9,":",1);
      pbVar9 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,0x694);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9,")",1);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet
                                 ((locale *)local_98,(id *)&std::__ndk1::ctype<char>::id);
      cVar2 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
      this_00 = (locale *)local_98;
LAB_016dd554:
      std::__ndk1::locale::~locale(this_00);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,cVar2);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9);
    }
LAB_016dd56c:
    uVar8 = MapInference::NoChange(aMStack_78);
  }
LAB_016dd578:
  MapInference::~MapInference(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

