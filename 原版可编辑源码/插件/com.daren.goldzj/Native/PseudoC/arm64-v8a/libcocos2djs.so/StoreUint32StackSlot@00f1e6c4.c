
/* v8::internal::Translation::StoreUint32StackSlot(int) */

void __thiscall v8::internal::Translation::StoreUint32StackSlot(Translation *this,int param_1)

{
  ulong uVar1;
  ZoneChunkList<unsigned_char> *this_00;
  int iVar2;
  uchar local_28 [4];
  byte local_24 [4];
  
  local_28[0] = 'T';
  ZoneChunkList<unsigned_char>::push_back(*(ZoneChunkList<unsigned_char> **)this,local_28);
  this_00 = *(ZoneChunkList<unsigned_char> **)this;
  iVar2 = -param_1;
  if (-1 < param_1) {
    iVar2 = param_1;
  }
  uVar1 = CONCAT44(iVar2,param_1) >> 0x1f & 0xffffffff;
  do {
    iVar2 = (int)(uVar1 >> 7);
    local_24[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(this_00,local_24);
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  return;
}

