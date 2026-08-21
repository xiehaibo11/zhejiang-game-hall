
/* v8::internal::compiler::JSCallReducer::DoPromiseChecks(v8::internal::compiler::MapInference*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::DoPromiseChecks(JSCallReducer *this,MapInference *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  basic_ostream *pbVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  ObjectRef aOStack_40 [16];
  
  uVar4 = MapInference::HaveMaps(param_1);
  if ((uVar4 & 1) == 0) {
LAB_016f5060:
    uVar6 = 0;
  }
  else {
    plVar5 = (long *)MapInference::GetMaps(param_1);
    puVar2 = (undefined8 *)plVar5[1];
    for (puVar1 = (undefined8 *)*plVar5; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      ObjectRef::ObjectRef(aOStack_40,*(undefined8 *)(this + 0x18),*puVar1,0);
      uVar4 = ObjectRef::IsMap(aOStack_40);
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      uVar4 = MapRef::IsJSPromiseMap((MapRef *)aOStack_40);
      if ((uVar4 & 1) == 0) goto LAB_016f5060;
      if (FLAG_concurrent_inlining != '\0') {
        uVar4 = MapRef::serialized_prototype((MapRef *)aOStack_40);
        if ((uVar4 & 1) == 0) {
          if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
            pbVar7 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
            pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar7,"Missing ",8);
            pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar7,"prototype for map ",0x12);
            pbVar7 = (basic_ostream *)compiler::operator<<(pbVar7,aOStack_40);
            pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar7," (",2);
            pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar7,"../../src/compiler/js-call-reducer.cc",0x25);
            pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar7,":",1);
            pbVar7 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,0x187d)
            ;
            pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar7,")",1);
            std::__ndk1::ios_base::getloc();
            plVar5 = (long *)std::__ndk1::locale::use_facet
                                       ((locale *)local_50,(id *)&std::__ndk1::ctype<char>::id);
            cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
            std::__ndk1::locale::~locale((locale *)local_50);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,cVar3);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7);
          }
          goto LAB_016f5060;
        }
      }
      auVar9 = MapRef::prototype((MapRef *)aOStack_40);
      lVar8 = *(long *)(this + 0x18);
      local_50 = auVar9;
      if (*(char *)(lVar8 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      uStack_68 = *(undefined8 *)(lVar8 + 0x28);
      local_70 = *(undefined8 *)(lVar8 + 0x20);
      auVar9 = NativeContextRef::promise_prototype((NativeContextRef *)&local_70);
      local_60 = auVar9;
      uVar4 = ObjectRef::equals((ObjectRef *)local_50,(ObjectRef *)local_60);
      if ((uVar4 & 1) == 0) goto LAB_016f5060;
    }
    uVar6 = 1;
  }
  return uVar6;
}

