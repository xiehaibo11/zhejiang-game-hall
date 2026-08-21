
/* v8::internal::Assembler::EmitData(void const*, unsigned int) */

void __thiscall v8::internal::Assembler::EmitData(Assembler *this,void *param_1,uint param_2)

{
  int iVar1;
  
  memcpy(*(void **)(this + 0x20),param_1,(ulong)param_2);
  *(ulong *)(this + 0x20) = *(long *)(this + 0x20) + (ulong)param_2;
  iVar1 = buffer_space(this);
  if (iVar1 < 0x40) {
    GrowBuffer(this);
  }
  if (*(int *)(this + 0x130) <= *(int *)(this + 0x20) - *(int *)(this + 0x10)) {
    CheckVeneerPool(this,false,true,0x400);
  }
  if (*(int *)(*(long *)(this + 0x138) + 0x20) - *(int *)(*(long *)(this + 0x138) + 0x10) <
      *(int *)(this + 0x170)) {
    return;
  }
  ConstantPool::Check((ConstantPool *)(this + 0x138),0,1,0);
  return;
}

