
/* v8::internal::LiteralBuffer::AddTwoByteChar(int) */

void __thiscall v8::internal::LiteralBuffer::AddTwoByteChar(LiteralBuffer *this,int param_1)

{
  int iVar1;
  
  if (*(int *)(this + 8) <= *(int *)(this + 0x10)) {
    ExpandBuffer(this);
  }
  if (param_1 < 0x10000) {
    iVar1 = *(int *)(this + 0x10);
  }
  else {
    *(ushort *)(*(long *)this + (long)*(int *)(this + 0x10)) =
         (ushort)(param_1 + 0xf0000U >> 10) & 0x3ff | 0xd800;
    iVar1 = *(int *)(this + 0x10) + 2;
    *(int *)(this + 0x10) = iVar1;
    if (*(int *)(this + 8) <= iVar1) {
      ExpandBuffer(this);
      iVar1 = *(int *)(this + 0x10);
    }
    param_1 = param_1 & 0x3ffU | 0xffffdc00;
  }
  *(short *)(*(long *)this + (long)iVar1) = (short)param_1;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 2;
  return;
}

