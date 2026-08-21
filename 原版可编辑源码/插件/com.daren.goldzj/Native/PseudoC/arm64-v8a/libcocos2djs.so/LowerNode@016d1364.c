
/* v8::internal::compiler::Int64Lowering::LowerNode(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::Int64Lowering::LowerNode(Int64Lowering *this,Node *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  Operator *pOVar11;
  Operator *pOVar12;
  char *pcVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  Node *pNVar17;
  CallDescriptor *pCVar18;
  CallDescriptor *pCVar19;
  undefined8 uVar20;
  Node *pNVar21;
  Zone *this_00;
  Node **ppNVar22;
  Operator *extraout_x1;
  Operator *extraout_x1_00;
  Operator *extraout_x1_01;
  Operator *extraout_x1_02;
  bool bVar23;
  Operator *pOVar24;
  MachineOperatorBuilder *pMVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  Node *pNVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  Node *pNVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  Graph *pGVar39;
  Graph *pGVar40;
  Node *pNVar41;
  CommonOperatorBuilder *pCVar42;
  Graph *pGVar43;
  Use *pUVar44;
  Node **ppNVar45;
  long lVar46;
  long *plVar47;
  int iVar48;
  int iVar49;
  ulong uVar50;
  Node *local_a8;
  CommonOperatorBuilder *local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  Node *local_78;
  Node *pNStack_70;
  undefined8 local_68;
  
  pOVar24 = *(Operator **)param_1;
  switch(*(undefined2 *)(pOVar24 + 0x10)) {
  case 0x13b:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    lVar36 = *(long *)pNVar35;
    lVar14 = *(long *)(pNVar35 + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32And(*(MachineOperatorBuilder **)(this + 0x10));
    local_a0 = *(CommonOperatorBuilder **)
                (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar14 + 0x14) & 0xffffff) * 0x10);
    local_a8 = *(Node **)(*(long *)(this + 0x78) +
                         ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    uVar15 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32And(*(MachineOperatorBuilder **)(this + 0x10));
    goto LAB_016d2630;
  case 0x13c:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    lVar36 = *(long *)pNVar35;
    lVar14 = *(long *)(pNVar35 + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Or(*(MachineOperatorBuilder **)(this + 0x10));
    local_a0 = *(CommonOperatorBuilder **)
                (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar14 + 0x14) & 0xffffff) * 0x10);
    local_a8 = *(Node **)(*(long *)(this + 0x78) +
                         ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    uVar15 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Or(*(MachineOperatorBuilder **)(this + 0x10));
    goto LAB_016d2630;
  case 0x13d:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    lVar36 = *(long *)pNVar35;
    lVar14 = *(long *)(pNVar35 + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Xor(*(MachineOperatorBuilder **)(this + 0x10));
    local_a0 = *(CommonOperatorBuilder **)
                (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar14 + 0x14) & 0xffffff) * 0x10);
    local_a8 = *(Node **)(*(long *)(this + 0x78) +
                         ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    uVar15 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Xor(*(MachineOperatorBuilder **)(this + 0x10));
LAB_016d2630:
    local_a0 = *(CommonOperatorBuilder **)
                (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar14 + 0x14) & 0xffffff) * 0x10 + 8);
    local_a8 = *(Node **)(*(long *)(this + 0x78) +
                          ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8);
    goto LAB_016d4714;
  case 0x13e:
    uVar33 = *(uint *)(param_1 + 0x14);
    pNVar35 = param_1 + 0x20;
    uVar9 = uVar33 & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar29 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(*(long *)(pNVar29 + 8) + 0x14) & 0xffffff) * 0x10);
    if (pNVar29 != (Node *)0x0) {
      pNVar41 = pNVar35;
      if (uVar9 == 0xf000000) {
        pNVar41 = (Node *)(*(long *)pNVar35 + 0x10);
      }
      pNVar17 = *(Node **)(pNVar41 + 8);
      if (pNVar17 != pNVar29) {
        if (uVar9 == 0xf000000) {
          pUVar44 = (Use *)(*(long *)pNVar35 + -0x30);
        }
        else {
          pUVar44 = (Use *)(param_1 + -0x30);
        }
        if (pNVar17 != (Node *)0x0) {
          Node::RemoveUse(pNVar17,pUVar44);
        }
        *(Node **)(pNVar41 + 8) = pNVar29;
        Node::AppendUse(pNVar29,pUVar44);
        uVar33 = *(uint *)(param_1 + 0x14);
      }
    }
    uVar33 = uVar33 & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar33 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)pNVar29;
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar33 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)pNVar29;
    if (pNVar17 != pNVar41) {
      if (uVar33 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x18);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x18);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)pNVar29 = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::InsertInput(param_1,*(Zone **)this,1,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32PairShl(*(MachineOperatorBuilder **)(this + 0x10));
    break;
  case 0x13f:
    uVar33 = *(uint *)(param_1 + 0x14);
    pNVar35 = param_1 + 0x20;
    uVar9 = uVar33 & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar29 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(*(long *)(pNVar29 + 8) + 0x14) & 0xffffff) * 0x10);
    if (pNVar29 != (Node *)0x0) {
      pNVar41 = pNVar35;
      if (uVar9 == 0xf000000) {
        pNVar41 = (Node *)(*(long *)pNVar35 + 0x10);
      }
      pNVar17 = *(Node **)(pNVar41 + 8);
      if (pNVar17 != pNVar29) {
        if (uVar9 == 0xf000000) {
          pUVar44 = (Use *)(*(long *)pNVar35 + -0x30);
        }
        else {
          pUVar44 = (Use *)(param_1 + -0x30);
        }
        if (pNVar17 != (Node *)0x0) {
          Node::RemoveUse(pNVar17,pUVar44);
        }
        *(Node **)(pNVar41 + 8) = pNVar29;
        Node::AppendUse(pNVar29,pUVar44);
        uVar33 = *(uint *)(param_1 + 0x14);
      }
    }
    uVar33 = uVar33 & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar33 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)pNVar29;
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar33 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)pNVar29;
    if (pNVar17 != pNVar41) {
      if (uVar33 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x18);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x18);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)pNVar29 = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::InsertInput(param_1,*(Zone **)this,1,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32PairShr(*(MachineOperatorBuilder **)(this + 0x10));
    break;
  case 0x140:
    uVar33 = *(uint *)(param_1 + 0x14);
    pNVar35 = param_1 + 0x20;
    uVar9 = uVar33 & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar29 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(*(long *)(pNVar29 + 8) + 0x14) & 0xffffff) * 0x10);
    if (pNVar29 != (Node *)0x0) {
      pNVar41 = pNVar35;
      if (uVar9 == 0xf000000) {
        pNVar41 = (Node *)(*(long *)pNVar35 + 0x10);
      }
      pNVar17 = *(Node **)(pNVar41 + 8);
      if (pNVar17 != pNVar29) {
        if (uVar9 == 0xf000000) {
          pUVar44 = (Use *)(*(long *)pNVar35 + -0x30);
        }
        else {
          pUVar44 = (Use *)(param_1 + -0x30);
        }
        if (pNVar17 != (Node *)0x0) {
          Node::RemoveUse(pNVar17,pUVar44);
        }
        *(Node **)(pNVar41 + 8) = pNVar29;
        Node::AppendUse(pNVar29,pUVar44);
        uVar33 = *(uint *)(param_1 + 0x14);
      }
    }
    uVar33 = uVar33 & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar33 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)pNVar29;
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar33 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)pNVar29;
    if (pNVar17 != pNVar41) {
      if (uVar33 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x18);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x18);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)pNVar29 = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::InsertInput(param_1,*(Zone **)this,1,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32PairSar(*(MachineOperatorBuilder **)(this + 0x10));
    break;
  case 0x141:
    uVar9 = *(uint *)(param_1 + 0x14);
    pNVar35 = param_1 + 0x20;
    pNVar29 = pNVar35;
    if ((uVar9 & 0xf000000) == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)pNVar29;
    lVar14 = *(long *)(this + 0x78);
    if ((uVar9 & 0xf000000) == 0xf000000) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar35 = *(Node **)(pNVar35 + 8);
    if (*(long *)(lVar14 + ((ulong)*(uint *)(*(long *)(pNVar29 + 8) + 0x14) & 0xffffff) * 0x10) != 0
       ) {
      pNVar35 = *(Node **)(lVar14 + ((ulong)*(uint *)(pNVar35 + 0x14) & 0xffffff) * 0x10);
    }
    if (*(short *)(*(long *)pNVar35 + 0x10) != 0x17) {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      pNVar29 = pNVar35;
      if (((byte)pMVar25[0x15] >> 3 & 1) == 0) {
        pGVar39 = *(Graph **)(this + 8);
        pOVar24 = (Operator *)MachineOperatorBuilder::Word32And(pMVar25);
        pGVar40 = *(Graph **)(this + 8);
        pOVar11 = (Operator *)
                  CommonOperatorBuilder::Int32Constant
                            (*(CommonOperatorBuilder **)(this + 0x18),0x1f);
        local_a8 = (Node *)0x0;
        local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
        local_a8 = pNVar35;
        pNVar29 = (Node *)Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
        pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      }
      pGVar40 = *(Graph **)(this + 8);
      pOVar24 = (Operator *)MachineOperatorBuilder::Word32Shl(pMVar25);
      pGVar39 = *(Graph **)(this + 8);
      pOVar11 = (Operator *)
                MachineOperatorBuilder::Word32Sar(*(MachineOperatorBuilder **)(this + 0x10));
      pGVar43 = *(Graph **)(this + 8);
      pOVar12 = (Operator *)
                CommonOperatorBuilder::Int32Constant
                          (*(CommonOperatorBuilder **)(this + 0x18),-0x80000000);
      local_a8 = (Node *)0x0;
      local_a8 = (Node *)Graph::NewNode(pGVar43,pOVar12,0,&local_a8,false);
      local_a0 = (CommonOperatorBuilder *)pNVar29;
      pNVar41 = (Node *)Graph::NewNode(pGVar39,pOVar11,2,&local_a8,false);
      pGVar39 = *(Graph **)(this + 8);
      pOVar11 = (Operator *)
                CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),1);
      local_a8 = (Node *)0x0;
      local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar39,pOVar11,0,&local_a8,false);
      local_a8 = pNVar41;
      pNVar41 = (Node *)Graph::NewNode(pGVar40,pOVar24,2,&local_a8,false);
      pGVar39 = *(Graph **)(this + 8);
      pOVar24 = (Operator *)
                MachineOperatorBuilder::Word32Xor(*(MachineOperatorBuilder **)(this + 0x10));
      pGVar40 = *(Graph **)(this + 8);
      pOVar11 = (Operator *)
                CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),-1);
      local_a8 = (Node *)0x0;
      local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
      local_a8 = pNVar41;
      uVar16 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      if (((byte)pMVar25[0x15] >> 3 & 1) != 0) {
        pGVar39 = *(Graph **)(this + 8);
        pOVar24 = (Operator *)MachineOperatorBuilder::Word32And(pMVar25);
        pGVar40 = *(Graph **)(this + 8);
        pOVar11 = (Operator *)
                  CommonOperatorBuilder::Int32Constant
                            (*(CommonOperatorBuilder **)(this + 0x18),0x3f);
        local_a8 = (Node *)0x0;
        local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
        local_a8 = pNVar35;
        pNVar35 = (Node *)Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
        pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      }
      pGVar39 = *(Graph **)(this + 8);
      uVar20 = *(undefined8 *)(this + 0x18);
      pOVar24 = (Operator *)MachineOperatorBuilder::Int32LessThan(pMVar25);
      pGVar40 = *(Graph **)(this + 8);
      pOVar11 = (Operator *)
                CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0x20);
      local_a8 = (Node *)0x0;
      local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
      local_a8 = pNVar35;
      uVar15 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
      Diamond::Diamond((Diamond *)&local_a8,pGVar39,uVar20,uVar15,0);
      pNVar17 = local_a8;
      puVar27 = (undefined8 *)
                (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
      pNVar35 = (Node *)*puVar27;
      uVar15 = puVar27[1];
      pOVar24 = (Operator *)CommonOperatorBuilder::Phi(local_a0,4,2);
      local_68 = local_80;
      local_78 = pNVar35;
      pNStack_70 = (Node *)uVar15;
      pNVar21 = (Node *)Graph::NewNode((Graph *)pNVar17,pOVar24,3,&local_78,false);
      pNVar17 = local_a8;
      puVar27 = (undefined8 *)
                (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
      uVar15 = *puVar27;
      pNVar35 = (Node *)puVar27[1];
      pOVar24 = (Operator *)CommonOperatorBuilder::Phi(local_a0,4,2);
      local_68 = local_80;
      local_78 = pNVar35;
      pNStack_70 = (Node *)uVar15;
      pNVar35 = (Node *)Graph::NewNode((Graph *)pNVar17,pOVar24,3,&local_78,false);
      pGVar39 = *(Graph **)(this + 8);
      pOVar24 = (Operator *)
                MachineOperatorBuilder::Word32Ror(*(MachineOperatorBuilder **)(this + 0x10));
      local_78 = pNVar21;
      pNStack_70 = pNVar29;
      pNVar17 = (Node *)Graph::NewNode(pGVar39,pOVar24,2,&local_78,false);
      pGVar39 = *(Graph **)(this + 8);
      pOVar24 = (Operator *)
                MachineOperatorBuilder::Word32Ror(*(MachineOperatorBuilder **)(this + 0x10));
      local_78 = pNVar35;
      pNStack_70 = pNVar29;
      pNVar35 = (Node *)Graph::NewNode(pGVar39,pOVar24,2,&local_78,false);
      pGVar39 = *(Graph **)(this + 8);
      pOVar24 = (Operator *)
                MachineOperatorBuilder::Word32Or(*(MachineOperatorBuilder **)(this + 0x10));
      pGVar40 = *(Graph **)(this + 8);
      pOVar11 = (Operator *)
                MachineOperatorBuilder::Word32And(*(MachineOperatorBuilder **)(this + 0x10));
      local_78 = pNVar17;
      pNStack_70 = (Node *)uVar16;
      pNVar29 = (Node *)Graph::NewNode(pGVar40,pOVar11,2,&local_78,false);
      pGVar40 = *(Graph **)(this + 8);
      pOVar11 = (Operator *)
                MachineOperatorBuilder::Word32And(*(MachineOperatorBuilder **)(this + 0x10));
      local_78 = pNVar35;
      pNStack_70 = pNVar41;
      pNStack_70 = (Node *)Graph::NewNode(pGVar40,pOVar11,2,&local_78,false);
      local_78 = pNVar29;
      uVar15 = Graph::NewNode(pGVar39,pOVar24,2,&local_78,false);
      pGVar39 = *(Graph **)(this + 8);
      pOVar24 = (Operator *)
                MachineOperatorBuilder::Word32Or(*(MachineOperatorBuilder **)(this + 0x10));
      pGVar40 = *(Graph **)(this + 8);
      pOVar11 = (Operator *)
                MachineOperatorBuilder::Word32And(*(MachineOperatorBuilder **)(this + 0x10));
      local_78 = pNVar35;
      pNStack_70 = (Node *)uVar16;
      pNVar35 = (Node *)Graph::NewNode(pGVar40,pOVar11,2,&local_78,false);
      pGVar40 = *(Graph **)(this + 8);
      pOVar11 = (Operator *)
                MachineOperatorBuilder::Word32And(*(MachineOperatorBuilder **)(this + 0x10));
      local_78 = pNVar17;
      pNStack_70 = pNVar41;
      pNStack_70 = (Node *)Graph::NewNode(pGVar40,pOVar11,2,&local_78,false);
      local_78 = pNVar35;
      uVar16 = Graph::NewNode(pGVar39,pOVar24,2,&local_78,false);
      *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10)
           = uVar15;
      uVar28 = (ulong)*(uint *)(param_1 + 0x14);
      lVar36 = *(long *)(this + 0x78);
      goto LAB_016d4744;
    }
    uVar3 = *(uint *)(*(long *)pNVar35 + 0x2c);
    uVar33 = uVar3 & 0x3f;
    if (uVar33 == 0x20) {
      uVar28 = (ulong)(uVar9 & 0xffffff);
      puVar27 = (undefined8 *)(lVar14 + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
      uVar15 = *puVar27;
      uVar16 = puVar27[1];
LAB_016d41ac:
      *(undefined8 *)(lVar14 + uVar28 * 0x10) = uVar16;
      *(undefined8 *)
       (*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8) = uVar15;
      return;
    }
    if (uVar33 == 0) {
      uVar28 = (ulong)uVar9 & 0xffffff;
      puVar27 = (undefined8 *)(lVar14 + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
      uVar16 = *puVar27;
      uVar15 = puVar27[1];
      goto LAB_016d41ac;
    }
    pGVar39 = *(Graph **)(this + 8);
    puVar27 = (undefined8 *)(lVar14 + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    puVar2 = puVar27;
    puVar5 = puVar27 + 1;
    if (0x1f < uVar33) {
      puVar2 = puVar27 + 1;
      puVar5 = puVar27;
    }
    pNVar29 = (Node *)*puVar2;
    pNVar41 = (Node *)*puVar5;
    uVar3 = uVar3 & 0x1f;
    pOVar24 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),uVar3);
    local_a8 = (Node *)0x0;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,0,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              CommonOperatorBuilder::Int32Constant
                        (*(CommonOperatorBuilder **)(this + 0x18),0x20 - uVar3);
    local_a8 = (Node *)0x0;
    uVar15 = Graph::NewNode(pGVar39,pOVar24,0,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Or(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              MachineOperatorBuilder::Word32Shr(*(MachineOperatorBuilder **)(this + 0x10));
    local_a8 = pNVar29;
    local_a0 = (CommonOperatorBuilder *)uVar16;
    pNVar35 = (Node *)Graph::NewNode(pGVar40,pOVar11,2,&local_a8,false);
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              MachineOperatorBuilder::Word32Shl(*(MachineOperatorBuilder **)(this + 0x10));
    local_a8 = pNVar41;
    local_a0 = (CommonOperatorBuilder *)uVar15;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,2,&local_a8,false);
    local_a8 = pNVar35;
    uVar20 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Or(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              MachineOperatorBuilder::Word32Shr(*(MachineOperatorBuilder **)(this + 0x10));
    local_a8 = pNVar41;
    local_a0 = (CommonOperatorBuilder *)uVar16;
    pNVar35 = (Node *)Graph::NewNode(pGVar40,pOVar11,2,&local_a8,false);
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              MachineOperatorBuilder::Word32Shl(*(MachineOperatorBuilder **)(this + 0x10));
    local_a8 = pNVar29;
    local_a0 = (CommonOperatorBuilder *)uVar15;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,2,&local_a8,false);
    local_a8 = pNVar35;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
    *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         uVar20;
    goto LAB_016d473c;
  case 0x142:
    pNVar35 = param_1 + 0x20;
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)(pNVar29 + 8);
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)(pNVar29 + 8);
    if (pNVar17 != pNVar41) {
      if (uVar9 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x30);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x30);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)(pNVar29 + 8) = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::AppendInput(param_1,*(Zone **)this,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)pNVar29;
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)pNVar29;
    if (pNVar17 != pNVar41) {
      if (uVar9 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x18);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x18);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)pNVar29 = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::InsertInput(param_1,*(Zone **)this,1,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Int32PairAdd(*(MachineOperatorBuilder **)(this + 0x10));
    break;
  case 0x143:
  case 0x145:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14d:
  case 0x14e:
  case 0x14f:
  case 0x150:
  case 0x155:
  case 0x156:
  case 0x157:
  case 0x158:
  case 0x159:
  case 0x15a:
  case 0x15b:
  case 0x15c:
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x166:
  case 0x167:
  case 0x168:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x172:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x183:
  case 0x184:
  case 0x185:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
  case 0x18c:
  case 0x18d:
  case 0x18e:
  case 399:
  case 400:
  case 0x191:
  case 0x192:
  case 0x193:
  case 0x194:
  case 0x195:
  case 0x196:
  case 0x197:
  case 0x198:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x19c:
  case 0x19d:
  case 0x1a7:
  case 0x1a8:
  case 0x1a9:
  case 0x1ab:
  case 0x1ad:
  case 0x1ae:
  case 0x1b2:
  case 0x1b4:
  case 0x1b5:
  case 0x1b6:
  case 0x1b7:
  case 0x1b8:
  case 0x1b9:
  case 0x1ba:
  case 0x1bb:
  case 0x1bc:
  case 0x1bd:
  case 0x1be:
  case 0x1bf:
  case 0x1c0:
  case 0x1c1:
  case 0x1c2:
  case 0x1c3:
  case 0x1c4:
  case 0x1c5:
  case 0x1c6:
  case 0x1c7:
  case 0x1c8:
  case 0x1c9:
  case 0x1ca:
  case 0x1cc:
  case 0x1cd:
  case 0x1cf:
  case 0x1d0:
  case 0x1d2:
  case 0x1d3:
  case 0x1d4:
  case 0x1d5:
  case 0x1d6:
  case 0x1d7:
  case 0x1d8:
  case 0x1d9:
  case 0x1db:
  case 0x1dd:
  case 0x1de:
  case 0x1df:
  case 0x1e0:
  case 0x1e1:
  case 0x1e2:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
  case 0x1ef:
  case 0x1f0:
  case 0x1f1:
  case 0x1f2:
  case 499:
  case 0x1f7:
  case 0x1f8:
  case 0x1f9:
  case 0x1fa:
  case 0x1fb:
  case 0x1fc:
  case 0x1fd:
  case 0x1fe:
  case 0x1ff:
  case 0x200:
  case 0x201:
  case 0x202:
  case 0x203:
  case 0x204:
  case 0x205:
  case 0x206:
  case 0x207:
  case 0x208:
  case 0x209:
  case 0x20a:
  case 0x20b:
  case 0x20c:
  case 0x20d:
  case 0x20e:
  case 0x20f:
  case 0x210:
  case 0x211:
  case 0x212:
  case 0x213:
  case 0x214:
  case 0x215:
  case 0x216:
  case 0x217:
  case 0x218:
  case 0x219:
  case 0x21a:
  case 0x21b:
  case 0x21c:
  case 0x21d:
  case 0x21e:
  case 0x21f:
  case 0x220:
  case 0x221:
  case 0x222:
  case 0x223:
  case 0x224:
  case 0x225:
  case 0x227:
    goto switchD_016d13b4_caseD_143;
  case 0x144:
    pNVar35 = param_1 + 0x20;
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)(pNVar29 + 8);
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)(pNVar29 + 8);
    if (pNVar17 != pNVar41) {
      if (uVar9 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x30);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x30);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)(pNVar29 + 8) = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::AppendInput(param_1,*(Zone **)this,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)pNVar29;
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)pNVar29;
    if (pNVar17 != pNVar41) {
      if (uVar9 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x18);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x18);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)pNVar29 = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::InsertInput(param_1,*(Zone **)this,1,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Int32PairSub(*(MachineOperatorBuilder **)(this + 0x10));
    break;
  case 0x146:
    pNVar35 = param_1 + 0x20;
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)(pNVar29 + 8);
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)(pNVar29 + 8);
    if (pNVar17 != pNVar41) {
      if (uVar9 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x30);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x30);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)(pNVar29 + 8) = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::AppendInput(param_1,*(Zone **)this,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)pNVar29;
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)pNVar29;
    if (pNVar17 != pNVar41) {
      if (uVar9 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x18);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x18);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)pNVar29 = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::InsertInput(param_1,*(Zone **)this,1,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Int32PairMul(*(MachineOperatorBuilder **)(this + 0x10));
    break;
  case 0x14c:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    lVar36 = *(long *)pNVar35;
    lVar14 = *(long *)(pNVar35 + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              MachineOperatorBuilder::Word32Or(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar43 = *(Graph **)(this + 8);
    pOVar12 = (Operator *)
              MachineOperatorBuilder::Word32Xor(*(MachineOperatorBuilder **)(this + 0x10));
    local_a0 = *(CommonOperatorBuilder **)
                (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar14 + 0x14) & 0xffffff) * 0x10);
    local_a8 = *(Node **)(*(long *)(this + 0x78) +
                         ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar35 = (Node *)Graph::NewNode(pGVar43,pOVar12,2,&local_a8,false);
    pGVar43 = *(Graph **)(this + 8);
    pOVar12 = (Operator *)
              MachineOperatorBuilder::Word32Xor(*(MachineOperatorBuilder **)(this + 0x10));
    local_a0 = *(CommonOperatorBuilder **)
                (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar14 + 0x14) & 0xffffff) * 0x10 + 8);
    local_a8 = *(Node **)(*(long *)(this + 0x78) +
                          ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8);
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar43,pOVar12,2,&local_a8,false);
    local_a8 = pNVar35;
    pNVar35 = (Node *)Graph::NewNode(pGVar40,pOVar11,2,&local_a8,false);
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    iVar10 = 2;
    local_a8 = pNVar35;
    goto LAB_016d1c38;
  case 0x151:
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Int32LessThan(*(MachineOperatorBuilder **)(this + 0x10));
    goto LAB_016d29e0;
  case 0x152:
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Int32LessThan(*(MachineOperatorBuilder **)(this + 0x10));
    goto LAB_016d2984;
  case 0x153:
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Uint32LessThan(*(MachineOperatorBuilder **)(this + 0x10));
LAB_016d29e0:
    pOVar11 = (Operator *)
              MachineOperatorBuilder::Uint32LessThan(*(MachineOperatorBuilder **)(this + 0x10));
LAB_016d29f0:
    LowerComparison(this,param_1,pOVar24,pOVar11);
    return;
  case 0x154:
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Uint32LessThan(*(MachineOperatorBuilder **)(this + 0x10));
LAB_016d2984:
    pOVar11 = (Operator *)
              MachineOperatorBuilder::Uint32LessThanOrEqual
                        (*(MachineOperatorBuilder **)(this + 0x10));
    goto LAB_016d29f0;
  case 0x19e:
    uVar7 = AtomicOpType(pOVar24);
    DefaultLowering(this,param_1,true);
    if ((uVar7 & 0xff) == 5) {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      if ((uVar7 & 0xff00) == 0x500) {
        pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicPairLoad(pMVar25);
        break;
      }
    }
    else {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
    }
    pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicLoad(pMVar25,uVar7);
    goto LAB_016d32ec;
  case 0x19f:
    uVar9 = AtomicStoreRepresentationOf(pOVar24);
    if ((uVar9 & 0xff) == 5) {
      LowerMemoryBaseAndIndex(this,param_1);
      pNVar35 = param_1 + 0x20;
      uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
      pNVar29 = pNVar35;
      if (uVar9 == 0xf000000) {
        pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
      }
      lVar36 = *(long *)(pNVar29 + 0x10);
      pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                          ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
      pNVar29 = pNVar35;
      if (uVar9 == 0xf000000) {
        pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
      }
      pNVar17 = *(Node **)(pNVar29 + 0x10);
      if (pNVar17 != pNVar41) {
        if (uVar9 == 0xf000000) {
          pUVar44 = (Use *)(*(long *)pNVar35 + -0x48);
        }
        else {
          pUVar44 = (Use *)(param_1 + -0x48);
        }
        if (pNVar17 != (Node *)0x0) {
          Node::RemoveUse(pNVar17,pUVar44);
        }
        *(Node **)(pNVar29 + 0x10) = pNVar41;
        if (pNVar41 != (Node *)0x0) {
          Node::AppendUse(pNVar41,pUVar44);
        }
      }
      Node::InsertInput(param_1,*(Zone **)this,3,
                        *(Node **)(*(long *)(this + 0x78) +
                                   ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
      pOVar24 = (Operator *)
                MachineOperatorBuilder::Word32AtomicPairStore
                          (*(MachineOperatorBuilder **)(this + 0x10));
    }
    else {
      DefaultLowering(this,param_1,true);
      pOVar24 = (Operator *)
                MachineOperatorBuilder::Word32AtomicStore
                          (*(MachineOperatorBuilder **)(this + 0x10),uVar9);
    }
    goto LAB_016d4a84;
  case 0x1a0:
    uVar7 = AtomicOpType(pOVar24);
    if ((uVar7 & 0xff) == 5) {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      if ((uVar7 & 0xff00) == 0x500) {
        pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicPairAdd(pMVar25);
LAB_016d2764:
        LowerWord64AtomicBinop(this,param_1,pOVar24);
        return;
      }
    }
    else {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
    }
    pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicAdd(pMVar25,uVar7);
    goto LAB_016d3298;
  case 0x1a1:
    uVar7 = AtomicOpType(pOVar24);
    if ((uVar7 & 0xff) == 5) {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      if ((uVar7 & 0xff00) == 0x500) {
        pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicPairSub(pMVar25);
        goto LAB_016d2764;
      }
    }
    else {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
    }
    pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicSub(pMVar25,uVar7);
    goto LAB_016d3298;
  case 0x1a2:
    uVar7 = AtomicOpType(pOVar24);
    if ((uVar7 & 0xff) == 5) {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      if ((uVar7 & 0xff00) == 0x500) {
        pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicPairAnd(pMVar25);
        goto LAB_016d2764;
      }
    }
    else {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
    }
    pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicAnd(pMVar25,uVar7);
    goto LAB_016d3298;
  case 0x1a3:
    uVar7 = AtomicOpType(pOVar24);
    if ((uVar7 & 0xff) == 5) {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      if ((uVar7 & 0xff00) == 0x500) {
        pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicPairOr(pMVar25);
        goto LAB_016d2764;
      }
    }
    else {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
    }
    pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicOr(pMVar25,uVar7);
    goto LAB_016d3298;
  case 0x1a4:
    uVar7 = AtomicOpType(pOVar24);
    if ((uVar7 & 0xff) == 5) {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      if ((uVar7 & 0xff00) == 0x500) {
        pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicPairXor(pMVar25);
        goto LAB_016d2764;
      }
    }
    else {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
    }
    pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicXor(pMVar25,uVar7);
    goto LAB_016d3298;
  case 0x1a5:
    uVar7 = AtomicOpType(pOVar24);
    if ((uVar7 & 0xff) == 5) {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
      if ((uVar7 & 0xff00) == 0x500) {
        pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicPairExchange(pMVar25);
        goto LAB_016d2764;
      }
    }
    else {
      pMVar25 = *(MachineOperatorBuilder **)(this + 0x10);
    }
    pOVar24 = (Operator *)MachineOperatorBuilder::Word32AtomicExchange(pMVar25,uVar7);
LAB_016d3298:
    DefaultLowering(this,param_1,true);
LAB_016d32ec:
    NodeProperties::ChangeOp(param_1,pOVar24);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    local_a8 = (Node *)0x0;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,0,&local_a8,false);
    *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         param_1;
    goto LAB_016d473c;
  case 0x1a6:
    sVar8 = AtomicOpType(pOVar24);
    if (sVar8 != 0x505) {
      DefaultLowering(this,param_1,true);
      pOVar24 = (Operator *)
                MachineOperatorBuilder::Word32AtomicCompareExchange
                          (*(MachineOperatorBuilder **)(this + 0x10),sVar8);
      goto LAB_016d32ec;
    }
    LowerMemoryBaseAndIndex(this,param_1);
    pNVar35 = param_1 + 0x20;
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)(pNVar29 + 0x10);
    lVar14 = *(long *)(pNVar29 + 0x18);
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)(pNVar29 + 0x10);
    if (pNVar17 != pNVar41) {
      if (uVar9 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x48);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x48);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)(pNVar29 + 0x10) = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                         ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8);
    pNVar29 = pNVar35;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)(pNVar29 + 0x18);
    if (pNVar17 != pNVar41) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x60);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x60);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)(pNVar29 + 0x18) = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::InsertInput(param_1,*(Zone **)this,4,
                      *(Node **)(*(long *)(this + 0x78) +
                                ((ulong)*(uint *)(lVar14 + 0x14) & 0xffffff) * 0x10));
    Node::InsertInput(param_1,*(Zone **)this,5,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar14 + 0x14) & 0xffffff) * 0x10 + 8));
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32AtomicPairCompareExchange
                        (*(MachineOperatorBuilder **)(this + 0x10));
    break;
  case 0x1aa:
  case 0x1e7:
    cVar6 = LoadRepresentationOf(pOVar24);
    if (cVar6 != '\x05') goto switchD_016d13b4_caseD_143;
    LowerMemoryBaseAndIndex(this,param_1);
    pNVar35 = param_1 + 0x20;
    pNVar29 = pNVar35;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    pNVar41 = *(Node **)pNVar29;
    pNVar17 = *(Node **)(pNVar29 + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),4);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    local_a8 = pNVar17;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
    if (*(short *)(*(long *)param_1 + 0x10) == 0x1aa) {
      pOVar24 = (Operator *)MachineOperatorBuilder::Load();
    }
    else {
      pOVar24 = (Operator *)
                MachineOperatorBuilder::UnalignedLoad
                          (*(MachineOperatorBuilder **)(this + 0x10),0x204);
    }
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    local_a8 = pNVar41;
    local_a0 = (CommonOperatorBuilder *)uVar16;
    if (uVar9 == 0xf000000) {
      if (*(int *)(*(long *)pNVar35 + 8) < 3) goto LAB_016d3048;
LAB_016d2fc4:
      pNVar29 = pNVar35;
      if (uVar9 == 0xf000000) {
        pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
      }
      local_98 = *(long *)(pNVar29 + 0x10);
      uStack_90 = *(undefined8 *)(pNVar29 + 0x18);
      pNVar41 = (Node *)Graph::NewNode(*(Graph **)(this + 8),pOVar24,4,&local_a8,false);
      pNVar29 = pNVar35;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
      }
      pNVar21 = *(Node **)(pNVar29 + 0x10);
      if (pNVar21 != pNVar41) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar44 = (Use *)(*(long *)pNVar35 + -0x48);
        }
        else {
          pUVar44 = (Use *)(param_1 + -0x48);
        }
        if (pNVar21 != (Node *)0x0) {
          Node::RemoveUse(pNVar21,pUVar44);
        }
        *(Node **)(pNVar29 + 0x10) = pNVar41;
        if (pNVar41 != (Node *)0x0) {
          Node::AppendUse(pNVar41,pUVar44);
        }
      }
    }
    else {
      if (2 < (*(uint *)(param_1 + 0x14) >> 0x18 & 0xf)) goto LAB_016d2fc4;
LAB_016d3048:
      pNVar41 = (Node *)Graph::NewNode(*(Graph **)(this + 8),pOVar24,2,&local_a8,false);
    }
    pNVar29 = pNVar35;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar21 = *(Node **)(pNVar29 + 8);
    if (pNVar21 == pNVar17) goto LAB_016d4578;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar44 = (Use *)(*(long *)pNVar35 + -0x30);
    }
    else {
      pUVar44 = (Use *)(param_1 + -0x30);
    }
    if (pNVar21 != (Node *)0x0) {
      Node::RemoveUse(pNVar21,pUVar44);
    }
    *(Node **)(pNVar29 + 8) = pNVar17;
    if (pNVar17 == (Node *)0x0) goto LAB_016d4578;
    goto LAB_016d456c;
  case 0x1ac:
    pcVar13 = (char *)StoreRepresentationOf(pOVar24);
    goto LAB_016d2348;
  case 0x1af:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    lVar36 = *(long *)pNVar35;
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar40 = *(Graph **)(this + 8);
    MachineOperatorBuilder::Word32Popcnt(*(MachineOperatorBuilder **)(this + 0x10));
    local_a8 = *(Node **)(*(long *)(this + 0x78) +
                         ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar35 = (Node *)Graph::NewNode(pGVar40,extraout_x1,1,&local_a8,false);
    pGVar40 = *(Graph **)(this + 8);
    MachineOperatorBuilder::Word32Popcnt(*(MachineOperatorBuilder **)(this + 0x10));
    local_a8 = *(Node **)(*(long *)(this + 0x78) +
                          ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8);
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,extraout_x1_00,1,&local_a8,false);
    local_a8 = pNVar35;
    uVar15 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    local_a8 = (Node *)0x0;
    ppNVar22 = &local_a8;
    goto LAB_016d2970;
  case 0x1b0:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    uVar16 = *(undefined8 *)(this + 0x18);
    lVar36 = *(long *)pNVar35;
    pGVar40 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar43 = *(Graph **)(this + 8);
    pGVar39 = *(Graph **)
               (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar43,pOVar11,0,&local_a8,false);
    local_a8 = (Node *)pGVar39;
    uVar15 = Graph::NewNode(pGVar40,pOVar24,2,&local_a8,false);
    Diamond::Diamond((Diamond *)&local_a8,pGVar40,uVar16,uVar15,0);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              MachineOperatorBuilder::Word32Clz(*(MachineOperatorBuilder **)(this + 0x10));
    local_78 = *(Node **)(*(long *)(this + 0x78) +
                         ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar35 = (Node *)Graph::NewNode(pGVar40,pOVar11,1,&local_78,false);
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0x20);
    local_78 = (Node *)0x0;
    pNStack_70 = (Node *)Graph::NewNode(pGVar40,pOVar11,0,&local_78,false);
    local_78 = pNVar35;
    pNVar35 = (Node *)Graph::NewNode(pGVar39,pOVar24,2,&local_78,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Clz(*(MachineOperatorBuilder **)(this + 0x10));
    local_78 = *(Node **)(*(long *)(this + 0x78) +
                          ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8);
    goto LAB_016d28f8;
  case 0x1b1:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    uVar16 = *(undefined8 *)(this + 0x18);
    lVar36 = *(long *)pNVar35;
    pGVar40 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar43 = *(Graph **)(this + 8);
    pGVar39 = *(Graph **)
               (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar43,pOVar11,0,&local_a8,false);
    local_a8 = (Node *)pGVar39;
    uVar15 = Graph::NewNode(pGVar40,pOVar24,2,&local_a8,false);
    Diamond::Diamond((Diamond *)&local_a8,pGVar40,uVar16,uVar15,0);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar40 = *(Graph **)(this + 8);
    MachineOperatorBuilder::Word32Ctz(*(MachineOperatorBuilder **)(this + 0x10));
    local_78 = *(Node **)(*(long *)(this + 0x78) +
                          ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8);
    pNVar35 = (Node *)Graph::NewNode(pGVar40,extraout_x1_01,1,&local_78,false);
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0x20);
    local_78 = (Node *)0x0;
    pNStack_70 = (Node *)Graph::NewNode(pGVar40,pOVar11,0,&local_78,false);
    local_78 = pNVar35;
    pNVar35 = (Node *)Graph::NewNode(pGVar39,pOVar24,2,&local_78,false);
    pGVar39 = *(Graph **)(this + 8);
    MachineOperatorBuilder::Word32Ctz(*(MachineOperatorBuilder **)(this + 0x10));
    local_78 = *(Node **)(*(long *)(this + 0x78) +
                         ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pOVar24 = extraout_x1_02;
LAB_016d28f8:
    uVar16 = Graph::NewNode(pGVar39,pOVar24,1,&local_78,false);
    pNVar29 = local_a8;
    pOVar24 = (Operator *)CommonOperatorBuilder::Phi(local_a0,4,2);
    local_68 = local_80;
    local_78 = pNVar35;
    pNStack_70 = (Node *)uVar16;
    uVar15 = Graph::NewNode((Graph *)pNVar29,pOVar24,3,&local_78,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    ppNVar22 = &local_78;
    local_78 = (Node *)0x0;
LAB_016d2970:
    iVar10 = 0;
    goto LAB_016d4720;
  case 0x1b3:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    lVar36 = *(long *)pNVar35;
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32ReverseBytes(*(MachineOperatorBuilder **)(this + 0x10));
    local_a8 = *(Node **)(*(long *)(this + 0x78) +
                          ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8);
    uVar15 = Graph::NewNode(pGVar39,pOVar24,1,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32ReverseBytes(*(MachineOperatorBuilder **)(this + 0x10));
    local_a8 = *(Node **)(*(long *)(this + 0x78) +
                         ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    iVar10 = 1;
    goto LAB_016d471c;
  case 0x1cb:
  case 0x1f6:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    pNVar29 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(*(Node **)pNVar35 + 0x14) & 0xffffff) * 0x10);
    pNVar35 = *(Node **)pNVar35;
    if (pNVar29 != (Node *)0x0) {
      pNVar35 = pNVar29;
    }
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Sar(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0x1f);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    iVar10 = 2;
    local_a8 = pNVar35;
    goto LAB_016d2a80;
  case 0x1ce:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    pNVar29 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(*(Node **)pNVar35 + 0x14) & 0xffffff) * 0x10);
    pNVar35 = *(Node **)pNVar35;
    if (pNVar29 != (Node *)0x0) {
      pNVar35 = pNVar29;
    }
    pOVar24 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    iVar10 = 0;
    local_a8 = (Node *)0x0;
LAB_016d2a80:
    uVar16 = Graph::NewNode(pGVar39,pOVar24,iVar10,&local_a8,false);
    *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         pNVar35;
LAB_016d2a9c:
    *(undefined8 *)
     (*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8) = uVar16;
    Node::NullAllInputs(param_1);
    return;
  case 0x1d1:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         *(undefined8 *)
          (*(long *)(this + 0x78) + ((ulong)*(uint *)(*(long *)pNVar35 + 0x14) & 0xffffff) * 0x10);
    *(undefined8 *)
     (*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8) = 0;
    Node::NullAllInputs(param_1);
    return;
  case 0x1da:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    lVar14 = *(long *)(*(long *)(this + 0x78) +
                      ((ulong)*(uint *)(*(long *)pNVar35 + 0x14) & 0xffffff) * 0x10);
    lVar36 = *(long *)pNVar35;
    if (lVar14 != 0) {
      lVar36 = lVar14;
    }
    pOVar24 = (Operator *)
              MachineOperatorBuilder::StackSlot(*(MachineOperatorBuilder **)(this + 0x10),5,0);
    local_a8 = (Node *)0x0;
    pNVar35 = (Node *)Graph::NewNode(pGVar39,pOVar24,0,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Store(*(MachineOperatorBuilder **)(this + 0x10),0xc);
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    uStack_90 = *(undefined8 *)(*(long *)(this + 8) + 8);
    local_a8 = pNVar35;
    local_98 = lVar36;
    local_88 = uStack_90;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,5,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(this + 0x10),0x204);
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),4);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    uStack_90 = *(undefined8 *)(*(long *)(this + 8) + 8);
    local_a8 = pNVar35;
    local_98 = uVar16;
    uVar15 = Graph::NewNode(pGVar39,pOVar24,4,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(this + 0x10),0x204);
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    uStack_90 = *(undefined8 *)(*(long *)(this + 8) + 8);
    local_a8 = pNVar35;
    local_98 = uVar16;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,4,&local_a8,false);
    *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         uVar16;
    *(undefined8 *)
     (*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8) = uVar15;
    return;
  case 0x1dc:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    lVar36 = *(long *)pNVar35;
    pOVar24 = (Operator *)
              MachineOperatorBuilder::StackSlot(*(MachineOperatorBuilder **)(this + 0x10),5,0);
    local_a8 = (Node *)0x0;
    pNVar35 = (Node *)Graph::NewNode(pGVar39,pOVar24,0,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)MachineOperatorBuilder::Store(*(MachineOperatorBuilder **)(this + 0x10),4)
    ;
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),4);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    local_98 = *(undefined8 *)
                (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8);
    uStack_90 = *(undefined8 *)(*(long *)(this + 8) + 8);
    local_a8 = pNVar35;
    local_88 = uStack_90;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,5,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)MachineOperatorBuilder::Store(*(MachineOperatorBuilder **)(this + 0x10),4)
    ;
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    local_98 = *(undefined8 *)
                (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    local_88 = *(undefined8 *)(*(long *)(this + 8) + 8);
    local_a8 = pNVar35;
    uStack_90 = uVar16;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,5,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(this + 0x10),0x60c);
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    iVar10 = 4;
    uStack_90 = *(undefined8 *)(*(long *)(this + 8) + 8);
    local_a8 = pNVar35;
    local_98 = uVar16;
LAB_016d1c38:
    uVar16 = Graph::NewNode(pGVar39,pOVar24,iVar10,&local_a8,false);
    *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         uVar16;
    *(undefined8 *)
     (*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8) = 0;
    return;
  case 0x1e8:
    pcVar13 = (char *)UnalignedStoreRepresentationOf(pOVar24);
LAB_016d2348:
    if (*pcVar13 != '\x05') {
      bVar23 = true;
LAB_016d2e5c:
      DefaultLowering(this,param_1,bVar23);
      return;
    }
    LowerMemoryBaseAndIndex(this,param_1);
    pNVar35 = param_1 + 0x20;
    pNVar29 = pNVar35;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    pNVar41 = *(Node **)pNVar29;
    pNVar17 = *(Node **)(pNVar29 + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),4);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    local_a8 = pNVar17;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
    pNVar29 = pNVar35;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)(pNVar29 + 0x10);
    if (*(short *)(*(Operator **)param_1 + 0x10) == 0x1ac) {
      lVar14 = StoreRepresentationOf(*(Operator **)param_1);
      pOVar24 = (Operator *)
                MachineOperatorBuilder::Store
                          (*(MachineOperatorBuilder **)(this + 0x10),
                           (ulong)*(byte *)(lVar14 + 1) << 8 | 4);
    }
    else {
      pOVar24 = (Operator *)
                MachineOperatorBuilder::UnalignedStore(*(MachineOperatorBuilder **)(this + 0x10),4);
    }
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    local_a8 = pNVar41;
    local_a0 = (CommonOperatorBuilder *)uVar16;
    if (uVar9 == 0xf000000) {
      if (*(int *)(*(long *)pNVar35 + 8) < 4) goto LAB_016d3210;
LAB_016d3174:
      pNVar29 = pNVar35;
      if (uVar9 == 0xf000000) {
        pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
      }
      local_98 = *(undefined8 *)
                  (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8)
      ;
      uStack_90 = *(undefined8 *)(pNVar29 + 0x18);
      local_88 = *(undefined8 *)(pNVar29 + 0x20);
      pNVar41 = (Node *)Graph::NewNode(*(Graph **)(this + 8),pOVar24,5,&local_a8,false);
      pNVar29 = pNVar35;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
      }
      pNVar21 = *(Node **)(pNVar29 + 0x18);
      if (pNVar21 != pNVar41) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar44 = (Use *)(*(long *)pNVar35 + -0x60);
        }
        else {
          pUVar44 = (Use *)(param_1 + -0x60);
        }
        if (pNVar21 != (Node *)0x0) {
          Node::RemoveUse(pNVar21,pUVar44);
        }
        *(Node **)(pNVar29 + 0x18) = pNVar41;
        if (pNVar41 != (Node *)0x0) {
          Node::AppendUse(pNVar41,pUVar44);
        }
      }
    }
    else {
      if (3 < (*(uint *)(param_1 + 0x14) >> 0x18 & 0xf)) goto LAB_016d3174;
LAB_016d3210:
      local_98 = *(undefined8 *)
                  (*(long *)(this + 0x78) + ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8)
      ;
      pNVar41 = (Node *)Graph::NewNode(*(Graph **)(this + 8),pOVar24,3,&local_a8,false);
    }
    pNVar29 = pNVar35;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar21 = *(Node **)(pNVar29 + 8);
    if (pNVar21 != pNVar17) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x30);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x30);
      }
      if (pNVar21 != (Node *)0x0) {
        Node::RemoveUse(pNVar21,pUVar44);
      }
      *(Node **)(pNVar29 + 8) = pNVar17;
      if (pNVar17 != (Node *)0x0) {
        Node::AppendUse(pNVar17,pUVar44);
      }
    }
    pNVar17 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar21 = *(Node **)(pNVar29 + 0x10);
    if (pNVar21 != pNVar17) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x48);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x48);
      }
      if (pNVar21 != (Node *)0x0) {
        Node::RemoveUse(pNVar21,pUVar44);
      }
      *(Node **)(pNVar29 + 0x10) = pNVar17;
      if (pNVar17 != (Node *)0x0) {
LAB_016d456c:
        Node::AppendUse(pNVar17,pUVar44);
      }
    }
LAB_016d4578:
    NodeProperties::ChangeOp(param_1,pOVar24);
    *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         param_1;
    *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8) =
         pNVar41;
    return;
  case 500:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    pNVar29 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(*(Node **)pNVar35 + 0x14) & 0xffffff) * 0x10);
    pNVar35 = *(Node **)pNVar35;
    if (pNVar29 != (Node *)0x0) {
      pNVar35 = pNVar29;
    }
    pOVar24 = (Operator *)
              MachineOperatorBuilder::SignExtendWord8ToInt32
                        (*(MachineOperatorBuilder **)(this + 0x10));
    goto LAB_016d22ac;
  case 0x1f5:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pGVar39 = *(Graph **)(this + 8);
    pNVar29 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(*(Node **)pNVar35 + 0x14) & 0xffffff) * 0x10);
    pNVar35 = *(Node **)pNVar35;
    if (pNVar29 != (Node *)0x0) {
      pNVar35 = pNVar29;
    }
    pOVar24 = (Operator *)
              MachineOperatorBuilder::SignExtendWord16ToInt32
                        (*(MachineOperatorBuilder **)(this + 0x10));
LAB_016d22ac:
    local_a8 = pNVar35;
    pNVar35 = (Node *)Graph::NewNode(pGVar39,pOVar24,1,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::Word32Sar(*(MachineOperatorBuilder **)(this + 0x10));
    pGVar40 = *(Graph **)(this + 8);
    pOVar11 = (Operator *)
              CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0x1f);
    local_a8 = (Node *)0x0;
    local_a0 = (CommonOperatorBuilder *)Graph::NewNode(pGVar40,pOVar11,0,&local_a8,false);
    local_a8 = pNVar35;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
    *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         pNVar35;
    goto LAB_016d2a9c;
  case 0x226:
    pNVar35 = param_1 + 0x20;
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)pNVar29;
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)pNVar29;
    if (pNVar17 != pNVar41) {
      if (uVar9 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x18);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x18);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)pNVar29 = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::AppendInput(param_1,*(Zone **)this,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    pOVar24 = (Operator *)
              MachineOperatorBuilder::I64x2SplatI32Pair(*(MachineOperatorBuilder **)(this + 0x10));
    goto LAB_016d4a84;
  case 0x228:
    pNVar35 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar35 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    iVar10 = *(int *)(pOVar24 + 0x2c);
    pGVar39 = *(Graph **)(this + 8);
    pNVar35 = *(Node **)pNVar35;
    pOVar24 = (Operator *)
              MachineOperatorBuilder::I32x4ExtractLane
                        (*(MachineOperatorBuilder **)(this + 0x10),iVar10 << 1);
    local_a8 = pNVar35;
    uVar15 = Graph::NewNode(pGVar39,pOVar24,1,&local_a8,false);
    pGVar39 = *(Graph **)(this + 8);
    pOVar24 = (Operator *)
              MachineOperatorBuilder::I32x4ExtractLane
                        (*(MachineOperatorBuilder **)(this + 0x10),iVar10 << 1 | 1);
    local_a8 = pNVar35;
    uVar16 = Graph::NewNode(pGVar39,pOVar24,1,&local_a8,false);
    *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         uVar15;
    goto LAB_016d473c;
  case 0x229:
    iVar10 = *(int *)(pOVar24 + 0x2c);
    pNVar35 = param_1 + 0x20;
    uVar9 = *(uint *)(param_1 + 0x14) & 0xf000000;
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    lVar36 = *(long *)(pNVar29 + 8);
    pNVar41 = *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10);
    pNVar29 = pNVar35;
    if (uVar9 == 0xf000000) {
      pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
    }
    pNVar17 = *(Node **)(pNVar29 + 8);
    if (pNVar17 != pNVar41) {
      if (uVar9 == 0xf000000) {
        pUVar44 = (Use *)(*(long *)pNVar35 + -0x30);
      }
      else {
        pUVar44 = (Use *)(param_1 + -0x30);
      }
      if (pNVar17 != (Node *)0x0) {
        Node::RemoveUse(pNVar17,pUVar44);
      }
      *(Node **)(pNVar29 + 8) = pNVar41;
      if (pNVar41 != (Node *)0x0) {
        Node::AppendUse(pNVar41,pUVar44);
      }
    }
    Node::AppendInput(param_1,*(Zone **)this,
                      *(Node **)(*(long *)(this + 0x78) +
                                 ((ulong)*(uint *)(lVar36 + 0x14) & 0xffffff) * 0x10 + 8));
    pOVar24 = (Operator *)
              MachineOperatorBuilder::I64x2ReplaceLaneI32Pair
                        (*(MachineOperatorBuilder **)(this + 0x10),iVar10);
LAB_016d4a84:
    NodeProperties::ChangeOp(param_1,pOVar24);
    return;
  default:
    switch(*(undefined2 *)(pOVar24 + 0x10)) {
    case 0:
      plVar30 = *(long **)(this + 0x80);
      uVar28 = plVar30[1];
      if ((int)uVar28 < 1) {
        return;
      }
      uVar31 = uVar28 & 0xffffffff;
      if (uVar31 < 2) {
        lVar14 = 0;
        uVar34 = uVar28 & 0xffffffff;
LAB_016d3a48:
        lVar36 = uVar31 - lVar14;
        pcVar13 = (char *)(plVar30[2] + lVar14 + *plVar30);
        do {
          uVar9 = (uint)uVar34;
          if (*pcVar13 == '\x05') {
            uVar9 = uVar9 + 1;
          }
          uVar34 = (ulong)uVar9;
          lVar36 = lVar36 + -1;
          pcVar13 = pcVar13 + 1;
        } while (lVar36 != 0);
      }
      else {
        lVar14 = uVar31 - (uVar28 & 1);
        iVar10 = 0;
        uVar34 = uVar28 & 0xffffffff;
        pcVar13 = (char *)(*plVar30 + plVar30[2] + 1);
        lVar36 = lVar14;
        do {
          uVar9 = (uint)uVar34;
          if (pcVar13[-1] == '\x05') {
            uVar9 = uVar9 + 1;
          }
          uVar34 = (ulong)uVar9;
          if (*pcVar13 == '\x05') {
            iVar10 = iVar10 + 1;
          }
          lVar36 = lVar36 + -2;
          pcVar13 = pcVar13 + 2;
        } while (lVar36 != 0);
        uVar9 = iVar10 + uVar9;
        uVar34 = (ulong)uVar9;
        if ((uVar28 & 1) != 0) goto LAB_016d3a48;
      }
      iVar10 = uVar9 - (int)uVar28;
      if (iVar10 == 0) {
        return;
      }
      pOVar24 = (Operator *)
                CommonOperatorBuilder::Start
                          (*(CommonOperatorBuilder **)(this + 0x18),
                           iVar10 + *(int *)(pOVar24 + 0x20));
      goto LAB_016d4a84;
    case 0x10:
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
      }
      DefaultLowering(this,param_1,false);
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        uVar33 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
      }
      else {
        uVar33 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
      }
      if (uVar9 == uVar33) {
        return;
      }
      uVar28 = **(ulong **)(this + 0x80);
      if ((int)(uint)uVar28 < 1) {
        return;
      }
      uVar31 = (*(ulong **)(this + 0x80))[2];
      uVar34 = uVar28 & 0xffffffff;
      if (uVar34 < 2) {
        lVar14 = 0;
        uVar38 = uVar28 & 0xffffffff;
LAB_016d47b0:
        lVar36 = uVar34 - lVar14;
        pcVar13 = (char *)(uVar31 + lVar14);
        do {
          uVar9 = (uint)uVar38;
          if (*pcVar13 == '\x05') {
            uVar9 = uVar9 + 1;
          }
          uVar38 = (ulong)uVar9;
          lVar36 = lVar36 + -1;
          pcVar13 = pcVar13 + 1;
        } while (lVar36 != 0);
      }
      else {
        lVar14 = uVar34 - (uVar28 & 1);
        iVar10 = 0;
        uVar38 = uVar28 & 0xffffffff;
        pcVar13 = (char *)(uVar31 + 1);
        lVar36 = lVar14;
        do {
          uVar9 = (uint)uVar38;
          if (pcVar13[-1] == '\x05') {
            uVar9 = uVar9 + 1;
          }
          uVar38 = (ulong)uVar9;
          if (*pcVar13 == '\x05') {
            iVar10 = iVar10 + 1;
          }
          lVar36 = lVar36 + -2;
          pcVar13 = pcVar13 + 2;
        } while (lVar36 != 0);
        uVar9 = iVar10 + uVar9;
        uVar38 = (ulong)uVar9;
        if ((uVar28 & 1) != 0) goto LAB_016d47b0;
      }
      if (uVar9 == (uint)uVar28) {
        return;
      }
      pOVar24 = (Operator *)
                CommonOperatorBuilder::Return(*(CommonOperatorBuilder **)(this + 0x18),uVar9);
      goto LAB_016d4a84;
    case 0x11:
      pCVar18 = (CallDescriptor *)CallDescriptorOf(pOVar24);
      uVar28 = **(ulong **)(pCVar18 + 0x10);
      uVar33 = (uint)uVar28;
      uVar9 = uVar33;
      if (0 < (int)uVar33) {
        uVar31 = (*(ulong **)(pCVar18 + 0x10))[2];
        uVar34 = uVar28 & 0xffffffff;
        if (uVar34 < 4) {
          lVar14 = 0;
          uVar38 = uVar28 & 0xffffffff;
        }
        else {
          lVar14 = uVar34 - (uVar28 & 3);
          puVar27 = (undefined8 *)(uVar31 + 0x10);
          iVar48 = 0;
          iVar49 = 0;
          iVar10 = 0;
          lVar36 = lVar14;
          do {
            puVar2 = puVar27 + -2;
            puVar5 = puVar27 + -1;
            puVar4 = puVar27 + 1;
            uVar16 = *puVar27;
            lVar36 = lVar36 + -4;
            puVar27 = puVar27 + 4;
            uVar38 = CONCAT44((int)((ulong)*puVar5 >> 0x20),(int)((ulong)*puVar2 >> 0x20)) &
                     0xff000000ff;
            uVar50 = CONCAT44((int)((ulong)*puVar4 >> 0x20),(int)((ulong)uVar16 >> 0x20)) &
                     0xff000000ff;
            uVar9 = uVar9 + ((int)uVar38 == 5);
            iVar10 = iVar10 + (uint)((int)(uVar38 >> 0x20) == 5);
            iVar48 = iVar48 + (uint)((int)uVar50 == 5);
            iVar49 = iVar49 + (uint)((int)(uVar50 >> 0x20) == 5);
          } while (lVar36 != 0);
          uVar9 = iVar48 + uVar9 + iVar49 + iVar10;
          uVar38 = (ulong)uVar9;
          if ((uVar28 & 3) == 0) goto LAB_016d39a8;
        }
        lVar32 = uVar34 - lVar14;
        lVar36 = uVar31 + lVar14 * 8;
        do {
          pcVar13 = (char *)(lVar36 + 4);
          lVar36 = lVar36 + 8;
          uVar9 = (uint)uVar38;
          if (*pcVar13 == '\x05') {
            uVar9 = uVar9 + 1;
          }
          uVar38 = (ulong)uVar9;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
      }
LAB_016d39a8:
      uVar28 = DefaultLowering(this,param_1,false);
      if ((uVar9 == uVar33) && ((uVar28 & 1) == 0)) {
        return;
      }
      puVar27 = *(undefined8 **)(this + 0x90);
      pCVar42 = *(CommonOperatorBuilder **)(this + 0x18);
      if (puVar27 == (undefined8 *)0x0) {
LAB_016d39f0:
        pCVar18 = (CallDescriptor *)GetI32WasmCallDescriptor(*(Zone **)this,pCVar18);
      }
      else if ((CallDescriptor *)*puVar27 == pCVar18) {
        pCVar18 = (CallDescriptor *)puVar27[2];
      }
      else {
        if ((CallDescriptor *)puVar27[1] != pCVar18) goto LAB_016d39f0;
        pCVar18 = (CallDescriptor *)puVar27[3];
      }
      pOVar24 = (Operator *)CommonOperatorBuilder::TailCall(pCVar42,pCVar18);
      goto LAB_016d4a84;
    case 0x18:
      iVar10 = *(int *)(pOVar24 + 0x34);
      pGVar39 = *(Graph **)(this + 8);
      pOVar24 = (Operator *)
                CommonOperatorBuilder::Int32Constant
                          (*(CommonOperatorBuilder **)(this + 0x18),*(int *)(pOVar24 + 0x30));
      local_a8 = (Node *)0x0;
      uVar15 = Graph::NewNode(pGVar39,pOVar24,0,&local_a8,false);
      pGVar39 = *(Graph **)(this + 8);
      pOVar24 = (Operator *)
                CommonOperatorBuilder::Int32Constant
                          (*(CommonOperatorBuilder **)(this + 0x18),iVar10);
      local_a8 = (Node *)0x0;
      uVar16 = Graph::NewNode(pGVar39,pOVar24,0,&local_a8,false);
      *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10)
           = uVar15;
      goto LAB_016d473c;
    case 0x23:
      cVar6 = PhiRepresentationOf(pOVar24);
      if (cVar6 == '\x05') {
        if (*(int *)(*(long *)param_1 + 0x14) < 1) {
          return;
        }
        uVar28 = (ulong)*(uint *)(param_1 + 0x14);
        lVar36 = 0;
        plVar30 = (long *)(*(long *)(this + 0x78) + (uVar28 & 0xffffff) * 0x10);
        lVar14 = *plVar30;
        lVar32 = plVar30[1];
        pNVar35 = param_1 + 0x20;
        lVar46 = -0x18;
        plVar30 = (long *)(lVar14 + 0x20);
        plVar1 = (long *)(lVar32 + 0x20);
        while( true ) {
          pNVar29 = pNVar35;
          if ((~(uint)uVar28 & 0xf000000) == 0) {
            pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
          }
          pNVar29 = *(Node **)(*(long *)(this + 0x78) +
                              ((ulong)*(uint *)(*(long *)(pNVar29 + lVar36 * 8) + 0x14) & 0xffffff)
                              * 0x10);
          uVar9 = *(uint *)(lVar14 + 0x14) & 0xf000000;
          plVar47 = plVar30;
          if (uVar9 == 0xf000000) {
            plVar47 = (long *)(*plVar30 + 0x10);
          }
          pNVar41 = (Node *)plVar47[lVar36];
          if (pNVar41 != pNVar29) {
            lVar26 = lVar14;
            if (uVar9 == 0xf000000) {
              lVar26 = *plVar30;
            }
            if (pNVar41 != (Node *)0x0) {
              Node::RemoveUse(pNVar41,(Use *)(lVar26 + lVar46));
            }
            plVar47[lVar36] = (long)pNVar29;
            if (pNVar29 != (Node *)0x0) {
              Node::AppendUse(pNVar29,(Use *)(lVar26 + lVar46));
            }
          }
          pNVar29 = pNVar35;
          if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
            pNVar29 = (Node *)(*(long *)pNVar35 + 0x10);
          }
          pNVar29 = *(Node **)(*(long *)(this + 0x78) +
                               ((ulong)*(uint *)(*(long *)(pNVar29 + lVar36 * 8) + 0x14) & 0xffffff)
                               * 0x10 + 8);
          uVar9 = *(uint *)(lVar32 + 0x14) & 0xf000000;
          plVar47 = plVar1;
          if (uVar9 == 0xf000000) {
            plVar47 = (long *)(*plVar1 + 0x10);
          }
          pNVar41 = (Node *)plVar47[lVar36];
          if (pNVar41 != pNVar29) {
            lVar26 = lVar32;
            if (uVar9 == 0xf000000) {
              lVar26 = *plVar1;
            }
            if (pNVar41 != (Node *)0x0) {
              Node::RemoveUse(pNVar41,(Use *)(lVar26 + lVar46));
            }
            plVar47[lVar36] = (long)pNVar29;
            if (pNVar29 != (Node *)0x0) {
              Node::AppendUse(pNVar29,(Use *)(lVar26 + lVar46));
            }
          }
          lVar36 = lVar36 + 1;
          if (*(int *)(*(long *)param_1 + 0x14) <= lVar36) break;
          uVar28 = (ulong)*(uint *)(param_1 + 0x14);
          lVar46 = lVar46 + -0x18;
        }
        return;
      }
    default:
switchD_016d13b4_caseD_143:
      bVar23 = false;
      break;
    case 0x31:
      pCVar18 = (CallDescriptor *)CallDescriptorOf(pOVar24);
      uVar28 = **(ulong **)(pCVar18 + 0x10);
      uVar33 = (uint)uVar28;
      uVar9 = uVar33;
      if (0 < (int)uVar33) {
        uVar31 = (*(ulong **)(pCVar18 + 0x10))[2];
        uVar34 = uVar28 & 0xffffffff;
        if (uVar34 < 4) {
          lVar14 = 0;
          uVar38 = uVar28 & 0xffffffff;
        }
        else {
          lVar14 = uVar34 - (uVar28 & 3);
          puVar27 = (undefined8 *)(uVar31 + 0x10);
          iVar48 = 0;
          iVar49 = 0;
          iVar10 = 0;
          lVar36 = lVar14;
          do {
            puVar2 = puVar27 + -2;
            puVar5 = puVar27 + -1;
            puVar4 = puVar27 + 1;
            uVar16 = *puVar27;
            lVar36 = lVar36 + -4;
            puVar27 = puVar27 + 4;
            uVar38 = CONCAT44((int)((ulong)*puVar5 >> 0x20),(int)((ulong)*puVar2 >> 0x20)) &
                     0xff000000ff;
            uVar50 = CONCAT44((int)((ulong)*puVar4 >> 0x20),(int)((ulong)uVar16 >> 0x20)) &
                     0xff000000ff;
            uVar9 = uVar9 + ((int)uVar38 == 5);
            iVar10 = iVar10 + (uint)((int)(uVar38 >> 0x20) == 5);
            iVar48 = iVar48 + (uint)((int)uVar50 == 5);
            iVar49 = iVar49 + (uint)((int)(uVar50 >> 0x20) == 5);
          } while (lVar36 != 0);
          uVar9 = iVar48 + uVar9 + iVar49 + iVar10;
          uVar38 = (ulong)uVar9;
          if ((uVar28 & 3) == 0) goto LAB_016d38cc;
        }
        lVar32 = uVar34 - lVar14;
        lVar36 = uVar31 + lVar14 * 8;
        do {
          pcVar13 = (char *)(lVar36 + 4);
          lVar36 = lVar36 + 8;
          uVar9 = (uint)uVar38;
          if (*pcVar13 == '\x05') {
            uVar9 = uVar9 + 1;
          }
          uVar38 = (ulong)uVar9;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
      }
LAB_016d38cc:
      uVar28 = DefaultLowering(this,param_1,false);
      if (((uVar28 & 1) != 0) || (uVar9 != uVar33)) {
        puVar27 = *(undefined8 **)(this + 0x90);
        pCVar42 = *(CommonOperatorBuilder **)(this + 0x18);
        if (puVar27 == (undefined8 *)0x0) {
LAB_016d390c:
          pCVar19 = (CallDescriptor *)GetI32WasmCallDescriptor(*(Zone **)this,pCVar18);
        }
        else if ((CallDescriptor *)*puVar27 == pCVar18) {
          pCVar19 = (CallDescriptor *)puVar27[2];
        }
        else {
          if ((CallDescriptor *)puVar27[1] != pCVar18) goto LAB_016d390c;
          pCVar19 = (CallDescriptor *)puVar27[3];
        }
        pOVar24 = (Operator *)CommonOperatorBuilder::Call(pCVar42,pCVar19);
        NodeProperties::ChangeOp(param_1,pOVar24);
      }
      if (uVar9 == uVar33) {
        return;
      }
      uVar28 = **(ulong **)(pCVar18 + 0x10);
      if (uVar28 != 1) {
        if (uVar28 == 0) {
          NodeProperties::CollectValueProjections(param_1,(Node **)0x0,0);
          return;
        }
        if (uVar28 >> 0x1c == 0) {
          this_00 = *(Zone **)this;
          uVar34 = uVar28 * 8;
          ppNVar22 = *(Node ***)(this_00 + 0x10);
          uVar31 = uVar28;
          if (uVar34 < (ulong)(*(long *)(this_00 + 0x18) - (long)ppNVar22) ||
              uVar34 - (*(long *)(this_00 + 0x18) - (long)ppNVar22) == 0) {
            *(Node ***)(this_00 + 0x10) = ppNVar22 + uVar28;
            ppNVar45 = ppNVar22;
          }
          else {
            ppNVar22 = (Node **)Zone::NewExpand(this_00,uVar34);
            ppNVar45 = ppNVar22;
          }
          do {
            *ppNVar22 = (Node *)0x0;
            uVar31 = uVar31 - 1;
            ppNVar22 = ppNVar22 + 1;
          } while (uVar31 != 0);
          NodeProperties::CollectValueProjections(param_1,ppNVar45,uVar28);
          if (uVar28 == 0) {
            return;
          }
          uVar31 = 0;
          uVar34 = 0;
          do {
            pNVar35 = ppNVar45[uVar31];
            if (uVar31 != uVar34) {
              pOVar24 = (Operator *)
                        CommonOperatorBuilder::Projection
                                  (*(CommonOperatorBuilder **)(this + 0x18),uVar34);
              NodeProperties::ChangeOp(pNVar35,pOVar24);
            }
            if (*(char *)(*(long *)(*(long *)(pCVar18 + 0x10) + 0x10) + uVar31 * 8 + 4) == '\x05') {
              pGVar39 = *(Graph **)(this + 8);
              uVar34 = uVar34 + 1;
              pOVar24 = (Operator *)
                        CommonOperatorBuilder::Projection
                                  (*(CommonOperatorBuilder **)(this + 0x18),uVar34);
              local_a0 = *(CommonOperatorBuilder **)(*(long *)(this + 8) + 8);
              local_a8 = param_1;
              uVar16 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
              *(Node **)(*(long *)(this + 0x78) +
                        ((ulong)*(uint *)(pNVar35 + 0x14) & 0xffffff) * 0x10) = pNVar35;
              *(undefined8 *)
               (*(long *)(this + 0x78) + ((ulong)*(uint *)(pNVar35 + 0x14) & 0xffffff) * 0x10 + 8) =
                   uVar16;
            }
            uVar31 = uVar31 + 1;
            uVar34 = uVar34 + 1;
          } while (uVar28 != uVar31);
          return;
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_016d46b8;
    case 0x32:
      plVar30 = *(long **)(this + 0x80);
      uVar28 = plVar30[1];
      uVar9 = (uint)uVar28;
      if ((int)uVar9 < 1) {
        return;
      }
      uVar31 = uVar28 & 0xffffffff;
      if (uVar31 < 2) {
        lVar14 = 0;
        uVar34 = uVar28 & 0xffffffff;
LAB_016d37d0:
        lVar36 = uVar31 - lVar14;
        pcVar13 = (char *)(plVar30[2] + lVar14 + *plVar30);
        do {
          uVar33 = (uint)uVar34;
          if (*pcVar13 == '\x05') {
            uVar33 = uVar33 + 1;
          }
          uVar34 = (ulong)uVar33;
          lVar36 = lVar36 + -1;
          pcVar13 = pcVar13 + 1;
        } while (lVar36 != 0);
      }
      else {
        lVar14 = uVar31 - (uVar28 & 1);
        iVar10 = 0;
        uVar34 = uVar28 & 0xffffffff;
        pcVar13 = (char *)(*plVar30 + plVar30[2] + 1);
        lVar36 = lVar14;
        do {
          uVar33 = (uint)uVar34;
          if (pcVar13[-1] == '\x05') {
            uVar33 = uVar33 + 1;
          }
          uVar34 = (ulong)uVar33;
          if (*pcVar13 == '\x05') {
            iVar10 = iVar10 + 1;
          }
          lVar36 = lVar36 + -2;
          pcVar13 = pcVar13 + 2;
        } while (lVar36 != 0);
        uVar33 = iVar10 + uVar33;
        uVar34 = (ulong)uVar33;
        if ((uVar28 & 1) != 0) goto LAB_016d37d0;
      }
      if (uVar33 == uVar9) {
        return;
      }
      iVar10 = ParameterIndexOf(pOVar24);
      plVar30 = *(long **)(this + 0x80);
      uVar3 = iVar10 - 1;
      uVar33 = *(uint *)(plVar30 + 1);
      if ((int)uVar3 <= (int)*(uint *)(plVar30 + 1)) {
        uVar33 = uVar3;
      }
      uVar37 = uVar3;
      if (0 < (int)uVar33) {
        uVar28 = (ulong)uVar33;
        if (uVar33 == 1) {
          uVar31 = 0;
        }
        else {
          uVar31 = uVar28 & 0xfffffffe;
          iVar48 = 0;
          pcVar13 = (char *)(*plVar30 + plVar30[2] + 1);
          uVar34 = uVar31;
          do {
            if (pcVar13[-1] == '\x05') {
              uVar37 = uVar37 + 1;
            }
            if (*pcVar13 == '\x05') {
              iVar48 = iVar48 + 1;
            }
            uVar34 = uVar34 - 2;
            pcVar13 = pcVar13 + 2;
          } while (uVar34 != 0);
          uVar37 = iVar48 + uVar37;
          if (uVar31 == uVar28) goto LAB_016d4858;
        }
        do {
          pcVar13 = (char *)(plVar30[2] + *plVar30 + uVar31);
          uVar31 = uVar31 + 1;
          if (*pcVar13 == '\x05') {
            uVar37 = uVar37 + 1;
          }
        } while (uVar31 < uVar28);
      }
LAB_016d4858:
      pOVar24 = (Operator *)
                CommonOperatorBuilder::Parameter
                          (*(CommonOperatorBuilder **)(this + 0x18),uVar37 + 1,(char *)0x0);
      NodeProperties::ChangeOp(param_1,pOVar24);
      if (iVar10 < 1) {
        return;
      }
      if ((int)uVar9 < iVar10) {
        return;
      }
      if (*(char *)((*(long **)(this + 0x80))[2] + **(long **)(this + 0x80) + (long)(int)uVar3) !=
          '\x05') {
        return;
      }
      pGVar39 = *(Graph **)(this + 8);
      pOVar24 = (Operator *)
                CommonOperatorBuilder::Parameter
                          (*(CommonOperatorBuilder **)(this + 0x18),uVar37 + 2,(char *)0x0);
      local_a8 = *(Node **)(*(long *)(this + 8) + 8);
      uVar16 = Graph::NewNode(pGVar39,pOVar24,1,&local_a8,false);
      *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
           param_1;
      uVar28 = (ulong)*(uint *)(param_1 + 0x14);
      lVar36 = *(long *)(this + 0x78);
      goto LAB_016d4744;
    }
    goto LAB_016d2e5c;
  }
  NodeProperties::ChangeOp(param_1,pOVar24);
LAB_016d46b8:
  pGVar39 = *(Graph **)(this + 8);
  pOVar24 = (Operator *)
            CommonOperatorBuilder::Projection(*(CommonOperatorBuilder **)(this + 0x18),0);
  local_a0 = *(CommonOperatorBuilder **)(*(long *)(this + 8) + 8);
  local_a8 = param_1;
  uVar15 = Graph::NewNode(pGVar39,pOVar24,2,&local_a8,false);
  pGVar39 = *(Graph **)(this + 8);
  pOVar24 = (Operator *)
            CommonOperatorBuilder::Projection(*(CommonOperatorBuilder **)(this + 0x18),1);
  local_a0 = *(CommonOperatorBuilder **)(*(long *)(this + 8) + 8);
  local_a8 = param_1;
LAB_016d4714:
  iVar10 = 2;
LAB_016d471c:
  ppNVar22 = &local_a8;
LAB_016d4720:
  uVar16 = Graph::NewNode(pGVar39,pOVar24,iVar10,ppNVar22,false);
  *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
       uVar15;
LAB_016d473c:
  uVar28 = (ulong)*(uint *)(param_1 + 0x14);
  lVar36 = *(long *)(this + 0x78);
LAB_016d4744:
  *(undefined8 *)(lVar36 + (uVar28 & 0xffffff) * 0x10 + 8) = uVar16;
  return;
}

