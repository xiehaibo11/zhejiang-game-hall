
/* v8::internal::compiler::SimdScalarLowering::LowerLoadOp(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerLoadOp
          (SimdScalarLowering *this,Node *param_1,uint param_3)

{
  uint uVar1;
  Node *pNVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  Operator *pOVar6;
  Zone *pZVar7;
  Node *this_00;
  long lVar8;
  Node *pNVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  Node *pNVar16;
  ulong uVar17;
  ulong uVar18;
  Node *this_01;
  long *plVar19;
  long *plVar20;
  int iVar21;
  long lVar22;
  Use *pUVar23;
  Node *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  
  cVar5 = LoadRepresentationOf(*(Operator **)param_1);
  sVar3 = *(short *)(*(long *)param_1 + 0x10);
  cVar4 = (char)param_3;
  if (sVar3 == 0x1ef) {
    if ((param_3 & 0xff) < 6) {
      uVar12 = *(undefined8 *)(&DAT_01a63248 + (long)cVar4 * 8);
    }
    else {
      uVar12 = 0;
    }
    pOVar6 = (Operator *)
             MachineOperatorBuilder::ProtectedLoad
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10),uVar12);
  }
  else if (sVar3 == 0x1e7) {
    if ((param_3 & 0xff) < 6) {
      pOVar6 = (Operator *)
               MachineOperatorBuilder::UnalignedLoad
                         (*(MachineOperatorBuilder **)(*(long *)this + 0x10),
                          *(undefined8 *)(&DAT_01a63248 + (long)cVar4 * 8));
    }
    else {
      pOVar6 = (Operator *)
               MachineOperatorBuilder::UnalignedLoad
                         (*(MachineOperatorBuilder **)(*(long *)this + 0x10),0);
    }
  }
  else {
    if (sVar3 != 0x1aa) goto LAB_017a996c;
    if ((param_3 & 0xff) < 6) {
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Load
                         (*(MachineOperatorBuilder **)(*(long *)this + 0x10),
                          *(undefined8 *)(&DAT_01a63248 + (long)cVar4 * 8));
    }
    else {
      pOVar6 = (Operator *)
               MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(*(long *)this + 0x10),0);
    }
  }
  if (cVar5 != '\r') {
    DefaultLowering(this,param_1);
    return;
  }
  pNVar16 = param_1 + 0x20;
  pNVar9 = pNVar16;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar16 + 0x10);
  }
  pNVar2 = *(Node **)pNVar9;
  uVar12 = *(undefined8 *)(pNVar9 + 8);
  if ((param_3 & 0xfd) == 0) {
    lVar22 = 2;
  }
  else if ((param_3 & 0xff | 2) == 3) {
    lVar22 = 4;
  }
  else if ((param_3 & 0xff) == 4) {
    lVar22 = 8;
  }
  else {
    if ((param_3 & 0xff) != 5) {
LAB_017a996c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar22 = 0x10;
  }
  iVar21 = (int)lVar22;
  uVar13 = (ulong)(uint)(iVar21 << 3);
  pZVar7 = *(Zone **)**(undefined8 **)this;
  puVar10 = *(undefined8 **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)puVar10) < uVar13) {
    puVar10 = (undefined8 *)Zone::NewExpand(pZVar7,uVar13);
  }
  else {
    *(ulong *)(pZVar7 + 0x10) = (long)puVar10 + uVar13;
  }
  GetIndexNodes(this,uVar12,puVar10,param_3);
  pZVar7 = *(Zone **)**(undefined8 **)this;
  plVar11 = *(long **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)plVar11) < uVar13) {
    plVar11 = (long *)Zone::NewExpand(pZVar7,uVar13);
  }
  else {
    *(ulong *)(pZVar7 + 0x10) = (long)plVar11 + uVar13;
  }
  *plVar11 = (long)param_1;
  this_01 = (Node *)*puVar10;
  pNVar9 = pNVar16;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar9 = (Node *)(*(long *)pNVar16 + 0x10);
  }
  this_00 = *(Node **)(pNVar9 + 8);
  if (this_00 != this_01) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar23 = (Use *)(*(long *)pNVar16 + -0x30);
    }
    else {
      pUVar23 = (Use *)(param_1 + -0x30);
    }
    if (this_00 != (Node *)0x0) {
      Node::RemoveUse(this_00,pUVar23);
    }
    *(Node **)(pNVar9 + 8) = this_01;
    if (this_01 != (Node *)0x0) {
      Node::AppendUse(this_01,pUVar23);
    }
  }
  NodeProperties::ChangeOp((Node *)*plVar11,pOVar6);
  uVar1 = *(uint *)(param_1 + 0x14) & 0xf000000;
  if (uVar1 == 0xf000000) {
    uVar15 = *(uint *)(*(long *)pNVar16 + 8);
  }
  else {
    uVar15 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
  }
  if ((int)uVar15 < 3) {
    lVar8 = lVar22 + -1;
    plVar20 = plVar11;
    do {
      plVar20 = plVar20 + 1;
      puVar10 = puVar10 + 1;
      uStack_78 = *puVar10;
      local_80 = pNVar2;
      lVar14 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar6,2,&local_80,false);
      lVar8 = lVar8 + -1;
      *plVar20 = lVar14;
    } while (lVar8 != 0);
  }
  else {
    if (uVar1 == 0xf000000) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    lVar8 = *(long *)(pNVar16 + 0x10);
    uVar12 = *(undefined8 *)(pNVar16 + 0x18);
    uVar17 = (ulong)(iVar21 - 2U | 1);
    do {
      uStack_78 = puVar10[uVar17];
      local_80 = pNVar2;
      local_70 = lVar8;
      uStack_68 = uVar12;
      lVar8 = Graph::NewNode((Graph *)**(undefined8 **)this,pOVar6,4,&local_80,false);
      uVar18 = uVar17 - 1;
      plVar11[uVar17] = lVar8;
      uVar17 = uVar18;
    } while (0 < (int)uVar18);
    lVar8 = *plVar11;
    pNVar16 = (Node *)plVar11[1];
    plVar20 = (long *)(lVar8 + 0x20);
    uVar1 = *(uint *)(lVar8 + 0x14) & 0xf000000;
    plVar19 = plVar20;
    if (uVar1 == 0xf000000) {
      plVar19 = (long *)(*plVar20 + 0x10);
    }
    pNVar9 = (Node *)plVar19[2];
    if (pNVar9 != pNVar16) {
      if (uVar1 == 0xf000000) {
        lVar8 = *plVar20;
      }
      if (pNVar9 != (Node *)0x0) {
        Node::RemoveUse(pNVar9,(Use *)(lVar8 + -0x48));
      }
      plVar19[2] = (long)pNVar16;
      if (pNVar16 != (Node *)0x0) {
        Node::AppendUse(pNVar16,(Use *)(lVar8 + -0x48));
      }
    }
  }
  pZVar7 = *(Zone **)**(undefined8 **)this;
  lVar8 = *(long *)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - lVar8) < uVar13) {
    lVar8 = Zone::NewExpand(pZVar7,uVar13);
  }
  else {
    *(ulong *)(pZVar7 + 0x10) = lVar8 + uVar13;
  }
  lVar14 = 0;
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar8;
  do {
    *(undefined8 *)
     (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
     lVar14) = *(undefined8 *)((long)plVar11 + lVar14);
    lVar14 = lVar14 + 8;
  } while (lVar22 * 8 - lVar14 != 0);
  *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
       iVar21;
  return;
}

