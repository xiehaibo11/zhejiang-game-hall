
/* v8::internal::compiler::JSInliner::InlineCall(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::ZoneVector<v8::internal::compiler::Node*> const&) */

Node * __thiscall
v8::internal::compiler::JSInliner::InlineCall
          (JSInliner *this,Node *param_1,Node *param_2,Node *param_3,Node *param_4,Node *param_5,
          Node *param_6,Node *param_7,ZoneVector *param_8)

{
  Use *pUVar1;
  Graph *pGVar2;
  int iVar3;
  int iVar4;
  Node *pNVar5;
  Node *pNVar6;
  long *plVar7;
  Operator *pOVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  Node *pNVar12;
  long lVar13;
  ulong uVar14;
  Node *pNVar15;
  uint uVar16;
  code *pcVar17;
  Node **ppNVar18;
  ulong uVar19;
  Use *pUVar20;
  undefined8 *puVar21;
  Node **ppNVar22;
  Use *pUVar23;
  undefined8 *puVar24;
  Node **ppNVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  Node **ppNVar29;
  Node **ppNVar30;
  Node **ppNVar31;
  Zone *pZVar32;
  long lVar33;
  Node **ppNVar34;
  Use *pUVar35;
  Node **ppNVar36;
  Node **ppNVar37;
  Node **local_190;
  Node **local_188;
  Node **local_180;
  Node *local_170;
  Node *local_168;
  Node *local_160;
  Zone *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  
  pNVar5 = (Node *)NodeProperties::GetControlInput(param_1,0);
  pNVar6 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  if (*(Use **)(param_5 + 0x18) != (Use *)0x0) {
    iVar27 = *(int *)(*(long *)param_5 + 0x20);
    iVar3 = *(int *)(*(long *)param_1 + 0x14);
    pUVar35 = *(Use **)(param_5 + 0x18);
    do {
      while( true ) {
        uVar16 = *(uint *)(pUVar35 + 0x10);
        pUVar20 = *(Use **)pUVar35;
        pUVar1 = pUVar35 + (ulong)(uVar16 >> 1) * 0x18 + 0x18;
        lVar33 = 0x10;
        if ((uVar16 & 1) != 0) {
          lVar33 = 0x20;
        }
        pUVar23 = pUVar1;
        if ((uVar16 & 1) == 0) {
          pUVar23 = *(Use **)pUVar1;
        }
        if (*(short *)(*(Operator **)pUVar23 + 0x10) == 0x32) break;
        pUVar1 = pUVar1 + (ulong)(uVar16 >> 1) * 8 + lVar33;
        uVar28 = NodeProperties::IsEffectEdge(pUVar35,pUVar1);
        if ((uVar28 & 1) == 0) {
          uVar28 = NodeProperties::IsControlEdge(pUVar35,pUVar1);
          if ((uVar28 & 1) == 0) {
            uVar28 = NodeProperties::IsFrameStateEdge(pUVar35,pUVar1);
            if ((uVar28 & 1) == 0) goto switchD_01741c5c_caseD_c;
            pNVar15 = *(Node **)pUVar1;
            if (pNVar15 != param_4) {
              if (pNVar15 != (Node *)0x0) {
                Node::RemoveUse(pNVar15,pUVar35);
              }
              *(Node **)pUVar1 = param_4;
              pNVar15 = param_4;
              goto joined_r0x01741670;
            }
          }
          else {
            pNVar15 = *(Node **)pUVar1;
            if (pNVar15 != pNVar5) {
              if (pNVar15 != (Node *)0x0) {
                Node::RemoveUse(pNVar15,pUVar35);
              }
              *(Node **)pUVar1 = pNVar5;
              pNVar15 = pNVar5;
joined_r0x01741670:
              if (pNVar15 != (Node *)0x0) {
                Node::AppendUse(pNVar15,pUVar35);
              }
            }
          }
        }
        else {
          pNVar15 = *(Node **)pUVar1;
          if (pNVar15 != pNVar6) {
            if (pNVar15 != (Node *)0x0) {
              Node::RemoveUse(pNVar15,pUVar35);
            }
            *(Node **)pUVar1 = pNVar6;
            pNVar15 = pNVar6;
            goto joined_r0x01741670;
          }
        }
joined_r0x017416cc:
        pUVar35 = pUVar20;
        if (pUVar20 == (Use *)0x0) goto LAB_017416d0;
      }
      iVar4 = ParameterIndexOf(*(Operator **)pUVar23);
      iVar4 = iVar4 + 1;
      if ((iVar4 < iVar3) && (iVar4 < iVar27 + -3)) {
        pNVar15 = param_1 + 0x20;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar15 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
        }
        pNVar15 = *(Node **)(pNVar15 + (long)iVar4 * 8);
        plVar7 = *(long **)(this + 8);
        pcVar17 = *(code **)(*plVar7 + 0x10);
      }
      else {
        pNVar15 = param_2;
        if (iVar4 != iVar27 + -3) {
          if (iVar4 == iVar27 + -2) {
            uVar10 = JSGraph::Constant(*(JSGraph **)(this + 0x20),(double)(iVar3 + -2));
          }
          else {
            pNVar15 = param_3;
            if (iVar4 == iVar27 + -1) goto LAB_017415c0;
            uVar10 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x20));
          }
          (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),pUVar23,uVar10);
          goto joined_r0x017416cc;
        }
