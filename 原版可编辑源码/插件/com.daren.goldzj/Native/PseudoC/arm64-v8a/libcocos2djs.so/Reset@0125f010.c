
/* v8::internal::Assembler::Reset() */

void __thiscall v8::internal::Assembler::Reset(Assembler *this)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(this + 0x10);
  *(long *)(this + 0x20) = lVar1;
  iVar2 = (**(code **)(**(long **)(this + 8) + 0x18))();
  *(long *)(this + 0xd8) = lVar1 + iVar2;
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(this + 0x20);
  ConstantPool::Clear((ConstantPool *)(this + 0x138));
  *(undefined4 *)(this + 0x130) = 0x7fffffff;
  return;
}

