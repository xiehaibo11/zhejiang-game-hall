
/* v8::internal::compiler::JSCallReducer::ReduceFunctionPrototypeBind(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceFunctionPrototypeBind
          (JSCallReducer *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  Node *pNVar12;
  Node *pNVar13;
  Node *pNVar14;
  Node *pNVar15;
  Node *pNVar16;
  ulong uVar17;
  Zone *this_00;
  undefined8 uVar18;
  Operator *pOVar19;
  basic_ostream *pbVar20;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_01;
  long *plVar21;
  locale *this_02;
  Node **ppNVar22;
  long lVar23;
  Graph *this_03;
  JSOperatorBuilder *pJVar24;
  undefined1 auVar25 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ObjectRef aOStack_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ObjectRef aOStack_b8 [16];
  Node *local_a8;
  MapInference aMStack_a0 [48];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar11 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar11 + 3) >> 4 & 1) != 0) {
    pNVar15 = (Node *)0x0;
    goto LAB_016dcad8;
  }
  pNVar12 = (Node *)NodeProperties::GetValueInput(param_1,1);
  if (*(int *)(*(long *)param_1 + 0x14) < 3) {
    pNVar13 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar13 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  pNVar14 = (Node *)NodeProperties::GetContextInput(param_1);
  pNVar15 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  local_a8 = pNVar15;
  pNVar16 = (Node *)NodeProperties::GetControlInput(param_1,0);
  MapInference::MapInference(aMStack_a0,*(JSHeapBroker **)(this + 0x18),pNVar12,pNVar15);
  uVar17 = MapInference::HaveMaps(aMStack_a0);
  if ((uVar17 & 1) == 0) {
    pNVar15 = (Node *)0x0;
  }
  else {
    pNVar15 = (Node *)MapInference::GetMaps(aMStack_a0);
    ObjectRef::ObjectRef(aOStack_b8,*(undefined8 *)(this + 0x18),**(undefined8 **)pNVar15,0);
    uVar17 = ObjectRef::IsMap(aOStack_b8);
    if ((uVar17 & 1) == 0) {
LAB_016dcb1c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    uVar8 = MapRef::is_constructor((MapRef *)aOStack_b8);
    if ((FLAG_concurrent_inlining == '\0') ||
       (uVar17 = MapRef::serialized_prototype((MapRef *)aOStack_b8), (uVar17 & 1) != 0)) {
      local_c8 = MapRef::prototype((MapRef *)aOStack_b8);
      puVar2 = *(undefined8 **)(pNVar15 + 8);
      for (puVar1 = *(undefined8 **)pNVar15; puVar1 != puVar2; puVar1 = puVar1 + 1) {
        ObjectRef::ObjectRef((ObjectRef *)local_d8,*(undefined8 *)(this + 0x18),*puVar1,0);
        uVar17 = ObjectRef::IsMap((ObjectRef *)local_d8);
        if ((uVar17 & 1) == 0) goto LAB_016dcb1c;
        if ((FLAG_concurrent_inlining != '\0') &&
           (uVar17 = MapRef::serialized_prototype((MapRef *)local_d8), (uVar17 & 1) == 0)) {
          if ((*(JSHeapBroker **)(this + 0x18))[0x74] == (JSHeapBroker)0x0) goto LAB_016dcac4;
          pbVar20 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
          pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar20,"Missing ",8);
          pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar20,"serialized prototype on map ",0x1c);
          pbVar20 = (basic_ostream *)compiler::operator<<(pbVar20,(ObjectRef *)local_d8);
          pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar20," (",2);
          pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar20,"../../src/compiler/js-call-reducer.cc",0x25);
          this_01 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar20,":",1);
          iVar10 = 0x5ea;
LAB_016dca58:
          pbVar20 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              (this_01,iVar10);
          pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar20,")",1);
          std::__ndk1::ios_base::getloc();
          plVar21 = (long *)std::__ndk1::locale::use_facet
                                      ((locale *)local_e8,(id *)&std::__ndk1::ctype<char>::id);
          cVar6 = (**(code **)(*plVar21 + 0x38))(plVar21,10);
          this_02 = (locale *)local_e8;
          goto LAB_016dcaac;
        }
        auVar25 = MapRef::prototype((MapRef *)local_d8);
        local_e8 = auVar25;
        uVar17 = ObjectRef::equals((ObjectRef *)local_e8,(ObjectRef *)local_c8);
        if (((((uVar17 & 1) == 0) ||
             (uVar9 = MapRef::is_constructor((MapRef *)local_d8), ((uVar8 ^ uVar9) & 1) != 0)) ||
            (uVar7 = MapRef::instance_type((MapRef *)local_d8), uVar7 < 0x438)) ||
           ((uVar17 = MapRef::is_dictionary_map((MapRef *)local_d8), (uVar17 & 1) != 0 ||
            (iVar10 = MapRef::NumberOfOwnDescriptors((MapRef *)local_d8), iVar10 < 2))))
        goto LAB_016dcac4;
        uVar17 = MapRef::serialized_own_descriptor((MapRef *)local_d8,0);
        if (((uVar17 & 1) == 0) ||
           (uVar17 = MapRef::serialized_own_descriptor((MapRef *)local_d8,1), (uVar17 & 1) == 0)) {
          if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
            pbVar20 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
            pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar20,"Missing ",8);
            pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar20,"serialized descriptors on map ",0x1e);
            pbVar20 = (basic_ostream *)compiler::operator<<(pbVar20,(ObjectRef *)local_d8);
            pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar20," (",2);
            pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar20,"../../src/compiler/js-call-reducer.cc",0x25);
            this_01 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar20,":",1);
            iVar10 = 0x60a;
            goto LAB_016dca58;
          }
          goto LAB_016dcac4;
        }
        lVar23 = *(long *)(*(long *)(this + 0x10) + 0x168);
        ObjectRef::ObjectRef((ObjectRef *)local_e8,*(undefined8 *)(this + 0x18),lVar23 + 0x7b8,0);
        uVar17 = ObjectRef::IsString((ObjectRef *)local_e8);
        if ((uVar17 & 1) == 0) {
LAB_016dcb30:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsString()");
        }
        ObjectRef::ObjectRef(aOStack_f8,*(undefined8 *)(this + 0x18),lVar23 + 0x820,0);
        uVar17 = ObjectRef::IsString(aOStack_f8);
        if ((uVar17 & 1) == 0) goto LAB_016dcb30;
        auVar25 = MapRef::GetPropertyKey((MapRef *)local_d8,0);
        local_108 = auVar25;
        uVar17 = ObjectRef::equals((ObjectRef *)local_108,(ObjectRef *)local_e8);
        if ((uVar17 & 1) == 0) {
LAB_016dc714:
          pNVar15 = (Node *)MapInference::NoChange(aMStack_a0);
          bVar5 = false;
        }
        else {
          auVar25 = MapRef::GetStrongValue((MapRef *)local_d8,0);
          local_118 = auVar25;
          uVar17 = ObjectRef::IsAccessorInfo((ObjectRef *)local_118);
          if ((uVar17 & 1) == 0) goto LAB_016dc714;
          auVar25 = MapRef::GetPropertyKey((MapRef *)local_d8,1);
          local_128 = auVar25;
          uVar17 = ObjectRef::equals((ObjectRef *)local_128,aOStack_f8);
          if ((uVar17 & 1) == 0) goto LAB_016dc714;
          bVar5 = true;
          auVar25 = MapRef::GetStrongValue((MapRef *)local_d8,1);
          local_138 = auVar25;
          uVar17 = ObjectRef::IsAccessorInfo((ObjectRef *)local_138);
          if ((uVar17 & 1) == 0) goto LAB_016dc714;
        }
        if (!bVar5) goto LAB_016dcad0;
      }
      lVar23 = *(long *)(this + 0x18);
      if (*(char *)(lVar23 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      local_e8._0_8_ = *(undefined8 *)(lVar23 + 0x20);
      local_e8._8_8_ = *(undefined8 *)(lVar23 + 0x28);
      if ((uVar8 & 1) == 0) {
        local_d8 = NativeContextRef::bound_function_without_constructor_map
                             ((NativeContextRef *)local_e8);
      }
      else {
        local_d8 = NativeContextRef::bound_function_with_constructor_map
                             ((NativeContextRef *)local_e8);
      }
      local_e8 = MapRef::prototype((MapRef *)local_d8);
      uVar17 = ObjectRef::equals((ObjectRef *)local_e8,(ObjectRef *)local_c8);
      if ((uVar17 & 1) != 0) {
        MapInference::RelyOnMapsPreferStability
                  (aMStack_a0,*(CompilationDependencies **)(this + 0x30),*(JSGraph **)(this + 0x10),
                   &local_a8,pNVar16,(FeedbackSource *)(lVar11 + 8));
        uVar8 = *(uint *)(*(long *)param_1 + 0x14);
        this_00 = *(Zone **)**(undefined8 **)(this + 0x10);
        if ((int)uVar8 < 4) {
          uVar8 = 3;
        }
        ppNVar22 = *(Node ***)(this_00 + 0x10);
        uVar9 = uVar8 + 2;
        uVar17 = (ulong)uVar9 * 8;
        uVar3 = uVar8 - 3;
        if (uVar17 < (ulong)(*(long *)(this_00 + 0x18) - (long)ppNVar22) ||
            uVar17 - (*(long *)(this_00 + 0x18) - (long)ppNVar22) == 0) {
          *(Node ***)(this_00 + 0x10) = ppNVar22 + uVar9;
        }
        else {
          ppNVar22 = (Node **)Zone::NewExpand(this_00,uVar17);
        }
        *ppNVar22 = pNVar12;
        ppNVar22[1] = pNVar13;
        if (0 < (int)uVar3) {
          uVar17 = 0;
          do {
            pNVar15 = (Node *)NodeProperties::GetValueInput(param_1,(int)uVar17 + 3);
            ppNVar22[uVar17 + 2] = pNVar15;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar3);
        }
        ppNVar22[(int)(uVar8 - 1)] = pNVar14;
        ppNVar22[uVar8] = local_a8;
        ppNVar22[uVar8 + 1] = pNVar16;
        this_03 = (Graph *)**(undefined8 **)(this + 0x10);
        pJVar24 = (JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e];
        uVar18 = MapRef::object((MapRef *)local_d8);
        pOVar19 = (Operator *)
                  JSOperatorBuilder::CreateBoundFunction(pJVar24,(long)(int)uVar3,uVar18);
        pNVar15 = (Node *)Graph::NewNode(this_03,pOVar19,uVar9,ppNVar22,false);
        local_a8 = pNVar15;
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,pNVar15,pNVar15,pNVar16);
        goto LAB_016dcad0;
      }
    }
    else if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
      pbVar20 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
      pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar20,"Missing ",8);
      pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar20,"serialized prototype on map ",0x1c);
      pbVar20 = (basic_ostream *)compiler::operator<<(pbVar20,aOStack_b8);
      pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar20," (",2);
      pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar20,"../../src/compiler/js-call-reducer.cc",0x25);
      pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar20,":",1);
      pbVar20 = (basic_ostream *)
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar20,0x5e1);
      pbVar20 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar20,")",1);
      std::__ndk1::ios_base::getloc();
      plVar21 = (long *)std::__ndk1::locale::use_facet
                                  ((locale *)local_c8,(id *)&std::__ndk1::ctype<char>::id);
      cVar6 = (**(code **)(*plVar21 + 0x38))(plVar21,10);
      this_02 = (locale *)local_c8;
LAB_016dcaac:
      std::__ndk1::locale::~locale(this_02);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar20,cVar6);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar20);
    }
LAB_016dcac4:
    pNVar15 = (Node *)MapInference::NoChange(aMStack_a0);
  }
LAB_016dcad0:
  MapInference::~MapInference(aMStack_a0);
LAB_016dcad8:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar15;
}

