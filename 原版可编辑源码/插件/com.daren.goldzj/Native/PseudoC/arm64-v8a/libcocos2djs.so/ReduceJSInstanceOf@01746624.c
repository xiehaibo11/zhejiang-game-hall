
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSInstanceOf(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSInstanceOf
          (JSNativeContextSpecialization *this,Node *param_1)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  Node *pNVar8;
  Node *pNVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  Node *pNVar12;
  ulong uVar13;
  ProcessedFeedback *this_00;
  long lVar14;
  JSObjectRef *this_01;
  undefined8 uVar15;
  Operator *pOVar16;
  Node *pNVar17;
  Node *this_02;
  Node *this_03;
  Use *pUVar18;
  Use *pUVar19;
  CompilationDependencies *pCVar20;
  Use *pUVar21;
  Graph *this_04;
  undefined8 uVar22;
  Use *pUVar23;
  undefined1 auVar24 [16];
  undefined1 local_248 [8];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  AccessInfoFactory local_1f0 [8];
  ObjectRef aOStack_1e8 [24];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  long local_1c0;
  long local_1b8;
  long lStack_1b0;
  undefined8 local_1a8;
  long local_1a0;
  long local_198;
  long lStack_190;
  undefined8 local_188;
  long local_180;
  long local_168;
  undefined8 uStack_160;
  ulong local_158;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  Node *local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  long lStack_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  long local_c0;
  long local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)FeedbackParameterOf(*(Operator **)param_1);
  pNVar8 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar9 = (Node *)NodeProperties::GetValueInput(param_1,1);
  uVar10 = NodeProperties::GetContextInput(param_1);
  local_118 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar11 = NodeProperties::GetFrameStateInput(param_1);
  pNVar12 = (Node *)NodeProperties::GetControlInput(param_1,0);
  if (*(short *)(*(long *)pNVar9 + 0x10) != 0x1e) {
LAB_01746740:
    if ((*plVar7 != 0) && ((int)plVar7[1] != -1)) {
      local_100._0_8_ = *plVar7;
      local_100._8_4_ = (int)plVar7[1];
      this_00 = (ProcessedFeedback *)
                JSHeapBroker::GetFeedbackForInstanceOf
                          (*(JSHeapBroker **)(this + 0x18),(FeedbackSource *)local_100);
      if (*(int *)this_00 != 0) {
        lVar14 = ProcessedFeedback::AsInstanceOf(this_00);
        local_100._8_8_ = *(long *)(lVar14 + 0x10);
        local_100._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(lVar14 + 8);
        auVar24 = *(undefined1 (*) [16])(lVar14 + 8);
        lStack_f0 = *(long *)(lVar14 + 0x18);
        if (local_100[0] != (ObjectRef)0x0) {
          this_01 = (JSObjectRef *)((ulong)local_100 | 8);
          goto LAB_017467a0;
        }
      }
    }
    param_1 = (Node *)0x0;
    goto LAB_0174702c;
  }
  uVar22 = *(undefined8 *)(*(long *)pNVar9 + 0x30);
  ObjectRef::ObjectRef((ObjectRef *)local_100,*(undefined8 *)(this + 0x18),uVar22,0);
  uVar13 = ObjectRef::IsHeapObject((ObjectRef *)local_100);
  if ((uVar13 & 1) == 0) {
LAB_017470a4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  uVar13 = ObjectRef::IsJSObject((ObjectRef *)local_100);
  if ((uVar13 & 1) == 0) goto LAB_01746740;
  ObjectRef::ObjectRef((ObjectRef *)local_100,*(undefined8 *)(this + 0x18),uVar22,0);
  uVar13 = ObjectRef::IsHeapObject((ObjectRef *)local_100);
  if ((uVar13 & 1) == 0) goto LAB_017470a4;
  local_1c0 = local_100._0_8_;
  local_1b8 = local_100._8_8_;
  auVar24 = ObjectRef::AsJSObject((ObjectRef *)&local_1c0);
  this_01 = (JSObjectRef *)local_100;
LAB_017467a0:
  local_100 = auVar24;
  uVar22 = JSObjectRef::object(this_01);
  ObjectRef::ObjectRef((ObjectRef *)&local_128,*(undefined8 *)(this + 0x18),uVar22,0);
  uVar13 = ObjectRef::IsJSObject((ObjectRef *)&local_128);
  if ((uVar13 & 1) == 0) goto LAB_017470b8;
  local_138 = HeapObjectRef::map((HeapObjectRef *)&local_128);
  PropertyAccessInfo::Invalid
            (*(PropertyAccessInfo **)**(undefined8 **)(this + 0x10),local_138._8_8_);
  uVar6 = local_138._8_8_;
  uVar15 = local_138._0_8_;
  if (FLAG_concurrent_inlining == '\0') {
    AccessInfoFactory::AccessInfoFactory
              (local_1f0,*(JSHeapBroker **)(this + 0x18),*(CompilationDependencies **)(this + 0x38),
               *(Zone **)**(undefined8 **)(this + 0x10));
    uVar15 = MapRef::object((MapRef *)local_138);
    AccessInfoFactory::ComputePropertyAccessInfo
              (&local_1c0,local_1f0,uVar15,*(long *)(*(long *)(this + 0x10) + 0x168) + 0xc68,0);
    uVar15 = local_1a8;
    lVar5 = lStack_1b0;
    lVar14 = local_1b8;
    local_100._0_4_ = (undefined4)local_1c0;
    if (local_e0 == local_1a0) {
      local_1b8 = 0;
      lStack_1b0 = 0;
      local_1a8 = 0;
      lStack_f0 = lVar5;
      local_100._8_8_ = lVar14;
      local_e8 = uVar15;
    }
    else {
      std::__ndk1::
      vector<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
      ::
      assign<std::__ndk1::move_iterator<std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map>*>>>
                ((vector<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
                  *)(local_100 + 8),local_1b8,lStack_1b0);
    }
    if (local_c0 == local_180) {
      lStack_d0 = lStack_190;
      local_d8 = local_198;
      goto LAB_01746bec;
    }
    std::__ndk1::
    vector<v8::internal::compiler::CompilationDependency_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CompilationDependency_const*>>
    ::
    assign<std::__ndk1::move_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::CompilationDependency_const**>>>
              ((vector<v8::internal::compiler::CompilationDependency_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CompilationDependency_const*>>
                *)&local_d8,local_198,lStack_190);
joined_r0x01746b9c:
    local_a8 = local_168;
    uStack_a0 = uStack_160;
    local_98 = local_158;
    if (local_198 != 0) {
      lStack_190 = local_198;
    }
  }
  else {
    uVar1 = *(undefined8 *)(this + 0x18);
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_1d0,uVar1,*(long *)(*(long *)(this + 0x10) + 0x168) + 0xc68,0);
    uVar13 = ObjectRef::IsName((ObjectRef *)&local_1d0);
    if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsName()");
    }
    JSHeapBroker::GetPropertyAccessInfo(&local_1c0,uVar1,uVar15,uVar6,local_1d0,uStack_1c8,0,0,0);
    uVar15 = local_1a8;
    lVar5 = lStack_1b0;
    lVar14 = local_1b8;
    local_100._0_4_ = (undefined4)local_1c0;
    if (local_e0 == local_1a0) {
      local_1b8 = 0;
      lStack_1b0 = 0;
      local_1a8 = 0;
      lStack_f0 = lVar5;
      local_100._8_8_ = lVar14;
      local_e8 = uVar15;
    }
    else {
      std::__ndk1::
      vector<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
      ::
      assign<std::__ndk1::move_iterator<std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map>*>>>
                ((vector<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
                  *)(local_100 + 8),local_1b8,lStack_1b0);
    }
    if (local_c0 != local_180) {
      std::__ndk1::
      vector<v8::internal::compiler::CompilationDependency_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CompilationDependency_const*>>
      ::
      assign<std::__ndk1::move_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::CompilationDependency_const**>>>
                ((vector<v8::internal::compiler::CompilationDependency_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CompilationDependency_const*>>
                  *)&local_d8,local_198,lStack_190);
      goto joined_r0x01746b9c;
    }
    lStack_d0 = lStack_190;
    local_d8 = local_198;
