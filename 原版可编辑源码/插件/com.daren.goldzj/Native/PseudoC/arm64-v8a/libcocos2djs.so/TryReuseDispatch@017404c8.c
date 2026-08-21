
/* v8::internal::compiler::JSInliningHeuristic::TryReuseDispatch(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node**, v8::internal::compiler::Node**,
   v8::internal::compiler::Node**, int) */

undefined8 __thiscall
v8::internal::compiler::JSInliningHeuristic::TryReuseDispatch
          (JSInliningHeuristic *this,Node *param_1,Node *param_2,Node **param_3,Node **param_4,
          Node **param_5,int param_6)

{
  Graph *pGVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  Node *this_00;
  Node *pNVar8;
  Node *pNVar9;
  Node *pNVar10;
  ulong uVar11;
  Node *pNVar12;
  Node *pNVar13;
  undefined8 uVar14;
  Operator *pOVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  Node *pNVar23;
  Use *pUVar24;
  Node *pNVar25;
  Node *local_180;
  ulong local_140;
  ulong local_108;
  Node *local_100;
  uint local_f8 [30];
  Node *local_80;
  Node *pNStack_78;
  Node *local_70;
  
  if (*(short *)(*(long *)param_2 + 0x10) == 0x23) {
    uVar2 = *(uint *)(*(long *)param_2 + 0x14);
    this_00 = (Node *)NodeProperties::GetControlInput(param_2,0);
    pNVar8 = (Node *)NodeProperties::GetControlInput(param_1,0);
    if (pNVar8 != this_00) {
      return 0;
    }
    pNVar8 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    sVar4 = *(short *)(*(long *)pNVar8 + 0x10);
    if (sVar4 == 0x26) {
      pNVar9 = (Node *)NodeProperties::GetControlInput(pNVar8,0);
      if (pNVar9 != this_00) {
        return 0;
      }
      pNVar10 = (Node *)NodeProperties::GetEffectInput(pNVar8,0);
      sVar4 = *(short *)(*(long *)pNVar10 + 0x10);
      pNVar9 = pNVar8;
    }
    else {
      pNVar9 = (Node *)0x0;
      pNVar10 = pNVar8;
    }
    if (sVar4 == 0x24) {
      pNVar8 = (Node *)NodeProperties::GetControlInput(pNVar10,0);
      if (pNVar8 != this_00) {
        return 0;
      }
      for (plVar16 = *(long **)(this_00 + 0x18); plVar16 != (long *)0x0; plVar16 = (long *)*plVar16)
      {
        pNVar8 = (Node *)(plVar16 + (ulong)(*(uint *)(plVar16 + 2) >> 1) * 3 + 3);
        if ((*(uint *)(plVar16 + 2) & 1) == 0) {
          pNVar8 = *(Node **)pNVar8;
        }
        if ((((pNVar8 != pNVar9) && (pNVar8 != param_1)) && (pNVar8 != pNVar10)) &&
           (pNVar8 != param_2)) {
          return 0;
        }
      }
      for (plVar16 = *(long **)(pNVar10 + 0x18); plVar16 != (long *)0x0; plVar16 = (long *)*plVar16)
      {
        pNVar8 = (Node *)(plVar16 + (ulong)(*(uint *)(plVar16 + 2) >> 1) * 3 + 3);
        if ((*(uint *)(plVar16 + 2) & 1) == 0) {
          pNVar8 = *(Node **)pNVar8;
        }
        if ((pNVar8 != param_1) && (pNVar8 != pNVar9)) {
          return 0;
        }
      }
      local_108 = 0;
      if (pNVar9 == (Node *)0x0) {
        local_180 = (Node *)0x0;
      }
      else {
        local_180 = pNVar9 + 0x20;
        if ((~*(uint *)(pNVar9 + 0x14) & 0xf000000) == 0) {
          local_180 = (Node *)(*(long *)local_180 + 0x10);
        }
        local_180 = *(Node **)local_180;
        iVar7 = Node::UseCount(local_180);
        if (iVar7 < 2) {
          pNVar8 = local_180 + 0x20;
          pNVar25 = pNVar8;
          if ((*(uint *)(local_180 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar25 = (Node *)(*(long *)pNVar8 + 0x10);
          }
          if (*(Node **)(pNVar25 + 0x10) == param_2) {
            local_f8[0] = 2;
            local_108 = 1;
            local_100 = local_180;
          }
          if ((*(uint *)(local_180 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
          }
          uVar11 = FUN_0174107c(param_2,*(undefined8 *)(pNVar8 + 8),&local_100,&local_108);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
        }
      }
      pNVar8 = (Node *)NodeProperties::GetFrameStateInput(param_1);
      iVar7 = Node::UseCount(pNVar8);
      if (iVar7 < 2) {
        uVar3 = *(uint *)(pNVar8 + 0x14);
        pNVar25 = pNVar8 + 0x20;
        pNVar12 = pNVar25;
        if ((uVar3 & 0xf000000) == 0xf000000) {
          pNVar12 = (Node *)(*(long *)pNVar25 + 0x10);
        }
        if (*(Node **)(pNVar12 + 0x10) == param_2) {
          if (7 < local_108) {
            return 0;
          }
          local_f8[local_108 * 4] = 2;
          *(Node **)(local_f8 + local_108 * 4 + -2) = pNVar8;
          local_108 = local_108 + 1;
        }
        if ((uVar3 & 0xf000000) == 0xf000000) {
          pNVar25 = (Node *)(*(long *)pNVar25 + 0x10);
        }
        uVar11 = FUN_0174107c(param_2,*(undefined8 *)(pNVar25 + 8),&local_100,&local_108);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
      }
      if (*(long **)(param_2 + 0x18) != (long *)0x0) {
        plVar16 = *(long **)(param_2 + 0x18);
        do {
          uVar3 = *(uint *)(plVar16 + 2);
          plVar20 = (long *)*plVar16;
          uVar5 = uVar3 >> 1;
          pNVar25 = (Node *)(plVar16 + (ulong)uVar5 * 3 + 3);
          puVar6 = local_f8;
          uVar11 = local_108;
          if ((uVar3 & 1) == 0) {
            pNVar12 = *(Node **)pNVar25;
            if (uVar5 != 0) goto joined_r0x01740808;
LAB_01740800:
            if (pNVar12 != param_1) goto joined_r0x01740808;
          }
          else {
            pNVar12 = pNVar25;
            if (uVar5 == 0) goto LAB_01740800;
joined_r0x01740808:
            while( true ) {
              if (uVar11 == 0) {
                return 0;
              }
              pNVar12 = pNVar25;
              if ((uVar3 & 1) == 0) {
                pNVar12 = *(Node **)pNVar25;
              }
              if ((*(Node **)(puVar6 + -2) == pNVar12) && (*puVar6 == uVar5)) break;
              puVar6 = puVar6 + 4;
              uVar11 = uVar11 - 1;
            }
          }
          plVar16 = plVar20;
        } while (plVar20 != (long *)0x0);
      }
      lVar17 = (long)(int)uVar2;
      if ((int)uVar2 < 1) {
        local_140 = (ulong)(param_6 - 1);
      }
      else {
        lVar19 = (long)param_6;
        lVar18 = (ulong)(uVar2 - 1) << 3;
        lVar21 = 0;
        local_140 = lVar19 - 1;
        do {
          pNVar25 = param_2 + 0x20;
          if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
            pNVar25 = (Node *)(*(long *)(param_2 + 0x20) + 0x10);
          }
          pNVar12 = *(Node **)(pNVar25 + lVar21);
          pNVar25 = pNVar10 + 0x20;
          if ((~*(uint *)(pNVar10 + 0x14) & 0xf000000) == 0) {
            pNVar25 = (Node *)(*(long *)(pNVar10 + 0x20) + 0x10);
          }
          pNVar23 = *(Node **)(pNVar25 + lVar21);
          pNVar25 = this_00 + 0x20;
          if ((~*(uint *)(this_00 + 0x14) & 0xf000000) == 0) {
            pNVar25 = (Node *)(*(long *)(this_00 + 0x20) + 0x10);
          }
          pNVar25 = *(Node **)(pNVar25 + lVar21);
          if (pNVar9 != (Node *)0x0) {
            local_80 = (Node *)DuplicateFrameStateAndRename
                                         (this,local_180,param_2,pNVar12,lVar18 == lVar21);
            pNStack_78 = pNVar23;
            local_70 = pNVar25;
            pNVar23 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x90),
                                             *(Operator **)pNVar9,3,&local_80,false);
          }
          pNVar13 = (Node *)DuplicateFrameStateAndRename
                                      (this,pNVar8,param_2,pNVar12,lVar18 == lVar21);
          *param_5 = pNVar12;
          param_5[lVar19 + -3] = pNVar13;
          param_5[lVar19 + -2] = pNVar23;
          param_5[local_140] = pNVar25;
          uVar14 = Graph::NewNode((Graph *)**(undefined8 **)(this + 0x90),*(Operator **)param_1,
                                  param_6,param_5,false);
          *(undefined8 *)((long)param_3 + lVar21) = uVar14;
          *(undefined8 *)((long)param_4 + lVar21) = uVar14;
          lVar21 = lVar21 + 8;
        } while ((ulong)uVar2 << 3 != lVar21);
      }
      puVar22 = *(undefined8 **)(this + 0x90);
      pNVar8 = (Node *)puVar22[0x2c];
      if (pNVar8 == (Node *)0x0) {
        pGVar1 = (Graph *)*puVar22;
        pOVar15 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar22[1]);
        local_80 = (Node *)0x0;
        pNVar8 = (Node *)Graph::NewNode(pGVar1,pOVar15,0,&local_80,false);
        puVar22[0x2c] = pNVar8;
      }
      pNVar25 = param_1 + 0x20;
      pNVar12 = pNVar25;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar12 = (Node *)(*(long *)pNVar25 + 0x10);
      }
      pNVar23 = *(Node **)(pNVar12 + (long)(int)local_140 * 8);
      if (pNVar23 != pNVar8) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          param_1 = *(Node **)pNVar25;
        }
        if (pNVar23 != (Node *)0x0) {
          Node::RemoveUse(pNVar23,(Use *)(param_1 + (long)-param_6 * 0x18));
        }
        *(Node **)(pNVar12 + (long)(int)local_140 * 8) = pNVar8;
        if (pNVar8 != (Node *)0x0) {
          Node::AppendUse(pNVar8,(Use *)(param_1 + (long)-param_6 * 0x18));
        }
      }
      puVar22 = *(undefined8 **)(this + 0x90);
      pNVar8 = (Node *)puVar22[0x2c];
      if (pNVar8 == (Node *)0x0) {
        pGVar1 = (Graph *)*puVar22;
        pOVar15 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar22[1]);
        local_80 = (Node *)0x0;
        pNVar8 = (Node *)Graph::NewNode(pGVar1,pOVar15,0,&local_80,false);
        puVar22[0x2c] = pNVar8;
      }
      pNVar25 = param_2 + 0x20;
      pNVar12 = pNVar25;
      if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar12 = (Node *)(*(long *)pNVar25 + 0x10);
      }
      pNVar23 = *(Node **)(pNVar12 + lVar17 * 8);
      if (pNVar23 != pNVar8) {
        if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
          param_2 = *(Node **)pNVar25;
        }
        if (pNVar23 != (Node *)0x0) {
          Node::RemoveUse(pNVar23,(Use *)(param_2 + (long)(int)~uVar2 * 0x18));
        }
        *(Node **)(pNVar12 + lVar17 * 8) = pNVar8;
        if (pNVar8 != (Node *)0x0) {
          Node::AppendUse(pNVar8,(Use *)(param_2 + (long)(int)~uVar2 * 0x18));
        }
      }
      puVar22 = *(undefined8 **)(this + 0x90);
      pNVar8 = (Node *)puVar22[0x2c];
      if (pNVar8 == (Node *)0x0) {
        pGVar1 = (Graph *)*puVar22;
        pOVar15 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar22[1]);
        local_80 = (Node *)0x0;
        pNVar8 = (Node *)Graph::NewNode(pGVar1,pOVar15,0,&local_80,false);
        puVar22[0x2c] = pNVar8;
      }
      pNVar25 = pNVar10 + 0x20;
      pNVar12 = pNVar25;
      if ((*(uint *)(pNVar10 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar12 = (Node *)(*(long *)pNVar25 + 0x10);
      }
      pNVar23 = *(Node **)(pNVar12 + (long)(int)uVar2 * 8);
      if (pNVar23 != pNVar8) {
        if ((*(uint *)(pNVar10 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar10 = *(Node **)pNVar25;
        }
        if (pNVar23 != (Node *)0x0) {
          Node::RemoveUse(pNVar23,(Use *)(pNVar10 + (long)(int)~uVar2 * 0x18));
        }
        *(Node **)(pNVar12 + lVar17 * 8) = pNVar8;
        if (pNVar8 != (Node *)0x0) {
          Node::AppendUse(pNVar8,(Use *)(pNVar10 + (long)(int)~uVar2 * 0x18));
        }
      }
      if (pNVar9 != (Node *)0x0) {
        puVar22 = *(undefined8 **)(this + 0x90);
        pNVar8 = (Node *)puVar22[0x2c];
        if (pNVar8 == (Node *)0x0) {
          pGVar1 = (Graph *)*puVar22;
          pOVar15 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar22[1]);
          local_80 = (Node *)0x0;
          pNVar8 = (Node *)Graph::NewNode(pGVar1,pOVar15,0,&local_80,false);
          puVar22[0x2c] = pNVar8;
        }
        pNVar10 = pNVar9 + 0x20;
        pNVar25 = pNVar10;
        if ((*(uint *)(pNVar9 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar25 = (Node *)(*(long *)pNVar10 + 0x10);
        }
        pNVar12 = *(Node **)(pNVar25 + 0x10);
        if (pNVar12 != pNVar8) {
          if ((*(uint *)(pNVar9 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar24 = (Use *)(*(long *)pNVar10 + -0x48);
          }
          else {
            pUVar24 = (Use *)(pNVar9 + -0x48);
          }
          if (pNVar12 != (Node *)0x0) {
            Node::RemoveUse(pNVar12,pUVar24);
          }
          *(Node **)(pNVar25 + 0x10) = pNVar8;
          if (pNVar8 != (Node *)0x0) {
            Node::AppendUse(pNVar8,pUVar24);
          }
        }
      }
      Node::Kill(this_00);
      return 1;
    }
  }
  return 0;
}

