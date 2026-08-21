
/* v8::internal::PreparseDataBuilder::ByteData::WriteQuarter(unsigned char) */

void __thiscall
v8::internal::PreparseDataBuilder::ByteData::WriteQuarter(ByteData *this,uchar param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((byte)this[0x10] == 0) {
    iVar1 = *(int *)(this + 8);
    *(int *)(this + 8) = iVar1 + 1;
    *(undefined1 *)(**(long **)this + (long)iVar1) = 0;
    uVar2 = 3;
  }
  else {
    uVar2 = (byte)this[0x10] - 1;
  }
  this[0x10] = SUB41(uVar2,0);
  *(byte *)((long)*(int *)(this + 8) + **(long **)this + -1) =
       *(byte *)((long)*(int *)(this + 8) + **(long **)this + -1) |
       param_1 << (ulong)((uVar2 & 0xf) << 1);
  return;
}

