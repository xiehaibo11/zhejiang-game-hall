
/* v8::internal::compiler::Peeling::CopyNodes(v8::internal::compiler::Graph*, v8::internal::Zone*,
   v8::internal::compiler::Node*, v8::base::iterator_range<v8::internal::compiler::Node**>,
   v8::internal::compiler::SourcePositionTable*, v8::internal::compiler::NodeOriginTable*) */

void v8::internal::compiler::Peeling::CopyNodes
               (Peeling *param_1,Graph *param_2,Zone *param_3,undefined8 param_4,long *param_5,
               long *param_6,SourcePositionTable *param_7,long param_8)

{
  Node *pNVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  Node *pNVar5;
  uint uVar6;
  undefined8 uVar7;
  Node **ppNVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  Node **ppNVar13;
  Node *pNVar14;
  long lVar15;
  long lVar16;
  Node *pNVar17;
  Node **ppNVar18;
  Node **ppNVar19;
  long lVar20;
  long *plVar21;
  Node **ppNVar22;
  Node *pNVar23;
  undefined8 unaff_x28;
  long lVar24;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  
  if (param_5 != param_6) {
    ppNVar18 = (Node **)0x0;
    ppNVar13 = (Node **)0x0;
    plVar21 = param_5;
    do {
      pNVar23 = (Node *)*plVar21;
      uVar4 = SourcePositionTable::GetSourcePosition(param_7,pNVar23);
      uVar7 = *(undefined8 *)(param_7 + 0x10);
      if ((uVar4 & 0x7fffffffffff) != 0) {
        *(ulong *)(param_7 + 0x10) = uVar4;
      }
      if (param_8 == 0) {
        local_88 = 0x8000000000000000;
        puStack_78 = &DAT_0189703a;
        local_80 = &DAT_0189703a;
      }
      else {
        puStack_78 = *(undefined1 **)(param_8 + 0x18);
        local_80 = *(undefined1 **)(param_8 + 0x10);
        unaff_x28 = *(undefined8 *)(param_8 + 0x20);
        local_88 = *(undefined8 *)(param_8 + 0x28);
        *(ulong *)(param_8 + 0x28) = (ulong)*(uint *)(pNVar23 + 0x14) & 0xffffff;
        *(undefined8 *)(param_8 + 0x10) = *(undefined8 *)(param_8 + 0x30);
        *(char **)(param_8 + 0x18) = "copy nodes";
        *(undefined4 *)(param_8 + 0x20) = 1;
      }
      uVar6 = *(uint *)(pNVar23 + 0x14);
      pNVar5 = pNVar23 + 0x20;
      uVar10 = uVar6 >> 0x18 & 0xf;
      pNVar17 = pNVar5;
      if (uVar10 == 0xf) {
        uVar10 = *(uint *)(*(long *)pNVar5 + 8);
        pNVar17 = (Node *)(*(long *)pNVar5 + 0x10);
      }
      if (uVar10 != 0) {
        pNVar1 = pNVar17 + (long)(int)uVar10 * 8;
        ppNVar19 = ppNVar18;
        ppNVar22 = ppNVar18;
        do {
          pNVar14 = *(Node **)pNVar17;
          uVar10 = *(uint *)param_1;
          uVar2 = *(uint *)(pNVar14 + 0x10);
          uVar6 = 0;
          if (uVar10 <= uVar2) {
            uVar6 = uVar2 - uVar10;
          }
          if (uVar10 <= uVar2 && uVar2 - uVar10 != 0) {
            lVar16 = **(long **)(param_1 + 8);
            if ((ulong)((*(long **)(param_1 + 8))[1] - lVar16 >> 3) <= (ulong)uVar6)
            goto LAB_01774684;
            pNVar14 = *(Node **)(lVar16 + (ulong)uVar6 * 8);
          }
          if (ppNVar22 < ppNVar13) {
            *ppNVar22 = pNVar14;
            ppNVar8 = ppNVar22;
            ppNVar18 = ppNVar19;
          }
          else {
            lVar16 = (long)ppNVar22 - (long)ppNVar19 >> 3;
            uVar4 = lVar16 + 1;
            if (uVar4 >> 0x1c != 0) goto LAB_01774684;
            uVar12 = (long)ppNVar13 - (long)ppNVar19 >> 2;
            if (uVar4 <= uVar12) {
              uVar4 = uVar12;
            }
            if (0x7fffffe < (ulong)((long)ppNVar13 - (long)ppNVar19 >> 3)) {
              uVar4 = 0xfffffff;
            }
            if (uVar4 == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = *(long *)(param_3 + 0x10);
              uVar12 = uVar4 * 8;
              if (uVar12 < (ulong)(*(long *)(param_3 + 0x18) - lVar15) ||
                  uVar12 - (*(long *)(param_3 + 0x18) - lVar15) == 0) {
                *(ulong *)(param_3 + 0x10) = lVar15 + uVar12;
              }
              else {
                lVar15 = Zone::NewExpand(param_3,uVar12);
              }
            }
            ppNVar8 = (Node **)(lVar15 + lVar16 * 8);
            ppNVar13 = (Node **)(lVar15 + uVar4 * 8);
            *ppNVar8 = pNVar14;
            ppNVar18 = ppNVar8;
            while (ppNVar22 != ppNVar19) {
              ppNVar22 = ppNVar22 + -1;
              ppNVar18 = ppNVar18 + -1;
              *ppNVar18 = *ppNVar22;
            }
          }
          pNVar17 = pNVar17 + 8;
          ppNVar22 = ppNVar8 + 1;
          ppNVar19 = ppNVar18;
        } while (pNVar17 != pNVar1);
        uVar6 = *(uint *)(pNVar23 + 0x14);
      }
      if ((~uVar6 & 0xf000000) == 0) {
        uVar6 = *(uint *)(*(long *)pNVar5 + 8);
      }
      else {
        uVar6 = uVar6 >> 0x18 & 0xf;
      }
      pNVar5 = (Node *)Graph::NewNode(param_2,*(Operator **)pNVar23,uVar6,ppNVar18,false);
      if (*(long *)(pNVar23 + 8) != 0) {
        *(long *)(pNVar5 + 8) = *(long *)(pNVar23 + 8);
      }
      Insert(param_1,pNVar23,pNVar5);
      if (param_8 != 0) {
        *(undefined1 **)(param_8 + 0x18) = puStack_78;
        *(undefined1 **)(param_8 + 0x10) = local_80;
        *(undefined8 *)(param_8 + 0x20) = unaff_x28;
        *(undefined8 *)(param_8 + 0x28) = local_88;
      }
      plVar21 = plVar21 + 1;
      *(undefined8 *)(param_7 + 0x10) = uVar7;
    } while (plVar21 != param_6);
    for (; param_5 != param_6; param_5 = param_5 + 1) {
      lVar15 = *param_5;
      lVar16 = **(long **)(param_1 + 8);
      uVar6 = 0;
      if (*(uint *)param_1 <= *(uint *)(lVar15 + 0x10)) {
        uVar6 = *(uint *)(lVar15 + 0x10) - *(uint *)param_1;
      }
      if ((ulong)((*(long **)(param_1 + 8))[1] - lVar16 >> 3) <= (ulong)uVar6) {
LAB_01774684:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar20 = *(long *)(lVar16 + (ulong)uVar6 * 8);
      lVar16 = 0;
      lVar24 = -0x18;
      plVar21 = (long *)(lVar20 + 0x20);
      while( true ) {
        uVar6 = *(uint *)(lVar20 + 0x14) & 0xf000000;
        if (uVar6 == 0xf000000) {
          uVar10 = *(uint *)(*plVar21 + 8);
        }
        else {
          uVar10 = *(uint *)(lVar20 + 0x14) >> 0x18 & 0xf;
        }
        if ((int)uVar10 <= lVar16) break;
        plVar11 = (long *)(lVar15 + 0x20);
        if ((~*(uint *)(lVar15 + 0x14) & 0xf000000) == 0) {
          plVar11 = (long *)(*(long *)(lVar15 + 0x20) + 0x10);
        }
        pNVar23 = (Node *)plVar11[lVar16];
        uVar2 = *(uint *)param_1;
        uVar3 = *(uint *)(pNVar23 + 0x10);
        uVar10 = 0;
        if (uVar2 <= uVar3) {
          uVar10 = uVar3 - uVar2;
        }
        if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
          lVar9 = **(long **)(param_1 + 8);
          if ((ulong)((*(long **)(param_1 + 8))[1] - lVar9 >> 3) <= (ulong)uVar10)
          goto LAB_01774684;
          pNVar23 = *(Node **)(lVar9 + (ulong)uVar10 * 8);
        }
        plVar11 = plVar21;
        if (uVar6 == 0xf000000) {
          plVar11 = (long *)(*plVar21 + 0x10);
        }
        pNVar5 = (Node *)plVar11[lVar16];
        if (pNVar5 != pNVar23) {
          lVar9 = lVar20;
          if (uVar6 == 0xf000000) {
            lVar9 = *plVar21;
          }
          if (pNVar5 != (Node *)0x0) {
            Node::RemoveUse(pNVar5,(Use *)(lVar9 + lVar24));
          }
          plVar11[lVar16] = (long)pNVar23;
          if (pNVar23 != (Node *)0x0) {
            Node::AppendUse(pNVar23,(Use *)(lVar9 + lVar24));
          }
        }
        lVar16 = lVar16 + 1;
        lVar24 = lVar24 + -0x18;
      }
    }
  }
  return;
}