LAB_017415c0:
        plVar7 = *(long **)(this + 8);
        pcVar17 = *(code **)(*plVar7 + 0x10);
      }
      (*pcVar17)(plVar7,pUVar23,pNVar15);
      pUVar35 = pUVar20;
    } while (pUVar20 != (Use *)0x0);
  }
LAB_017416d0:
  if (param_7 != (Node *)0x0) {
    puVar21 = *(undefined8 **)param_8;
    puVar24 = *(undefined8 **)(param_8 + 8);
    uVar28 = (ulong)((long)puVar24 - (long)puVar21) >> 3;
    iVar27 = (int)uVar28;
    if ((FLAG_trace_turbo_inlining != '\0') && (0 < iVar27)) {
      local_170 = (Node *)(std::__ndk1::
                           basic_ostream<char,v8::internal::StdoutStream::char_traits<char>>-in-v8::
                           internal::StdoutStream::construction_vtable + 0x18);
      local_110[0] = (undefined **)0x1ca11a0;
      std::__ndk1::ios_base::init((ios_base *)local_110,(AndroidLogStream *)&local_168);
      local_80 = 0xffffffff;
      local_168 = (Node *)&PTR__basic_streambuf_01c671a8;
      local_88 = 0;
      local_170 = (Node *)&PTR__StdoutStream_01ca1128;
      local_110[0] = &PTR__StdoutStream_01ca1150;
      std::__ndk1::locale::locale((locale *)&local_160);
      local_168 = (Node *)&PTR__AndroidLogStream_01cbc008;
      local_128 = 0;
      uStack_120 = 0;
      uStack_130 = 0;
      local_138 = 0;
      uStack_140 = 0;
      local_148 = 0;
      uStack_150 = 0;
      local_158 = (Zone *)0x0;
      local_118 = 0;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_170,"Inlinee contains ",0x11);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170,iVar27);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_170," calls without local exception handler; ",0x28);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_170,"linking to surrounding exception handler.",0x29);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_170,"\n",1);
      local_170 = (Node *)&PTR__StdoutStream_01ca1128;
      local_110[0] = &PTR__StdoutStream_01ca1150;
      AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_168);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
      puVar21 = *(undefined8 **)param_8;
      puVar24 = *(undefined8 **)(param_8 + 8);
    }
    if (puVar21 == puVar24) {
      ppNVar31 = (Node **)0x0;
      ppNVar34 = (Node **)0x0;
    }
    else {
      pZVar32 = *(Zone **)(this + 0x10);
      ppNVar31 = (Node **)0x0;
      ppNVar22 = (Node **)0x0;
      ppNVar30 = (Node **)0x0;
      do {
        pNVar6 = (Node *)*puVar21;
        pGVar2 = (Graph *)**(undefined8 **)(this + 0x20);
        pOVar8 = (Operator *)
                 CommonOperatorBuilder::IfSuccess
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1]);
        local_170 = pNVar6;
        pNVar5 = (Node *)Graph::NewNode(pGVar2,pOVar8,1,&local_170,false);
        NodeProperties::ReplaceUses(pNVar6,pNVar6,pNVar6,pNVar5,(Node *)0x0);
        NodeProperties::ReplaceControlInput(pNVar5,pNVar6,0);
        pGVar2 = (Graph *)**(undefined8 **)(this + 0x20);
        pOVar8 = (Operator *)
                 CommonOperatorBuilder::IfException
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1]);
        local_170 = pNVar6;
        local_168 = pNVar6;
        pNVar5 = (Node *)Graph::NewNode(pGVar2,pOVar8,2,&local_170,false);
        if (ppNVar31 == ppNVar22) {
          lVar33 = (long)ppNVar31 - (long)ppNVar30 >> 3;
          uVar14 = lVar33 + 1;
          if (uVar14 >> 0x1c != 0) goto LAB_01742274;
          uVar19 = (long)ppNVar22 - (long)ppNVar30 >> 2;
          if (uVar14 <= uVar19) {
            uVar14 = uVar19;
          }
          if (0x7fffffe < (ulong)((long)ppNVar22 - (long)ppNVar30 >> 3)) {
            uVar14 = 0xfffffff;
          }
          if (uVar14 == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = *(long *)(pZVar32 + 0x10);
            uVar19 = uVar14 * 8;
            if (uVar19 < (ulong)(*(long *)(pZVar32 + 0x18) - lVar13) ||
                uVar19 - (*(long *)(pZVar32 + 0x18) - lVar13) == 0) {
              *(ulong *)(pZVar32 + 0x10) = lVar13 + uVar19;
            }
            else {
              lVar13 = Zone::NewExpand(pZVar32,uVar19);
            }
          }
          ppNVar25 = (Node **)(lVar13 + lVar33 * 8);
          ppNVar22 = (Node **)(lVar13 + uVar14 * 8);
          *ppNVar25 = pNVar5;
          ppNVar34 = ppNVar25;
          while (ppNVar31 != ppNVar30) {
            ppNVar31 = ppNVar31 + -1;
            ppNVar34 = ppNVar34 + -1;
            *ppNVar34 = *ppNVar31;
          }
        }
        else {
          *ppNVar31 = pNVar5;
          ppNVar25 = ppNVar31;
          ppNVar34 = ppNVar30;
        }
        puVar21 = puVar21 + 1;
        ppNVar31 = ppNVar25 + 1;
        ppNVar30 = ppNVar34;
      } while (puVar21 != puVar24);
    }
    puVar21 = *(undefined8 **)(this + 0x20);
    if (iVar27 < 1) {
      lVar33 = puVar21[0x2c];
      if (lVar33 == 0) {
        pGVar2 = (Graph *)*puVar21;
        pOVar8 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar21[1]);
        local_170 = (Node *)0x0;
        lVar33 = Graph::NewNode(pGVar2,pOVar8,0,&local_170,false);
        puVar21[0x2c] = lVar33;
      }
      (**(code **)(**(long **)(this + 8) + 0x20))
                (*(long **)(this + 8),param_7,param_7,param_7,lVar33);
    }
    else {
      pGVar2 = (Graph *)*puVar21;
      pOVar8 = (Operator *)CommonOperatorBuilder::Merge((CommonOperatorBuilder *)puVar21[1],iVar27);
      puVar9 = (undefined *)Graph::NewNode(pGVar2,pOVar8,iVar27,ppNVar34,false);
      local_158 = *(Zone **)(this + 0x10);
      local_170 = (Node *)0x0;
      local_168 = (Node *)0x0;
      local_160 = (Node *)0x0;
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::assign<v8::internal::compiler::Node**>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)&local_170,ppNVar34,ppNVar31);
      if (local_168 == local_160) {
        lVar33 = (long)local_168 - (long)local_170 >> 3;
        uVar14 = lVar33 + 1;
        if (uVar14 >> 0x1c != 0) goto LAB_01742274;
        uVar19 = (long)local_160 - (long)local_170 >> 2;
        if (uVar14 <= uVar19) {
          uVar14 = uVar19;
        }
        if (0x7fffffe < (ulong)((long)local_160 - (long)local_170 >> 3)) {
          uVar14 = 0xfffffff;
        }
        if (uVar14 == 0) {
          lVar13 = 0;
        }
        else {
          uVar19 = uVar14 * 8;
          lVar13 = *(long *)(local_158 + 0x10);
          if (uVar19 < (ulong)(*(long *)(local_158 + 0x18) - lVar13) ||
              uVar19 - (*(long *)(local_158 + 0x18) - lVar13) == 0) {
            *(ulong *)(local_158 + 0x10) = lVar13 + uVar19;
          }
          else {
            lVar13 = Zone::NewExpand(local_158,uVar19);
          }
        }
        pNVar5 = (Node *)(lVar13 + lVar33 * 8);
        *(undefined **)pNVar5 = puVar9;
        local_160 = (Node *)(lVar13 + uVar14 * 8);
        pNVar6 = pNVar5;
        while (local_168 != local_170) {
          local_168 = local_168 + -8;
          pNVar6 = pNVar6 + -8;
          *(undefined **)pNVar6 = *(undefined **)local_168;
        }
      }
      else {
        *(undefined **)local_168 = puVar9;
        pNVar6 = local_170;
        pNVar5 = local_168;
      }
      local_170 = pNVar6;
      local_168 = pNVar5 + 8;
      pGVar2 = (Graph *)**(undefined8 **)(this + 0x20);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Phi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1],8,
                          uVar28 & 0xffffffff);
      uVar10 = Graph::NewNode(pGVar2,pOVar8,iVar27 + 1,(Node **)local_170,false);
      pGVar2 = (Graph *)**(undefined8 **)(this + 0x20);
      pOVar8 = (Operator *)
               CommonOperatorBuilder::EffectPhi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1],iVar27);
      uVar11 = Graph::NewNode(pGVar2,pOVar8,iVar27 + 1,(Node **)local_170,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_7,uVar10,uVar11,puVar9)
      ;
      if (local_170 != (Node *)0x0) {
        local_168 = local_170;
      }
    }
  }
  pZVar32 = *(Zone **)(this + 0x10);
  pNVar5 = param_6 + 0x20;
  uVar16 = (byte)param_6[0x17] & 0xf;
  if (uVar16 == 0xf) {
    uVar16 = *(uint *)(*(long *)pNVar5 + 8);
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  if (uVar16 == 0) {
    ppNVar34 = (Node **)0x0;
    ppNVar22 = (Node **)0x0;
    ppNVar30 = (Node **)0x0;
    ppNVar37 = (Node **)0x0;
    ppNVar31 = (Node **)0x0;
    ppNVar25 = (Node **)0x0;
    local_190 = (Node **)0x0;
    local_180 = (Node **)0x0;
  }
  else {
    ppNVar31 = (Node **)0x0;
    ppNVar22 = (Node **)0x0;
    ppNVar34 = (Node **)0x0;
    pNVar6 = pNVar5 + (long)(int)uVar16 * 8;
    local_188 = (Node **)0x0;
    local_180 = (Node **)0x0;
    local_190 = (Node **)0x0;
    ppNVar18 = (Node **)0x0;
    ppNVar29 = (Node **)0x0;
    ppNVar36 = (Node **)0x0;
    do {
      pNVar15 = *(Node **)pNVar5;
      ppNVar25 = ppNVar18;
      ppNVar30 = ppNVar29;
      switch(*(undefined2 *)(*(long *)pNVar15 + 0x10)) {
      case 0xb:
      case 0x12:
      case 0x15:
        NodeProperties::MergeControlToEnd
                  ((Graph *)**(undefined8 **)(this + 0x20),
                   (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1],pNVar15);
        (**(code **)(**(long **)(this + 8) + 0x18))
                  (*(long **)(this + 8),*(undefined8 *)(**(long **)(this + 0x20) + 0x10));
        ppNVar37 = ppNVar36;
        break;
      default:
switchD_01741c5c_caseD_c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 0x10:
        pNVar12 = (Node *)NodeProperties::GetValueInput(pNVar15,1);
        if (ppNVar31 < local_180) {
          *ppNVar31 = pNVar12;
          ppNVar37 = ppNVar31;
        }
        else {
          lVar33 = (long)ppNVar31 - (long)ppNVar18 >> 3;
          uVar28 = lVar33 + 1;
          if (uVar28 >> 0x1c != 0) goto LAB_01742274;
          uVar14 = (long)local_180 - (long)ppNVar18 >> 2;
          if (uVar28 <= uVar14) {
            uVar28 = uVar14;
          }
          if (0x7fffffe < (ulong)((long)local_180 - (long)ppNVar18 >> 3)) {
            uVar28 = 0xfffffff;
          }
          if (uVar28 == 0) {
            lVar13 = 0;
          }
          else {
            uVar14 = uVar28 * 8;
            lVar13 = *(long *)(pZVar32 + 0x10);
            if (uVar14 < (ulong)(*(long *)(pZVar32 + 0x18) - lVar13) ||
                uVar14 - (*(long *)(pZVar32 + 0x18) - lVar13) == 0) {
              *(ulong *)(pZVar32 + 0x10) = lVar13 + uVar14;
            }
            else {
              lVar13 = Zone::NewExpand(pZVar32,uVar14);
            }
          }
          ppNVar37 = (Node **)(lVar13 + lVar33 * 8);
          local_180 = (Node **)(lVar13 + uVar28 * 8);
          *ppNVar37 = pNVar12;
          ppNVar25 = ppNVar37;
          while (ppNVar31 != ppNVar18) {
            ppNVar31 = ppNVar31 + -1;
            ppNVar25 = ppNVar25 + -1;
            *ppNVar25 = *ppNVar31;
          }
        }
        pNVar12 = (Node *)NodeProperties::GetEffectInput(pNVar15,0);
        if (ppNVar34 < ppNVar22) {
          *ppNVar34 = pNVar12;
          ppNVar18 = ppNVar34;
          ppNVar31 = local_190;
        }
        else {
          lVar33 = (long)ppNVar34 - (long)local_190 >> 3;
          uVar28 = lVar33 + 1;
          if (uVar28 >> 0x1c != 0) goto LAB_01742274;
          uVar14 = (long)ppNVar22 - (long)local_190 >> 2;
          if (uVar28 <= uVar14) {
            uVar28 = uVar14;
          }
          if (0x7fffffe < (ulong)((long)ppNVar22 - (long)local_190 >> 3)) {
            uVar28 = 0xfffffff;
          }
          if (uVar28 == 0) {
            lVar13 = 0;
          }
          else {
            uVar14 = uVar28 * 8;
            lVar13 = *(long *)(pZVar32 + 0x10);
            if (uVar14 < (ulong)(*(long *)(pZVar32 + 0x18) - lVar13) ||
                uVar14 - (*(long *)(pZVar32 + 0x18) - lVar13) == 0) {
              *(ulong *)(pZVar32 + 0x10) = lVar13 + uVar14;
            }
            else {
              lVar13 = Zone::NewExpand(pZVar32,uVar14);
            }
          }
          ppNVar18 = (Node **)(lVar13 + lVar33 * 8);
          ppNVar22 = (Node **)(lVar13 + uVar28 * 8);
          *ppNVar18 = pNVar12;
          ppNVar31 = ppNVar18;
          while (ppNVar34 != local_190) {
            ppNVar34 = ppNVar34 + -1;
            ppNVar31 = ppNVar31 + -1;
            *ppNVar31 = *ppNVar34;
          }
        }
        local_190 = ppNVar31;
        ppNVar31 = ppNVar37 + 1;
        ppNVar34 = ppNVar18 + 1;
        pNVar15 = (Node *)NodeProperties::GetControlInput(pNVar15,0);
        if (ppNVar36 < local_188) {
          ppNVar37 = ppNVar36 + 1;
          *ppNVar36 = pNVar15;
        }
        else {
          lVar33 = (long)ppNVar36 - (long)ppNVar29 >> 3;
          uVar28 = lVar33 + 1;
          if (uVar28 >> 0x1c != 0) goto LAB_01742274;
          uVar14 = (long)local_188 - (long)ppNVar29 >> 2;
          if (uVar28 <= uVar14) {
            uVar28 = uVar14;
          }
          if (0x7fffffe < (ulong)((long)local_188 - (long)ppNVar29 >> 3)) {
            uVar28 = 0xfffffff;
          }
          if (uVar28 == 0) {
            lVar13 = 0;
          }
          else {
            uVar14 = uVar28 * 8;
            lVar13 = *(long *)(pZVar32 + 0x10);
            if (uVar14 < (ulong)(*(long *)(pZVar32 + 0x18) - lVar13) ||
                uVar14 - (*(long *)(pZVar32 + 0x18) - lVar13) == 0) {
              *(ulong *)(pZVar32 + 0x10) = lVar13 + uVar14;
            }
            else {
              lVar13 = Zone::NewExpand(pZVar32,uVar14);
            }
          }
          ppNVar30 = (Node **)(lVar13 + lVar33 * 8);
          local_188 = (Node **)(lVar13 + uVar28 * 8);
          ppNVar37 = ppNVar30 + 1;
          *ppNVar30 = pNVar15;
          while (ppNVar36 != ppNVar29) {
            ppNVar36 = ppNVar36 + -1;
            ppNVar30 = ppNVar30 + -1;
            *ppNVar30 = *ppNVar36;
          }
        }
      }
      pNVar5 = pNVar5 + 8;
      ppNVar18 = ppNVar25;
      ppNVar29 = ppNVar30;
      ppNVar36 = ppNVar37;
    } while (pNVar5 != pNVar6);
  }
  if ((long)ppNVar31 - (long)ppNVar25 == 0) {
    puVar21 = *(undefined8 **)(this + 0x20);
    lVar26 = puVar21[0x2c];
    lVar33 = lVar26;
    lVar13 = lVar26;
    if (lVar26 == 0) {
      pGVar2 = (Graph *)*puVar21;
      pOVar8 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar21[1]);
      local_170 = (Node *)0x0;
      lVar33 = Graph::NewNode(pGVar2,pOVar8,0,&local_170,false);
      puVar21[0x2c] = lVar33;
      puVar21 = *(undefined8 **)(this + 0x20);
      lVar26 = puVar21[0x2c];
      lVar13 = lVar26;
      if (lVar26 == 0) {
        pGVar2 = (Graph *)*puVar21;
        pOVar8 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar21[1]);
        local_170 = (Node *)0x0;
        lVar13 = Graph::NewNode(pGVar2,pOVar8,0,&local_170,false);
        puVar21[0x2c] = lVar13;
        puVar21 = *(undefined8 **)(this + 0x20);
        lVar26 = puVar21[0x2c];
        if (lVar26 == 0) {
          pGVar2 = (Graph *)*puVar21;
          pOVar8 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar21[1]);
          local_170 = (Node *)0x0;
          lVar26 = Graph::NewNode(pGVar2,pOVar8,0,&local_170,false);
          puVar21[0x2c] = lVar26;
        }
      }
    }
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar33,lVar13,lVar26);
    return param_1;
  }
  pGVar2 = (Graph *)**(undefined8 **)(this + 0x20);
  uVar28 = (ulong)((long)ppNVar37 - (long)ppNVar30) >> 3;
  iVar27 = (int)uVar28;
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Merge
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1],iVar27);
  pNVar5 = (Node *)Graph::NewNode(pGVar2,pOVar8,iVar27,ppNVar30,false);
  if (ppNVar31 == local_180) {
    lVar33 = (long)ppNVar31 - (long)ppNVar25 >> 3;
    uVar14 = lVar33 + 1;
    if (uVar14 >> 0x1c != 0) goto LAB_01742274;
    uVar19 = (long)local_180 - (long)ppNVar25 >> 2;
    if (uVar14 <= uVar19) {
      uVar14 = uVar19;
    }
    if (0x7fffffe < (ulong)((long)local_180 - (long)ppNVar25 >> 3)) {
      uVar14 = 0xfffffff;
    }
    if (uVar14 == 0) {
      lVar13 = 0;
    }
    else {
      uVar14 = uVar14 * 8;
      lVar13 = *(long *)(pZVar32 + 0x10);
      if (uVar14 < (ulong)(*(long *)(pZVar32 + 0x18) - lVar13) ||
          uVar14 - (*(long *)(pZVar32 + 0x18) - lVar13) == 0) {
        *(ulong *)(pZVar32 + 0x10) = lVar13 + uVar14;
      }
      else {
        lVar13 = Zone::NewExpand(pZVar32,uVar14);
      }
    }
    ppNVar30 = (Node **)(lVar13 + lVar33 * 8);
    *ppNVar30 = pNVar5;
    ppNVar37 = ppNVar30;
    while (ppNVar31 != ppNVar25) {
      ppNVar31 = ppNVar31 + -1;
      ppNVar37 = ppNVar37 + -1;
      *ppNVar37 = *ppNVar31;
    }
  }
  else {
    *ppNVar31 = pNVar5;
    ppNVar30 = ppNVar31;
    ppNVar37 = ppNVar25;
  }
  if (ppNVar34 == ppNVar22) {
    lVar33 = (long)ppNVar34 - (long)local_190 >> 3;
    uVar14 = lVar33 + 1;
    if (uVar14 >> 0x1c != 0) {
LAB_01742274:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar19 = (long)ppNVar22 - (long)local_190 >> 2;
    if (uVar14 <= uVar19) {
      uVar14 = uVar19;
    }
    if (0x7fffffe < (ulong)((long)ppNVar22 - (long)local_190 >> 3)) {
      uVar14 = 0xfffffff;
    }
    if (uVar14 == 0) {
      lVar13 = 0;
    }
    else {
      uVar14 = uVar14 * 8;
      lVar13 = *(long *)(pZVar32 + 0x10);
      if (uVar14 < (ulong)(*(long *)(pZVar32 + 0x18) - lVar13) ||
          uVar14 - (*(long *)(pZVar32 + 0x18) - lVar13) == 0) {
        *(ulong *)(pZVar32 + 0x10) = lVar13 + uVar14;
      }
      else {
        lVar13 = Zone::NewExpand(pZVar32,uVar14);
      }
    }
    ppNVar31 = (Node **)(lVar13 + lVar33 * 8);
    *ppNVar31 = pNVar5;
    ppNVar22 = ppNVar31;
    while (ppNVar34 != local_190) {
      ppNVar34 = ppNVar34 + -1;
      ppNVar22 = ppNVar22 + -1;
      *ppNVar22 = *ppNVar34;
    }
  }
  else {
    *ppNVar34 = pNVar5;
    ppNVar31 = ppNVar34;
    ppNVar22 = local_190;
  }
  pGVar2 = (Graph *)**(undefined8 **)(this + 0x20);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Phi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1],8,
                      uVar28 & 0xffffffff);
  pNVar6 = (Node *)Graph::NewNode(pGVar2,pOVar8,
                                  (int)((ulong)((long)ppNVar30 + (8 - (long)ppNVar37)) >> 3),
                                  ppNVar37,false);
  pGVar2 = (Graph *)**(undefined8 **)(this + 0x20);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x20))[1],iVar27);
  uVar10 = Graph::NewNode(pGVar2,pOVar8,(int)((ulong)((long)ppNVar31 + (8 - (long)ppNVar22)) >> 3),
                          ppNVar22,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar6,uVar10,pNVar5);
  return pNVar6;
}

