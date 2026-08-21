
/* v8::internal::Operand::EmbeddedStringConstant(v8::internal::StringConstantBase const*) */

void __thiscall
v8::internal::Operand::EmbeddedStringConstant(Operand *this,StringConstantBase *param_1)

{
  undefined1 *in_x8;
  
  *in_x8 = 0;
  *(HeapObjectRequest *)(in_x8 + 8) = (HeapObjectRequest)0x0;
  *(undefined8 *)(in_x8 + 0x20) = 0;
  in_x8[0x28] = 3;
  *(undefined4 *)(in_x8 + 0x38) = 2;
  *(undefined8 *)(in_x8 + 0x30) = 0xffffffff;
  HeapObjectRequest::HeapObjectRequest
            ((HeapObjectRequest *)(in_x8 + 8),(StringConstantBase *)this,-1);
  *in_x8 = 1;
  return;
}

