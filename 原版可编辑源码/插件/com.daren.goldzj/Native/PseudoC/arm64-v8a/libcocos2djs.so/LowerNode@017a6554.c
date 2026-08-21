
/* v8::internal::compiler::SimdScalarLowering::LowerNode(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerNode(SimdScalarLowering *this,Node *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  Operator *pOVar7;
  Node *pNVar8;
  MachineGraph *this_00;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  CallDescriptor *pCVar12;
  CallDescriptor *pCVar13;
  Zone *pZVar14;
  CommonOperatorBuilder *pCVar15;
  CommonOperatorBuilder *pCVar16;
  CommonOperatorBuilder *pCVar17;
  undefined8 uVar18;
  Node *pNVar19;
  Operator *pOVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  byte bVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 *puVar29;
  byte *pbVar30;
  char *pcVar31;
  long *plVar32;
  SimdScalarLowering *pSVar33;
  Node *pNVar34;
  long *plVar35;
  Graph *pGVar36;
  ulong uVar37;
  undefined8 *puVar38;
  Graph *pGVar39;
  long *plVar40;
  long lVar41;
  int iVar42;
  long lVar43;
  undefined8 uVar44;
  Use *pUVar45;
  ulong uVar46;
  undefined8 *puVar47;
  long local_c8;
  Node *local_c0;
  CommonOperatorBuilder *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pSVar33 = this + 0x60;
  lVar25 = *(long *)pSVar33;
  pNVar34 = param_1 + 0x14;
  uVar6 = *(uint *)pNVar34;
  pbVar30 = (byte *)(lVar25 + ((ulong)uVar6 & 0xffffff) * 0x10 + 8);
  bVar24 = *pbVar30;
  if ((bVar24 & 0xfd) == 0) {
    lVar43 = 2;
  }
  else if ((bVar24 | 2) == 3) {
    lVar43 = 4;
  }
  else if (bVar24 == 4) {
    lVar43 = 8;
  }
  else {
    if (bVar24 != 5) goto LAB_017a8f20;
    lVar43 = 0x10;
  }
  pOVar7 = *(Operator **)param_1;
  iVar42 = (int)lVar43;
  switch(*(undefined2 *)(pOVar7 + 0x10)) {
  case 0:
    uVar6 = *(uint *)(this + 0x78);
    plVar26 = *(long **)(this + 0x68);
    if (uVar6 == 0xffffffff) {
      uVar23 = plVar26[1];
      uVar6 = (uint)uVar23;
      if (0 < (int)uVar6) {
        uVar22 = uVar23 & 0xffffffff;
        pcVar31 = (char *)(plVar26[2] + *plVar26);
        do {
          uVar6 = (uint)uVar23 + 3;
          if (*pcVar31 != '\r') {
            uVar6 = (uint)uVar23;
          }
          uVar23 = (ulong)uVar6;
          uVar22 = uVar22 - 1;
          pcVar31 = pcVar31 + 1;
        } while (uVar22 != 0);
      }
      *(uint *)(this + 0x78) = uVar6;
    }
    iVar42 = uVar6 - (int)plVar26[1];
    if (iVar42 == 0) break;
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Start
                       (*(CommonOperatorBuilder **)(*(long *)this + 8),
                        iVar42 + *(int *)(*(long *)param_1 + 0x20));
    goto LAB_017a7d3c;
  default:
    goto switchD_017a6610_caseD_1;
  case 0x10:
    DefaultLowering(this,param_1);
    uVar23 = **(ulong **)(this + 0x68);
    if ((int)(uint)uVar23 < 1) break;
    uVar22 = uVar23 & 0xffffffff;
    uVar37 = uVar23 & 0xffffffff;
    pcVar31 = (char *)(*(ulong **)(this + 0x68))[2];
    do {
      uVar6 = (uint)uVar37 + 3;
      if (*pcVar31 != '\r') {
        uVar6 = (uint)uVar37;
      }
      uVar37 = (ulong)uVar6;
      uVar22 = uVar22 - 1;
      pcVar31 = pcVar31 + 1;
    } while (uVar22 != 0);
    if (uVar6 == (uint)uVar23) break;
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Return(*(CommonOperatorBuilder **)(*(long *)this + 8),uVar6);
LAB_017a7d3c:
    NodeProperties::ChangeOp(param_1,pOVar7);
    break;
  case 0x23:
    cVar5 = PhiRepresentationOf(pOVar7);
    if (cVar5 == '\r') {
      if (0 < *(int *)(*(long *)param_1 + 0x14)) {
        uVar23 = (ulong)*(uint *)(param_1 + 0x14);
        lVar25 = 0;
        plVar26 = *(long **)(*(long *)pSVar33 + (uVar23 & 0xffffff) * 0x10);
        while( true ) {
          pNVar8 = param_1 + 0x20;
          if ((~(uint)uVar23 & 0xf000000) == 0) {
            pNVar8 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
          }
          puVar38 = (undefined8 *)
                    GetReplacementsWithType(this,*(undefined8 *)(pNVar8 + lVar25 * 8),bVar24);
          plVar32 = plVar26;
          lVar41 = lVar43;
          do {
            lVar28 = *plVar32;
            pNVar8 = (Node *)*puVar38;
            uVar6 = *(uint *)(lVar28 + 0x14) & 0xf000000;
            plVar35 = (long *)(lVar28 + 0x20);
            plVar40 = plVar35;
            if (uVar6 == 0xf000000) {
              plVar40 = (long *)(*plVar35 + 0x10);
            }
            pNVar19 = (Node *)plVar40[lVar25];
            if (pNVar19 != pNVar8) {
              if (uVar6 == 0xf000000) {
                lVar28 = *plVar35;
              }
              pUVar45 = (Use *)(lVar28 + (long)(int)~(uint)lVar25 * 0x18);
              if (pNVar19 != (Node *)0x0) {
                Node::RemoveUse(pNVar19,pUVar45);
              }
              plVar40[lVar25] = (long)pNVar8;
              if (pNVar8 != (Node *)0x0) {
                Node::AppendUse(pNVar8,pUVar45);
              }
            }
            puVar38 = puVar38 + 1;
            lVar41 = lVar41 + -1;
            plVar32 = plVar32 + 1;
          } while (lVar41 != 0);
          lVar25 = lVar25 + 1;
          if (*(int *)(*(long *)param_1 + 0x14) <= lVar25) break;
          uVar23 = (ulong)*(uint *)pNVar34;
        }
      }
      break;
    }
    goto switchD_017a6610_caseD_1;
  case 0x31:
    pCVar12 = (CallDescriptor *)CallDescriptorOf(pOVar7);
    uVar23 = DefaultLowering(this,param_1);
    if ((uVar23 & 1) == 0) {
      plVar26 = *(long **)(pCVar12 + 0x10);
      if (*plVar26 != 1) break;
      if (*(short *)(plVar26[2] + 4) == 0xd) goto LAB_017a7d64;
    }
    else {
LAB_017a7d64:
      pCVar17 = (CommonOperatorBuilder *)(*(undefined8 **)this)[1];
      pCVar13 = (CallDescriptor *)
                GetI32WasmCallDescriptorForSimd(*(Zone **)**(undefined8 **)this,pCVar12);
      pOVar7 = (Operator *)CommonOperatorBuilder::Call(pCVar17,pCVar13);
      NodeProperties::ChangeOp(param_1,pOVar7);
      plVar26 = *(long **)(pCVar12 + 0x10);
      if (*plVar26 != 1) break;
    }
    if (*(short *)(plVar26[2] + 4) != 0xd) break;
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Projection((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0)
    ;
    uStack_98 = *(CommonOperatorBuilder **)(**(long **)this + 8);
    local_a0 = param_1;
    uVar44 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Projection((CommonOperatorBuilder *)(*(undefined8 **)this)[1],1)
    ;
    uStack_98 = *(CommonOperatorBuilder **)(**(long **)this + 8);
    local_a0 = param_1;
    uVar18 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Projection((CommonOperatorBuilder *)(*(undefined8 **)this)[1],2)
    ;
    uStack_98 = *(CommonOperatorBuilder **)(**(long **)this + 8);
    local_a0 = param_1;
    uVar9 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Projection((CommonOperatorBuilder *)(*(undefined8 **)this)[1],3)
    ;
    uStack_98 = *(CommonOperatorBuilder **)(**(long **)this + 8);
    local_a0 = param_1;
    uVar10 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < 0x20) {
      lVar25 = Zone::NewExpand(pZVar14,0x20);
    }
    else {
      *(long *)(pZVar14 + 0x10) = lVar25 + 0x20;
    }
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    **(undefined8 **)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = uVar44;
    *(undefined8 *)(*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 8) =
         uVar18;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x10) = uVar9;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x18) = uVar10;
    goto LAB_017a7c04;
  case 0x32:
    uVar6 = *(uint *)(this + 0x78);
    plVar26 = *(long **)(this + 0x68);
    if (uVar6 == 0xffffffff) {
      uVar23 = plVar26[1];
      uVar6 = (uint)uVar23;
      if (0 < (int)uVar6) {
        uVar22 = uVar23 & 0xffffffff;
        pcVar31 = (char *)(plVar26[2] + *plVar26);
        do {
          uVar6 = (uint)uVar23 + 3;
          if (*pcVar31 != '\r') {
            uVar6 = (uint)uVar23;
          }
          uVar23 = (ulong)uVar6;
          uVar22 = uVar22 - 1;
          pcVar31 = pcVar31 + 1;
        } while (uVar22 != 0);
      }
      *(uint *)(this + 0x78) = uVar6;
    }
    if (uVar6 == *(uint *)(plVar26 + 1)) break;
    uVar6 = ParameterIndexOf(*(Operator **)param_1);
    uVar23 = (ulong)uVar6;
    if (0 < (int)uVar6) {
      pcVar31 = (char *)((*(long **)(this + 0x68))[2] + **(long **)(this + 0x68));
      uVar22 = uVar23;
      do {
        uVar1 = (uint)uVar22 + 3;
        if (*pcVar31 != '\r') {
          uVar1 = (uint)uVar22;
        }
        uVar22 = (ulong)uVar1;
        uVar23 = uVar23 - 1;
        pcVar31 = pcVar31 + 1;
      } while (uVar23 != 0);
      if (uVar6 != uVar1) break;
    }
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Parameter
                       (*(CommonOperatorBuilder **)(*(long *)this + 8),uVar6,(char *)0x0);
    NodeProperties::ChangeOp(param_1,pOVar7);
    uVar9 = 0;
    uVar18 = 0;
    uVar44 = 0;
    if (*(char *)((*(long **)(this + 0x68))[2] + **(long **)(this + 0x68) + (long)(int)uVar6) ==
        '\r') {
      pGVar39 = (Graph *)**(undefined8 **)this;
      pOVar7 = (Operator *)
               CommonOperatorBuilder::Parameter
                         ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],uVar6 + 1,(char *)0x0);
      local_a0 = *(Node **)(**(long **)this + 8);
      uVar44 = Graph::NewNode(pGVar39,pOVar7,1,(Node **)&local_a0,false);
      pGVar39 = (Graph *)**(undefined8 **)this;
      pOVar7 = (Operator *)
               CommonOperatorBuilder::Parameter
                         ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],uVar6 + 2,(char *)0x0);
      local_a0 = *(Node **)(**(long **)this + 8);
      uVar18 = Graph::NewNode(pGVar39,pOVar7,1,(Node **)&local_a0,false);
      pGVar39 = (Graph *)**(undefined8 **)this;
      pOVar7 = (Operator *)
               CommonOperatorBuilder::Parameter
                         ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],uVar6 + 3,(char *)0x0);
      local_a0 = *(Node **)(**(long **)this + 8);
      uVar9 = Graph::NewNode(pGVar39,pOVar7,1,(Node **)&local_a0,false);
    }
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < 0x20) {
      lVar25 = Zone::NewExpand(pZVar14,0x20);
    }
    else {
      *(long *)(pZVar14 + 0x10) = lVar25 + 0x20;
    }
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar25;
    **(undefined8 **)(*(long *)pSVar33 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
         param_1;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) + 8) =
         uVar44;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) + 0x10) =
         uVar18;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) + 0x18) =
         uVar9;
    uVar6 = *(uint *)(param_1 + 0x14);
    lVar25 = *(long *)pSVar33;
    goto LAB_017a84c4;
  case 0x1aa:
  case 0x1e7:
  case 0x1ef:
    LowerLoadOp(this,param_1,bVar24);
    break;
  case 0x1ac:
  case 0x1e8:
  case 0x1f0:
    LowerStoreOp(this,param_1);
    break;
  case 0x1b4:
    pNVar8 = param_1 + 0x20;
    pNVar19 = pNVar8;
    if ((~uVar6 & 0xf000000) == 0) {
      pNVar19 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    cVar5 = *(char *)(lVar25 + ((ulong)*(uint *)(*(long *)pNVar19 + 0x14) & 0xffffff) * 0x10 + 8);
    bVar24 = 3;
    if (cVar5 == '\x01') {
      bVar24 = 1;
    }
    *pbVar30 = bVar24;
    if ((~*(uint *)pNVar34 & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    puVar38 = (undefined8 *)GetReplacementsWithType(this,*(undefined8 *)pNVar8);
    lVar25 = 0x18;
    if (cVar5 == '\x01') goto LAB_017a82e8;
    do {
      pCVar17 = (CommonOperatorBuilder *)*puVar38;
      while( true ) {
        pGVar39 = (Graph *)**(undefined8 **)this;
        pOVar7 = (Operator *)
                 MachineOperatorBuilder::Word32ReverseBytes
                           ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
        local_c0 = (Node *)pCVar17;
        pCVar17 = (CommonOperatorBuilder *)Graph::NewNode(pGVar39,pOVar7,1,&local_c0,false);
        if (cVar5 == '\x01') {
          pGVar39 = (Graph *)**(undefined8 **)this;
          pOVar7 = (Operator *)
                   MachineOperatorBuilder::BitcastInt32ToFloat32
                             ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
          local_c0 = (Node *)pCVar17;
          pCVar17 = (CommonOperatorBuilder *)Graph::NewNode(pGVar39,pOVar7,1,&local_c0,false);
        }
        *(CommonOperatorBuilder **)((long)&local_a0 + lVar25) = pCVar17;
        lVar25 = lVar25 + -8;
        puVar38 = puVar38 + 1;
        if (lVar25 == -8) {
          pZVar14 = *(Zone **)**(undefined8 **)this;
          lVar25 = *(long *)(pZVar14 + 0x10);
          if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < 0x20) {
            lVar25 = Zone::NewExpand(pZVar14,0x20);
          }
          else {
            *(long *)(pZVar14 + 0x10) = lVar25 + 0x20;
          }
          *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
          **(undefined8 **)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) =
               local_a0;
          *(CommonOperatorBuilder **)
           (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 8) =
               uStack_98;
          *(undefined8 *)
           (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x10) =
               local_90;
          *(undefined8 *)
           (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x18) =
               local_88;
          uVar6 = *(uint *)pNVar34;
          goto LAB_017a84c0;
        }
        if (cVar5 != '\x01') break;
LAB_017a82e8:
        pGVar39 = (Graph *)**(undefined8 **)this;
        pOVar7 = (Operator *)
                 MachineOperatorBuilder::BitcastFloat32ToInt32
                           ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
        local_c0 = (Node *)*puVar38;
        pCVar17 = (CommonOperatorBuilder *)Graph::NewNode(pGVar39,pOVar7,1,&local_c0,false);
      }
    } while( true );
  case 0x1f9:
  case 0x20d:
  case 0x226:
  case 0x23c:
  case 0x25b:
  case 0x27f:
    uVar23 = (ulong)(uint)(iVar42 << 3);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    plVar26 = *(long **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)plVar26) < uVar23) {
      plVar26 = (long *)Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = (long)plVar26 + uVar23;
    }
    pNVar8 = param_1 + 0x20;
    lVar25 = lVar43;
    plVar32 = plVar26;
    do {
      pNVar19 = pNVar8;
      if ((*(uint *)pNVar34 & 0xf000000) == 0xf000000) {
        pNVar19 = (Node *)(*(long *)pNVar8 + 0x10);
      }
      plVar35 = *(long **)(*(long *)pSVar33 +
                          ((ulong)*(uint *)(*(long *)pNVar19 + 0x14) & 0xffffff) * 0x10);
      bVar4 = false;
      if (plVar35 != (long *)0x0) {
        bVar4 = *plVar35 != 0;
      }
      pNVar19 = pNVar8;
      if ((*(uint *)pNVar34 & 0xf000000) == 0xf000000) {
        pNVar19 = (Node *)(*(long *)pNVar8 + 0x10);
      }
      if (bVar4) {
        *plVar32 = **(long **)(*(long *)pSVar33 +
                              ((ulong)*(uint *)(*(long *)pNVar19 + 0x14) & 0xffffff) * 0x10);
      }
      else {
        *plVar32 = *(long *)pNVar19;
      }
      lVar25 = lVar25 + -1;
      plVar32 = plVar32 + 1;
    } while (lVar25 != 0);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < uVar23) {
      lVar25 = Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = lVar25 + uVar23;
    }
    lVar41 = 0;
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + lVar41) =
           *(undefined8 *)((long)plVar26 + lVar41);
      lVar41 = lVar41 + 8;
    } while (lVar43 * 8 - lVar41 != 0);
    uVar6 = *(uint *)pNVar34;
    lVar25 = *(long *)pSVar33;
    goto LAB_017a68b0;
  case 0x20e:
  case 0x23d:
  case 0x25c:
  case 0x25d:
  case 0x280:
  case 0x281:
    iVar2 = *(int *)(pOVar7 + 0x2c);
    uVar23 = (ulong)(uint)(iVar42 << 3);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    puVar38 = *(undefined8 **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar38) < uVar23) {
      puVar38 = (undefined8 *)Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = (long)puVar38 + uVar23;
    }
    pNVar8 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    lVar25 = GetReplacementsWithType(this,*(undefined8 *)pNVar8,bVar24);
    *puVar38 = *(undefined8 *)(lVar25 + (long)iVar2 * 8);
    memset(puVar38 + 1,0,(ulong)(iVar42 - 2) << 3 | 8);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < uVar23) {
      lVar25 = Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = lVar25 + uVar23;
    }
    lVar41 = 0;
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + lVar41) =
           *(undefined8 *)((long)puVar38 + lVar41);
      lVar41 = lVar41 + 8;
    } while (lVar43 * 8 - lVar41 != 0);
    uVar6 = *(uint *)pNVar34;
    lVar25 = *(long *)pSVar33;
LAB_017a68b0:
    *(int *)(lVar25 + ((ulong)uVar6 & 0xffffff) * 0x10 + 0xc) = iVar42;
    break;
  case 0x20f:
  case 0x23e:
  case 0x25e:
  case 0x282:
    pNVar8 = param_1 + 0x20;
    if ((~uVar6 & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    lVar25 = *(long *)(pNVar8 + 8);
    iVar2 = *(int *)(pOVar7 + 0x2c);
    puVar21 = (undefined8 *)GetReplacementsWithType(this,*(undefined8 *)pNVar8,bVar24);
    uVar23 = (ulong)(uint)(iVar42 << 3);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    puVar38 = *(undefined8 **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar38) < uVar23) {
      puVar38 = (undefined8 *)Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = (long)puVar38 + uVar23;
    }
    lVar41 = lVar43 * 8;
    puVar29 = puVar38;
    if ((puVar38 < puVar21 + lVar43) && (puVar21 < puVar38 + lVar43)) {
      do {
        lVar43 = lVar43 + -1;
        *puVar29 = *puVar21;
        puVar29 = puVar29 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar43 != 0);
    }
    else {
      do {
        uVar44 = *puVar21;
        lVar43 = lVar43 + -2;
        puVar29[1] = puVar21[1];
        *puVar29 = uVar44;
        puVar29 = puVar29 + 2;
        puVar21 = puVar21 + 2;
      } while (lVar43 != 0);
    }
    plVar26 = *(long **)(*(long *)pSVar33 + ((ulong)*(uint *)(lVar25 + 0x14) & 0xffffff) * 0x10);
    if ((plVar26 == (long *)0x0) || (lVar43 = *plVar26, lVar43 == 0)) {
      puVar38[iVar2] = lVar25;
    }
    else {
      puVar38[iVar2] = lVar43;
    }
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < uVar23) {
      lVar25 = Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = lVar25 + uVar23;
    }
    lVar43 = 0;
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + lVar43) =
           *(undefined8 *)((long)puVar38 + lVar43);
      lVar43 = lVar43 + 8;
    } while (lVar41 - lVar43 != 0);
    *(int *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10 + 0xc) = iVar42;
    break;
  case 0x210:
    uVar44 = MachineOperatorBuilder::RoundInt32ToFloat32
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a800c;
  case 0x211:
    uVar44 = MachineOperatorBuilder::RoundUint32ToFloat32
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a800c:
    LowerUnaryOp(this,param_1,3,uVar44);
    break;
  case 0x212:
    uVar44 = MachineOperatorBuilder::Float32Abs(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8504;
  case 0x213:
    uVar44 = MachineOperatorBuilder::Float32Neg(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8504;
  case 0x214:
    uVar44 = MachineOperatorBuilder::Float32Sqrt(*(MachineOperatorBuilder **)(*(long *)this + 0x10))
    ;
LAB_017a8504:
    LowerUnaryOp(this,param_1,bVar24,uVar44);
    break;
  case 0x215:
  case 0x216:
    pNVar8 = param_1 + 0x20;
    if ((~uVar6 & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    puVar38 = (undefined8 *)GetReplacementsWithType(this,*(undefined8 *)pNVar8,bVar24);
    uVar23 = (ulong)(uint)(iVar42 << 3);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    puVar21 = *(undefined8 **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar21) < uVar23) {
      puVar21 = (undefined8 *)Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = (long)puVar21 + uVar23;
    }
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Float32Constant
                       ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],1.0);
    local_a0 = (Node *)0x0;
    pNVar8 = (Node *)Graph::NewNode(pGVar39,pOVar7,0,(Node **)&local_a0,false);
    lVar25 = lVar43;
    puVar29 = puVar21;
    do {
      if (*(short *)(*(long *)param_1 + 0x10) == 0x216) {
        pGVar39 = (Graph *)**(undefined8 **)this;
        pOVar7 = (Operator *)
                 MachineOperatorBuilder::Float32Sqrt
                           ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
        local_a0 = (Node *)*puVar38;
        pCVar17 = (CommonOperatorBuilder *)Graph::NewNode(pGVar39,pOVar7,1,(Node **)&local_a0,false)
        ;
      }
      else {
        pCVar17 = (CommonOperatorBuilder *)*puVar38;
      }
      pGVar39 = (Graph *)**(undefined8 **)this;
      pOVar7 = (Operator *)
               MachineOperatorBuilder::Float32Div
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      local_a0 = pNVar8;
      uStack_98 = pCVar17;
      uVar44 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
      *puVar29 = uVar44;
      lVar25 = lVar25 + -1;
      puVar38 = puVar38 + 1;
      puVar29 = puVar29 + 1;
    } while (lVar25 != 0);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < uVar23) {
      lVar25 = Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = lVar25 + uVar23;
    }
    lVar41 = 0;
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + lVar41) =
           *(undefined8 *)((long)puVar21 + lVar41);
      lVar41 = lVar41 + 8;
    } while (lVar43 * 8 - lVar41 != 0);
    goto LAB_017a8d5c;
  case 0x217:
    uVar44 = MachineOperatorBuilder::Float32Add(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x218:
    uVar44 = MachineOperatorBuilder::Float32Add(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a7c48;
  case 0x219:
    uVar44 = MachineOperatorBuilder::Float32Sub(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x21a:
    uVar44 = MachineOperatorBuilder::Float32Mul(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x21b:
    uVar44 = MachineOperatorBuilder::Float32Div(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x21c:
    uVar44 = MachineOperatorBuilder::Float32Min(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x21d:
    uVar44 = MachineOperatorBuilder::Float32Max(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x21e:
    uVar44 = MachineOperatorBuilder::Float32Equal
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a839c;
  case 0x21f:
    uVar44 = MachineOperatorBuilder::Float32Equal
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    uVar18 = 1;
    goto LAB_017a8620;
  case 0x220:
    uVar44 = MachineOperatorBuilder::Float32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a839c;
  case 0x221:
    uVar44 = MachineOperatorBuilder::Float32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a839c:
    uVar18 = 1;
    goto LAB_017a86a4;
  case 0x222:
    uVar44 = MachineOperatorBuilder::Float32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8538;
  case 0x223:
    uVar44 = MachineOperatorBuilder::Float32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a8538:
    uVar18 = 1;
    goto LAB_017a867c;
  case 0x23f:
    LowerConvertFromFloat(this,param_1,true);
    break;
  case 0x240:
    uVar44 = 4;
    uVar18 = 3;
    goto LAB_017a76a8;
  case 0x241:
    uVar44 = 4;
    uVar18 = 3;
    uVar9 = 4;
    goto LAB_017a76d0;
  case 0x242:
  case 0x261:
  case 0x284:
    pNVar8 = param_1 + 0x20;
    if ((~uVar6 & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    puVar38 = (undefined8 *)GetReplacementsWithType(this,*(undefined8 *)pNVar8,bVar24);
    if ((bVar24 & 0xfd) == 0) {
      lVar43 = 2;
    }
    else if ((bVar24 | 2) == 3) {
      lVar43 = 4;
    }
    else if (bVar24 == 4) {
      lVar43 = 8;
    }
    else {
      if (bVar24 != 5) {
LAB_017a8f20:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar43 = 0x10;
    }
    uVar23 = (ulong)(uint)((int)lVar43 << 3);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    puVar21 = *(undefined8 **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar21) < uVar23) {
      puVar21 = (undefined8 *)Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = (long)puVar21 + uVar23;
    }
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Int32Constant
                       ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0);
    local_a0 = (Node *)0x0;
    pNVar8 = (Node *)Graph::NewNode(pGVar39,pOVar7,0,(Node **)&local_a0,false);
    puVar11 = *(undefined8 **)this;
    pGVar39 = (Graph *)*puVar11;
    puVar29 = puVar21;
    lVar25 = lVar43;
    do {
      pOVar7 = (Operator *)MachineOperatorBuilder::Int32Sub((MachineOperatorBuilder *)puVar11[2]);
      uStack_98 = (CommonOperatorBuilder *)*puVar38;
      local_a0 = pNVar8;
      pNVar19 = (Node *)Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
      *puVar29 = pNVar19;
      if (*(short *)(*(long *)param_1 + 0x10) == 0x284) {
        pGVar39 = (Graph *)**(undefined8 **)this;
        pOVar20 = (Operator *)
                  MachineOperatorBuilder::Word32Sar
                            ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
        pGVar36 = (Graph *)**(undefined8 **)this;
        pOVar7 = (Operator *)
                 MachineOperatorBuilder::Word32Shl
                           ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
        uStack_98 = (CommonOperatorBuilder *)
                    MachineGraph::Int32Constant(*(MachineGraph **)this,0x18);
        local_a0 = pNVar19;
        pNVar19 = (Node *)Graph::NewNode(pGVar36,pOVar7,2,(Node **)&local_a0,false);
        uStack_98 = (CommonOperatorBuilder *)
                    MachineGraph::Int32Constant(*(MachineGraph **)this,0x18);
        local_a0 = pNVar19;
LAB_017a8be8:
        uVar44 = Graph::NewNode(pGVar39,pOVar20,2,(Node **)&local_a0,false);
        *puVar29 = uVar44;
      }
      else if (*(short *)(*(long *)param_1 + 0x10) == 0x261) {
        pGVar39 = (Graph *)**(undefined8 **)this;
        pOVar20 = (Operator *)
                  MachineOperatorBuilder::Word32Sar
                            ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
        pGVar36 = (Graph *)**(undefined8 **)this;
        pOVar7 = (Operator *)
                 MachineOperatorBuilder::Word32Shl
                           ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
        uStack_98 = (CommonOperatorBuilder *)
                    MachineGraph::Int32Constant(*(MachineGraph **)this,0x10);
        local_a0 = pNVar19;
        pNVar19 = (Node *)Graph::NewNode(pGVar36,pOVar7,2,(Node **)&local_a0,false);
        uStack_98 = (CommonOperatorBuilder *)
                    MachineGraph::Int32Constant(*(MachineGraph **)this,0x10);
        local_a0 = pNVar19;
        goto LAB_017a8be8;
      }
      puVar11 = *(undefined8 **)this;
      puVar29 = puVar29 + 1;
      lVar25 = lVar25 + -1;
      puVar38 = puVar38 + 1;
      pGVar39 = (Graph *)*puVar11;
    } while (lVar25 != 0);
    pZVar14 = *(Zone **)pGVar39;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < uVar23) {
      lVar25 = Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = lVar25 + uVar23;
    }
    lVar41 = 0;
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + lVar41) =
           *(undefined8 *)((long)puVar21 + lVar41);
      lVar41 = lVar41 + 8;
    } while (lVar43 * 8 - lVar41 != 0);
    goto LAB_017a8d5c;
  case 0x243:
  case 0x244:
  case 0x254:
  case 0x262:
  case 0x263:
  case 0x275:
  case 0x285:
  case 0x286:
  case 0x297:
    LowerShiftOp(this,param_1,bVar24);
    break;
  case 0x245:
    uVar44 = MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x246:
    uVar44 = MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a7c48:
    uVar18 = 0;
    goto LAB_017a8598;
  case 0x247:
    uVar44 = MachineOperatorBuilder::Int32Sub(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x248:
    uVar44 = MachineOperatorBuilder::Int32Mul(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x249:
  case 0x26b:
  case 0x28c:
    uVar44 = MachineOperatorBuilder::Int32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a6a10;
  case 0x24a:
  case 0x26c:
  case 0x28d:
    uVar44 = MachineOperatorBuilder::Int32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a6970;
  case 0x24b:
    uVar44 = MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(*(long *)this + 0x10))
    ;
    goto LAB_017a85d4;
  case 0x24c:
    uVar44 = MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(*(long *)this + 0x10))
    ;
    uVar18 = 3;
    goto LAB_017a8620;
  case 0x24d:
    uVar44 = MachineOperatorBuilder::Int32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a85d4;
  case 0x24e:
    uVar44 = MachineOperatorBuilder::Int32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a85d4;
  case 0x24f:
    uVar44 = MachineOperatorBuilder::Int32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8600;
  case 0x250:
    uVar44 = MachineOperatorBuilder::Int32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8600;
  case 0x251:
    LowerConvertFromFloat(this,param_1,false);
    break;
  case 0x252:
    uVar44 = 4;
    uVar18 = 3;
    goto LAB_017a7170;
  case 0x253:
    uVar44 = 4;
    uVar18 = 3;
    uVar9 = 4;
    goto LAB_017a7b08;
  case 0x255:
  case 0x279:
  case 0x298:
    uVar44 = MachineOperatorBuilder::Uint32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a6a10:
    uVar18 = 0;
LAB_017a6a20:
    LowerIntMinMax(this,param_1,uVar44,uVar18,bVar24);
    break;
  case 0x256:
  case 0x27a:
  case 0x299:
    uVar44 = MachineOperatorBuilder::Uint32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a6970:
    uVar18 = 1;
    goto LAB_017a6a20;
  case 599:
    uVar44 = MachineOperatorBuilder::Uint32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a85d4;
  case 600:
    uVar44 = MachineOperatorBuilder::Uint32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a85d4:
    uVar18 = 3;
LAB_017a86a4:
    LowerCompareOp(this,param_1,uVar18,uVar44,0);
    break;
  case 0x259:
    uVar44 = MachineOperatorBuilder::Uint32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8600;
  case 0x25a:
    uVar44 = MachineOperatorBuilder::Uint32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a8600:
    uVar18 = 3;
LAB_017a867c:
    LowerCompareOp(this,param_1,uVar18,uVar44,1);
    break;
  case 0x25f:
    uVar44 = 5;
    uVar18 = 4;
LAB_017a76a8:
    uVar9 = 1;
LAB_017a76b4:
    LowerConvertFromInt(this,param_1,uVar44,uVar18,uVar9,0);
    break;
  case 0x260:
    uVar44 = 5;
    uVar18 = 4;
    uVar9 = 8;
LAB_017a76d0:
    LowerConvertFromInt(this,param_1,uVar44,uVar18,1,uVar9);
    break;
  case 0x264:
    uVar44 = 3;
    uVar18 = 4;
    goto LAB_017a7154;
  case 0x265:
  case 0x287:
    uVar44 = MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a6d10;
  case 0x266:
  case 0x288:
    uVar44 = MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a6d38;
  case 0x267:
    uVar44 = MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    LowerBinaryOpForSmallInt(this,param_1,bVar24,uVar44,0);
    break;
  case 0x268:
  case 0x289:
    uVar44 = MachineOperatorBuilder::Int32Sub(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a6d10;
  case 0x269:
  case 0x28a:
    uVar44 = MachineOperatorBuilder::Int32Sub(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a6d38:
    LowerSaturateBinaryOp(this,param_1,bVar24,uVar44,1);
    break;
  case 0x26a:
  case 0x28b:
    uVar44 = MachineOperatorBuilder::Int32Mul(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a6d10:
    LowerBinaryOpForSmallInt(this,param_1,bVar24,uVar44,1);
    break;
  case 0x26d:
    uVar44 = MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(*(long *)this + 0x10))
    ;
    goto LAB_017a8550;
  case 0x26e:
    uVar44 = MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(*(long *)this + 0x10))
    ;
    uVar18 = 4;
    goto LAB_017a8620;
  case 0x26f:
    uVar44 = MachineOperatorBuilder::Int32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8550;
  case 0x270:
    uVar44 = MachineOperatorBuilder::Int32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8550;
  case 0x271:
    uVar44 = MachineOperatorBuilder::Int32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a83f4;
  case 0x272:
    uVar44 = MachineOperatorBuilder::Int32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a83f4;
  case 0x273:
    uVar44 = 5;
    uVar18 = 4;
LAB_017a7170:
    uVar9 = 0;
    goto LAB_017a76b4;
  case 0x274:
    uVar44 = 5;
    uVar18 = 4;
    uVar9 = 8;
LAB_017a7b08:
    LowerConvertFromInt(this,param_1,uVar44,uVar18,0,uVar9);
    break;
  case 0x276:
    uVar44 = 3;
    uVar18 = 4;
    goto LAB_017a8564;
  case 0x277:
  case 0x295:
    uVar44 = MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a6cd8;
  case 0x278:
  case 0x296:
    uVar44 = MachineOperatorBuilder::Int32Sub(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a6cd8:
    LowerSaturateBinaryOp(this,param_1,bVar24,uVar44,0);
    break;
  case 0x27b:
    uVar44 = MachineOperatorBuilder::Uint32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8550;
  case 0x27c:
    uVar44 = MachineOperatorBuilder::Uint32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a8550:
    uVar18 = 4;
    goto LAB_017a86a4;
  case 0x27d:
    uVar44 = MachineOperatorBuilder::Uint32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a83f4;
  case 0x27e:
    uVar44 = MachineOperatorBuilder::Uint32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a83f4:
    uVar18 = 4;
    goto LAB_017a867c;
  case 0x283:
    uVar44 = 4;
    uVar18 = 5;
LAB_017a7154:
    LowerPack(this,param_1,uVar44,uVar18,1);
    break;
  case 0x28e:
    uVar44 = MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(*(long *)this + 0x10))
    ;
    goto LAB_017a869c;
  case 0x28f:
    uVar44 = MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(*(long *)this + 0x10))
    ;
    uVar18 = 5;
LAB_017a8620:
    LowerNotEqual(this,param_1,uVar18,uVar44);
    break;
  case 0x290:
    uVar44 = MachineOperatorBuilder::Int32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a869c;
  case 0x291:
    uVar44 = MachineOperatorBuilder::Int32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a869c;
  case 0x292:
    uVar44 = MachineOperatorBuilder::Int32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8674;
  case 0x293:
    uVar44 = MachineOperatorBuilder::Int32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8674;
  case 0x294:
    uVar44 = 4;
    uVar18 = 5;
LAB_017a8564:
    LowerPack(this,param_1,uVar44,uVar18,0);
    break;
  case 0x29a:
    uVar44 = MachineOperatorBuilder::Uint32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a869c;
  case 0x29b:
    uVar44 = MachineOperatorBuilder::Uint32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a869c:
    uVar18 = 5;
    goto LAB_017a86a4;
  case 0x29c:
    uVar44 = MachineOperatorBuilder::Uint32LessThan
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8674;
  case 0x29d:
    uVar44 = MachineOperatorBuilder::Uint32LessThanOrEqual
                       (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a8674:
    uVar18 = 5;
    goto LAB_017a867c;
  case 0x2a0:
    uVar44 = MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    uVar18 = MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    uVar9 = MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    uVar10 = MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < 0x20) {
      lVar25 = Zone::NewExpand(pZVar14,0x20);
    }
    else {
      *(long *)(pZVar14 + 0x10) = lVar25 + 0x20;
    }
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    **(undefined8 **)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = uVar44;
    *(undefined8 *)(*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 8) =
         uVar18;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x10) = uVar9;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x18) = uVar10;
    goto LAB_017a7c04;
  case 0x2a1:
    pNVar8 = param_1 + 0x20;
    if ((~uVar6 & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    puVar38 = (undefined8 *)GetReplacementsWithType(this,*(undefined8 *)pNVar8,bVar24);
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Int32Constant
                       ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],-1);
    local_a0 = (Node *)0x0;
    pCVar17 = (CommonOperatorBuilder *)Graph::NewNode(pGVar39,pOVar7,0,(Node **)&local_a0,false);
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             MachineOperatorBuilder::Word32Xor((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_a0 = (Node *)*puVar38;
    uStack_98 = pCVar17;
    uVar44 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             MachineOperatorBuilder::Word32Xor((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_a0 = (Node *)puVar38[1];
    uStack_98 = pCVar17;
    uVar18 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             MachineOperatorBuilder::Word32Xor((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_a0 = (Node *)puVar38[2];
    uStack_98 = pCVar17;
    uVar9 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             MachineOperatorBuilder::Word32Xor((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    local_a0 = (Node *)puVar38[3];
    uStack_98 = pCVar17;
    uVar10 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < 0x20) {
      lVar25 = Zone::NewExpand(pZVar14,0x20);
    }
    else {
      *(long *)(pZVar14 + 0x10) = lVar25 + 0x20;
    }
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    **(undefined8 **)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = uVar44;
    *(undefined8 *)(*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 8) =
         uVar18;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x10) = uVar9;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x18) = uVar10;
LAB_017a7c04:
    uVar6 = *(uint *)pNVar34;
LAB_017a84c0:
    lVar25 = *(long *)pSVar33;
LAB_017a84c4:
    *(undefined4 *)(lVar25 + ((ulong)uVar6 & 0xffffff) * 0x10 + 0xc) = 4;
    break;
  case 0x2a2:
    uVar44 = MachineOperatorBuilder::Word32And(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x2a3:
    uVar44 = MachineOperatorBuilder::Word32Or(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    goto LAB_017a8584;
  case 0x2a4:
    uVar44 = MachineOperatorBuilder::Word32Xor(*(MachineOperatorBuilder **)(*(long *)this + 0x10));
LAB_017a8584:
    uVar18 = 1;
LAB_017a8598:
    LowerBinaryOp(this,param_1,bVar24,uVar44,uVar18);
    break;
  case 0x2a5:
    pNVar8 = param_1 + 0x20;
    pNVar19 = pNVar8;
    if ((uVar6 & 0xf000000) == 0xf000000) {
      pNVar19 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    puVar38 = *(undefined8 **)
               (lVar25 + ((ulong)*(uint *)(*(long *)pNVar19 + 0x14) & 0xffffff) * 0x10);
    pNVar19 = pNVar8;
    if ((uVar6 & 0xf000000) == 0xf000000) {
      pNVar19 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    puVar21 = (undefined8 *)GetReplacementsWithType(this,*(undefined8 *)(pNVar19 + 8),bVar24);
    if ((~*(uint *)pNVar34 & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    puVar11 = (undefined8 *)GetReplacementsWithType(this,*(undefined8 *)(pNVar8 + 0x10),bVar24);
    uVar23 = (ulong)(uint)(iVar42 << 3);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    puVar29 = *(undefined8 **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar29) < uVar23) {
      puVar29 = (undefined8 *)Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = (long)puVar29 + uVar23;
    }
    puVar27 = *(undefined8 **)this;
    pGVar39 = (Graph *)*puVar27;
    lVar25 = lVar43;
    puVar47 = puVar29;
    do {
      pOVar7 = (Operator *)MachineOperatorBuilder::Word32Xor((MachineOperatorBuilder *)puVar27[2]);
      local_a0 = (Node *)*puVar21;
      uStack_98 = (CommonOperatorBuilder *)*puVar11;
      uVar44 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
      pGVar39 = (Graph *)**(undefined8 **)this;
      pOVar7 = (Operator *)
               MachineOperatorBuilder::Word32And
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      local_a0 = (Node *)*puVar38;
      uStack_98 = (CommonOperatorBuilder *)uVar44;
      pCVar17 = (CommonOperatorBuilder *)Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
      pGVar39 = (Graph *)**(undefined8 **)this;
      pOVar7 = (Operator *)
               MachineOperatorBuilder::Word32Xor
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      local_a0 = (Node *)*puVar11;
      uStack_98 = pCVar17;
      uVar44 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
      *puVar47 = uVar44;
      puVar27 = *(undefined8 **)this;
      lVar25 = lVar25 + -1;
      pGVar39 = (Graph *)*puVar27;
      puVar21 = puVar21 + 1;
      puVar11 = puVar11 + 1;
      puVar38 = puVar38 + 1;
      puVar47 = puVar47 + 1;
    } while (lVar25 != 0);
    pZVar14 = *(Zone **)pGVar39;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < uVar23) {
      lVar25 = Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = lVar25 + uVar23;
    }
    lVar41 = 0;
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + lVar41) =
           *(undefined8 *)((long)puVar29 + lVar41);
      lVar41 = lVar41 + 8;
    } while (lVar43 * 8 - lVar41 != 0);
    goto LAB_017a8d5c;
  case 0x2a6:
    pNVar8 = param_1 + 0x20;
    pNVar19 = pNVar8;
    if ((~uVar6 & 0xf000000) == 0) {
      pNVar19 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    uVar23 = GetReplacementsWithType(this,*(undefined8 *)pNVar19,bVar24);
    if ((~*(uint *)pNVar34 & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    lVar25 = GetReplacementsWithType(this,*(undefined8 *)(pNVar8 + 8),bVar24);
    uVar22 = (ulong)(uint)(iVar42 << 3);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    local_c8 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - local_c8) < uVar22) {
      local_c8 = Zone::NewExpand(pZVar14,uVar22);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = local_c8 + uVar22;
    }
    pGVar39 = (Graph *)**(undefined8 **)this;
    pOVar7 = (Operator *)
             MachineOperatorBuilder::StackSlot
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2],0xd,0);
    local_a0 = (Node *)0x0;
    pNVar8 = (Node *)Graph::NewNode(pGVar39,pOVar7,0,(Node **)&local_a0,false);
    pOVar7 = (Operator *)
             MachineOperatorBuilder::Store(*(MachineOperatorBuilder **)(*(long *)this + 0x10),2);
    this_00 = *(MachineGraph **)this;
    uVar37 = (ulong)(iVar42 - 2U | 1);
    pGVar39 = *(Graph **)this_00;
    uVar44 = *(undefined8 *)(pGVar39 + 8);
    uVar46 = uVar37;
    while( true ) {
      uStack_98 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(this_00,(int)uVar46);
      local_90 = *(undefined8 *)(uVar23 + uVar46 * 8);
      local_80 = *(undefined8 *)(**(long **)this + 8);
      local_a0 = pNVar8;
      local_88 = uVar44;
      uVar44 = Graph::NewNode(pGVar39,pOVar7,5,(Node **)&local_a0,false);
      if ((long)uVar46 < 1) break;
      this_00 = *(MachineGraph **)this;
      pGVar39 = *(Graph **)this_00;
      uVar46 = uVar46 - 1;
    }
    do {
      puVar38 = *(undefined8 **)this;
      pGVar39 = (Graph *)*puVar38;
      uVar18 = puVar38[1];
      pOVar7 = (Operator *)
               MachineOperatorBuilder::Uint32LessThan((MachineOperatorBuilder *)puVar38[2]);
      lVar41 = uVar37 * 8;
      pGVar36 = *(Graph **)(lVar25 + lVar41);
      uStack_98 = (CommonOperatorBuilder *)
                  MachineGraph::Int32Constant(*(MachineGraph **)this,iVar42);
      local_a0 = (Node *)pGVar36;
      uVar9 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
      Diamond::Diamond((Diamond *)&local_a0,pGVar39,uVar18,uVar9,0);
      pGVar39 = (Graph *)**(undefined8 **)this;
      uVar23 = uVar23 & 0xffffffffffff0000 | 0x302;
      pOVar7 = (Operator *)
               MachineOperatorBuilder::Load
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2],uVar23);
      local_b8 = *(CommonOperatorBuilder **)(lVar25 + lVar41);
      local_a8 = local_88;
      local_c0 = pNVar8;
      local_b0 = uVar44;
      pCVar17 = (CommonOperatorBuilder *)Graph::NewNode(pGVar39,pOVar7,4,&local_c0,false);
      pCVar15 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(*(MachineGraph **)this,0);
      pGVar39 = (Graph *)local_a0;
      pOVar7 = (Operator *)CommonOperatorBuilder::Phi(uStack_98,2,2);
      local_b0 = local_78;
      local_c0 = (Node *)pCVar17;
      local_b8 = pCVar15;
      uVar18 = Graph::NewNode(pGVar39,pOVar7,3,&local_c0,false);
      *(undefined8 *)(local_c8 + lVar41) = uVar18;
      bVar4 = 0 < (long)uVar37;
      uVar37 = uVar37 - 1;
    } while (bVar4);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < uVar22) {
      lVar25 = Zone::NewExpand(pZVar14,uVar22);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = lVar25 + uVar22;
    }
    lVar41 = 0;
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + lVar41) =
           *(undefined8 *)(local_c8 + lVar41);
      lVar41 = lVar41 + 8;
    } while (lVar43 * 8 - lVar41 != 0);
LAB_017a8d5c:
    *(int *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10 + 0xc) = (int)lVar43;
    break;
  case 0x2a7:
    puVar38 = (undefined8 *)S8x16ShuffleParameterOf(pOVar7);
    uStack_98 = (CommonOperatorBuilder *)puVar38[1];
    local_a0 = (Node *)*puVar38;
    pNVar8 = param_1 + 0x20;
    pNVar19 = pNVar8;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar19 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    lVar25 = GetReplacementsWithType(this,*(undefined8 *)pNVar19,bVar24);
    if ((~*(uint *)pNVar34 & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    lVar43 = GetReplacementsWithType(this,*(undefined8 *)(pNVar8 + 8),bVar24);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    puVar38 = *(undefined8 **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar38) < 0x80) {
      puVar38 = (undefined8 *)Zone::NewExpand(pZVar14,0x80);
    }
    else {
      *(undefined8 **)(pZVar14 + 0x10) = puVar38 + 0x10;
    }
    lVar41 = ((ulong)local_a0 & 0xff) * 8;
    puVar21 = (undefined8 *)(lVar25 + lVar41);
    if (0xf < (byte)local_a0._0_1_) {
      puVar21 = (undefined8 *)(lVar41 + lVar43 + -0x80);
    }
    *puVar38 = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)local_a0._1_1_ * 8);
    if (0xf < local_a0._1_1_) {
      puVar21 = (undefined8 *)((ulong)local_a0._1_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[1] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)local_a0._2_1_ * 8);
    if (0xf < local_a0._2_1_) {
      puVar21 = (undefined8 *)((ulong)local_a0._2_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[2] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)local_a0._3_1_ * 8);
    if (0xf < local_a0._3_1_) {
      puVar21 = (undefined8 *)((ulong)local_a0._3_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[3] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)local_a0._4_1_ * 8);
    if (0xf < local_a0._4_1_) {
      puVar21 = (undefined8 *)((ulong)local_a0._4_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[4] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)local_a0._5_1_ * 8);
    if (0xf < local_a0._5_1_) {
      puVar21 = (undefined8 *)((ulong)local_a0._5_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[5] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)local_a0._6_1_ * 8);
    if (0xf < local_a0._6_1_) {
      puVar21 = (undefined8 *)((ulong)local_a0._6_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[6] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)local_a0._7_1_ * 8);
    if (0xf < local_a0._7_1_) {
      puVar21 = (undefined8 *)((ulong)local_a0._7_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[7] = *puVar21;
    lVar41 = ((ulong)uStack_98 & 0xff) * 8;
    puVar21 = (undefined8 *)(lVar25 + lVar41);
    if (0xf < (byte)uStack_98) {
      puVar21 = (undefined8 *)(lVar41 + lVar43 + -0x80);
    }
    puVar38[8] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)uStack_98._1_1_ * 8);
    if (0xf < uStack_98._1_1_) {
      puVar21 = (undefined8 *)((ulong)uStack_98._1_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[9] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)uStack_98._2_1_ * 8);
    if (0xf < uStack_98._2_1_) {
      puVar21 = (undefined8 *)((ulong)uStack_98._2_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[10] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)uStack_98._3_1_ * 8);
    if (0xf < uStack_98._3_1_) {
      puVar21 = (undefined8 *)((ulong)uStack_98._3_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[0xb] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)uStack_98._4_1_ * 8);
    if (0xf < uStack_98._4_1_) {
      puVar21 = (undefined8 *)((ulong)uStack_98._4_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[0xc] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)uStack_98._5_1_ * 8);
    if (0xf < uStack_98._5_1_) {
      puVar21 = (undefined8 *)((ulong)uStack_98._5_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[0xd] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)uStack_98._6_1_ * 8);
    if (0xf < uStack_98._6_1_) {
      puVar21 = (undefined8 *)((ulong)uStack_98._6_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[0xe] = *puVar21;
    puVar21 = (undefined8 *)(lVar25 + (ulong)uStack_98._7_1_ * 8);
    if (0xf < uStack_98._7_1_) {
      puVar21 = (undefined8 *)((ulong)uStack_98._7_1_ * 8 + lVar43 + -0x80);
    }
    puVar38[0xf] = *puVar21;
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < 0x80) {
      lVar25 = Zone::NewExpand(pZVar14,0x80);
    }
    else {
      *(long *)(pZVar14 + 0x10) = lVar25 + 0x80;
    }
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    **(undefined8 **)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = *puVar38;
    *(undefined8 *)(*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 8) =
         puVar38[1];
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x10) = puVar38[2]
    ;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x18) = puVar38[3]
    ;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x20) = puVar38[4]
    ;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x28) = puVar38[5]
    ;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x30) = puVar38[6]
    ;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x38) = puVar38[7]
    ;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x40) = puVar38[8]
    ;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x48) = puVar38[9]
    ;
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x50) =
         puVar38[10];
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x58) =
         puVar38[0xb];
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x60) =
         puVar38[0xc];
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x68) =
         puVar38[0xd];
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x70) =
         puVar38[0xe];
    *(undefined8 *)
     (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + 0x78) =
         puVar38[0xf];
    *(undefined4 *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10 + 0xc) = 0x10;
    break;
  case 0x2aa:
  case 0x2ab:
  case 0x2ac:
  case 0x2ad:
  case 0x2ae:
  case 0x2af:
    pNVar8 = param_1 + 0x20;
    pNVar19 = pNVar8;
    if ((uVar6 & 0xf000000) == 0xf000000) {
      pNVar19 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    bVar24 = *(byte *)(lVar25 + ((ulong)*(uint *)(*(long *)pNVar19 + 0x14) & 0xffffff) * 0x10 + 8);
    if ((bVar24 & 0xfd) == 0) {
      lVar41 = 2;
    }
    else if ((bVar24 | 2) == 3) {
      lVar41 = 4;
    }
    else if (bVar24 == 4) {
      lVar41 = 8;
    }
    else {
      if (bVar24 != 5) goto LAB_017a8f20;
      lVar41 = 0x10;
    }
    if ((uVar6 & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    uVar23 = (ulong)(uint)(iVar42 << 3);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    puVar38 = *(undefined8 **)
               (lVar25 + ((ulong)*(uint *)(*(long *)pNVar8 + 0x14) & 0xffffff) * 0x10);
    puVar21 = *(undefined8 **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar21) < uVar23) {
      puVar21 = (undefined8 *)Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = (long)puVar21 + uVar23;
    }
    pCVar15 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(*(MachineGraph **)this,1);
    pCVar16 = (CommonOperatorBuilder *)MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    uVar6 = *(ushort *)(*(long *)param_1 + 0x10) - 0x2ab;
    pCVar17 = pCVar16;
    if ((uVar6 < 5) && ((1 << (ulong)(uVar6 & 0x1f) & 0x15U) != 0)) {
      pCVar17 = pCVar15;
    }
    do {
      puVar29 = *(undefined8 **)this;
      pGVar39 = (Graph *)*puVar29;
      uVar44 = puVar29[1];
      pOVar7 = (Operator *)MachineOperatorBuilder::Word32Equal((MachineOperatorBuilder *)puVar29[2])
      ;
      local_a0 = (Node *)*puVar38;
      uStack_98 = pCVar16;
      uVar18 = Graph::NewNode(pGVar39,pOVar7,2,(Node **)&local_a0,false);
      Diamond::Diamond((Diamond *)&local_a0,pGVar39,uVar44,uVar18,0);
      pGVar39 = (Graph *)local_a0;
      uVar6 = *(ushort *)(*(long *)param_1 + 0x10) - 0x2ab;
      if ((uVar6 < 5) && ((1 << (ulong)(uVar6 & 0x1f) & 0x15U) != 0)) {
        pOVar7 = (Operator *)CommonOperatorBuilder::Phi(uStack_98,4,2);
        local_c0 = (Node *)pCVar16;
        local_b8 = pCVar17;
      }
      else {
        pOVar7 = (Operator *)CommonOperatorBuilder::Phi(uStack_98,4,2);
        local_c0 = (Node *)pCVar17;
        local_b8 = pCVar15;
      }
      local_b0 = local_78;
      pCVar17 = (CommonOperatorBuilder *)Graph::NewNode(pGVar39,pOVar7,3,&local_c0,false);
      lVar41 = lVar41 + -1;
      puVar38 = puVar38 + 1;
    } while (lVar41 != 0);
    *puVar21 = pCVar17;
    memset(puVar21 + 1,0,(ulong)(iVar42 - 2) << 3 | 8);
    pZVar14 = *(Zone **)**(undefined8 **)this;
    lVar25 = *(long *)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - lVar25) < uVar23) {
      lVar25 = Zone::NewExpand(pZVar14,uVar23);
    }
    else {
      *(ulong *)(pZVar14 + 0x10) = lVar25 + uVar23;
    }
    lVar41 = 0;
    *(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) = lVar25;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10) + lVar41) =
           *(undefined8 *)((long)puVar21 + lVar41);
      lVar41 = lVar41 + 8;
    } while (lVar43 * 8 - lVar41 != 0);
    *(int *)(*(long *)pSVar33 + ((ulong)*(uint *)pNVar34 & 0xffffff) * 0x10 + 0xc) = iVar42;
  }
LAB_017a8d70:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_017a6610_caseD_1:
  DefaultLowering(this,param_1);
  goto LAB_017a8d70;
}

