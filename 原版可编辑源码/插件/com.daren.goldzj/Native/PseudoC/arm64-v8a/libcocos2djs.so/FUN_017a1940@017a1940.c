
Node * FUN_017a1940(long param_1,Node *param_2,undefined2 param_3,undefined2 *param_4,long param_5,
                   byte param_6,int param_7,int param_8)

{
  ulong uVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  CallDescriptor *pCVar5;
  Operator *pOVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  Node **ppNVar13;
  Node **ppNVar14;
  ulong uVar15;
  long lVar16;
  undefined2 *puVar17;
  long lVar18;
  undefined8 uVar19;
  Zone *this;
  Node *pNVar20;
  Node *pNVar21;
  undefined8 uVar22;
  Node *pNVar23;
  undefined8 uVar24;
  Node **local_d0;
  Node **local_c8;
  long *local_c0;
  Node *local_b8 [10];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = param_5 + 1;
  this = (Zone *)**(undefined8 **)(param_1 + 8);
  uVar10 = (-(uVar1 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar1 & 0xffffffff) << 1) + 7 &
           0xfffffffffffffff8;
  puVar7 = *(undefined2 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar7) < uVar10) {
    puVar7 = (undefined2 *)v8::internal::Zone::NewExpand(this,uVar10);
  }
  else {
    *(ulong *)(this + 0x10) = (long)puVar7 + uVar10;
  }
  puVar2 = param_4 + param_5 * 8;
  *puVar7 = param_3;
  if (param_5 != 0) {
    uVar15 = param_5 * 0x10 - 0x10;
    uVar10 = (uVar15 >> 4) + 1;
    if ((uVar10 < 5) ||
       ((puVar7 + 1 < param_4 + param_5 * 8 + -7 &&
        (param_4 < (undefined2 *)((long)puVar7 + (uVar15 >> 3) + 4))))) {
      lVar16 = 0;
      puVar11 = param_4;
    }
    else {
      uVar15 = 4;
      if ((uVar10 & 3) != 0) {
        uVar15 = uVar10 & 3;
      }
      lVar16 = uVar10 - uVar15;
      puVar17 = puVar7 + 3;
      puVar11 = param_4 + lVar16 * 8;
      puVar8 = (undefined8 *)(param_4 + 0x10);
      lVar18 = lVar16;
      do {
        uVar19 = puVar8[-4];
        uVar22 = *puVar8;
        uVar24 = puVar8[2];
        lVar18 = lVar18 + -4;
        puVar17[-1] = (short)puVar8[-2];
        puVar17[-2] = (short)uVar19;
        puVar17[1] = (short)uVar24;
        *puVar17 = (short)uVar22;
        puVar17 = puVar17 + 4;
        puVar8 = puVar8 + 8;
      } while (lVar18 != 0);
    }
    puVar17 = puVar7 + lVar16;
    do {
      puVar17 = puVar17 + 1;
      puVar12 = puVar11 + 8;
      *puVar17 = *puVar11;
      puVar11 = puVar12;
    } while (puVar2 != puVar12);
  }
  uVar9 = 0x300;
  if ((param_7 == 1 & param_6) == 0) {
    uVar9 = 0x100;
  }
  puVar8 = *(undefined8 **)(this + 0x10);
  if ((param_6 & 1) == 0) {
    uVar9 = 0;
  }
  uVar19 = **(undefined8 **)(param_1 + 8);
  if (param_8 != 0) {
    uVar9 = uVar9 | 0x400;
  }
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar8) < 0x18) {
    puVar8 = (undefined8 *)v8::internal::Zone::NewExpand(this,0x18);
  }
  else {
    *(undefined8 **)(this + 0x10) = puVar8 + 3;
  }
  *puVar8 = 1;
  puVar8[1] = param_5;
  puVar8[2] = puVar7;
  pCVar5 = (CallDescriptor *)
           v8::internal::compiler::Linkage::GetSimplifiedCDescriptor(uVar19,puVar8,uVar9);
  local_c0 = &local_68;
  local_d0 = local_b8;
  if (10 < uVar1) {
    local_c8 = local_b8;
    v8::base::SmallVector<v8::internal::compiler::Node*,10ul>::Grow
              ((SmallVector<v8::internal::compiler::Node*,10ul> *)&local_d0,uVar1);
  }
  local_c8 = local_d0 + uVar1;
  *local_d0 = param_2;
  if (param_5 != 0) {
    uVar10 = param_5 * 0x10 - 0x10;
    uVar1 = (uVar10 >> 4) + 1;
    ppNVar14 = local_d0;
    if ((4 < uVar1) &&
       ((param_4 + param_5 * 8 <= local_d0 + 1 ||
        ((undefined2 *)((long)local_d0 + (uVar10 >> 1) + 0x10) <= param_4 + 4)))) {
      uVar10 = 4;
      if ((uVar1 & 3) != 0) {
        uVar10 = uVar1 & 3;
      }
      lVar16 = uVar1 - uVar10;
      puVar8 = (undefined8 *)(param_4 + 0x14);
      ppNVar14 = local_d0 + lVar16;
      param_4 = param_4 + lVar16 * 8;
      ppNVar13 = local_d0 + 3;
      do {
        pNVar20 = (Node *)*puVar8;
        pNVar21 = (Node *)puVar8[2];
        pNVar23 = (Node *)puVar8[-4];
        puVar4 = puVar8 + -2;
        puVar8 = puVar8 + 8;
        lVar16 = lVar16 + -4;
        ppNVar13[-1] = (Node *)*puVar4;
        ppNVar13[-2] = pNVar23;
        ppNVar13[1] = pNVar21;
        *ppNVar13 = pNVar20;
        ppNVar13 = ppNVar13 + 4;
      } while (lVar16 != 0);
    }
    do {
      puVar8 = (undefined8 *)(param_4 + 4);
      param_4 = param_4 + 8;
      ppNVar14[1] = (Node *)*puVar8;
      ppNVar14 = ppNVar14 + 1;
    } while (puVar2 != param_4);
  }
  pOVar6 = (Operator *)
           v8::internal::compiler::CommonOperatorBuilder::Call
                     ((CommonOperatorBuilder *)(param_1 + 0x48),pCVar5);
  pNVar20 = (Node *)v8::internal::compiler::Graph::NewNodeUnchecked
                              (*(Graph **)(param_1 + 8),pOVar6,
                               (int)((ulong)((long)local_c8 - (long)local_d0) >> 3),local_d0,false);
  v8::internal::compiler::Schedule::AddNode
            (*(Schedule **)(param_1 + 0x10),*(BasicBlock **)(param_1 + 0x98),pNVar20);
  if (local_d0 != local_b8) {
    free(local_d0);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar20;
}

