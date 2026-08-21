
/* v8::internal::compiler::MachineOperatorReducer::ReduceFloat64Compare(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceFloat64Compare
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *pNVar1;
  Graph *pGVar2;
  short sVar3;
  long lVar4;
  MachineGraph *this_00;
  Operator *pOVar5;
  Node *pNVar6;
  Node *pNVar7;
  uint uVar8;
  long *plVar9;
  double dVar10;
  Use *pUVar11;
  Node *pNVar12;
  Node *local_98;
  BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
  aBStack_90 [8];
  long *local_88;
  double local_80;
  char local_78;
  long *local_70;
  double local_68;
  char local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
  ::BinopMatcher(aBStack_90,param_1);
  if ((local_78 != '\0') && (local_60 != '\0')) {
    sVar3 = *(short *)(*(long *)param_1 + 0x10);
    if (sVar3 == 0x15a) {
      this_00 = *(MachineGraph **)(this + 0x10);
      uVar8 = (uint)(local_80 <= local_68);
    }
    else if (sVar3 == 0x159) {
      this_00 = *(MachineGraph **)(this + 0x10);
      uVar8 = (uint)(local_80 < local_68);
    }
    else {
      if (sVar3 != 0x158) goto LAB_0177f384;
      this_00 = *(MachineGraph **)(this + 0x10);
      uVar8 = (uint)(local_80 == local_68);
    }
    param_1 = (Node *)MachineGraph::Int32Constant(this_00,uVar8);
    goto LAB_0177f350;
  }
  if (*(short *)(*local_88 + 0x10) == 0x1bb) {
    if (*(short *)(*local_70 + 0x10) != 0x1bb) {
      if (local_60 != '\0') {
        if (local_68 <= 3.4028234663852886e+38) {
          if (local_68 < -3.4028234663852886e+38) {
            if (-3.4028235677973362e+38 <= local_68) {
              dVar10 = -3.4028234663852886e+38;
            }
            else {
              dVar10 = -INFINITY;
            }
          }
          else {
            dVar10 = (double)(float)local_68;
          }
        }
        else if (local_68 <= 3.4028235677973362e+38) {
          dVar10 = 3.4028234663852886e+38;
        }
        else {
          dVar10 = INFINITY;
        }
        if (local_68 == dVar10) goto LAB_0177f134;
      }
      goto LAB_0177f084;
    }
LAB_0177f134:
    sVar3 = *(short *)(*(long *)param_1 + 0x10);
    if (sVar3 == 0x15a) {
      pOVar5 = (Operator *)
               MachineOperatorBuilder::Float32LessThanOrEqual
                         (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
    }
    else if (sVar3 == 0x159) {
      pOVar5 = (Operator *)
               MachineOperatorBuilder::Float32LessThan
                         (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
    }
    else {
      if (sVar3 != 0x158) {
LAB_0177f384:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pOVar5 = (Operator *)
               MachineOperatorBuilder::Float32Equal
                         (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
    }
    NodeProperties::ChangeOp(param_1,pOVar5);
    if (local_78 == '\0') {
      plVar9 = local_88 + 4;
      if ((~*(uint *)((long)local_88 + 0x14) & 0xf000000) == 0) {
        plVar9 = (long *)(*plVar9 + 0x10);
      }
      pNVar6 = (Node *)*plVar9;
    }
    else {
      pGVar2 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               CommonOperatorBuilder::Float32Constant
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                          (float)local_80);
      local_98 = (Node *)0x0;
      pNVar6 = (Node *)Graph::NewNode(pGVar2,pOVar5,0,&local_98,false);
    }
    pNVar1 = param_1 + 0x20;
    pNVar12 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar12 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar7 = *(Node **)pNVar12;
    if (pNVar7 != pNVar6) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar11 = (Use *)(*(long *)pNVar1 + -0x18);
      }
      else {
        pUVar11 = (Use *)(param_1 + -0x18);
      }
      if (pNVar7 != (Node *)0x0) {
        Node::RemoveUse(pNVar7,pUVar11);
      }
      *(Node **)pNVar12 = pNVar6;
      if (pNVar6 != (Node *)0x0) {
        Node::AppendUse(pNVar6,pUVar11);
      }
    }
    if (local_60 == '\0') {
      plVar9 = local_70 + 4;
      if ((~*(uint *)((long)local_70 + 0x14) & 0xf000000) == 0) {
        plVar9 = (long *)(*plVar9 + 0x10);
      }
      pNVar6 = (Node *)*plVar9;
    }
    else {
      pGVar2 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar5 = (Operator *)
               CommonOperatorBuilder::Float32Constant
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                          (float)local_68);
      local_98 = (Node *)0x0;
      pNVar6 = (Node *)Graph::NewNode(pGVar2,pOVar5,0,&local_98,false);
    }
    pNVar12 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar12 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar7 = *(Node **)(pNVar12 + 8);
    if (pNVar7 != pNVar6) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar11 = (Use *)(*(long *)pNVar1 + -0x30);
      }
      else {
        pUVar11 = (Use *)(param_1 + -0x30);
      }
      if (pNVar7 != (Node *)0x0) {
        Node::RemoveUse(pNVar7,pUVar11);
      }
      *(Node **)(pNVar12 + 8) = pNVar6;
      if (pNVar6 != (Node *)0x0) {
        Node::AppendUse(pNVar6,pUVar11);
      }
    }
  }
  else {
LAB_0177f084:
    if (local_78 != '\0') {
      if (local_80 <= 3.4028234663852886e+38) {
        if (local_80 < -3.4028234663852886e+38) {
          if (-3.4028235677973362e+38 <= local_80) {
            dVar10 = -3.4028234663852886e+38;
          }
          else {
            dVar10 = -INFINITY;
          }
        }
        else {
          dVar10 = (double)(float)local_80;
        }
      }
      else if (local_80 <= 3.4028235677973362e+38) {
        dVar10 = 3.4028234663852886e+38;
      }
      else {
        dVar10 = INFINITY;
      }
      if ((local_80 == dVar10) && (*(short *)(*local_70 + 0x10) == 0x1bb)) goto LAB_0177f134;
    }
    param_1 = (Node *)0x0;
  }
LAB_0177f350:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

