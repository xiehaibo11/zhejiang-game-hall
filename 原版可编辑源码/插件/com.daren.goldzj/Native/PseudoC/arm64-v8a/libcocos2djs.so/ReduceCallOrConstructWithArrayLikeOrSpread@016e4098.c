
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::JSCallReducer::ReduceCallOrConstructWithArrayLikeOrSpread(v8::internal::compiler::Node*,
   int, v8::internal::compiler::CallFrequency const&, v8::internal::compiler::FeedbackSource const&,
   v8::internal::SpeculationMode, v8::internal::compiler::CallFeedbackRelation) */

Node * v8::internal::compiler::JSCallReducer::ReduceCallOrConstructWithArrayLikeOrSpread
                 (JSCallReducer *param_1,Node *param_2,int param_3,CallFrequency *param_4,
                 FeedbackSource *param_5,undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  Node *pNVar5;
  Operator *pOVar6;
  ulong uVar7;
  int *piVar8;
  uint *puVar9;
  char *pcVar10;
  undefined8 *puVar11;
  Node *pNVar12;
  __tree_node_base *p_Var13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  Node *pNVar17;
  long lVar18;
  Node *pNVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  JSCallReducer *pJVar23;
  long *plVar24;
  JSCallReducer *pJVar25;
  JSCallReducer *pJVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  Graph *pGVar30;
  undefined8 *puVar31;
  Node *local_98;
  Node *local_90;
  Node *pNStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pNVar5 = (Node *)NodeProperties::GetValueInput(param_2,param_3);
  pOVar6 = *(Operator **)pNVar5;
  if (*(short *)(pOVar6 + 0x10) != 0x2d4) {
    return (Node *)0x0;
  }
  plVar28 = *(long **)(pNVar5 + 0x18);
  if (*(long **)(pNVar5 + 0x18) != (long *)0x0) {
    do {
      plVar29 = (long *)*plVar28;
      lVar20 = 0x10;
      if ((*(uint *)(plVar28 + 2) & 1) != 0) {
        lVar20 = 0x20;
      }
      uVar7 = NodeProperties::IsValueEdge
                        (plVar28,(long)plVar28 +
                                 lVar20 + (ulong)(*(uint *)(plVar28 + 2) >> 1) * 0x20 + 0x18);
      if ((uVar7 & 1) == 0) goto LAB_016e4334;
      plVar24 = plVar28 + (ulong)(*(uint *)(plVar28 + 2) >> 1) * 3 + 3;
      if ((*(uint *)(plVar28 + 2) & 1) == 0) {
        plVar24 = (long *)*plVar24;
      }
      pOVar6 = (Operator *)*plVar24;
      uVar3 = *(ushort *)(pOVar6 + 0x10);
      if (uVar3 < 0xea) {
        if ((((0x2a < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x60000010000U) == 0)) &&
            (uVar3 != 0x75)) && (uVar3 != 0xd6)) goto switchD_016e41bc_caseD_300;
        goto LAB_016e4334;
      }
      switch(uVar3) {
      case 0x2fe:
        plVar28 = plVar24 + 4;
        if ((~*(uint *)((long)plVar24 + 0x14) & 0xf000000) == 0) {
          plVar28 = (long *)(*plVar28 + 0x10);
        }
        pNVar12 = (Node *)plVar28[2];
        break;
      case 0x2ff:
        puVar9 = (uint *)CallParametersOf(pOVar6);
        plVar28 = plVar24 + 4;
        if ((~*(uint *)((long)plVar24 + 0x14) & 0xf000000) == 0) {
          plVar28 = (long *)(*plVar28 + 0x10);
        }
        pNVar12 = (Node *)plVar28[((ulong)*puVar9 & 0x7ffffff) - 1];
        break;
      case 0x300:
      case 0x301:
        goto switchD_016e41bc_caseD_300;
      case 0x302:
        plVar28 = plVar24 + 4;
        if ((~*(uint *)((long)plVar24 + 0x14) & 0xf000000) == 0) {
          plVar28 = (long *)(*plVar28 + 0x10);
        }
        pNVar12 = (Node *)plVar28[1];
        break;
      case 0x303:
        piVar8 = (int *)ConstructParametersOf(pOVar6);
        plVar28 = plVar24 + 4;
        if ((~*(uint *)((long)plVar24 + 0x14) & 0xf000000) == 0) {
          plVar28 = (long *)(*plVar28 + 0x10);
        }
        pNVar12 = (Node *)plVar28[*piVar8 + -2];
        break;
      default:
        if (uVar3 == 0xea) {
          lVar20 = FieldAccessOf(pOVar6);
          if (*(int *)(lVar20 + 4) != 0xc) {
            if (*(int *)(lVar20 + 4) != 8) goto switchD_016e41bc_caseD_300;
            plVar28 = (long *)plVar24[3];
            while (plVar24 = plVar28, plVar24 != (long *)0x0) {
              plVar28 = (long *)*plVar24;
              lVar20 = 0x10;
              if ((*(uint *)(plVar24 + 2) & 1) != 0) {
                lVar20 = 0x20;
              }
              uVar7 = NodeProperties::IsValueEdge
                                (plVar24,(long)plVar24 +
                                         lVar20 + (ulong)(*(uint *)(plVar24 + 2) >> 1) * 0x20 + 0x18
                                );
              if ((uVar7 & 1) != 0) {
                uVar4 = *(uint *)(plVar24 + 2);
                plVar24 = plVar24 + (ulong)(uVar4 >> 1) * 3 + 3;
                plVar21 = plVar24;
                if ((uVar4 & 1) == 0) {
                  plVar21 = (long *)*plVar24;
                }
                if (*(short *)(*plVar21 + 0x10) != 0xea) {
                  if ((uVar4 & 1) == 0) {
                    plVar24 = (long *)*plVar24;
                  }
                  if (*(short *)(*plVar24 + 0x10) != 0xeb) goto switchD_016e41bc_caseD_300;
                }
              }
            }
          }
          goto LAB_016e4334;
        }
        goto switchD_016e41bc_caseD_300;
      }
      if (pNVar12 != pNVar5) {
switchD_016e41bc_caseD_300:
        pJVar23 = param_1 + 0x40;
        pJVar25 = *(JSCallReducer **)pJVar23;
        pJVar26 = pJVar23;
        if (pJVar25 == (JSCallReducer *)0x0) goto LAB_016e4420;
        pJVar23 = param_1 + 0x40;
        goto LAB_016e43e4;
      }
LAB_016e4334:
      plVar28 = plVar29;
    } while (plVar29 != (long *)0x0);
    pOVar6 = *(Operator **)pNVar5;
  }
  pcVar10 = (char *)CreateArgumentsTypeOf(pOVar6);
  cVar2 = *pcVar10;
  puVar11 = (undefined8 *)NodeProperties::GetFrameStateInput(pNVar5);
  lVar20 = FrameStateInfoOf((Operator *)*puVar11);
  if (*(long *)(lVar20 + 0x10) == 0) {
    return (Node *)0x0;
  }
  lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + 0x10);
  if (lVar20 == 0) {
    return (Node *)0x0;
  }
  ObjectRef::ObjectRef((ObjectRef *)&local_90,*(undefined8 *)(param_1 + 0x18),lVar20,0);
  uVar7 = ObjectRef::IsSharedFunctionInfo((ObjectRef *)&local_90);
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
  }
  uVar4 = SharedFunctionInfoRef::internal_formal_parameter_count((SharedFunctionInfoRef *)&local_90)
  ;
  if (cVar2 != '\x02') {
    if (cVar2 == '\0') {
      if (uVar4 != 0) {
        pNVar12 = (Node *)NodeProperties::GetEffectInput(param_2,0);
        uVar7 = NodeProperties::NoObservableSideEffectBetween(pNVar12,pNVar5);
        uVar4 = 0;
        if ((uVar7 & 1) == 0) {
          return (Node *)0x0;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  if (((*(short *)(*(long *)param_2 + 0x10) == 0x303) ||
      (*(short *)(*(long *)param_2 + 0x10) == 0x2ff)) &&
     (uVar7 = CompilationDependencies::DependOnArrayIteratorProtector
                        (*(CompilationDependencies **)(param_1 + 0x30)), (uVar7 & 1) == 0)) {
    return (Node *)0x0;
  }
  Node::RemoveInput(param_2,param_3);
  plVar29 = puVar11 + 4;
  plVar28 = plVar29;
  if ((~*(uint *)((long)puVar11 + 0x14) & 0xf000000) == 0) {
    plVar28 = (long *)(*plVar29 + 0x10);
  }
  puVar22 = (undefined8 *)plVar28[5];
  pOVar6 = (Operator *)*puVar22;
  if (*(short *)(pOVar6 + 0x10) != 0x29) {
    if ((*(ushort *)(*(long *)param_2 + 0x10) & 0xfffe) == 0x2fe) {
      pOVar6 = (Operator *)
               JSOperatorBuilder::CallForwardVarargs
                         (*(JSOperatorBuilder **)(*(long *)(param_1 + 0x10) + 0x170),(long)param_3,
                          uVar4);
    }
    else {
      pOVar6 = (Operator *)
               JSOperatorBuilder::ConstructForwardVarargs
                         (*(JSOperatorBuilder **)(*(long *)(param_1 + 0x10) + 0x170),
                          (long)(param_3 + 1),uVar4);
    }
    NodeProperties::ChangeOp(param_2,pOVar6);
    return param_2;
  }
  lVar20 = FrameStateInfoOf(pOVar6);
  puVar31 = puVar11;
  if (*(int **)(lVar20 + 0x10) != (int *)0x0) {
    puVar31 = puVar22;
    if (**(int **)(lVar20 + 0x10) != 1) {
      puVar31 = puVar11;
    }
    plVar29 = puVar31 + 4;
  }
  if ((~*(uint *)((long)puVar31 + 0x14) & 0xf000000) == 0) {
    plVar29 = (long *)(*plVar29 + 0x10);
  }
  lVar27 = *plVar29;
  lVar20 = (long)(int)uVar4;
  plVar28 = (long *)(lVar27 + 0x20);
  while( true ) {
    lVar20 = lVar20 + 1;
    uVar1 = *(uint *)(lVar27 + 0x14);
    uVar4 = uVar1 & 0xf000000;
    if (uVar4 == 0xf000000) {
      uVar1 = *(uint *)(*plVar28 + 8);
    }
    else {
      uVar1 = uVar1 >> 0x18 & 0xf;
    }
    if ((int)uVar1 <= lVar20) break;
    plVar29 = plVar28;
    if (uVar4 == 0xf000000) {
      plVar29 = (long *)(*plVar28 + 0x10);
    }
    Node::InsertInput(param_2,*(Zone **)**(undefined8 **)(param_1 + 0x10),param_3,
                      (Node *)plVar29[lVar20]);
    param_3 = param_3 + 1;
  }
  if ((*(ushort *)(*(long *)param_2 + 0x10) & 0xfffe) == 0x2fe) {
    pOVar6 = (Operator *)
             JSOperatorBuilder::Call
                       (*(JSOperatorBuilder **)(*(long *)(param_1 + 0x10) + 0x170),(long)param_3,
                        param_4,param_5,2,param_6,1);
    NodeProperties::ChangeOp(param_2,pOVar6);
    pNVar5 = (Node *)ReduceJSCall(param_1,param_2);
  }
  else {
    pOVar6 = (Operator *)
             JSOperatorBuilder::Construct
                       (*(JSOperatorBuilder **)(*(long *)(param_1 + 0x10) + 0x170),param_3 + 1,
                        param_4,param_5);
    NodeProperties::ChangeOp(param_2,pOVar6);
    pNVar5 = (Node *)NodeProperties::GetValueInput(param_2,param_3);
    uVar14 = NodeProperties::GetFrameStateInput(param_2);
    lVar20 = NodeProperties::GetContextInput(param_2);
    uVar15 = NodeProperties::GetEffectInput(param_2,0);
    uVar16 = NodeProperties::GetControlInput(param_2,0);
    pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsConstructor
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2f]);
    local_90 = pNVar5;
    pNVar12 = (Node *)Graph::NewNode(pGVar30,pOVar6,1,&local_90,false);
    pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::Branch
                       ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1],1,1);
    local_90 = pNVar12;
    pNStack_88 = (Node *)uVar16;
    pNVar12 = (Node *)Graph::NewNode(pGVar30,pOVar6,2,&local_90,false);
    pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::IfFalse
                       ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1]);
    local_90 = pNVar12;
    uVar16 = Graph::NewNode(pGVar30,pOVar6,1,&local_90,false);
    pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    pOVar6 = (Operator *)
             JSOperatorBuilder::CallRuntime
                       ((JSOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[0x2e],0xb6,2);
    local_90 = (Node *)JSGraph::Constant(*(JSGraph **)(param_1 + 0x10),89.0);
    pNStack_88 = pNVar5;
    local_80 = lVar20;
    uStack_78 = uVar14;
    local_70 = uVar15;
    uStack_68 = uVar16;
    pNVar17 = (Node *)Graph::NewNode(pGVar30,pOVar6,6,&local_90,false);
    pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::IfTrue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1]);
    local_90 = pNVar12;
    pNVar5 = (Node *)Graph::NewNode(pGVar30,pOVar6,1,&local_90,false);
    NodeProperties::ReplaceControlInput(param_2,pNVar5,0);
    local_98 = (Node *)0x0;
    uVar7 = NodeProperties::IsExceptionalCall(param_2,&local_98);
    pNVar5 = pNVar17;
    if ((uVar7 & 1) != 0) {
      pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::IfException
                         ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1]);
      local_90 = pNVar17;
      pNStack_88 = pNVar17;
      pNVar12 = (Node *)Graph::NewNode(pGVar30,pOVar6,2,&local_90,false);
      pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::IfSuccess
                         ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1]);
      local_90 = pNVar17;
      pNVar5 = (Node *)Graph::NewNode(pGVar30,pOVar6,1,&local_90,false);
      pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::Merge
                         ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1],2);
      pNStack_88 = local_98;
      local_90 = pNVar12;
      lVar20 = Graph::NewNode(pGVar30,pOVar6,2,&local_90,false);
      pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::EffectPhi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1],2);
      pNStack_88 = local_98;
      local_90 = pNVar12;
      local_80 = lVar20;
      lVar27 = Graph::NewNode(pGVar30,pOVar6,3,&local_90,false);
      pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::Phi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1],8,2);
      pNStack_88 = local_98;
      local_90 = pNVar12;
      local_80 = lVar20;
      lVar18 = Graph::NewNode(pGVar30,pOVar6,3,&local_90,false);
      (**(code **)(**(long **)(param_1 + 8) + 0x20))
                (*(long **)(param_1 + 8),local_98,lVar18,lVar27,lVar20);
      pNVar12 = local_98;
      plVar28 = (long *)(lVar20 + 0x20);
      uVar4 = *(uint *)(lVar20 + 0x14) & 0xf000000;
      plVar29 = plVar28;
      if (uVar4 == 0xf000000) {
        plVar29 = (long *)(*plVar28 + 0x10);
      }
      pNVar19 = (Node *)plVar29[1];
      if (pNVar19 != local_98) {
        if (uVar4 == 0xf000000) {
          lVar20 = *plVar28;
        }
        if (pNVar19 != (Node *)0x0) {
          Node::RemoveUse(pNVar19,(Use *)(lVar20 + -0x30));
        }
        plVar29[1] = (long)pNVar12;
        if (pNVar12 != (Node *)0x0) {
          Node::AppendUse(pNVar12,(Use *)(lVar20 + -0x30));
        }
      }
      pNVar12 = local_98;
      plVar28 = (long *)(lVar27 + 0x20);
      uVar4 = *(uint *)(lVar27 + 0x14) & 0xf000000;
      plVar29 = plVar28;
      if (uVar4 == 0xf000000) {
        plVar29 = (long *)(*plVar28 + 0x10);
      }
      pNVar19 = (Node *)plVar29[1];
      if (pNVar19 != local_98) {
        if (uVar4 == 0xf000000) {
          lVar27 = *plVar28;
        }
        if (pNVar19 != (Node *)0x0) {
          Node::RemoveUse(pNVar19,(Use *)(lVar27 + -0x30));
        }
        plVar29[1] = (long)pNVar12;
        if (pNVar12 != (Node *)0x0) {
          Node::AppendUse(pNVar12,(Use *)(lVar27 + -0x30));
        }
      }
      pNVar12 = local_98;
      plVar28 = (long *)(lVar18 + 0x20);
      uVar4 = *(uint *)(lVar18 + 0x14) & 0xf000000;
      plVar29 = plVar28;
      if (uVar4 == 0xf000000) {
        plVar29 = (long *)(*plVar28 + 0x10);
      }
      pNVar19 = (Node *)plVar29[1];
      if (pNVar19 != local_98) {
        if (uVar4 == 0xf000000) {
          lVar18 = *plVar28;
        }
        if (pNVar19 != (Node *)0x0) {
          Node::RemoveUse(pNVar19,(Use *)(lVar18 + -0x30));
        }
        plVar29[1] = (long)pNVar12;
        if (pNVar12 != (Node *)0x0) {
          Node::AppendUse(pNVar12,(Use *)(lVar18 + -0x30));
        }
      }
    }
    pGVar30 = (Graph *)**(undefined8 **)(param_1 + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::Throw
                       ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1]);
    local_90 = pNVar17;
    pNStack_88 = pNVar5;
    pNVar5 = (Node *)Graph::NewNode(pGVar30,pOVar6,2,&local_90,false);
    NodeProperties::MergeControlToEnd
              ((Graph *)**(undefined8 **)(param_1 + 0x10),
               (CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 0x10))[1],pNVar5);
    pNVar5 = (Node *)ReduceJSConstruct(param_1,param_2);
  }
  if (pNVar5 != (Node *)0x0) {
    return pNVar5;
  }
  return param_2;
