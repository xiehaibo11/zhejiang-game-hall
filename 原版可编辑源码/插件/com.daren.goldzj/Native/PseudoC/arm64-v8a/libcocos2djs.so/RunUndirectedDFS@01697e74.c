
/* v8::internal::compiler::ControlEquivalence::RunUndirectedDFS(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ControlEquivalence::RunUndirectedDFS(ControlEquivalence *this,Node *param_1)

{
  vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
  *this_00;
  long lVar1;
  long lVar2;
  ulong uVar3;
  Node *pNVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  Node *pNVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  Node *pNVar14;
  int *piVar15;
  long *plVar16;
  ulong uVar17;
  long *local_b0;
  undefined8 *puStack_a8;
  undefined8 *local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  local_90 = *(undefined8 *)this;
  local_80 = 0;
  local_78 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_b0 = (long *)0x0;
  local_98 = 0;
  local_a0 = (undefined8 *)0x0;
  local_88 = 0;
  local_68 = 0;
  local_70 = local_90;
  DFSPush(this,&local_b0,param_1,0,0);
  if (FLAG_trace_turbo_ceq != '\0') {
    PrintF("CEQ: Pre-visit of #%d:%s\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8));
  }
  if (local_78 != 0) {
    this_00 = (vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
               *)(this + 0x18);
LAB_01697f4c:
    do {
      uVar7 = (local_78 + local_80) - 1;
      lVar13 = puStack_a8[uVar7 / 0x49];
      uVar7 = uVar7 % 0x49;
      piVar15 = (int *)(lVar13 + uVar7 * 0x38);
      pNVar14 = *(Node **)(piVar15 + 0xc);
      if (*piVar15 == 1) {
        plVar11 = (long *)(lVar13 + uVar7 * 0x38 + 0x18);
        lVar2 = *plVar11;
        if (lVar2 == 0) {
          pNVar10 = pNVar14 + 0x20;
          uVar6 = (byte)pNVar14[0x17] & 0xf;
          if (uVar6 == 0xf) {
            uVar6 = *(uint *)(*(long *)pNVar10 + 8);
            pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
          }
          if (*(Node **)(lVar13 + uVar7 * 0x38 + 0x10) == pNVar10 + (long)(int)uVar6 * 8)
          goto LAB_01697f1c;
          *piVar15 = 0;
          VisitMid(this,pNVar14,1);
        }
        else {
          uVar6 = *(uint *)(lVar2 + 0x10);
          plVar16 = (long *)(lVar2 + (ulong)(uVar6 >> 1) * 0x18 + 0x18);
          lVar1 = 0x10;
          if ((uVar6 & 1) != 0) {
            lVar1 = 0x20;
          }
          lVar1 = (long)plVar16 + (ulong)(uVar6 >> 1) * 8 + lVar1;
          if ((uVar6 & 1) == 0) {
            plVar16 = (long *)*plVar16;
          }
          puVar9 = (undefined8 *)(lVar13 + uVar7 * 0x38 + 0x20);
          puVar12 = (undefined8 *)*puVar9;
          *plVar11 = (long)puVar12;
          if (puVar12 == (undefined8 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *puVar12;
          }
          *puVar9 = uVar5;
          uVar3 = NodeProperties::IsControlEdge(lVar2,lVar1);
          if ((uVar3 & 1) != 0) {
            lVar2 = *(long *)(this + 0x18);
            uVar17 = (ulong)*(uint *)((long)plVar16 + 0x14) & 0xffffff;
            uVar3 = *(long *)(this + 0x20) - lVar2 >> 3;
            if (uVar3 <= uVar17) {
              std::__ndk1::
              vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
              ::__append(this_00,(uVar17 - uVar3) + 1);
              lVar2 = *(long *)this_00;
            }
            if (*(long *)(lVar2 + uVar17 * 8) != 0) {
              uVar17 = (ulong)*(uint *)((long)plVar16 + 0x14) & 0xffffff;
              uVar3 = *(long *)(this + 0x20) - lVar2 >> 3;
              if (uVar3 <= uVar17) {
                std::__ndk1::
                vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
                ::__append(this_00,(uVar17 - uVar3) + 1);
                lVar2 = *(long *)this_00;
              }
              if ((*(byte *)(*(long *)(lVar2 + uVar17 * 8) + 0x28) & 1) == 0) {
                uVar17 = (ulong)*(uint *)((long)plVar16 + 0x14) & 0xffffff;
                uVar3 = *(long *)(this + 0x20) - lVar2 >> 3;
                if (uVar3 <= uVar17) {
                  std::__ndk1::
                  vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
                  ::__append(this_00,(uVar17 - uVar3) + 1);
                  lVar2 = *(long *)this_00;
                }
                if ((*(byte *)(*(long *)(lVar2 + uVar17 * 8) + 0x28) >> 1 & 1) == 0) {
                  uVar5 = 1;
LAB_0169825c:
                  DFSPush(this,&local_b0,plVar16,pNVar14,uVar5);
                  if (FLAG_trace_turbo_ceq != '\0') {
                    PrintF("CEQ: Pre-visit of #%d:%s\n",
                           (ulong)(*(uint *)((long)plVar16 + 0x14) & 0xffffff),
                           *(undefined8 *)(*plVar16 + 8));
                  }
                }
                else if (plVar16 != *(long **)(lVar13 + uVar7 * 0x38 + 0x28)) {
                  VisitBackedge(this,pNVar14,plVar16,1);
                }
              }
            }
          }
        }
        goto joined_r0x01698290;
      }
      if (*piVar15 != 0) {
LAB_01697f1c:
        DFSPop(this,(ZoneStack *)&local_b0,pNVar14);
        VisitPost(this,pNVar14,*(undefined8 *)(lVar13 + uVar7 * 0x38 + 0x28),*piVar15);
joined_r0x01698290:
        if (local_78 == 0) break;
        goto LAB_01697f4c;
      }
      pNVar10 = pNVar14 + 0x20;
      uVar6 = (byte)pNVar14[0x17] & 0xf;
      if (uVar6 == 0xf) {
        uVar6 = *(uint *)(*(long *)pNVar10 + 8);
        pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
      }
      plVar11 = (long *)(lVar13 + uVar7 * 0x38 + 0x10);
      pNVar4 = (Node *)*plVar11;
      if (pNVar4 == pNVar10 + (long)(int)uVar6 * 8) {
        if (*(long *)(lVar13 + uVar7 * 0x38 + 0x18) == 0) goto LAB_01697f1c;
        *piVar15 = 1;
        VisitMid(this,pNVar14,0);
        goto joined_r0x01698290;
      }
      plVar8 = (long *)(lVar13 + uVar7 * 0x38 + 8);
      lVar2 = *plVar8;
      plVar16 = *(long **)pNVar4;
      *plVar11 = (long)(pNVar4 + 8);
      *plVar8 = lVar2 + -0x18;
      uVar3 = NodeProperties::IsControlEdge();
      if ((uVar3 & 1) == 0) goto joined_r0x01698290;
      lVar2 = *(long *)(this + 0x18);
      uVar17 = (ulong)*(uint *)((long)plVar16 + 0x14) & 0xffffff;
      uVar3 = *(long *)(this + 0x20) - lVar2 >> 3;
      if (uVar3 <= uVar17) {
        std::__ndk1::
        vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
        ::__append(this_00,(uVar17 - uVar3) + 1);
        lVar2 = *(long *)this_00;
      }
      if (*(long *)(lVar2 + uVar17 * 8) == 0) goto joined_r0x01698290;
      uVar17 = (ulong)*(uint *)((long)plVar16 + 0x14) & 0xffffff;
      uVar3 = *(long *)(this + 0x20) - lVar2 >> 3;
      if (uVar3 <= uVar17) {
        std::__ndk1::
        vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
        ::__append(this_00,(uVar17 - uVar3) + 1);
        lVar2 = *(long *)this_00;
      }
      if ((*(byte *)(*(long *)(lVar2 + uVar17 * 8) + 0x28) & 1) != 0) goto joined_r0x01698290;
      uVar17 = (ulong)*(uint *)((long)plVar16 + 0x14) & 0xffffff;
      uVar3 = *(long *)(this + 0x20) - lVar2 >> 3;
      if (uVar3 <= uVar17) {
        std::__ndk1::
        vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
        ::__append(this_00,(uVar17 - uVar3) + 1);
        lVar2 = *(long *)this_00;
      }
      if ((*(byte *)(*(long *)(lVar2 + uVar17 * 8) + 0x28) >> 1 & 1) == 0) {
        uVar5 = 0;
        goto LAB_0169825c;
      }
      if (plVar16 == *(long **)(lVar13 + uVar7 * 0x38 + 0x28)) goto joined_r0x01698290;
      VisitBackedge(this,pNVar14,plVar16,0);
    } while (local_78 != 0);
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::ControlEquivalence::DFSStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::ControlEquivalence::DFSStackEntry>>
  ::clear((__deque_base<v8::internal::compiler::ControlEquivalence::DFSStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::ControlEquivalence::DFSStackEntry>>
           *)&local_b0);
  if (puStack_a8 == local_a0) {
LAB_01698370:
    if (((local_b0 != (long *)0x0) && (0xf < (ulong)(local_98 - (long)local_b0))) &&
       ((uVar7 = local_98 - (long)local_b0 >> 3, local_88 == 0 ||
        (*(ulong *)(local_88 + 8) <= uVar7)))) {
      local_b0[1] = uVar7;
      *local_b0 = local_88;
    }
    return;
  }
  plVar16 = (long *)*puStack_a8;
  plVar11 = (long *)local_68;
  if (local_68 != 0) goto LAB_01698340;
  do {
    plVar11 = plVar16;
    plVar11[1] = 0x49;
    *plVar11 = local_68;
    local_68 = (long)plVar11;
    do {
      puStack_a8 = puStack_a8 + 1;
      if (local_a0 == puStack_a8) goto LAB_01698370;
      plVar16 = (long *)*puStack_a8;
      if (plVar11 == (long *)0x0) break;
LAB_01698340:
    } while (0x49 < *(ulong *)((long)plVar11 + 8));
  } while( true );
}

