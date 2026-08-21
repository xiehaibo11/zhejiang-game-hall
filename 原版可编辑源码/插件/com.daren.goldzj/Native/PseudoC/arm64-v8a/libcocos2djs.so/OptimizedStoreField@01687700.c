
/* v8::internal::compiler::RawMachineAssembler::OptimizedStoreField(v8::internal::MachineRepresentation,
   v8::internal::compiler::Node*, int, v8::internal::compiler::Node*,
   v8::internal::compiler::WriteBarrierKind) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::OptimizedStoreField
          (RawMachineAssembler *this,byte param_2,Node *param_3,undefined4 param_4,
          undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  undefined2 uVar2;
  Operator *pOVar3;
  Node *local_80;
  undefined8 uStack_78;
  FieldAccess local_70 [4];
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (0xd < param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_50 = 0x202;
  uVar2 = 0;
  switch(param_2) {
  case 1:
    uVar2 = 0x101;
    break;
  case 2:
    goto switchD_0168775c_caseD_2;
  case 3:
    uVar2 = 0x203;
    break;
  case 4:
    uVar2 = 0x204;
    break;
  case 5:
    uVar2 = 0x405;
    break;
  case 6:
    uVar2 = 0x206;
    break;
  case 7:
    uVar2 = 0x707;
    break;
  case 8:
    uVar2 = 0x708;
    break;
  case 9:
    uVar2 = 0x709;
    break;
  case 10:
    uVar2 = 0x70a;
    break;
  case 0xb:
    uVar2 = 0x60b;
    break;
  case 0xc:
    uVar2 = 0x60c;
    break;
  case 0xd:
    uVar2 = 0xd;
  }
  local_50 = uVar2;
switchD_0168775c_caseD_2:
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  local_70[0] = (FieldAccess)0x1;
  local_58 = 0xffffffff;
  local_4c = 1;
  local_40 = 0;
  local_6c = param_4;
  local_4e = param_6;
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)(this + 0x58),local_70);
  local_80 = param_3;
  uStack_78 = param_5;
  AddNode(this,pOVar3,2,&local_80);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

