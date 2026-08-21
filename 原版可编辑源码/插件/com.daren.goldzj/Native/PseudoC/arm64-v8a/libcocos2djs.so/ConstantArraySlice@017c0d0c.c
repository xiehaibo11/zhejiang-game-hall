
/* v8::internal::interpreter::ConstantArrayBuilder::ConstantArraySlice::ConstantArraySlice(v8::internal::Zone*,
   unsigned long, unsigned long, v8::internal::interpreter::OperandSize) */

void __thiscall
v8::internal::interpreter::ConstantArrayBuilder::ConstantArraySlice::ConstantArraySlice
          (ConstantArraySlice *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          ConstantArraySlice param_5)

{
  *(undefined8 *)this = param_2;
  *(undefined8 *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = param_5;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = param_1;
  return;
}

