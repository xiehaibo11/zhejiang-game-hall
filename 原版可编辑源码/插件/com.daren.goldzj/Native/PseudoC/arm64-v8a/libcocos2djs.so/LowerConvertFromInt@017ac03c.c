
/* v8::internal::compiler::SimdScalarLowering::LowerConvertFromInt(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType,
   v8::internal::compiler::SimdScalarLowering::SimdType, bool, int) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerConvertFromInt
          (SimdScalarLowering *this,long param_1,uint param_3,byte param_4,ulong param_5,int param_6
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  Zone *pZVar4;
  Operator *pOVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  Node *pNVar11;
  long lVar12;
  Graph *this_00;
  Node *local_70;
  undefined8 uStack_68;
  
  plVar8 = (long *)(param_1 + 0x20);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar8 = (long *)(*plVar8 + 0x10);
  }
  lVar3 = GetReplacementsWithType(this,*plVar8,param_3);
  iVar10 = 0xffff;
  if ((param_3 & 0xff) != 4) {
    iVar10 = 0xff;
  }
  if ((param_4 & 0xfd) == 0) {
    lVar12 = 2;
  }
  else if ((param_4 | 2) == 3) {
    lVar12 = 4;
  }
  else if (param_4 == 4) {
    lVar12 = 8;
  }
  else {
    if (param_4 != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar12 = 0x10;
  }
  uVar7 = (ulong)(uint)((int)lVar12 << 3);
  pZVar4 = *(Zone **)**(undefined8 **)this;
  puVar6 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar6) < uVar7) {
    puVar6 = (undefined8 *)Zone::NewExpand(pZVar4,uVar7);
  }
  else {
    *(ulong *)(pZVar4 + 0x10) = (long)puVar6 + uVar7;
  }
  puVar1 = (undefined8 *)(lVar3 + (long)param_6 * 8);
  pNVar11 = (Node *)*puVar1;
  puVar2 = puVar6;
  lVar3 = lVar12;
  while( true ) {
    if ((param_5 & 1) == 0) {
      this_00 = (Graph *)**(undefined8 **)this;
      pOVar5 = (Operator *)
               MachineOperatorBuilder::Word32And
                         ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
      uStack_68 = MachineGraph::Int32Constant(*(MachineGraph **)this,iVar10);
      local_70 = pNVar11;
      pNVar11 = (Node *)Graph::NewNode(this_00,pOVar5,2,&local_70,false);
    }
    *puVar2 = pNVar11;
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 1;
    if (lVar3 == 0) break;
    pNVar11 = (Node *)*puVar1;
    puVar2 = puVar2 + 1;
  }
  pZVar4 = *(Zone **)**(undefined8 **)this;
  lVar3 = *(long *)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - lVar3) < uVar7) {
    lVar3 = Zone::NewExpand(pZVar4,uVar7);
  }
  else {
    *(ulong *)(pZVar4 + 0x10) = lVar3 + uVar7;
  }
  lVar9 = 0;
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar3;
  do {
    *(undefined8 *)
     (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
     lVar9) = *(undefined8 *)((long)puVar6 + lVar9);
    lVar9 = lVar9 + 8;
  } while (lVar12 * 8 - lVar9 != 0);
  *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
       (int)lVar12;
  return;
}

