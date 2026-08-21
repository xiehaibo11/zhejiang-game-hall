
/* v8::internal::compiler::NodeProperties::GetJSCreateMap(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::NodeProperties::GetJSCreateMap
          (NodeProperties *this,JSHeapBroker *param_1,Node *param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  undefined1 *in_x8;
  JSHeapBroker *pJVar7;
  JSHeapBroker *pJVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  ObjectRef local_70 [16];
  HeapObjectRef local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  
  pJVar8 = param_1 + 0x20;
  pJVar7 = pJVar8;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pJVar7 = (JSHeapBroker *)(*(long *)pJVar8 + 0x10);
  }
  sVar1 = *(short *)(**(long **)pJVar7 + 0x10);
  if (sVar1 == 0x1e) {
    uVar9 = *(undefined8 *)(**(long **)pJVar7 + 0x30);
  }
  else {
    uVar9 = 0;
  }
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pJVar8 = (JSHeapBroker *)(*(long *)pJVar8 + 0x10);
  }
  sVar2 = *(short *)(**(long **)(pJVar8 + 8) + 0x10);
  if (sVar2 == 0x1e) {
    uVar10 = *(undefined8 *)(**(long **)(pJVar8 + 8) + 0x30);
  }
  else {
    uVar10 = 0;
  }
  if ((sVar1 == 0x1e) && (sVar2 == 0x1e)) {
    ObjectRef::ObjectRef((ObjectRef *)local_40,this,uVar10,0);
    uVar4 = ObjectRef::IsHeapObject((ObjectRef *)local_40);
    if ((uVar4 & 1) != 0) {
      local_50 = local_40._0_8_;
      uStack_48 = local_40._8_8_;
      uVar4 = ObjectRef::IsJSFunction((ObjectRef *)&local_50);
      if ((uVar4 & 1) == 0) goto LAB_01798e68;
      ObjectRef::ObjectRef((ObjectRef *)local_40,this,uVar9,0);
      uVar4 = ObjectRef::IsHeapObject((ObjectRef *)local_40);
      if ((uVar4 & 1) != 0) {
        local_50 = local_40._0_8_;
        uStack_48 = local_40._8_8_;
        ObjectRef::ObjectRef((ObjectRef *)local_40,this,uVar10,0);
        uVar4 = ObjectRef::IsHeapObject((ObjectRef *)local_40);
        if ((uVar4 & 1) != 0) {
          local_60 = (HeapObjectRef  [16])ObjectRef::AsJSFunction((ObjectRef *)local_40);
          local_40 = HeapObjectRef::map(local_60);
          uVar4 = MapRef::has_prototype_slot((MapRef *)local_40);
          if ((uVar4 & 1) != 0) {
            uVar4 = JSFunctionRef::has_initial_map((JSFunctionRef *)local_60);
            if ((uVar4 & 1) != 0) {
              uVar4 = JSFunctionRef::serialized((JSFunctionRef *)local_60);
              if ((uVar4 & 1) == 0) {
                if (this[0x74] != (NodeProperties)0x0) {
                  pbVar5 = (basic_ostream *)JSHeapBroker::Trace((JSHeapBroker *)this);
                  pbVar5 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (pbVar5,"Missing ",8);
                  pbVar5 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (pbVar5,"initial map on ",0xf);
                  pbVar5 = (basic_ostream *)compiler::operator<<(pbVar5,(ObjectRef *)local_60);
                  pbVar5 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (pbVar5," (",2);
                  pbVar5 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (pbVar5,"../../src/compiler/node-properties.cc",0x25);
                  pbVar5 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (pbVar5,":",1);
                  pbVar5 = (basic_ostream *)
                           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                           operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                                      0x180);
                  pbVar5 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (pbVar5,")",1);
                  std::__ndk1::ios_base::getloc();
                  plVar6 = (long *)std::__ndk1::locale::use_facet
                                             ((locale *)local_40,(id *)&std::__ndk1::ctype<char>::id
                                             );
                  cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
                  std::__ndk1::locale::~locale((locale *)local_40);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,cVar3);
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5);
                }
              }
              else {
                auVar11 = JSFunctionRef::initial_map((JSFunctionRef *)local_60);
                local_40 = auVar11;
                local_70 = (ObjectRef  [16])MapRef::GetConstructor((MapRef *)local_40);
                uVar4 = ObjectRef::equals(local_70,(ObjectRef *)&local_50);
                if ((uVar4 & 1) != 0) {
                  *in_x8 = 1;
                  *(undefined1 (*) [16])(in_x8 + 8) = local_40;
                  return;
                }
              }
            }
          }
          goto LAB_01798e68;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
LAB_01798e68:
  *in_x8 = 0;
  in_x8[8] = 0;
  return;
}

