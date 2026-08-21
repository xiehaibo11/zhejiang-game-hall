
/* v8::internal::PreparseDataBuilder::ByteData::WriteVarint32(unsigned int) */

void __thiscall
v8::internal::PreparseDataBuilder::ByteData::WriteVarint32(ByteData *this,uint param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  do {
    iVar2 = *(int *)(this + 8);
    uVar3 = param_1 >> 7;
    *(int *)(this + 8) = iVar2 + 1;
    bVar1 = (byte)param_1 | 0x80;
    if (uVar3 == 0) {
      bVar1 = (byte)param_1 & 0x7f;
    }
    *(byte *)(**(long **)this + (long)iVar2) = bVar1;
    param_1 = uVar3;
  } while (uVar3 != 0);
  this[0x10] = (ByteData)0x0;
  return;
}

