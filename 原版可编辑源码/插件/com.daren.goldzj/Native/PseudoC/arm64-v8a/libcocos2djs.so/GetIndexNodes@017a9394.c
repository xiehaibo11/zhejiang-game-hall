
/* v8::internal::compiler::SimdScalarLowering::GetIndexNodes(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::SimdScalarLowering::SimdType) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::GetIndexNodes
          (SimdScalarLowering *this,Node *param_1,undefined8 *param_2,byte param_4)

{
  Graph *this_00;
  int iVar1;
  uint uVar2;
  Operator *pOVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  long lVar6;
  Graph *this_01;
  long lVar7;
  long lVar8;
  Node *local_70;
  undefined8 uStack_68;
  
  if ((param_4 & 0xfd) == 0) {
    lVar6 = 2;
  }
  else if ((param_4 | 2) == 3) {
    lVar6 = 4;
  }
  else if (param_4 == 4) {
    lVar6 = 8;
  }
  else {
    if (param_4 != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar6 = 0x10;
  }
  lVar7 = lVar6 + -1;
  lVar8 = 1;
  uVar2 = 0;
  if ((uint)lVar6 != 0) {
    uVar2 = 0x10 / (uint)lVar6;
  }
  *param_2 = param_1;
  do {
    this_01 = (Graph *)**(undefined8 **)this;
    iVar1 = 0;
    if (uVar2 != 0) {
      iVar1 = *(int *)(kLaneOffsets + lVar8 * (ulong)uVar2 * 4) / (int)uVar2;
    }
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Int32Add((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    this_00 = (Graph *)**(undefined8 **)this;
    pOVar4 = (Operator *)
             CommonOperatorBuilder::Int32Constant
                       ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],
                        (int)(lVar8 * (ulong)uVar2));
    local_70 = (Node *)0x0;
    uStack_68 = Graph::NewNode(this_00,pOVar4,0,&local_70,false);
    local_70 = param_1;
    uVar5 = Graph::NewNode(this_01,pOVar3,2,&local_70,false);
    lVar7 = lVar7 + -1;
    lVar8 = lVar8 + 1;
    param_2[iVar1] = uVar5;
  } while (lVar7 != 0);
  return;
}

