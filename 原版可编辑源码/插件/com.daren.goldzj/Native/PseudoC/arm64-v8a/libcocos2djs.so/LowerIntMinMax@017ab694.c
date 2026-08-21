
/* v8::internal::compiler::SimdScalarLowering::LowerIntMinMax(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*, bool,
   v8::internal::compiler::SimdScalarLowering::SimdType) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerIntMinMax
          (SimdScalarLowering *this,long param_1,Operator *param_2,uint param_4,uint param_5)

{
  Graph *pGVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Zone *pZVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  Node *pNVar16;
  Graph *local_a8;
  CommonOperatorBuilder *pCStack_a0;
  undefined8 local_80;
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  plVar11 = (long *)(param_1 + 0x20);
  plVar9 = plVar11;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar9 = (long *)(*plVar11 + 0x10);
  }
  puVar2 = (undefined8 *)GetReplacementsWithType(this,*plVar9,param_5);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar11 = (long *)(*plVar11 + 0x10);
  }
  puVar3 = (undefined8 *)GetReplacementsWithType(this,plVar11[1],param_5);
  if ((param_5 & 0xfd) == 0) {
    lVar12 = 2;
  }
  else if ((param_5 & 0xff | 2) == 3) {
    lVar12 = 4;
  }
  else if ((param_5 & 0xff) == 4) {
    lVar12 = 8;
  }
  else {
    if ((param_5 & 0xff) != 5) goto LAB_017ab94c;
    lVar12 = 0x10;
  }
  uVar14 = (ulong)(uint)((int)lVar12 << 3);
  pZVar4 = *(Zone **)**(undefined8 **)this;
  puVar7 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar7) < uVar14) {
    puVar7 = (undefined8 *)Zone::NewExpand(pZVar4,uVar14);
  }
  else {
    *(ulong *)(pZVar4 + 0x10) = (long)puVar7 + uVar14;
  }
  if ((param_5 - 3 & 0xff) < 3) {
    lVar8 = lVar12;
    puVar15 = puVar7;
    do {
      local_a8 = (Graph *)*puVar2;
      pCStack_a0 = (CommonOperatorBuilder *)*puVar3;
      pGVar1 = (Graph *)**(undefined8 **)this;
      uVar13 = (*(undefined8 **)this)[1];
      uVar5 = Graph::NewNode(pGVar1,param_2,2,(Node **)&local_a8,false);
      Diamond::Diamond((Diamond *)&local_a8,pGVar1,uVar13,uVar5,0);
      pGVar1 = local_a8;
      if ((param_4 & 1) == 0) {
        pNVar16 = (Node *)*puVar2;
        uVar13 = *puVar3;
        pOVar6 = (Operator *)CommonOperatorBuilder::Phi(pCStack_a0,7 - param_5,2);
        local_78 = pNVar16;
        uStack_70 = uVar13;
      }
      else {
        pNVar16 = (Node *)*puVar3;
        uVar13 = *puVar2;
        pOVar6 = (Operator *)CommonOperatorBuilder::Phi(pCStack_a0,7 - param_5,2);
        local_78 = pNVar16;
        uStack_70 = uVar13;
      }
      local_68 = local_80;
      uVar13 = Graph::NewNode(pGVar1,pOVar6,3,&local_78,false);
      *puVar15 = uVar13;
      puVar3 = puVar3 + 1;
      lVar8 = lVar8 + -1;
      puVar2 = puVar2 + 1;
      puVar15 = puVar15 + 1;
    } while (lVar8 != 0);
    pZVar4 = *(Zone **)**(undefined8 **)this;
    lVar8 = *(long *)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - lVar8) < uVar14) {
      lVar8 = Zone::NewExpand(pZVar4,uVar14);
    }
    else {
      *(ulong *)(pZVar4 + 0x10) = lVar8 + uVar14;
    }
    lVar10 = 0;
    *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar8
    ;
    do {
      *(undefined8 *)
       (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
       lVar10) = *(undefined8 *)((long)puVar7 + lVar10);
      lVar10 = lVar10 + 8;
    } while (lVar12 * 8 - lVar10 != 0);
    *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
         (int)lVar12;
    return;
  }
LAB_017ab94c:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

