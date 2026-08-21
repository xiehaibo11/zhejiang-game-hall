
/* v8::internal::PreparseDataBuilder::ByteData::Add(unsigned char) */

void __thiscall v8::internal::PreparseDataBuilder::ByteData::Add(ByteData *this,uchar param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  *(int *)(this + 8) = iVar1 + 1;
  *(uchar *)(**(long **)this + (long)iVar1) = param_1;
  return;
}

