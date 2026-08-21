
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSGetSuperConstructor(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSGetSuperConstructor
          (JSNativeContextSpecialization *this,Node *param_1)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  basic_ostream *pbVar5;
  HeapObjectRef local_70 [16];
  MapRef local_60 [16];
  ObjectRef local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  plVar2 = (long *)NodeProperties::GetValueInput(param_1,0);
  if (*(short *)(*plVar2 + 0x10) == 0x1e) {
    ObjectRef::ObjectRef
              ((ObjectRef *)local_30,*(undefined8 *)(this + 0x18),*(undefined8 *)(*plVar2 + 0x30),0)
    ;
    uVar3 = ObjectRef::IsHeapObject((ObjectRef *)local_30);
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    local_40._0_8_ = local_30._0_8_;
    local_40._8_8_ = local_30._8_8_;
    local_30 = ObjectRef::AsJSFunction((ObjectRef *)local_40);
    local_40 = HeapObjectRef::map((HeapObjectRef *)local_30);
    if (FLAG_concurrent_inlining != '\0') {
      uVar3 = MapRef::serialized_prototype((MapRef *)local_40);
      if ((uVar3 & 1) == 0) {
        if ((*(JSHeapBroker **)(this + 0x18))[0x74] == (JSHeapBroker)0x0) {
          return 0;
        }
        pbVar5 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,"Missing ",8);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,"data for map ",0xd);
        pbVar5 = (basic_ostream *)compiler::operator<<(pbVar5,(ObjectRef *)local_40);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5," (",2);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,"../../src/compiler/js-native-context-specialization.cc",0x36);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,":",1);
        pbVar5 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,0x163);
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar5,")",1);
        std::__ndk1::ios_base::getloc();
        plVar2 = (long *)std::__ndk1::locale::use_facet
                                   ((locale *)local_50,(id *)&std::__ndk1::ctype<char>::id);
        cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,10);
        std::__ndk1::locale::~locale((locale *)local_50);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,cVar1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5);
        return 0;
      }
    }
    local_50 = (ObjectRef  [16])MapRef::prototype((MapRef *)local_40);
    uVar3 = MapRef::is_stable((MapRef *)local_40);
    if ((uVar3 & 1) != 0) {
      uVar3 = ObjectRef::IsHeapObject(local_50);
      if ((uVar3 & 1) != 0) {
        local_70 = (HeapObjectRef  [16])ObjectRef::AsHeapObject(local_50);
        local_60 = (MapRef  [16])HeapObjectRef::map(local_70);
        uVar3 = MapRef::is_constructor(local_60);
        if ((uVar3 & 1) != 0) {
          CompilationDependencies::DependOnStableMap
                    (*(CompilationDependencies **)(this + 0x38),local_40);
          uVar4 = JSGraph::Constant(*(JSGraph **)(this + 0x10),local_50);
          (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar4,0,0);
          return uVar4;
        }
      }
    }
  }
  return 0;
}

