
/* v8::internal::ConstantPool::Emit(v8::internal::ConstantPoolKey const&) */

void __thiscall v8::internal::ConstantPool::Emit(ConstantPool *this,ConstantPoolKey *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar1 = &local_20;
  if (*param_1 == '\0') {
    local_20 = *(undefined8 *)(param_1 + 8);
    uVar2 = 8;
  }
  else {
    local_14 = *(undefined4 *)(param_1 + 8);
    puVar1 = (undefined8 *)&local_14;
    uVar2 = 4;
  }
  Assembler::EmitData(*(Assembler **)this,puVar1,uVar2);
  return;
}

