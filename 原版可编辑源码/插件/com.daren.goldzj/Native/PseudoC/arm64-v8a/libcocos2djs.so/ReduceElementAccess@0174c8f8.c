
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceElementAccess(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::ElementAccessFeedback const&) */

Node * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceElementAccess
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,Node *param_3,
          ElementAccessFeedback *param_4)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  Node *pNVar9;
  Operator *pOVar10;
  long *plVar11;
  ElementAccessFeedback *this_00;
  Node *pNVar12;
  ulong uVar13;
  basic_ostream *pbVar14;
  undefined8 uVar15;
  Node *pNVar16;
  long lVar17;
  Node *pNVar18;
  Zone *this_01;
  Node **ppNVar19;
  ulong uVar20;
  ulong uVar21;
  Node **ppNVar22;
  Node **ppNVar23;
  long lVar24;
  Node **ppNVar25;
  undefined8 *puVar26;
  Node *pNVar27;
  Graph *pGVar28;
  Node **ppNVar29;
  ElementAccessInfo *pEVar30;
  Node **ppNVar31;
  ElementAccessInfo *pEVar32;
  undefined8 *puVar33;
  SimplifiedOperatorBuilder *pSVar34;
  Node **ppNVar35;
  Node **ppNVar36;
  Node **ppNVar37;
  ZoneVector *local_1d8;
  Node **local_1d0;
  Node **local_1c8;
  Node **local_1c0;
  Node **local_1b8;
  Node **local_1b0;
  Node **local_1a8;
  Node *local_180;
  byte local_178 [8];
  undefined8 local_170;
  undefined8 uStack_168;
  byte local_160 [8];
  undefined8 local_158;
  undefined8 uStack_150;
  Node *local_148 [2];
  undefined8 local_138 [2];
  Node *local_128;
  Node *local_120;
  Node *local_118;
  undefined8 uStack_110;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ElementAccessInfo *local_c8;
  ElementAccessInfo *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  AccessInfoFactory aAStack_a8 [32];
  Node *local_88;
  Node *local_80;
  Node *local_78;
  Node *local_70;
  
  pNVar9 = (Node *)NodeProperties::GetValueInput(param_1,0);
  local_88 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  local_180 = (Node *)NodeProperties::GetControlInput(param_1,0);
  puVar26 = *(undefined8 **)(this + 0x10);
  pNVar18 = (Node *)puVar26[0x2c];
  if (pNVar18 == (Node *)0x0) {
    pGVar28 = (Graph *)*puVar26;
    pOVar10 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar26[1]);
    local_128 = (Node *)0x0;
    pNVar18 = (Node *)Graph::NewNode(pGVar28,pOVar10,0,&local_128,false);
    puVar26[0x2c] = pNVar18;
  }
  pNVar18 = (Node *)NodeProperties::FindFrameStateBefore(param_1,pNVar18);
  plVar11 = (long *)ElementAccessFeedback::transition_groups(param_4);
  if (*plVar11 == plVar11[1]) {
    return (Node *)0x0;
  }
  pNVar16 = local_88;
  this_00 = (ElementAccessFeedback *)TryRefineElementAccessFeedback(this,param_4,pNVar9,local_88);
  local_128 = (Node *)ElementAccessFeedback::keyed_mode(this_00);
  uVar4 = KeyedAccessMode::access_mode((KeyedAccessMode *)&local_128);
  pNVar27 = (Node *)(ulong)uVar4;
  if (((uVar4 == 3) || (uVar4 == 0)) && (*(short *)(*(long *)pNVar9 + 0x10) == 0x1e)) {
    local_128 = (Node *)ElementAccessFeedback::keyed_mode(this_00);
    uVar5 = KeyedAccessMode::load_mode((KeyedAccessMode *)&local_128);
    pNVar12 = (Node *)ReduceElementLoadFromHeapConstant(this,param_1,param_2,pNVar27,uVar5);
    pNVar16 = pNVar27;
    if (pNVar12 != (Node *)0x0) {
      return pNVar12;
    }
  }
  plVar11 = (long *)ElementAccessFeedback::transition_groups(this_00);
  if ((*plVar11 != plVar11[1]) &&
     (uVar13 = ElementAccessFeedback::HasOnlyStringMaps(this_00,*(JSHeapBroker **)(this + 0x18)),
     (uVar13 & 1) != 0)) {
    local_128 = (Node *)ElementAccessFeedback::keyed_mode(this_00);
    pNVar9 = (Node *)ReduceElementAccessOnString
                               (this,param_1,param_2,pNVar16,(KeyedAccessMode *)&local_128);
    return pNVar9;
  }
  AccessInfoFactory::AccessInfoFactory
            (aAStack_a8,*(JSHeapBroker **)(this + 0x18),*(CompilationDependencies **)(this + 0x38),
             *(Zone **)**(undefined8 **)(this + 0x10));
  uStack_b0 = *(undefined8 *)(this + 0x40);
  local_c8 = (ElementAccessInfo *)0x0;
  local_c0 = (ElementAccessInfo *)0x0;
  local_b8 = 0;
  uVar13 = AccessInfoFactory::ComputeElementAccessInfos(aAStack_a8,this_00,(ZoneVector *)&local_c8);
  pEVar30 = local_c0;
  if (((uVar13 & 1) == 0) || (local_c8 == local_c0)) {
joined_r0x0174cb10:
    pNVar9 = (Node *)0x0;
  }
  else {
    if (uVar4 == 1) {
      uStack_110 = *(undefined8 *)(this + 0x40);
      local_128 = (Node *)0x0;
      local_120 = (Node *)0x0;
      local_118 = (Node *)0x0;
      pEVar32 = local_c8;
      do {
        puVar33 = *(undefined8 **)(pEVar32 + 0x10);
        pNVar16 = local_120;
        for (puVar26 = *(undefined8 **)(pEVar32 + 8); local_120 = pNVar16, puVar26 != puVar33;
            puVar26 = puVar26 + 1) {
          ObjectRef::ObjectRef((ObjectRef *)&local_80,*(undefined8 *)(this + 0x18),*puVar26,0);
          uVar13 = ObjectRef::IsMap((ObjectRef *)&local_80);
          if ((uVar13 & 1) == 0) goto LAB_0174d954;
          bVar2 = MapRef::elements_kind((MapRef *)&local_80);
          if ((bVar2 == 0xc) || ((bVar2 & bVar2 < 0xc) != 0)) {
LAB_0174cba8:
            uVar13 = MapRef::HasOnlyStablePrototypesWithFastElements
                               ((MapRef *)&local_80,(ZoneVector *)&local_128);
            if ((uVar13 & 1) == 0) {
              bVar1 = true;
              goto joined_r0x0174cc2c;
            }
          }
          else {
            local_e0 = ElementAccessFeedback::keyed_mode(param_4);
            iVar6 = KeyedAccessMode::store_mode((KeyedAccessMode *)&local_e0);
            if (iVar6 == 1) goto LAB_0174cba8;
          }
          pNVar16 = local_120;
        }
        pEVar32 = pEVar32 + 0x48;
        pNVar27 = local_128;
      } while (pEVar32 != pEVar30);
      for (; pNVar27 != pNVar16; pNVar27 = pNVar27 + 0x10) {
        CompilationDependencies::DependOnStableMap
                  (*(CompilationDependencies **)(this + 0x38),pNVar27);
      }
      bVar1 = false;
joined_r0x0174cc2c:
      if (local_128 != (Node *)0x0) {
        local_120 = local_128;
      }
      if (bVar1) goto joined_r0x0174cb10;
    }
    else {
      pEVar30 = local_c8;
      if (uVar4 == 3) {
        do {
          pEVar32 = pEVar30 + 0x48;
          if ((byte)*pEVar30 < 6) {
            uVar13 = CompilationDependencies::DependOnNoElementsProtector
                               (*(CompilationDependencies **)(this + 0x38));
            if ((uVar13 & 1) == 0) goto joined_r0x0174cb10;
            break;
          }
          pEVar30 = pEVar32;
        } while (local_c0 != pEVar32);
      }
    }
    pEVar30 = local_c0;
    if (local_c8 != local_c0) {
      pEVar32 = local_c8;
      do {
        if ((byte)*pEVar32 - 0x11 < 0xb) {
          FUN_0174dd70(&local_128,*(undefined8 *)(this + 0x18),pNVar9);
          if (((local_128._0_1_ != (KeyedAccessMode)0x0) && (FLAG_concurrent_inlining != '\0')) &&
             (uVar13 = JSTypedArrayRef::serialized((JSTypedArrayRef *)&local_120), (uVar13 & 1) == 0
             )) {
            if ((*(JSHeapBroker **)(this + 0x18))[0x74] != (JSHeapBroker)0x0) {
              pbVar14 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
              pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar14,"Missing ",8);
              pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar14,"data for typed array ",0x15);
              pbVar14 = (basic_ostream *)compiler::operator<<(pbVar14,(ObjectRef *)&local_120);
              pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar14," (",2);
              pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar14,"../../src/compiler/js-native-context-specialization.cc",
                                   0x36);
              pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar14,":",1);
              pbVar14 = (basic_ostream *)
                        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar14,
                                   0x688);
              pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (pbVar14,")",1);
              std::__ndk1::ios_base::getloc();
              plVar11 = (long *)std::__ndk1::locale::use_facet
                                          ((locale *)&local_80,(id *)&std::__ndk1::ctype<char>::id);
              cVar3 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
              std::__ndk1::locale::~locale((locale *)&local_80);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar14,cVar3);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar14);
            }
            goto joined_r0x0174cb10;
          }
        }
        pEVar32 = pEVar32 + 0x48;
      } while (pEVar30 != pEVar32);
    }
    pEVar30 = local_c8;
    local_e0 = *(undefined8 *)(this + 0x10);
    uStack_d8 = *(undefined8 *)(this + 0x18);
    local_d0 = *(undefined8 *)(this + 0x38);
    if ((long)local_c0 - (long)local_c8 == 0x48) {
      ElementAccessInfo::ElementAccessInfo((ElementAccessInfo *)&local_128,local_c8);
      ObjectRef::ObjectRef
                ((ObjectRef *)local_138,*(undefined8 *)(this + 0x18),*(undefined8 *)local_120,0);
      uVar13 = ObjectRef::IsMap((ObjectRef *)local_138);
      puVar33 = local_f8;
      puVar26 = local_100;
      pNVar16 = local_88;
      if ((uVar13 & 1) == 0) {
LAB_0174d954:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      for (; local_88 = pNVar16, puVar26 != puVar33; puVar26 = puVar26 + 1) {
        ObjectRef::ObjectRef((ObjectRef *)local_148,*(undefined8 *)(this + 0x18),*puVar26,0);
        uVar13 = ObjectRef::IsMap((ObjectRef *)local_148);
        if ((uVar13 & 1) == 0) goto LAB_0174d954;
        pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
        pSVar34 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        uVar13 = MapRef::elements_kind((MapRef *)local_148);
        uVar7 = (uint)uVar13;
        uVar8 = MapRef::elements_kind((MapRef *)local_138);
        uVar4 = uVar7;
        if (((uVar7 & 0xff) < 7) && ((0x55U >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
          uVar4 = (uint)(0x7010501030101 >> ((uVar13 & 7) << 3));
        }
        if ((uVar4 & 0xff) == (uVar8 & 0xff)) {
          bVar1 = true;
        }
        else if ((uVar7 & 0xff) < 2) {
          bVar1 = (uVar8 & 0xfe) == 2;
        }
        else {
          bVar1 = false;
        }
        uVar15 = MapRef::object((MapRef *)local_148);
        uStack_150 = MapRef::object((MapRef *)local_138);
        local_160[0] = bVar1 ^ 1;
        local_158 = uVar15;
        pOVar10 = (Operator *)SimplifiedOperatorBuilder::TransitionElementsKind(pSVar34,local_160);
        local_78 = local_88;
        local_80 = pNVar9;
        local_70 = local_180;
        pNVar16 = (Node *)Graph::NewNode(pGVar28,pOVar10,3,&local_80,false);
      }
      pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar10 = (Operator *)
                CommonOperatorBuilder::Checkpoint
                          ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
      local_80 = pNVar18;
      local_78 = pNVar16;
      local_70 = local_180;
      local_88 = (Node *)Graph::NewNode(pGVar28,pOVar10,3,&local_80,false);
      PropertyAccessBuilder::BuildCheckMaps
                ((PropertyAccessBuilder *)&local_e0,pNVar9,&local_88,local_180,
                 (ZoneVector *)&local_120);
      pNVar18 = local_88;
      local_148[0] = (Node *)ElementAccessFeedback::keyed_mode(param_4);
      BuildElementAccess((Node *)this,pNVar9,param_2,param_3,pNVar18,(ElementAccessInfo *)local_180,
                         (KeyedAccessMode *)&local_128);
      local_88 = local_78;
      if (local_100 != (undefined8 *)0x0) {
        local_f8 = local_100;
      }
      pNVar18 = local_70;
      pNVar9 = local_80;
      pNVar16 = local_88;
      if (local_120 != (Node *)0x0) {
        local_118 = local_120;
      }
    }
    else {
      this_01 = *(Zone **)(this + 0x40);
      if (local_c0 != local_c8) {
        local_148[0] = local_88;
        local_1d8 = (ZoneVector *)(local_c8 + 8);
        ObjectRef::ObjectRef((ObjectRef *)&local_80,uStack_d8,**(undefined8 **)local_1d8,0);
        uVar13 = ObjectRef::IsMap((ObjectRef *)&local_80);
        if ((uVar13 & 1) != 0) {
          ppNVar35 = (Node **)0x0;
          ppNVar37 = (Node **)0x0;
          ppNVar31 = (Node **)0x0;
          uVar13 = 0;
          local_1b0 = (Node **)0x0;
          local_1a8 = (Node **)0x0;
          local_1c8 = (Node **)0x0;
          local_1c0 = (Node **)0x0;
          local_1d0 = (Node **)0x0;
          local_1b8 = (Node **)0x0;
          pEVar32 = pEVar30;
          do {
            pNVar18 = local_180;
            puVar33 = *(undefined8 **)(pEVar32 + uVar13 * 0x48 + 0x30);
            for (puVar26 = *(undefined8 **)(pEVar32 + uVar13 * 0x48 + 0x28); puVar26 != puVar33;
                puVar26 = puVar26 + 1) {
              ObjectRef::ObjectRef((ObjectRef *)local_138,*(undefined8 *)(this + 0x18),*puVar26,0);
              uVar21 = ObjectRef::IsMap((ObjectRef *)local_138);
              if ((uVar21 & 1) == 0) goto LAB_0174d954;
              pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
              pSVar34 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
              uVar21 = MapRef::elements_kind((MapRef *)local_138);
              uVar7 = (uint)uVar21;
              uVar8 = MapRef::elements_kind((MapRef *)&local_80);
              uVar4 = uVar7;
              if (((uVar7 & 0xff) < 7) && ((0x55U >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
                uVar4 = (uint)(0x7010501030101 >> ((uVar21 & 7) << 3));
              }
              if ((uVar4 & 0xff) == (uVar8 & 0xff)) {
                bVar1 = true;
              }
              else if ((uVar7 & 0xff) < 2) {
                bVar1 = (uVar8 & 0xfe) == 2;
              }
              else {
                bVar1 = false;
              }
              uVar15 = MapRef::object((MapRef *)local_138);
              uStack_168 = MapRef::object((MapRef *)&local_80);
              local_178[0] = bVar1 ^ 1;
              local_170 = uVar15;
              pOVar10 = (Operator *)
                        SimplifiedOperatorBuilder::TransitionElementsKind(pSVar34,local_178);
              local_120 = local_148[0];
              local_118 = local_180;
              local_128 = pNVar9;
              local_148[0] = (Node *)Graph::NewNode(pGVar28,pOVar10,3,&local_128,false);
            }
            if (uVar13 == ((long)local_c0 - (long)local_c8 >> 3) * -0x71c71c71c71c71c7 - 1U) {
              PropertyAccessBuilder::BuildCheckMaps
                        ((PropertyAccessBuilder *)&local_e0,pNVar9,local_148,local_180,local_1d8);
              local_180 = (Node *)0x0;
            }
            else {
              local_138[0] = 1;
              puVar33 = *(undefined8 **)(pEVar32 + uVar13 * 0x48 + 0x10);
              for (puVar26 = *(undefined8 **)local_1d8; puVar26 != puVar33; puVar26 = puVar26 + 1) {
                ZoneHandleSet<v8::internal::Map>::insert
                          ((ZoneHandleSet<v8::internal::Map> *)local_138,*puVar26,
                           *(undefined8 *)**(undefined8 **)(this + 0x10));
              }
              pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar10 = (Operator *)
                        SimplifiedOperatorBuilder::CompareMaps
                                  ((SimplifiedOperatorBuilder *)
                                   (*(undefined8 **)(this + 0x10))[0x2f],local_138[0]);
              local_120 = local_148[0];
              local_118 = local_180;
              local_128 = pNVar9;
              pNVar18 = (Node *)Graph::NewNode(pGVar28,pOVar10,3,&local_128,false);
              pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
              local_148[0] = pNVar18;
              pOVar10 = (Operator *)
                        CommonOperatorBuilder::Branch
                                  ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
              local_120 = local_180;
              local_128 = pNVar18;
              pNVar18 = (Node *)Graph::NewNode(pGVar28,pOVar10,2,&local_128,false);
              pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar10 = (Operator *)
                        CommonOperatorBuilder::IfFalse
                                  ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
              local_128 = pNVar18;
              local_180 = (Node *)Graph::NewNode(pGVar28,pOVar10,1,&local_128,false);
              pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar10 = (Operator *)
                        CommonOperatorBuilder::IfTrue
                                  ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
              local_128 = pNVar18;
              pNVar18 = (Node *)Graph::NewNode(pGVar28,pOVar10,1,&local_128,false);
              pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar10 = (Operator *)
                        SimplifiedOperatorBuilder::MapGuard
                                  ((SimplifiedOperatorBuilder *)
                                   (*(undefined8 **)(this + 0x10))[0x2f],local_138[0]);
              local_120 = local_148[0];
              local_128 = pNVar9;
              local_118 = pNVar18;
              local_148[0] = (Node *)Graph::NewNode(pGVar28,pOVar10,3,&local_128,false);
            }
            pNVar16 = local_148[0];
            local_138[0] = ElementAccessFeedback::keyed_mode(param_4);
            BuildElementAccess((Node *)this,pNVar9,param_2,param_3,pNVar16,
                               (ElementAccessInfo *)pNVar18,(KeyedAccessMode *)pEVar30);
            pNVar18 = local_128;
            if (ppNVar35 < local_1a8) {
              *ppNVar35 = local_128;
              ppNVar23 = ppNVar35;
              ppNVar36 = local_1d0;
            }
            else {
              lVar24 = (long)ppNVar35 - (long)local_1d0 >> 3;
              uVar21 = lVar24 + 1;
              if (uVar21 >> 0x1c != 0) goto LAB_0174d968;
              uVar20 = (long)local_1a8 - (long)local_1d0 >> 2;
              if (uVar21 <= uVar20) {
                uVar21 = uVar20;
              }
              if (0x7fffffe < (ulong)((long)local_1a8 - (long)local_1d0 >> 3)) {
                uVar21 = 0xfffffff;
              }
              if (uVar21 == 0) {
                lVar17 = 0;
              }
              else {
                uVar20 = uVar21 * 8;
                lVar17 = *(long *)(this_01 + 0x10);
                if (uVar20 < (ulong)(*(long *)(this_01 + 0x18) - lVar17) ||
                    uVar20 - (*(long *)(this_01 + 0x18) - lVar17) == 0) {
                  *(ulong *)(this_01 + 0x10) = lVar17 + uVar20;
                }
                else {
                  lVar17 = Zone::NewExpand(this_01,uVar20);
                }
              }
              ppNVar23 = (Node **)(lVar17 + lVar24 * 8);
              local_1a8 = (Node **)(lVar17 + uVar21 * 8);
              *ppNVar23 = pNVar18;
              ppNVar36 = ppNVar23;
              while (ppNVar35 != local_1d0) {
                ppNVar35 = ppNVar35 + -1;
                ppNVar36 = ppNVar36 + -1;
                *ppNVar36 = *ppNVar35;
              }
            }
            pNVar18 = local_120;
            if (ppNVar37 < local_1c0) {
              *ppNVar37 = local_120;
              ppNVar25 = local_1c8;
              ppNVar29 = ppNVar37;
            }
            else {
              lVar24 = (long)ppNVar37 - (long)local_1c8 >> 3;
              uVar21 = lVar24 + 1;
              if (uVar21 >> 0x1c != 0) goto LAB_0174d968;
              uVar20 = (long)local_1c0 - (long)local_1c8 >> 2;
              if (uVar21 <= uVar20) {
                uVar21 = uVar20;
              }
              if (0x7fffffe < (ulong)((long)local_1c0 - (long)local_1c8 >> 3)) {
                uVar21 = 0xfffffff;
              }
              if (uVar21 == 0) {
                lVar17 = 0;
              }
              else {
                uVar20 = uVar21 * 8;
                lVar17 = *(long *)(this_01 + 0x10);
                if (uVar20 < (ulong)(*(long *)(this_01 + 0x18) - lVar17) ||
                    uVar20 - (*(long *)(this_01 + 0x18) - lVar17) == 0) {
                  *(ulong *)(this_01 + 0x10) = lVar17 + uVar20;
                }
                else {
                  lVar17 = Zone::NewExpand(this_01,uVar20);
                }
              }
              ppNVar29 = (Node **)(lVar17 + lVar24 * 8);
              local_1c0 = (Node **)(lVar17 + uVar21 * 8);
              *ppNVar29 = pNVar18;
              ppNVar25 = ppNVar29;
              while (ppNVar37 != local_1c8) {
                ppNVar37 = ppNVar37 + -1;
                ppNVar25 = ppNVar25 + -1;
                *ppNVar25 = *ppNVar37;
              }
            }
            pNVar18 = local_118;
            if (ppNVar31 < local_1b8) {
              *ppNVar31 = local_118;
              ppNVar19 = ppNVar31;
              ppNVar22 = local_1b0;
            }
            else {
              lVar24 = (long)ppNVar31 - (long)local_1b0 >> 3;
              uVar21 = lVar24 + 1;
              if (uVar21 >> 0x1c != 0) goto LAB_0174d968;
              uVar20 = (long)local_1b8 - (long)local_1b0 >> 2;
              if (uVar21 <= uVar20) {
                uVar21 = uVar20;
              }
              if (0x7fffffe < (ulong)((long)local_1b8 - (long)local_1b0 >> 3)) {
                uVar21 = 0xfffffff;
              }
              if (uVar21 == 0) {
                lVar17 = 0;
              }
              else {
                uVar20 = uVar21 * 8;
                lVar17 = *(long *)(this_01 + 0x10);
                if (uVar20 < (ulong)(*(long *)(this_01 + 0x18) - lVar17) ||
                    uVar20 - (*(long *)(this_01 + 0x18) - lVar17) == 0) {
                  *(ulong *)(this_01 + 0x10) = lVar17 + uVar20;
                }
                else {
                  lVar17 = Zone::NewExpand(this_01,uVar20);
                }
              }
              ppNVar19 = (Node **)(lVar17 + lVar24 * 8);
              local_1b8 = (Node **)(lVar17 + uVar21 * 8);
              *ppNVar19 = pNVar18;
              ppNVar22 = ppNVar19;
              while (ppNVar31 != local_1b0) {
                ppNVar31 = ppNVar31 + -1;
                ppNVar22 = ppNVar22 + -1;
                *ppNVar22 = *ppNVar31;
              }
            }
            pEVar32 = local_c8;
            ppNVar35 = ppNVar23 + 1;
            uVar13 = uVar13 + 1;
            ppNVar37 = ppNVar29 + 1;
            ppNVar31 = ppNVar19 + 1;
            if ((ulong)(((long)local_c0 - (long)local_c8 >> 3) * -0x71c71c71c71c71c7) <= uVar13)
            goto LAB_0174d5e8;
            pEVar30 = local_c8 + uVar13 * 0x48;
            local_148[0] = local_88;
            local_1d8 = (ZoneVector *)(pEVar30 + 8);
            ObjectRef::ObjectRef
                      ((ObjectRef *)&local_80,*(undefined8 *)(this + 0x18),
                       **(undefined8 **)local_1d8,0);
            uVar21 = ObjectRef::IsMap((ObjectRef *)&local_80);
            local_1d0 = ppNVar36;
            local_1c8 = ppNVar25;
            local_1b0 = ppNVar22;
          } while ((uVar21 & 1) != 0);
        }
        goto LAB_0174d954;
      }
      local_1a8 = (Node **)0x0;
      ppNVar35 = (Node **)0x0;
      ppNVar25 = (Node **)0x0;
      ppNVar37 = (Node **)0x0;
      local_1c0 = (Node **)0x0;
      ppNVar36 = (Node **)0x0;
      ppNVar22 = (Node **)0x0;
      ppNVar31 = (Node **)0x0;
LAB_0174d5e8:
      uVar13 = (ulong)((long)ppNVar31 - (long)ppNVar22) >> 3;
      iVar6 = (int)uVar13;
      if (iVar6 == 0) {
        puVar26 = *(undefined8 **)(this + 0x10);
        pNVar18 = (Node *)puVar26[0x2c];
        pNVar9 = pNVar18;
        pNVar16 = pNVar18;
        if (pNVar18 == (Node *)0x0) {
          pGVar28 = (Graph *)*puVar26;
          pOVar10 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar26[1]);
          local_128 = (Node *)0x0;
          pNVar18 = (Node *)Graph::NewNode(pGVar28,pOVar10,0,&local_128,false);
          puVar26[0x2c] = pNVar18;
          pNVar9 = pNVar18;
          pNVar16 = pNVar18;
        }
      }
      else if (iVar6 == 1) {
        pNVar9 = *ppNVar36;
        pNVar18 = *ppNVar22;
        pNVar16 = *ppNVar25;
      }
      else {
        pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar10 = (Operator *)
                  CommonOperatorBuilder::Merge
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],iVar6);
        pNVar18 = (Node *)Graph::NewNode(pGVar28,pOVar10,iVar6,ppNVar22,false);
        if (ppNVar35 == local_1a8) {
          lVar24 = (long)ppNVar35 - (long)ppNVar36 >> 3;
          uVar21 = lVar24 + 1;
          if (uVar21 >> 0x1c != 0) goto LAB_0174d968;
          uVar20 = (long)local_1a8 - (long)ppNVar36 >> 2;
          if (uVar21 <= uVar20) {
            uVar21 = uVar20;
          }
          if (0x7fffffe < (ulong)((long)local_1a8 - (long)ppNVar36 >> 3)) {
            uVar21 = 0xfffffff;
          }
          if (uVar21 == 0) {
            lVar17 = 0;
          }
          else {
            uVar21 = uVar21 * 8;
            lVar17 = *(long *)(this_01 + 0x10);
            if (uVar21 < (ulong)(*(long *)(this_01 + 0x18) - lVar17) ||
                uVar21 - (*(long *)(this_01 + 0x18) - lVar17) == 0) {
              *(ulong *)(this_01 + 0x10) = lVar17 + uVar21;
            }
            else {
              lVar17 = Zone::NewExpand(this_01,uVar21);
            }
          }
          ppNVar31 = (Node **)(lVar17 + lVar24 * 8);
          *ppNVar31 = pNVar18;
          while (ppNVar35 != ppNVar36) {
            ppNVar35 = ppNVar35 + -1;
            ppNVar31 = ppNVar31 + -1;
            *ppNVar31 = *ppNVar35;
          }
        }
        else {
          *ppNVar35 = pNVar18;
          ppNVar31 = ppNVar36;
        }
        pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar10 = (Operator *)
                  CommonOperatorBuilder::Phi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,
                             uVar13 & 0xffffffff);
        pNVar9 = (Node *)Graph::NewNode(pGVar28,pOVar10,iVar6 + 1,ppNVar31,false);
        if (ppNVar37 == local_1c0) {
          lVar24 = (long)ppNVar37 - (long)ppNVar25 >> 3;
          uVar13 = lVar24 + 1;
          if (uVar13 >> 0x1c != 0) {
LAB_0174d968:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar21 = (long)local_1c0 - (long)ppNVar25 >> 2;
          if (uVar13 <= uVar21) {
            uVar13 = uVar21;
          }
          if (0x7fffffe < (ulong)((long)local_1c0 - (long)ppNVar25 >> 3)) {
            uVar13 = 0xfffffff;
          }
          if (uVar13 == 0) {
            lVar17 = 0;
          }
          else {
            uVar13 = uVar13 * 8;
            lVar17 = *(long *)(this_01 + 0x10);
            if (uVar13 < (ulong)(*(long *)(this_01 + 0x18) - lVar17) ||
                uVar13 - (*(long *)(this_01 + 0x18) - lVar17) == 0) {
              *(ulong *)(this_01 + 0x10) = lVar17 + uVar13;
            }
            else {
              lVar17 = Zone::NewExpand(this_01,uVar13);
            }
          }
          ppNVar35 = (Node **)(lVar17 + lVar24 * 8);
          *ppNVar35 = pNVar18;
          while (ppNVar37 != ppNVar25) {
            ppNVar37 = ppNVar37 + -1;
            ppNVar35 = ppNVar35 + -1;
            *ppNVar35 = *ppNVar37;
          }
        }
        else {
          *ppNVar37 = pNVar18;
          ppNVar35 = ppNVar25;
        }
        pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar10 = (Operator *)
                  CommonOperatorBuilder::EffectPhi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],iVar6);
        pNVar16 = (Node *)Graph::NewNode(pGVar28,pOVar10,iVar6 + 1,ppNVar35,false);
      }
    }
    local_88 = pNVar16;
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),param_1,pNVar9,local_88,pNVar18);
  }
  if (local_c8 != (ElementAccessInfo *)0x0) {
    while (pEVar30 = local_c0, pEVar30 != local_c8) {
      if (*(long *)(pEVar30 + -0x20) != 0) {
        *(long *)(pEVar30 + -0x18) = *(long *)(pEVar30 + -0x20);
      }
      local_c0 = pEVar30 + -0x48;
      if (*(long *)(pEVar30 + -0x40) != 0) {
        *(long *)(pEVar30 + -0x38) = *(long *)(pEVar30 + -0x40);
      }
    }
  }
  return pNVar9;
}

