
/* v8::internal::compiler::JSCallReducer::ReduceCallApiFunction(v8::internal::compiler::Node*,
   v8::internal::compiler::SharedFunctionInfoRef const&) */

ObjectRef * __thiscall
v8::internal::compiler::JSCallReducer::ReduceCallApiFunction
          (JSCallReducer *this,Node *param_1,SharedFunctionInfoRef *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  ulong uVar12;
  Operator *pOVar13;
  long *plVar14;
  ulong uVar15;
  Node *pNVar16;
  CallDescriptor *pCVar17;
  undefined8 uVar18;
  basic_ostream *pbVar19;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  int iVar20;
  undefined4 uVar21;
  long lVar22;
  ulong uVar23;
  Node *pNVar24;
  JSGraph *pJVar25;
  Graph *pGVar26;
  ObjectRef *this_01;
  Zone *pZVar27;
  Use *pUVar28;
  undefined **local_130;
  Node *local_128;
  ObjectRef aOStack_120 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100 [16];
  Node *local_f0;
  Node *pNStack_e8;
  Node *local_d8;
  Node *local_d0;
  Node *pNStack_c8;
  Node *local_c0;
  Node *pNStack_b8;
  undefined1 local_a8 [16];
  Node *pNStack_98;
  Node *pNStack_90;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  pNVar5 = (Node *)CallParametersOf(*(Operator **)param_1);
  uVar1 = *(uint *)pNVar5;
  pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,0);
  lVar22 = *(long *)(this + 0x18);
  if (*(char *)(lVar22 + 0x18) != '\x01') {
LAB_016e4030:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  pNStack_c8 = *(Node **)(lVar22 + 0x28);
  local_d0 = *(Node **)(lVar22 + 0x20);
  pJVar25 = *(JSGraph **)(this + 0x10);
  local_a8 = NativeContextRef::global_proxy_object((NativeContextRef *)&local_d0);
  pNVar7 = (Node *)JSGraph::Constant(pJVar25,(ObjectRef *)local_a8);
  pNVar8 = pNVar7;
  if (((byte)pNVar5[3] & 0x60) != 0) {
    pNVar8 = (Node *)NodeProperties::GetValueInput(param_1,1);
  }
  local_d8 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  pNVar9 = (Node *)NodeProperties::GetControlInput(param_1,0);
  pNVar10 = (Node *)NodeProperties::GetContextInput(param_1);
  pNVar11 = (Node *)NodeProperties::GetFrameStateInput(param_1);
  SharedFunctionInfoRef::function_template_info();
  if (local_a8[0] == (ObjectRef)0x0) {
    if ((*(JSHeapBroker **)(this + 0x18))[0x74] == (JSHeapBroker)0x0) {
LAB_016e3ee8:
      this_01 = (ObjectRef *)0x0;
      goto LAB_016e3eec;
    }
    pbVar19 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
    pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar19,"Missing ",8);
    pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar19,"FunctionTemplateInfo for function with SFI ",0x2b);
    pbVar19 = (basic_ostream *)compiler::operator<<(pbVar19,(ObjectRef *)param_2);
    pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar19," (",2);
    pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar19,"../../src/compiler/js-call-reducer.cc",0x25);
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar19,":",1);
    iVar20 = 0xd3c;
  }
  else {
    SharedFunctionInfoRef::function_template_info();
    if (local_a8[0] != (ObjectRef)0x1) goto LAB_016e4030;
    pNStack_e8 = pNStack_98;
    local_f0 = (Node *)local_a8._8_8_;
    uVar12 = FunctionTemplateInfoRef::has_call_code((FunctionTemplateInfoRef *)&local_f0);
    if ((uVar12 & 1) == 0) goto LAB_016e3ee8;
    uVar23 = (ulong)uVar1 & 0x7ffffff;
    iVar20 = (int)uVar23;
    uVar12 = FunctionTemplateInfoRef::accept_any_receiver((FunctionTemplateInfoRef *)&local_f0);
    if ((uVar12 & 1) == 0) {
LAB_016e3738:
      MapInference::MapInference
                ((MapInference *)local_a8,*(JSHeapBroker **)(this + 0x18),pNVar8,local_d8);
      uVar12 = MapInference::HaveMaps((MapInference *)local_a8);
      if ((uVar12 & 1) == 0) {
        uVar12 = FunctionTemplateInfoRef::accept_any_receiver((FunctionTemplateInfoRef *)&local_f0);
        if ((uVar12 & 1) == 0) {
          uVar12 = FunctionTemplateInfoRef::is_signature_undefined
                             ((FunctionTemplateInfoRef *)&local_f0);
          uVar21 = 0x11;
          if ((uVar12 & 1) == 0) {
            uVar21 = 0x13;
          }
        }
        else {
          uVar21 = 0x12;
        }
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar13 = (Operator *)
                  SimplifiedOperatorBuilder::ConvertReceiver
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                             *(uint *)pNVar5 >> 0x1d & 3);
        local_c0 = local_d8;
        local_d0 = pNVar8;
        pNStack_c8 = pNVar7;
        pNStack_b8 = pNVar9;
        pNVar8 = (Node *)Graph::NewNode(pGVar26,pOVar13,4,&local_d0,false);
        local_d8 = pNVar8;
        Builtins::CallableFor
                  ((Builtins *)&local_d0,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),uVar21);
        local_130 = &PTR__CallInterfaceDescriptor_01ca0fc8;
        local_128 = local_c0;
        pCVar17 = (CallDescriptor *)
                  Linkage::GetStubCallDescriptor
                            (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_130,iVar20 + -1,1,
                             0,0);
        pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
        pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_d0);
        Node::InsertInput(param_1,pZVar27,0,pNVar5);
        pNVar9 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)&local_f0);
        pNVar5 = param_1 + 0x20;
        pNVar7 = pNVar5;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar7 = (Node *)(*(long *)pNVar5 + 0x10);
        }
        pNVar16 = *(Node **)(pNVar7 + 8);
        if (pNVar16 != pNVar9) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar28 = (Use *)(*(long *)pNVar5 + -0x30);
          }
          else {
            pUVar28 = (Use *)(param_1 + -0x30);
          }
          if (pNVar16 != (Node *)0x0) {
            Node::RemoveUse(pNVar16,pUVar28);
          }
          *(Node **)(pNVar7 + 8) = pNVar9;
          if (pNVar9 != (Node *)0x0) {
            Node::AppendUse(pNVar9,pUVar28);
          }
        }
        pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
        pNVar7 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(iVar20 + -2));
        Node::InsertInput(param_1,pZVar27,2,pNVar7);
        pNVar7 = pNVar5;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar7 = (Node *)(*(long *)pNVar5 + 0x10);
        }
        pNVar9 = *(Node **)(pNVar7 + 0x18);
        if (pNVar9 != pNVar8) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar28 = (Use *)(*(long *)pNVar5 + -0x60);
          }
          else {
            pUVar28 = (Use *)(param_1 + -0x60);
          }
          if (pNVar9 != (Node *)0x0) {
            Node::RemoveUse(pNVar9,pUVar28);
          }
          *(Node **)(pNVar7 + 0x18) = pNVar8;
          if (pNVar8 != (Node *)0x0) {
            Node::AppendUse(pNVar8,pUVar28);
          }
        }
        pNVar9 = local_d8;
        pNVar7 = pNVar5;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar7 = (Node *)(*(long *)pNVar5 + 0x10);
        }
        pNVar16 = *(Node **)(pNVar7 + (uVar23 + 4) * 8);
        if (pNVar16 != local_d8) {
          pNVar24 = param_1;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar24 = *(Node **)pNVar5;
          }
          if (pNVar16 != (Node *)0x0) {
            Node::RemoveUse(pNVar16,(Use *)(pNVar24 + (-5 - uVar23) * 0x18));
          }
          *(Node **)(pNVar7 + (uVar23 + 4) * 8) = pNVar9;
          if (pNVar9 != (Node *)0x0) {
            Node::AppendUse(pNVar9,(Use *)(pNVar24 + (-5 - uVar23) * 0x18));
          }
        }
        pOVar13 = (Operator *)
                  CommonOperatorBuilder::Call
                            (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar17);
        NodeProperties::ChangeOp(param_1,pOVar13);
        this_01 = (ObjectRef *)param_1;
        pNVar5 = pNVar8;
