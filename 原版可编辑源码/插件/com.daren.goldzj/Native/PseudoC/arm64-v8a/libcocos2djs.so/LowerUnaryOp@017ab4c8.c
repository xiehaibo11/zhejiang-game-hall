
/* v8::internal::compiler::SimdScalarLowering::LowerUnaryOp(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType, v8::internal::compiler::Operator const*) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerUnaryOp
          (SimdScalarLowering *this,long param_1,uint param_3,Operator *param_4)

{
  undefined8 *puVar1;
  Zone *pZVar2;
  Graph *this_00;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  Node *local_48;
  
  plVar6 = (long *)(param_1 + 0x20);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar6 = (long *)(*plVar6 + 0x10);
  }
  puVar1 = (undefined8 *)GetReplacementsWithType(this,*plVar6,param_3);
  if ((param_3 & 0xfd) == 0) {
    lVar9 = 2;
  }
  else if ((param_3 & 0xff | 2) == 3) {
    lVar9 = 4;
  }
  else if ((param_3 & 0xff) == 4) {
    lVar9 = 8;
  }
  else {
    if ((param_3 & 0xff) != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar9 = 0x10;
  }
  uVar8 = (ulong)(uint)((int)lVar9 << 3);
  pZVar2 = *(Zone **)**(undefined8 **)this;
  puVar4 = *(undefined8 **)(pZVar2 + 0x10);
  if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)puVar4) < uVar8) {
    puVar4 = (undefined8 *)Zone::NewExpand(pZVar2,uVar8);
  }
  else {
    *(ulong *)(pZVar2 + 0x10) = (long)puVar4 + uVar8;
  }
  this_00 = (Graph *)**(undefined8 **)this;
  lVar5 = lVar9;
  puVar10 = puVar4;
  do {
    local_48 = (Node *)*puVar1;
    uVar3 = Graph::NewNode(this_00,param_4,1,&local_48,false);
    *puVar10 = uVar3;
    lVar5 = lVar5 + -1;
    this_00 = (Graph *)**(undefined8 **)this;
    puVar1 = puVar1 + 1;
    puVar10 = puVar10 + 1;
  } while (lVar5 != 0);
  pZVar2 = *(Zone **)this_00;
  lVar5 = *(long *)(pZVar2 + 0x10);
  if ((ulong)(*(long *)(pZVar2 + 0x18) - lVar5) < uVar8) {
    lVar5 = Zone::NewExpand(pZVar2,uVar8);
  }
  else {
    *(ulong *)(pZVar2 + 0x10) = lVar5 + uVar8;
  }
  lVar7 = 0;
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar5;
  do {
    *(undefined8 *)
     (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
     lVar7) = *(undefined8 *)((long)puVar4 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar9 * 8 - lVar7 != 0);
  *(int *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
       (int)lVar9;
  return;
}

