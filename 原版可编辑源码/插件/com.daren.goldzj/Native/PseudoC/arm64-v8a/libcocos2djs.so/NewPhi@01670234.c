
/* v8::internal::compiler::BytecodeGraphBuilder::NewPhi(int, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::NewPhi
          (BytecodeGraphBuilder *this,int param_1,Node *param_2,Node *param_3)

{
  uint uVar1;
  Operator *pOVar2;
  Zone *this_00;
  ulong uVar3;
  Node **ppNVar4;
  ulong uVar5;
  Node **ppNVar6;
  long lVar7;
  ulong uVar8;
  
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Phi
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),8,param_1);
  if (param_1 < *(int *)(this + 0x154)) {
    ppNVar4 = *(Node ***)(this + 0x158);
  }
  else {
    this_00 = *(Zone **)(this + 8);
    uVar1 = param_1 + *(int *)(this + 0x154) + 0x41;
    uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    ppNVar4 = *(Node ***)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)ppNVar4) < uVar3) {
      ppNVar4 = (Node **)Zone::NewExpand(this_00,uVar3);
    }
    else {
      *(ulong *)(this_00 + 0x10) = (long)ppNVar4 + uVar3;
    }
    *(Node ***)(this + 0x158) = ppNVar4;
    *(uint *)(this + 0x154) = uVar1;
  }
  if (param_1 != 0) {
    uVar3 = (ulong)param_1;
    if ((uint)param_1 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfffffffffffffffc;
      ppNVar6 = ppNVar4 + 2;
      uVar8 = uVar5;
      do {
        ppNVar6[-1] = param_2;
        ppNVar6[-2] = param_2;
        ppNVar6[1] = param_2;
        *ppNVar6 = param_2;
        uVar8 = uVar8 - 4;
        ppNVar6 = ppNVar6 + 4;
      } while (uVar8 != 0);
      if (uVar5 == uVar3) goto LAB_01670318;
    }
    lVar7 = uVar3 - uVar5;
    ppNVar6 = ppNVar4 + uVar5;
    do {
      lVar7 = lVar7 + -1;
      *ppNVar6 = param_2;
      ppNVar6 = ppNVar6 + 1;
    } while (lVar7 != 0);
  }
LAB_01670318:
  ppNVar4[param_1] = param_3;
  Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar2,param_1 + 1,ppNVar4,true);
  return;
}

