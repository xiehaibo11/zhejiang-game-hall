
/* v8::internal::compiler::RepresentationSelector::VisitFrameState(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitFrameState
          (RepresentationSelector *this,Node *param_1)

{
  Node *pNVar1;
  Graph *this_00;
  long lVar2;
  undefined2 uVar3;
  ulong uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Node *this_01;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  Zone *this_02;
  Use *pUVar14;
  long lVar15;
  Node *pNVar16;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined2 local_104;
  undefined1 local_102;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined2 local_f4;
  undefined1 local_f2;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined1 local_e8 [4];
  undefined8 local_e4;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined1 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  Type local_88;
  undefined2 uStack_87;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar10 = *(int *)(this + 0x78);
  if (iVar10 == 2) {
    local_88 = (Type)0x8;
    uStack_87 = local_ec;
    uStack_85 = local_ea;
    uStack_84 = 5;
    uStack_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    ConvertInput(this,param_1,0,&local_88,0);
LAB_012e798c:
    iVar10 = *(int *)(this + 0x78);
  }
  else if (iVar10 == 0) {
    local_88 = (Type)0x8;
    uStack_87 = local_ec;
    uStack_85 = local_ea;
    uStack_84 = 5;
    uStack_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    EnqueueInput(this,param_1,0,&local_88);
    goto LAB_012e798c;
  }
  if (iVar10 == 2) {
    local_88 = (Type)0x8;
    uStack_87 = local_f4;
    uStack_85 = local_f2;
    uStack_84 = 5;
    uStack_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    ConvertInput(this,param_1,1,&local_88,0);
  }
  else if (iVar10 == 0) {
    local_88 = (Type)0x8;
    uStack_87 = local_f4;
    uStack_85 = local_f2;
    uStack_84 = 5;
    uStack_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    EnqueueInput(this,param_1,1,&local_88);
  }
  pNVar1 = param_1 + 0x20;
  pNVar6 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  iVar10 = *(int *)(this + 0x78);
  lVar15 = *(long *)(pNVar6 + 0x10);
  if (iVar10 == 2) {
    lVar11 = *(long *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(lVar15 + 0x14) & 0xffffff) * 0x28
                      + 0x18);
    if (lVar11 == 0) {
      lVar11 = *(long *)(lVar15 + 8);
    }
    local_88 = SUB81(lVar11,0);
    uStack_87 = (undefined2)((ulong)lVar11 >> 8);
    uStack_85 = (undefined1)((ulong)lVar11 >> 0x18);
    uStack_84 = (undefined4)((ulong)lVar11 >> 0x20);
    if ((lVar11 == 0x8000001) || (uVar4 = Type::SlowIs(&local_88,0x8000001), (uVar4 & 1) != 0)) {
      local_e4 = 0x100000005;
      local_dc = 0;
      local_d8 = 0;
      local_e8[0] = 8;
      local_d0 = 0xffffffff;
      ConvertInput(this,param_1,2,local_e8,0);
    }
    this_02 = (Zone *)**(undefined8 **)*(JSGraph **)this;
    lVar11 = JSGraph::OptimizedOutConstant(*(JSGraph **)this);
    if (lVar15 == lVar11) {
      pNVar6 = (Node *)JSGraph::SingleDeadTypedStateValues(*(JSGraph **)this);
    }
    else {
      puVar7 = *(undefined8 **)(this_02 + 0x10);
      if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar7) < 0x20) {
        puVar7 = (undefined8 *)Zone::NewExpand(this_02,0x20);
      }
      else {
        *(undefined8 **)(this_02 + 0x10) = puVar7 + 4;
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = this_02;
      puVar8 = *(undefined2 **)(this_02 + 0x10);
      if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar8) < 8) {
        puVar8 = (undefined2 *)Zone::NewExpand(this_02,8);
      }
      else {
        *(undefined2 **)(this_02 + 0x10) = puVar8 + 4;
      }
      *puVar7 = puVar8;
      puVar7[1] = puVar8;
      puVar7[2] = puVar8 + 1;
      *puVar8 = 0;
      puVar7[1] = puVar7[1] + 2;
      lVar12 = *(long *)(this + 0x18) + ((ulong)*(uint *)(lVar15 + 0x14) & 0xffffff) * 0x28;
      lVar11 = *(long *)(lVar12 + 0x18);
      if (lVar11 == 0) {
        lVar11 = *(long *)(lVar15 + 8);
      }
      uVar3 = DeoptMachineTypeOf(*(undefined1 *)(lVar12 + 1),lVar11);
      *(undefined2 *)*puVar7 = uVar3;
      this_00 = (Graph *)**(undefined8 **)this;
      pOVar5 = (Operator *)
               CommonOperatorBuilder::TypedStateValues
                         ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],puVar7,0);
      pNVar6 = pNVar1;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      uVar13 = *(undefined8 *)(pNVar6 + 0x10);
      local_88 = SUB81(uVar13,0);
      uStack_87 = (undefined2)((ulong)uVar13 >> 8);
      uStack_85 = (undefined1)((ulong)uVar13 >> 0x18);
      uStack_84 = (undefined4)((ulong)uVar13 >> 0x20);
      pNVar6 = (Node *)Graph::NewNode(this_00,pOVar5,1,(Node **)&local_88,false);
    }
    pNVar16 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar16 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    this_01 = *(Node **)(pNVar16 + 0x10);
    if (this_01 != pNVar6) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar14 = (Use *)(*(long *)pNVar1 + -0x48);
      }
      else {
        pUVar14 = (Use *)(param_1 + -0x48);
      }
      if (this_01 != (Node *)0x0) {
        Node::RemoveUse(this_01,pUVar14);
      }
      *(Node **)(pNVar16 + 0x10) = pNVar6;
      if (pNVar6 != (Node *)0x0) {
        Node::AppendUse(pNVar6,pUVar14);
      }
    }
LAB_012e7cfc:
    iVar10 = *(int *)(this + 0x78);
  }
  else if (iVar10 == 0) {
    lVar11 = *(long *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(lVar15 + 0x14) & 0xffffff) * 0x28
                      + 0x18);
    if (lVar11 == 0) {
      lVar11 = *(long *)(lVar15 + 8);
    }
    local_88 = SUB81(lVar11,0);
    uStack_87 = (undefined2)((ulong)lVar11 >> 8);
    uStack_85 = (undefined1)((ulong)lVar11 >> 0x18);
    uStack_84 = (undefined4)((ulong)lVar11 >> 0x20);
    if ((lVar11 == 0x8000001) || (uVar4 = Type::SlowIs(&local_88,0x8000001), (uVar4 & 1) != 0)) {
      local_a4 = 0x100000005;
      local_9c = 0;
      local_98 = 0;
      local_a8[0] = 8;
      local_90 = 0xffffffff;
      puVar9 = local_a8;
    }
    else {
      puVar9 = local_c8;
      local_c8[0] = 0;
      local_c4 = 0x100000005;
      local_bc = 0;
      local_b8 = 0;
      local_b0 = 0xffffffff;
    }
    EnqueueInput(this,param_1,2,puVar9);
    goto LAB_012e7cfc;
  }
  if (iVar10 == 2) {
    local_88 = (Type)0x8;
    uStack_87 = local_fc;
    uStack_85 = local_fa;
    uStack_84 = 5;
    uStack_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    ConvertInput(this,param_1,3,&local_88,0);
  }
  else if (iVar10 == 0) {
    local_88 = (Type)0x8;
    uStack_87 = local_fc;
    uStack_85 = local_fa;
    uStack_84 = 5;
    uStack_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    EnqueueInput(this,param_1,3,&local_88);
  }
  iVar10 = *(int *)(this + 0x78);
  if (iVar10 == 2) {
    local_88 = (Type)0x8;
    uStack_87 = local_104;
    uStack_85 = local_102;
    uStack_84 = 5;
    uStack_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    ConvertInput(this,param_1,4,&local_88,0);
  }
  else {
    if (iVar10 != 0) goto LAB_012e7e70;
    local_88 = (Type)0x8;
    uStack_87 = local_104;
    uStack_85 = local_102;
    uStack_84 = 5;
    uStack_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    EnqueueInput(this,param_1,4,&local_88);
  }
  iVar10 = *(int *)(this + 0x78);
LAB_012e7e70:
  if (iVar10 == 2) {
    local_88 = (Type)0x8;
    uStack_87 = local_10c;
    uStack_85 = local_10a;
    uStack_84 = 5;
    uStack_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    ConvertInput(this,param_1,5,&local_88,0);
  }
  else if (iVar10 == 0) {
    local_88 = (Type)0x8;
    uStack_87 = local_10c;
    uStack_85 = local_10a;
    uStack_84 = 5;
    uStack_80 = 1;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    EnqueueInput(this,param_1,5,&local_88);
  }
  if (*(int *)(this + 0x78) == 1) {
    *(undefined1 *)
     (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 1) = 8;
  }
  else if (*(int *)(this + 0x78) == 0) {
    *(undefined8 *)
     (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 0x10) =
         0xffffffff;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