LAB_016e43e4:
  pJVar26 = pJVar25;
  if (param_2 < *(Node **)(pJVar26 + 0x20)) {
    pJVar23 = pJVar26;
    pJVar25 = *(JSCallReducer **)pJVar26;
    if (*(JSCallReducer **)pJVar26 == (JSCallReducer *)0x0) {
      lVar20 = *(long *)pJVar26;
      goto joined_r0x016e4600;
    }
    goto LAB_016e43e4;
  }
  if (param_2 <= *(Node **)(pJVar26 + 0x20)) goto LAB_016e4420;
  pJVar23 = pJVar26 + 8;
  pJVar25 = *(JSCallReducer **)pJVar23;
  if (*(JSCallReducer **)pJVar23 == (JSCallReducer *)0x0) {
LAB_016e4420:
    lVar20 = *(long *)pJVar23;
joined_r0x016e4600:
    if (lVar20 != 0) {
      return (Node *)0x0;
    }
    p_Var13 = operator_new(0x28);
    *(Node **)(p_Var13 + 0x20) = param_2;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(JSCallReducer **)(p_Var13 + 0x10) = pJVar26;
    *(__tree_node_base **)pJVar23 = p_Var13;
    if (**(long **)(param_1 + 0x38) != 0) {
      *(long *)(param_1 + 0x38) = **(long **)(param_1 + 0x38);
      p_Var13 = *(__tree_node_base **)pJVar23;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x40),p_Var13);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    return (Node *)0x0;
  }
  goto LAB_016e43e4;
}