LAB_016e3be8:
        bVar3 = true;
      }
      else {
        plVar14 = (long *)MapInference::GetMaps((MapInference *)local_a8);
        ObjectRef::ObjectRef
                  ((ObjectRef *)local_100,*(undefined8 *)(this + 0x18),*(undefined8 *)*plVar14,0);
        uVar12 = ObjectRef::IsMap((ObjectRef *)local_100);
        if ((uVar12 & 1) == 0) {
LAB_016e4048:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        FunctionTemplateInfoRef::LookupHolderOfExpectedType
                  (&local_d0,&local_f0,local_100._0_8_,local_100._8_8_,0);
        if ((int)local_d0 == 0) {
          this_01 = (ObjectRef *)MapInference::NoChange((MapInference *)local_a8);
          bVar3 = true;
        }
        else {
          uVar12 = MapRef::IsJSReceiverMap((MapRef *)local_100);
          if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","first_receiver_map.IsJSReceiverMap()");
          }
          uVar12 = MapRef::is_access_check_needed((MapRef *)local_100);
          if ((uVar12 & 1) != 0) {
            uVar12 = FunctionTemplateInfoRef::accept_any_receiver
                               ((FunctionTemplateInfoRef *)&local_f0);
            if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.",
                       "!first_receiver_map.is_access_check_needed() || function_template_info.accept_any_receiver()"
                      );
            }
          }
          lVar22 = *plVar14;
          this_01 = (ObjectRef *)pNVar10;
          if (1 < (ulong)(plVar14[1] - lVar22 >> 3)) {
            this_01 = (ObjectRef *)&local_c0;
            uVar12 = 1;
            do {
              ObjectRef::ObjectRef
                        ((ObjectRef *)&local_110,*(undefined8 *)(this + 0x18),
                         *(undefined8 *)(lVar22 + uVar12 * 8),0);
              uVar15 = ObjectRef::IsMap((ObjectRef *)&local_110);
              if ((uVar15 & 1) == 0) goto LAB_016e4048;
              FunctionTemplateInfoRef::LookupHolderOfExpectedType
                        (&local_130,&local_f0,local_110,uStack_108,0);
              if ((((int)local_d0 != (int)local_130) || ((char)pNStack_c8 == '\0')) ||
                 ((char)local_128 == '\0')) goto LAB_016e3b54;
              uVar15 = ObjectRef::equals(this_01,aOStack_120);
              if ((uVar15 & 1) == 0) goto LAB_016e3b54;
              uVar15 = MapRef::IsJSReceiverMap((MapRef *)&local_110);
              if ((uVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","receiver_map.IsJSReceiverMap()");
              }
              uVar15 = MapRef::is_access_check_needed((MapRef *)&local_110);
              if ((uVar15 & 1) != 0) {
                uVar15 = FunctionTemplateInfoRef::accept_any_receiver
                                   ((FunctionTemplateInfoRef *)&local_f0);
                if ((uVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.",
                           "!receiver_map.is_access_check_needed() || function_template_info.accept_any_receiver()"
                          );
                }
              }
              lVar22 = *plVar14;
              uVar12 = uVar12 + 1;
            } while (uVar12 < (ulong)(plVar14[1] - lVar22 >> 3));
          }
          if (((byte)pNVar5[3] >> 4 & 1) != 0) {
            uVar12 = MapInference::RelyOnMapsViaStability
                               ((MapInference *)local_a8,*(CompilationDependencies **)(this + 0x30))
            ;
            if ((uVar12 & 1) == 0) {
LAB_016e3b54:
              this_01 = (ObjectRef *)MapInference::NoChange((MapInference *)local_a8);
              goto LAB_016e3be8;
            }
          }
          MapInference::RelyOnMapsPreferStability
                    ((MapInference *)local_a8,*(CompilationDependencies **)(this + 0x30),
                     *(JSGraph **)(this + 0x10),&local_d8,pNVar9,(FeedbackSource *)(pNVar5 + 8));
          if ((int)local_d0 == 2) {
            pNVar5 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)&local_c0);
            bVar3 = false;
          }
          else {
            bVar3 = false;
            pNVar5 = pNVar8;
          }
        }
      }
      MapInference::~MapInference((MapInference *)local_a8);
      if (bVar3) goto LAB_016e3eec;
    }
    else {
      uVar12 = FunctionTemplateInfoRef::is_signature_undefined((FunctionTemplateInfoRef *)&local_f0)
      ;
      if ((uVar12 & 1) == 0) goto LAB_016e3738;
      pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar13 = (Operator *)
                SimplifiedOperatorBuilder::ConvertReceiver
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                           *(uint *)pNVar5 >> 0x1d & 3);
      pNStack_98 = local_d8;
      local_a8._0_8_ = pNVar8;
      local_a8._8_8_ = pNVar7;
      pNStack_90 = pNVar9;
      pNVar8 = (Node *)Graph::NewNode(pGVar26,pOVar13,4,(Node **)local_a8,false);
      pNVar5 = pNVar8;
      local_d8 = pNVar8;
    }
    FunctionTemplateInfoRef::call_code();
    if (local_a8[0] != (ObjectRef)0x0) {
      FunctionTemplateInfoRef::call_code();
      pNStack_c8 = pNStack_98;
      local_d0 = (Node *)local_a8._8_8_;
      CodeFactory::CallApiCallback(*(Isolate **)(*(long *)(this + 0x10) + 0x168));
      local_130 = &PTR__CallInterfaceDescriptor_01ca0fc8;
      local_128 = pNStack_98;
      pCVar17 = (CallDescriptor *)
                Linkage::GetStubCallDescriptor
                          (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_130,iVar20 + -1,1,0,
                           0);
      local_110 = CallHandlerInfoRef::callback((CallHandlerInfoRef *)&local_d0);
      uVar18 = ExternalReference::Create(&local_110,6);
      pNVar9 = (Node *)CreateGenericLazyDeoptContinuationFrameState
                                 (*(JSGraph **)(this + 0x10),param_2,pNVar6,pNVar10,pNVar8,pNVar11);
      pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
      pNVar6 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_a8._0_8_);
      Node::InsertInput(param_1,pZVar27,0,pNVar6);
      pNVar10 = (Node *)MachineGraph::ExternalConstant(*(MachineGraph **)(this + 0x10),uVar18);
      pNVar6 = param_1 + 0x20;
      pNVar7 = pNVar6;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar7 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      pNVar11 = *(Node **)(pNVar7 + 8);
      if (pNVar11 != pNVar10) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar28 = (Use *)(*(long *)pNVar6 + -0x30);
        }
        else {
          pUVar28 = (Use *)(param_1 + -0x30);
        }
        if (pNVar11 != (Node *)0x0) {
          Node::RemoveUse(pNVar11,pUVar28);
        }
        *(Node **)(pNVar7 + 8) = pNVar10;
        if (pNVar10 != (Node *)0x0) {
          Node::AppendUse(pNVar10,pUVar28);
        }
      }
      pZVar27 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
      pNVar7 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(iVar20 + -2));
      Node::InsertInput(param_1,pZVar27,2,pNVar7);
      pJVar25 = *(JSGraph **)(this + 0x10);
      pZVar27 = (Zone *)**(undefined8 **)pJVar25;
      local_100 = CallHandlerInfoRef::data((CallHandlerInfoRef *)&local_d0);
      pNVar7 = (Node *)JSGraph::Constant(pJVar25,(ObjectRef *)local_100);
      Node::InsertInput(param_1,pZVar27,3,pNVar7);
      Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),4,pNVar5);
      pNVar5 = pNVar6;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar5 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      pNVar7 = *(Node **)(pNVar5 + 0x28);
      if (pNVar7 != pNVar8) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar28 = (Use *)(*(long *)pNVar6 + -0x90);
        }
        else {
          pUVar28 = (Use *)(param_1 + -0x90);
        }
        if (pNVar7 != (Node *)0x0) {
          Node::RemoveUse(pNVar7,pUVar28);
        }
        *(Node **)(pNVar5 + 0x28) = pNVar8;
        if (pNVar8 != (Node *)0x0) {
          Node::AppendUse(pNVar8,pUVar28);
        }
      }
      pNVar5 = pNVar6;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar5 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      pNVar8 = *(Node **)(pNVar5 + (ulong)(iVar20 + 5) * 8);
      if (pNVar8 != pNVar9) {
        pNVar7 = param_1;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar7 = *(Node **)pNVar6;
        }
        if (pNVar8 != (Node *)0x0) {
          Node::RemoveUse(pNVar8,(Use *)(pNVar7 + (-6 - uVar23) * 0x18));
        }
        *(Node **)(pNVar5 + (ulong)(iVar20 + 5) * 8) = pNVar9;
        if (pNVar9 != (Node *)0x0) {
          Node::AppendUse(pNVar9,(Use *)(pNVar7 + (-6 - uVar23) * 0x18));
        }
      }
      pNVar8 = local_d8;
      pNVar5 = pNVar6;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar5 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      pNVar7 = *(Node **)(pNVar5 + (ulong)(iVar20 + 6) * 8);
      if (pNVar7 != local_d8) {
        pNVar9 = param_1;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar9 = *(Node **)pNVar6;
        }
        if (pNVar7 != (Node *)0x0) {
          Node::RemoveUse(pNVar7,(Use *)(pNVar9 + (-7 - uVar23) * 0x18));
        }
        *(Node **)(pNVar5 + (ulong)(iVar20 + 6) * 8) = pNVar8;
        if (pNVar8 != (Node *)0x0) {
          Node::AppendUse(pNVar8,(Use *)(pNVar9 + (-7 - uVar23) * 0x18));
        }
      }
      pOVar13 = (Operator *)
                CommonOperatorBuilder::Call
                          (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar17);
      NodeProperties::ChangeOp(param_1,pOVar13);
      this_01 = (ObjectRef *)param_1;
      goto LAB_016e3eec;
    }
    if ((*(JSHeapBroker **)(this + 0x18))[0x74] == (JSHeapBroker)0x0) goto LAB_016e3ee8;
    pbVar19 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(this + 0x18));
    pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar19,"Missing ",8);
    pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar19,"call code for function template info ",0x25);
    pbVar19 = (basic_ostream *)compiler::operator<<(pbVar19,(ObjectRef *)&local_f0);
    pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar19," (",2);
    pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar19,"../../src/compiler/js-call-reducer.cc",0x25);
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar19,":",1);
    iVar20 = 0xdc8;
  }
  pbVar19 = (basic_ostream *)
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      (this_00,iVar20);
  pbVar19 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar19,")",1);
  std::__ndk1::ios_base::getloc();
  plVar14 = (long *)std::__ndk1::locale::use_facet
                              ((locale *)local_a8,(id *)&std::__ndk1::ctype<char>::id);
  cVar4 = (**(code **)(*plVar14 + 0x38))(plVar14,10);
  std::__ndk1::locale::~locale((locale *)local_a8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar19,cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar19);
  this_01 = (ObjectRef *)0x0;
LAB_016e3eec:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

