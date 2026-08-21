
/* v8::internal::compiler::SimdScalarLowering::LowerNotEqual(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType, v8::internal::compiler::Operator const*) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerNotEqual
          (SimdScalarLowering *this,long param_1,ulong param_3,Operator *param_4)

{
  Graph *pGVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Zone *pZVar4;
  Node *pNVar5;
  undefined8 uVar6;
  Operator *pOVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  Graph *local_a8;
  CommonOperatorBuilder *pCStack_a0;
  undefined8 local_80;
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  plVar14 = (long *)(param_1 + 0x20);
  plVar12 = plVar14;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar12 = (long *)(*plVar14 + 0x10);
  }
  puVar2 = (undefined8 *)GetReplacementsWithType(this,*plVar12,param_3 & 0xffffffff);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar14 = (long *)(*plVar14 + 0x10);
  }
  puVar3 = (undefined8 *)GetReplacementsWithType(this,plVar14[1],param_3 & 0xffffffff);
  uVar17 = (uint)param_3;
  if ((param_3 & 0xfd) == 0) {
    lVar15 = 2;
  }
  else if ((uVar17 & 0xff | 2) == 3) {
    lVar15 = 4;
  }
  else if ((uVar17 & 0xff) == 4) {
    lVar15 = 8;
  }
  else {
    if ((uVar17 & 0xff) != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar15 = 0x10;
  }
  uVar11 = (ulong)(uint)((int)lVar15 << 3);
  pZVar4 = *(Zone **)**(undefined8 **)this;
  puVar9 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar9) < uVar11) {
    puVar9 = (undefined8 *)Zone::NewExpand(pZVar4,uVar11);
  }
  else {
    *(ulong *)(pZVar4 + 0x10) = (long)puVar9 + uVar11;
  }
  lVar10 = lVar15;
  puVar16 = puVar9;
  do {
    local_a8 = (Graph *)*puVar2;
    pCStack_a0 = (CommonOperatorBuilder *)*puVar3;
    pGVar1 = (Graph *)**(undefined8 **)this;
    uVar6 = (*(undefined8 **)this)[1];
    uVar8 = Graph::NewNode(pGVar1,param_4,2,(Node **)&local_a8,false);
    Diamond::Diamond((Diamond *)&local_a8,pGVar1,uVar6,uVar8,0);
    if ((uVar17 & 0xff) < 6) {
                    /* WARNING: Could not recover jumptable at 0x017accf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_017acc0c + (ulong)(byte)(&DAT_01a63200)[param_3 & 0xff] * 4))(0xc);
      return;
    }
    pNVar5 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    uVar6 = MachineGraph::Int32Constant(*(MachineGraph **)this,-1);
    pGVar1 = local_a8;
    pOVar7 = (Operator *)CommonOperatorBuilder::Phi(pCStack_a0,0,2);
    local_68 = local_80;
    local_78 = pNVar5;
    uStack_70 = uVar6;
    uVar6 = Graph::NewNode(pGVar1,pOVar7,3,&local_78,false);
    *puVar16 = uVar6;
    puVar3 = puVar3 + 1;
    lVar10 = lVar10 + -1;
    puVar2 = puVar2 + 1;
    puVar16 = puVar16 + 1;
  } while (lVar10 != 0);
  pZVar4 = *(Zone **)**(undefined8 **)this;
  lVar10 = *(long *)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - lVar10) < uVar11) {
    lVar10 = Zone::NewExpand(pZVar4,uVar11);
  }
  else {
    *(ulong *)(pZVar4 + 0x10) = lVar10 + uVar11;
  }
  lVar13 = 0;
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar10;
  do {
    *(undefined8 *)
     (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
     lVar13) = *(undefined8 *)((long)puVar9 + lVar13);
    lVar13 = lVar13 + 8;
  } while (lVar15 * 8 - lVar13 != 0);
  *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
       (int)lVar15;
  return;
}

