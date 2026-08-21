
/* v8::internal::PreparseDataBuilder::ByteData::WriteUint8(unsigned char) */

void __thiscall
v8::internal::PreparseDataBuilder::ByteData::WriteUint8(ByteData *this,uchar param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  *(int *)(this + 8) = iVar1 + 1;
  *(uchar *)(**(long **)this + (long)iVar1) = param_1;
  this[0x10] = (ByteData)0x0;
  return;
}