LAB_01746bec:
    local_188 = 0;
    lStack_190 = 0;
    local_198 = 0;
    local_a8 = local_168;
    uStack_a0 = uStack_160;
    local_98 = local_158;
  }
  if (local_1b8 != 0) {
    lStack_1b0 = local_1b8;
  }
  if (local_100._0_4_ == 0) {
LAB_01747010:
    param_1 = (Node *)0x0;
    auVar24 = local_230;
    auVar4 = local_110;
  }
  else {
    PropertyAccessInfo::RecordDependencies
              ((PropertyAccessInfo *)local_100,*(CompilationDependencies **)(this + 0x38));
    local_1c0 = *(long *)(this + 0x10);
    local_1b8 = *(long *)(this + 0x18);
    lStack_1b0 = *(long *)(this + 0x38);
    if (local_100._0_4_ == 3) {
      if (local_a8 == 0) {
        bVar3 = false;
        uStack_218 = uStack_120;
        local_220 = local_128;
      }
      else {
        ObjectRef::ObjectRef((ObjectRef *)&local_220,local_1b8,local_a8,0);
        uVar13 = ObjectRef::IsJSObject((ObjectRef *)&local_220);
        if ((uVar13 & 1) == 0) goto LAB_017470b8;
        bVar3 = true;
      }
      JSObjectRef::GetOwnDataProperty(local_1f0,&local_220,local_98 & 0xff,uStack_a0,0);
      if (local_1f0[0] != (AccessInfoFactory)0x0) {
        uVar13 = ObjectRef::IsHeapObject(aOStack_1e8);
        if ((uVar13 & 1) != 0) {
          local_230 = ObjectRef::AsHeapObject(aOStack_1e8);
          local_110 = HeapObjectRef::map((HeapObjectRef *)local_230);
          uVar13 = MapRef::is_callable((MapRef *)local_110);
          if ((uVar13 & 1) != 0) {
            if (bVar3) {
              pCVar20 = *(CompilationDependencies **)(this + 0x38);
              ObjectRef::ObjectRef((ObjectRef *)local_110,*(undefined8 *)(this + 0x18),local_a8,0);
              uVar13 = ObjectRef::IsJSObject((ObjectRef *)local_110);
              if ((uVar13 & 1) == 0) {
LAB_017470b8:
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","IsJSObject()");
              }
              local_248[0] = 1;
              local_240 = local_110;
              CompilationDependencies::
              DependOnStablePrototypeChains<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
                        (pCVar20,local_100 + 8,1,local_248);
            }
            pNVar17 = (Node *)PropertyAccessBuilder::BuildCheckValue
                                        ((PropertyAccessBuilder *)&local_1c0,pNVar9,&local_118,
                                         pNVar12,uVar22);
            PropertyAccessBuilder::BuildCheckMaps
                      ((PropertyAccessBuilder *)&local_1c0,pNVar17,&local_118,pNVar12,
                       (ZoneVector *)(local_100 + 8));
            this_02 = (Node *)CreateStubBuiltinContinuationFrameState
                                        (*(undefined8 *)(this + 0x10),0x72,uVar10,0,0,uVar11,1);
            pNVar9 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),aOStack_1e8);
            Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar9);
            pNVar9 = param_1 + 0x20;
            pNVar12 = pNVar9;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar12 = (Node *)(*(long *)pNVar9 + 0x10);
            }
            this_03 = *(Node **)(pNVar12 + 8);
            if (this_03 != pNVar17) {
              if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar21 = (Use *)(*(long *)pNVar9 + -0x30);
              }
              else {
                pUVar21 = (Use *)(param_1 + -0x30);
              }
              if (this_03 != (Node *)0x0) {
                Node::RemoveUse(this_03,pUVar21);
              }
              *(Node **)(pNVar12 + 8) = pNVar17;
              if (pNVar17 != (Node *)0x0) {
                Node::AppendUse(pNVar17,pUVar21);
              }
            }
            pNVar12 = pNVar9;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar12 = (Node *)(*(long *)pNVar9 + 0x10);
            }
            pNVar17 = *(Node **)(pNVar12 + 0x10);
            if (pNVar17 != pNVar8) {
              if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar21 = (Use *)(*(long *)pNVar9 + -0x48);
              }
              else {
                pUVar21 = (Use *)(param_1 + -0x48);
              }
              if (pNVar17 != (Node *)0x0) {
                Node::RemoveUse(pNVar17,pUVar21);
              }
              *(Node **)(pNVar12 + 0x10) = pNVar8;
              if (pNVar8 != (Node *)0x0) {
                Node::AppendUse(pNVar8,pUVar21);
              }
            }
            pNVar8 = pNVar9;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar8 = (Node *)(*(long *)pNVar9 + 0x10);
            }
            pNVar12 = *(Node **)(pNVar8 + 0x20);
            if (pNVar12 != this_02) {
              if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar21 = (Use *)(*(long *)pNVar9 + -0x78);
              }
              else {
                pUVar21 = (Use *)(param_1 + -0x78);
              }
              if (pNVar12 != (Node *)0x0) {
                Node::RemoveUse(pNVar12,pUVar21);
              }
              *(Node **)(pNVar8 + 0x20) = this_02;
              if (this_02 != (Node *)0x0) {
                Node::AppendUse(this_02,pUVar21);
              }
            }
            pNVar12 = local_118;
            pNVar8 = pNVar9;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar8 = (Node *)(*(long *)pNVar9 + 0x10);
            }
            pNVar17 = *(Node **)(pNVar8 + 0x28);
            if (pNVar17 != local_118) {
              if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar21 = (Use *)(*(long *)pNVar9 + -0x90);
              }
              else {
                pUVar21 = (Use *)(param_1 + -0x90);
              }
              if (pNVar17 != (Node *)0x0) {
                Node::RemoveUse(pNVar17,pUVar21);
              }
              *(Node **)(pNVar8 + 0x28) = pNVar12;
              if (pNVar12 != (Node *)0x0) {
                Node::AppendUse(pNVar12,pUVar21);
              }
            }
            local_230._0_4_ = 0x7fc00000;
            local_110._0_8_ = (Node *)0x0;
            local_110._8_4_ = 0xffffffff;
            pOVar16 = (Operator *)
                      JSOperatorBuilder::Call
                                (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),3,local_230
                                 ,local_110,1,1,1);
            NodeProperties::ChangeOp(param_1,pOVar16);
            this_04 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar16 = (Operator *)
                      SimplifiedOperatorBuilder::ToBoolean
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f])
            ;
            local_110._0_8_ = param_1;
            pNVar8 = (Node *)Graph::NewNode(this_04,pOVar16,1,(Node **)local_110,false);
            auVar4._8_8_ = local_110._8_8_;
            auVar4._0_8_ = local_110._0_8_;
            auVar24._8_8_ = local_230._8_8_;
            auVar24._0_8_ = local_230._0_8_;
            pUVar21 = *(Use **)(param_1 + 0x18);
            while (pUVar21 != (Use *)0x0) {
              lVar14 = 0x10;
              if ((*(uint *)(pUVar21 + 0x10) & 1) != 0) {
                lVar14 = 0x20;
              }
              pUVar23 = *(Use **)pUVar21;
              pUVar18 = pUVar21 + lVar14 + (ulong)(*(uint *)(pUVar21 + 0x10) >> 1) * 0x20 + 0x18;
              uVar13 = NodeProperties::IsValueEdge(pUVar21,pUVar18);
              if ((uVar13 & 1) != 0) {
                pUVar19 = pUVar21 + (ulong)(*(uint *)(pUVar21 + 0x10) >> 1) * 0x18 + 0x18;
                if ((*(uint *)(pUVar21 + 0x10) & 1) == 0) {
                  pUVar19 = *(Use **)pUVar19;
                }
                if (pUVar19 != (Use *)pNVar8) {
                  pNVar9 = *(Node **)pUVar18;
                  if (pNVar9 != pNVar8) {
                    if (pNVar9 != (Node *)0x0) {
                      Node::RemoveUse(pNVar9,pUVar21);
                    }
                    *(Node **)pUVar18 = pNVar8;
                    if (pNVar8 != (Node *)0x0) {
                      Node::AppendUse(pNVar8,pUVar21);
                    }
                  }
                  pUVar18 = pUVar21 + (ulong)(*(uint *)(pUVar21 + 0x10) >> 1) * 0x18 + 0x18;
                  if ((*(uint *)(pUVar21 + 0x10) & 1) == 0) {
                    pUVar18 = *(Use **)pUVar18;
                  }
                  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),pUVar18);
                }
              }
              auVar4._8_8_ = local_110._8_8_;
              auVar4._0_8_ = local_110._0_8_;
              auVar24._8_8_ = local_230._8_8_;
              auVar24._0_8_ = local_230._0_8_;
              pUVar21 = pUVar23;
            }
            goto joined_r0x01747018;
          }
        }
      }
      goto LAB_01747010;
    }
    if (local_100._0_4_ != 1) goto LAB_01747010;
    uVar13 = MapRef::is_callable((MapRef *)local_138);
    if ((uVar13 & 1) == 0) goto LAB_01747010;
    local_200 = 0;
    uStack_1f8 = 0;
    local_208 = 0;
    CompilationDependencies::
    DependOnStablePrototypeChains<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
              (*(CompilationDependencies **)(this + 0x38),(ZoneVector *)(local_100 + 8),1,&local_208
              );
    PropertyAccessBuilder::BuildCheckMaps
              ((PropertyAccessBuilder *)&local_1c0,pNVar9,&local_118,pNVar12,
               (ZoneVector *)(local_100 + 8));
    NodeProperties::ReplaceValueInput(param_1,pNVar9,0);
    NodeProperties::ReplaceValueInput(param_1,pNVar8,1);
    NodeProperties::ReplaceEffectInput(param_1,local_118,0);
    pOVar16 = (Operator *)
              JSOperatorBuilder::OrdinaryHasInstance
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar16);
    pNVar8 = (Node *)ReduceJSOrdinaryHasInstance(this,param_1);
    auVar4._8_8_ = local_110._8_8_;
    auVar4._0_8_ = local_110._0_8_;
    auVar24._8_8_ = local_230._8_8_;
    auVar24._0_8_ = local_230._0_8_;
    if (pNVar8 != (Node *)0x0) {
      param_1 = pNVar8;
    }
  }
joined_r0x01747018:
  local_110 = auVar4;
  local_230 = auVar24;
  if (local_d8 != 0) {
    lStack_d0 = local_d8;
  }
  if (local_100._8_8_ != 0) {
    lStack_f0 = local_100._8_8_;
  }
LAB_0174702c:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

