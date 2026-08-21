
/* v8::internal::compiler::SimdScalarLowering::LowerStoreOp(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerStoreOp(SimdScalarLowering *this,Node *param_1)

{
  uint uVar1;
  Node *pNVar2;
  short sVar3;
  byte bVar4;
  Operator *pOVar5;
  char *pcVar6;
  long lVar7;
  Zone *pZVar8;
  undefined8 *puVar9;
  Node *pNVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  Node *pNVar17;
  char cVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  Node *pNVar22;
  long *plVar23;
  int iVar24;
  ulong uVar25;
  Node *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  
  pNVar17 = param_1 + 0x20;
  pNVar22 = pNVar17;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar22 = (Node *)(*(long *)pNVar17 + 0x10);
  }
  bVar4 = *(byte *)(*(long *)(this + 0x60) +
                    ((ulong)*(uint *)(*(long *)(pNVar22 + 0x10) + 0x14) & 0xffffff) * 0x10 + 8);
  uVar20 = (ulong)(char)bVar4;
  *(byte *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8) =
       bVar4;
  pOVar5 = *(Operator **)param_1;
  sVar3 = *(short *)(pOVar5 + 0x10);
  if (sVar3 == 0x1f0) {
    pcVar6 = (char *)StoreRepresentationOf(pOVar5);
    cVar18 = *pcVar6;
    uVar14 = (undefined4)(0x20304050b0c >> (((ulong)bVar4 & 7) << 3));
    if (5 < bVar4) {
      uVar14 = 0;
    }
    pOVar5 = (Operator *)
             MachineOperatorBuilder::ProtectedStore
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10),uVar14);
  }
  else if (sVar3 == 0x1e8) {
    pcVar6 = (char *)UnalignedStoreRepresentationOf(pOVar5);
    cVar18 = *pcVar6;
    uVar14 = (undefined4)(0x20304050b0c >> (((ulong)bVar4 & 7) << 3));
    if (5 < bVar4) {
      uVar14 = 0;
    }
    pOVar5 = (Operator *)
             MachineOperatorBuilder::UnalignedStore
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10),uVar14);
  }
  else {
    if (sVar3 != 0x1ac) goto LAB_017aa168;
    pcVar6 = (char *)StoreRepresentationOf(pOVar5);
    cVar18 = *pcVar6;
    lVar7 = StoreRepresentationOf(*(Operator **)param_1);
    if (bVar4 < 6) {
      uVar16 = *(ulong *)(&DAT_01a63278 + uVar20 * 8);
    }
    else {
      uVar16 = 0;
    }
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Store
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10),
                        uVar16 | (ulong)*(byte *)(lVar7 + 1) << 8);
  }
  if (cVar18 != '\r') {
    DefaultLowering(this,param_1);
    return;
  }
  pNVar22 = pNVar17;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar22 = (Node *)(*(long *)pNVar17 + 0x10);
  }
  pNVar2 = *(Node **)pNVar22;
  uVar21 = *(undefined8 *)(pNVar22 + 8);
  if ((uVar20 & 0xfffffffd) == 0) {
    lVar7 = 2;
  }
  else if ((bVar4 | 2) == 3) {
    lVar7 = 4;
  }
  else if (bVar4 == 4) {
    lVar7 = 8;
  }
  else {
    if (bVar4 != 5) {
LAB_017aa168:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar7 = 0x10;
  }
  iVar24 = (int)lVar7;
  uVar16 = (ulong)(uint)(iVar24 << 3);
  pZVar8 = *(Zone **)**(undefined8 **)this;
  puVar12 = *(undefined8 **)(pZVar8 + 0x10);
  if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar12) < uVar16) {
    puVar12 = (undefined8 *)Zone::NewExpand(pZVar8,uVar16);
  }
  else {
    *(ulong *)(pZVar8 + 0x10) = (long)puVar12 + uVar16;
  }
  GetIndexNodes(this,uVar21,puVar12,uVar20 & 0xffffffff);
  pNVar22 = pNVar17;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar22 = (Node *)(*(long *)pNVar17 + 0x10);
  }
  uVar21 = *(undefined8 *)(pNVar22 + 0x10);
  pZVar8 = *(Zone **)**(undefined8 **)this;
  plVar13 = *(long **)(pZVar8 + 0x10);
  if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)plVar13) < uVar16) {
    plVar13 = (long *)Zone::NewExpand(pZVar8,uVar16);
  }
  else {
    *(ulong *)(pZVar8 + 0x10) = (long)plVar13 + uVar16;
  }
  *plVar13 = (long)param_1;
  puVar9 = (undefined8 *)GetReplacementsWithType(this,uVar21,uVar20 & 0xffffffff);
  lVar15 = *plVar13;
  pNVar22 = (Node *)*puVar9;
  plVar23 = (long *)(lVar15 + 0x20);
  uVar1 = *(uint *)(lVar15 + 0x14) & 0xf000000;
  plVar19 = plVar23;
  if (uVar1 == 0xf000000) {
    plVar19 = (long *)(*plVar23 + 0x10);
  }
  pNVar10 = (Node *)plVar19[2];
  if (pNVar10 != pNVar22) {
    if (uVar1 == 0xf000000) {
      lVar15 = *plVar23;
    }
    if (pNVar10 != (Node *)0x0) {
      Node::RemoveUse(pNVar10,(Use *)(lVar15 + -0x48));
    }
    plVar19[2] = (long)pNVar22;
    if (pNVar22 != (Node *)0x0) {
      Node::AppendUse(pNVar22,(Use *)(lVar15 + -0x48));
    }
  }
  lVar15 = *plVar13;
  pNVar22 = (Node *)*puVar12;
  plVar23 = (long *)(lVar15 + 0x20);
  uVar1 = *(uint *)(lVar15 + 0x14) & 0xf000000;
  plVar19 = plVar23;
  if (uVar1 == 0xf000000) {
    plVar19 = (long *)(*plVar23 + 0x10);
  }
  pNVar10 = (Node *)plVar19[1];
  if (pNVar10 != pNVar22) {
    if (uVar1 == 0xf000000) {
      lVar15 = *plVar23;
    }
    if (pNVar10 != (Node *)0x0) {
      Node::RemoveUse(pNVar10,(Use *)(lVar15 + -0x30));
    }
    plVar19[1] = (long)pNVar22;
    if (pNVar22 != (Node *)0x0) {
      Node::AppendUse(pNVar22,(Use *)(lVar15 + -0x30));
    }
  }
  NodeProperties::ChangeOp(param_1,pOVar5);
  uVar1 = *(uint *)(param_1 + 0x14) & 0xf000000;
  if (uVar1 == 0xf000000) {
    if (3 < *(int *)(*(long *)pNVar17 + 8)) {
LAB_017a9fd0:
      if (uVar1 == 0xf000000) {
        pNVar17 = (Node *)(*(long *)pNVar17 + 0x10);
      }
      lVar15 = *(long *)(pNVar17 + 0x18);
      uVar21 = *(undefined8 *)(pNVar17 + 0x20);
      uVar20 = (ulong)(iVar24 - 2U | 1);
      do {
        local_78 = puVar9[uVar20];
        uStack_80 = puVar12[uVar20];
        local_88 = pNVar2;
        lStack_70 = lVar15;
        local_68 = uVar21;
        lVar15 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar5,5,&local_88,false);
        uVar25 = uVar20 - 1;
        plVar13[uVar20] = lVar15;
        uVar20 = uVar25;
      } while (0 < (int)uVar25);
      lVar15 = *plVar13;
      pNVar17 = (Node *)plVar13[1];
      plVar23 = (long *)(lVar15 + 0x20);
      uVar1 = *(uint *)(lVar15 + 0x14) & 0xf000000;
      plVar19 = plVar23;
      if (uVar1 == 0xf000000) {
        plVar19 = (long *)(*plVar23 + 0x10);
      }
      pNVar22 = (Node *)plVar19[3];
      if (pNVar22 != pNVar17) {
        if (uVar1 == 0xf000000) {
          lVar15 = *plVar23;
        }
        if (pNVar22 != (Node *)0x0) {
          Node::RemoveUse(pNVar22,(Use *)(lVar15 + -0x60));
        }
        plVar19[3] = (long)pNVar17;
        if (pNVar17 != (Node *)0x0) {
          Node::AppendUse(pNVar17,(Use *)(lVar15 + -0x60));
        }
      }
      goto LAB_017aa0a4;
    }
  }
  else if (3 < (*(uint *)(param_1 + 0x14) >> 0x18 & 0xf)) goto LAB_017a9fd0;
  lVar15 = lVar7 + -1;
  plVar23 = plVar13;
  do {
    plVar23 = plVar23 + 1;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
    uStack_80 = *puVar12;
    local_78 = *puVar9;
    local_88 = pNVar2;
    lVar11 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar5,3,&local_88,false);
    lVar15 = lVar15 + -1;
    *plVar23 = lVar11;
  } while (lVar15 != 0);
LAB_017aa0a4:
  pZVar8 = *(Zone **)**(undefined8 **)this;
  lVar15 = *(long *)(pZVar8 + 0x10);
  if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar15) < uVar16) {
    lVar15 = Zone::NewExpand(pZVar8,uVar16);
  }
  else {
    *(ulong *)(pZVar8 + 0x10) = lVar15 + uVar16;
  }
  lVar11 = 0;
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar15;
  do {
    *(undefined8 *)
     (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
     lVar11) = *(undefined8 *)((long)plVar13 + lVar11);
    lVar11 = lVar11 + 8;
  } while (lVar7 * 8 - lVar11 != 0);
  *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
       iVar24;
  return;
}

