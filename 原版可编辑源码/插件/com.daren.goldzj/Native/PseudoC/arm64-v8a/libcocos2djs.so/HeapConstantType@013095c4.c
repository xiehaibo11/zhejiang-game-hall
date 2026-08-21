
/* v8::internal::compiler::HeapConstantType::HeapConstantType(unsigned int,
   v8::internal::compiler::HeapObjectRef const&) */

void __thiscall
v8::internal::compiler::HeapConstantType::HeapConstantType
          (HeapConstantType *this,uint param_1,HeapObjectRef *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = param_1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 8) = uVar1;
  return;
}

