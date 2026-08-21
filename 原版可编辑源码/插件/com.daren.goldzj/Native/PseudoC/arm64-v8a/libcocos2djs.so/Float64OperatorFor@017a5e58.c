
/* v8::internal::compiler::RepresentationChanger::Float64OperatorFor(v8::internal::compiler::IrOpcode::Value)
    */

undefined8 __thiscall
v8::internal::compiler::RepresentationChanger::Float64OperatorFor
          (RepresentationChanger *this,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 extraout_w1_01;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar3;
  
  switch(param_2) {
  case 0x6f:
  case 0x72:
    uVar1 = MachineOperatorBuilder::Float64Equal
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x70:
  case 0x73:
    uVar1 = MachineOperatorBuilder::Float64LessThan
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x71:
  case 0x74:
    uVar1 = MachineOperatorBuilder::Float64LessThanOrEqual
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x7c:
  case 0x8e:
  case 0x99:
    uVar1 = MachineOperatorBuilder::Float64Add
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x7d:
  case 0x8f:
  case 0x9a:
    uVar1 = MachineOperatorBuilder::Float64Sub
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x7e:
  case 0x90:
    uVar1 = MachineOperatorBuilder::Float64Mul
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x7f:
  case 0x91:
    uVar1 = MachineOperatorBuilder::Float64Div
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x80:
  case 0x92:
    uVar1 = MachineOperatorBuilder::Float64Mod
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x87:
    uVar1 = MachineOperatorBuilder::Float64Atan2
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x89:
    uVar1 = MachineOperatorBuilder::Float64Max
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x8a:
    uVar1 = MachineOperatorBuilder::Float64Min
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x8b:
    uVar1 = MachineOperatorBuilder::Float64Pow
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x9b:
    uVar1 = MachineOperatorBuilder::Float64Abs
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x9c:
    uVar1 = MachineOperatorBuilder::Float64Acos
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x9d:
    uVar1 = MachineOperatorBuilder::Float64Acosh
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x9e:
    uVar1 = MachineOperatorBuilder::Float64Asin
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0x9f:
    uVar1 = MachineOperatorBuilder::Float64Asinh
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xa0:
    uVar1 = MachineOperatorBuilder::Float64Atan
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xa1:
    uVar1 = MachineOperatorBuilder::Float64Atanh
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xa2:
    uVar1 = MachineOperatorBuilder::Float64Cbrt
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xa3:
    MachineOperatorBuilder::Float64RoundUp(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10))
    ;
    uVar2 = extraout_w1_01;
    uVar3 = extraout_var_01;
    break;
  case 0xa5:
    uVar1 = MachineOperatorBuilder::Float64Cos
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xa6:
    uVar1 = MachineOperatorBuilder::Float64Cosh
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xa7:
    uVar1 = MachineOperatorBuilder::Float64Exp
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xa8:
    uVar1 = MachineOperatorBuilder::Float64Expm1
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xa9:
    MachineOperatorBuilder::Float64RoundDown
              (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    uVar2 = extraout_w1_00;
    uVar3 = extraout_var_00;
    break;
  case 0xaa:
    uVar1 = MachineOperatorBuilder::TruncateFloat64ToFloat32
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xab:
    uVar1 = MachineOperatorBuilder::Float64Log
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xac:
    uVar1 = MachineOperatorBuilder::Float64Log1p
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xad:
    uVar1 = MachineOperatorBuilder::Float64Log2
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xae:
    uVar1 = MachineOperatorBuilder::Float64Log10
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xb1:
    uVar1 = MachineOperatorBuilder::Float64Sin
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xb2:
    uVar1 = MachineOperatorBuilder::Float64Sinh
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xb3:
    uVar1 = MachineOperatorBuilder::Float64Sqrt
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xb4:
    uVar1 = MachineOperatorBuilder::Float64Tan
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xb5:
    uVar1 = MachineOperatorBuilder::Float64Tanh
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  case 0xb6:
    MachineOperatorBuilder::Float64RoundTruncate
              (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    uVar2 = extraout_w1;
    uVar3 = extraout_var;
    break;
  case 0xbc:
    uVar1 = MachineOperatorBuilder::Float64SilenceNaN
                      (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return uVar1;
  }
  return CONCAT44(uVar3,uVar2);
}

