
/* v8::internal::compiler::JSNativeContextSpecialization::InferHasInPrototypeChain(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::HeapObjectRef const&) */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::InferHasInPrototypeChain
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,HeapObjectRef *param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  basic_ostream *pbVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 local_98;
  undefined4 local_97;
  undefined3 uStack_93;
  ulong local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  ulong local_70;
  undefined1 local_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = 1;
  iVar7 = NodeProperties::InferReceiverMapsUnsafe
                    (*(JSHeapBroker **)(this + 0x18),param_1,param_2,(ZoneHandleSet *)&local_70);
  if (iVar7 != 0) {
    uVar13 = 0;
    bVar2 = true;
    bVar3 = true;
    uVar10 = extraout_x1;
LAB_017497e0:
    uVar12 = local_70 & 3;
    if (uVar12 != 1) {
      if (uVar12 == 0) {
        if (uVar13 != 0) goto LAB_01749a24;
      }
      else if ((ulong)(*(long *)(local_70 + 6) - *(long *)(local_70 - 2) >> 3) <= uVar13)
      goto LAB_01749a24;
      uVar11 = local_70;
      if (uVar12 != 0) {
        if ((ulong)(*(long *)(local_70 + 6) - *(long *)(local_70 - 2) >> 3) <=
            (ulong)(long)(int)uVar13) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar11 = *(ulong *)(*(long *)(local_70 - 2) + (long)(int)uVar13 * 8);
      }
      ObjectRef::ObjectRef((ObjectRef *)local_80,*(undefined8 *)(this + 0x18),uVar11,0);
      uVar12 = ObjectRef::IsMap((ObjectRef *)local_80);
      if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      if (iVar7 == 2) {
        uVar12 = MapRef::is_stable((MapRef *)local_80);
        if ((uVar12 & 1) == 0) goto LAB_017499f4;
      }
      do {
        uVar6 = MapRef::instance_type((MapRef *)local_80);
        if (uVar6 < 0x411) goto LAB_017499f4;
        auVar14 = MapRef::IsJSObjectMap((MapRef *)local_80);
        uVar10 = auVar14._8_8_;
        if ((auVar14._0_8_ & 1) == 0) break;
        if (FLAG_concurrent_inlining != '\0') {
          uVar12 = MapRef::serialized_prototype((MapRef *)local_80);
          if ((uVar12 & 1) == 0) {
            if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
              pbVar8 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"Missing ",8);
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"prototype data for map ",0x17);
              pbVar8 = (basic_ostream *)compiler::operator<<(pbVar8,(ObjectRef *)local_80);
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8," (",2);
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,"../../src/compiler/js-native-context-specialization.cc",
                                  0x36);
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,":",1);
              pbVar8 = (basic_ostream *)
                       std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                 ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,0x215
                                 );
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (pbVar8,")",1);
              std::__ndk1::ios_base::getloc();
              plVar9 = (long *)std::__ndk1::locale::use_facet
                                         ((locale *)local_68,(id *)&std::__ndk1::ctype<char>::id);
              cVar4 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
              std::__ndk1::locale::~locale((locale *)local_68);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,cVar4);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8);
            }
            goto LAB_017499f4;
          }
        }
        auVar14 = MapRef::prototype((MapRef *)local_80);
        local_68 = auVar14;
        auVar14 = ObjectRef::equals((ObjectRef *)local_68,(ObjectRef *)param_3);
        uVar10 = auVar14._8_8_;
        if ((auVar14._0_8_ & 1) != 0) {
          bVar2 = false;
          uVar13 = uVar13 + 1;
          goto LAB_017497e0;
        }
        auVar14 = MapRef::prototype((MapRef *)local_80);
        local_68 = auVar14;
        auVar14 = HeapObjectRef::map((HeapObjectRef *)local_68);
        local_80 = auVar14;
        uVar12 = MapRef::is_stable((MapRef *)local_80);
        if ((uVar12 & 1) == 0) goto LAB_017499f4;
        cVar4 = MapRef::oddball_type((MapRef *)local_80);
        uVar10 = extraout_x1_00;
      } while (cVar4 != '\x03');
      bVar3 = false;
      uVar13 = uVar13 + 1;
      goto LAB_017497e0;
    }
LAB_01749a24:
    if (bVar2 || bVar3) {
      if (bVar3) {
        auVar14 = HeapObjectRef::map(param_3);
        local_80 = auVar14;
        uVar13 = MapRef::is_stable((MapRef *)local_80);
        if ((uVar13 & 1) == 0) goto LAB_017499f4;
        auVar14 = ObjectRef::AsJSObject((ObjectRef *)param_3);
        uVar10 = auVar14._8_8_;
        local_90 = auVar14._0_8_ & 0xffffffffffffff00;
        uVar13 = auVar14._0_8_ & 0xff;
        local_98 = 1;
      }
      else {
        local_98 = 0;
        uVar13 = 0;
        local_90 = 0;
      }
      local_90 = local_90 | uVar13;
      uStack_93 = local_68._4_3_;
      local_97 = local_68._0_4_;
      uStack_88 = uVar10;
      CompilationDependencies::
      DependOnStablePrototypeChains<v8::internal::ZoneHandleSet<v8::internal::Map>>
                (*(CompilationDependencies **)(this + 0x38),&local_70,iVar7 != 2,&local_98);
      bVar5 = ~bVar3;
      goto LAB_017499f8;
    }
  }
LAB_017499f4:
  bVar5 = 2;
LAB_017499f8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
}

