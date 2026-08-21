
/* v8::internal::Assembler::dc8(unsigned char) */

void __thiscall v8::internal::Assembler::dc8(Assembler *this,uchar param_1)

{
  int iVar1;
  
  **(uchar **)(this + 0x20) = param_1;
  *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
  iVar1 = buffer_space(this);
  if (iVar1 < 0x40) {
    GrowBuffer(this);
  }
  if (*(int *)(this + 0x130) <= *(int *)(this + 0x20) - *(int *)(this + 0x10)) {
    CheckVeneerPool(this,false,true,0x400);
  }
  ConstantPool::MaybeCheck((ConstantPool *)(this + 0x138));
  return;
}

