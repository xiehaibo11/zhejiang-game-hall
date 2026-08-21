
/* v8::internal::compiler::CodeAssembler::StoreToObject(v8::internal::MachineRepresentation,
   v8::internal::TNode<v8::internal::HeapObject>, v8::internal::TNode<v8::internal::IntPtrT>,
   v8::internal::compiler::Node*, v8::internal::StoreToObjectWriteBarrier) */

void __thiscall
v8::internal::compiler::CodeAssembler::StoreToObject
          (CodeAssembler *this,byte param_2,Node *param_3,undefined8 param_4,undefined8 param_5,
          int param_6)

{
  undefined2 uVar1;
  Operator *pOVar2;
  RawMachineAssembler *this_00;
  undefined2 local_50;
  undefined1 local_4e;
  Node *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_6 == 0) {
    local_4e = (byte)(param_2 - 7) < 2;
  }
  else if (param_6 == 1) {
    local_4e = 2;
  }
  else {
    local_4e = 5;
  }
  if (0xd < param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  local_50 = 0x202;
  uVar1 = 0;
  switch(param_2) {
  case 1:
    uVar1 = 0x101;
    break;
  case 2:
    goto switchD_0168763c_caseD_2;
  case 3:
    uVar1 = 0x203;
    break;
  case 4:
    uVar1 = 0x204;
    break;
  case 5:
    uVar1 = 0x405;
    break;
  case 6:
    uVar1 = 0x206;
    break;
  case 7:
    uVar1 = 0x707;
    break;
  case 8:
    uVar1 = 0x708;
    break;
  case 9:
    uVar1 = 0x709;
    break;
  case 10:
    uVar1 = 0x70a;
    break;
  case 0xb:
    uVar1 = 0x60b;
    break;
  case 0xc:
    uVar1 = 0x60c;
    break;
  case 0xd:
    uVar1 = 0xd;
  }
  local_50 = uVar1;
switchD_0168763c_caseD_2:
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::StoreToObject
                     ((SimplifiedOperatorBuilder *)(this_00 + 0x58),(ObjectAccess *)&local_50);
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_5;
  RawMachineAssembler::AddNode(this_00,pOVar2,3,&local_48);
  return;
}

