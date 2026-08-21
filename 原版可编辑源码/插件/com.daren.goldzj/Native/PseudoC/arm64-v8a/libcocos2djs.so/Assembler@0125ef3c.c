
/* v8::internal::Assembler::Assembler(v8::internal::AssemblerOptions const&,
   std::__ndk1::unique_ptr<v8::internal::AssemblerBuffer,
   std::__ndk1::default_delete<v8::internal::AssemblerBuffer> >) */

void __thiscall
v8::internal::Assembler::Assembler(Assembler *this,undefined8 param_1,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *local_38;
  
  local_38 = (long *)*param_3;
  *param_3 = 0;
  AssemblerBase::AssemblerBase((AssemblerBase *)this,param_1,&local_38);
  plVar2 = local_38;
  local_38 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined ***)this = &PTR__Assembler_01cbcf10;
  *(undefined8 *)(this + 0xe0) = 0;
  *(long *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(Assembler **)(this + 0x118) = this + 0x120;
  ConstantPool::ConstantPool((ConstantPool *)(this + 0x138),this);
  lVar1 = *(long *)(this + 0x10);
  *(undefined4 *)(this + 0xd0) = 0;
  *(long *)(this + 0x20) = lVar1;
  iVar3 = (**(code **)(**(long **)(this + 8) + 0x18))();
  *(long *)(this + 0xd8) = lVar1 + iVar3;
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(this + 0x20);
  ConstantPool::Clear((ConstantPool *)(this + 0x138));
  *(undefined4 *)(this + 0x130) = 0x7fffffff;
  return;
}

