
/* v8::internal::LiteralBuffer::NewCapacity(int) */

int __thiscall v8::internal::LiteralBuffer::NewCapacity(LiteralBuffer *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1 << 2;
  if (0x55554 < param_1) {
    iVar1 = param_1 + 0x100000;
  }
  return iVar1;
}

