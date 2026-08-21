
/* v8::internal::compiler::SimdScalarLowering::LowerBinaryOp(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType, v8::internal::compiler::Operator const*,
   bool) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::LowerBinaryOp
          (SimdScalarLowering *this,long param_1,uint param_3,Operator *param_4,ulong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Zone *pZVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  Node *local_70;
  undefined8 uStack_68;
  
  plVar9 = (long *)(param_1 + 0x20);
  plVar7 = plVar9;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar7 = (long *)(*plVar9 + 0x10);
  }
  puVar1 = (undefined8 *)GetReplacementsWithType(this,*plVar7,param_3);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar9 = (long *)(*plVar9 + 0x10);
  }
  puVar2 = (undefined8 *)GetReplacementsWithType(this,plVar9[1],param_3);
  if ((param_3 & 0xfd) == 0) {
    lVar12 = 2;
  }
  else if ((param_3 & 0xff | 2) == 3) {
    lVar12 = 4;
  }
  else if ((param_3 & 0xff) == 4) {
    lVar12 = 8;
  }
  else {
    if ((param_3 & 0xff) != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar12 = 0x10;
  }
  uVar11 = (uint)lVar12;
  uVar10 = (ulong)(uVar11 << 3);
  pZVar3 = *(Zone **)**(undefined8 **)this;
  puVar5 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < uVar10) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,uVar10);
  }
  else {
    *(ulong *)(pZVar3 + 0x10) = (long)puVar5 + uVar10;
  }
  lVar6 = lVar12;
  puVar13 = puVar5;
  if ((param_5 & 1) == 0) {
    lVar8 = (ulong)(uVar11 >> 1) * 8;
    lVar6 = 0;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    do {
      local_70 = (Node *)puVar1[-1];
      uStack_68 = *puVar1;
      uVar4 = Graph::NewNode((Graph *)**(undefined8 **)this,param_4,2,&local_70,false);
      *(undefined8 *)((long)puVar5 + lVar6) = uVar4;
      local_70 = (Node *)puVar2[-1];
      uStack_68 = *puVar2;
      uVar4 = Graph::NewNode((Graph *)**(undefined8 **)this,param_4,2,&local_70,false);
      *(undefined8 *)((long)puVar5 + lVar6 + lVar8) = uVar4;
      lVar6 = lVar6 + 8;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 2;
    } while (lVar8 - lVar6 != 0);
  }
  else {
    do {
      local_70 = (Node *)*puVar1;
      uStack_68 = *puVar2;
      uVar4 = Graph::NewNode((Graph *)**(undefined8 **)this,param_4,2,&local_70,false);
      lVar6 = lVar6 + -1;
      *puVar13 = uVar4;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      puVar13 = puVar13 + 1;
    } while (lVar6 != 0);
  }
  pZVar3 = *(Zone **)**(undefined8 **)this;
  lVar6 = *(long *)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - lVar6) < uVar10) {
    lVar6 = Zone::NewExpand(pZVar3,uVar10);
  }
  else {
    *(ulong *)(pZVar3 + 0x10) = lVar6 + uVar10;
  }
  lVar8 = 0;
  *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) = lVar6;
  do {
    *(undefined8 *)
     (*(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) +
     lVar8) = *(undefined8 *)((long)puVar5 + lVar8);
    lVar8 = lVar8 + 8;
  } while (lVar12 * 8 - lVar8 != 0);
  *(uint *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc) =
       uVar11;
  return;
}

