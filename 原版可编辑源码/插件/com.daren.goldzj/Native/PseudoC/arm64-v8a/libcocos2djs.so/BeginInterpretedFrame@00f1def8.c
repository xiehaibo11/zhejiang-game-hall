
/* v8::internal::Translation::BeginInterpretedFrame(v8::internal::BailoutId, int, unsigned int, int,
   int) */

void __thiscall
v8::internal::Translation::BeginInterpretedFrame
          (Translation *this,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ulong uVar1;
  int iVar2;
  ZoneChunkList<unsigned_char> *pZVar3;
  uchar local_60 [4];
  byte local_5c [4];
  byte local_58 [4];
  byte local_54 [4];
  byte local_38 [4];
  byte local_34 [4];
  
  local_60[0] = '\x04';
  ZoneChunkList<unsigned_char>::push_back(*(ZoneChunkList<unsigned_char> **)this,local_60);
  pZVar3 = *(ZoneChunkList<unsigned_char> **)this;
  iVar2 = -param_2;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  uVar1 = CONCAT44(iVar2,param_2) >> 0x1f & 0xffffffff;
  do {
    iVar2 = (int)(uVar1 >> 7);
    local_58[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar3,local_58);
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  pZVar3 = *(ZoneChunkList<unsigned_char> **)this;
  iVar2 = -param_3;
  if (-1 < param_3) {
    iVar2 = param_3;
  }
  uVar1 = CONCAT44(iVar2,param_3) >> 0x1f & 0xffffffff;
  do {
    iVar2 = (int)(uVar1 >> 7);
    local_54[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar3,local_54);
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  pZVar3 = *(ZoneChunkList<unsigned_char> **)this;
  iVar2 = -param_4;
  if (-1 < param_4) {
    iVar2 = param_4;
  }
  uVar1 = CONCAT44(iVar2,param_4) >> 0x1f & 0xffffffff;
  do {
    iVar2 = (int)(uVar1 >> 7);
    local_38[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar3,local_38);
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  pZVar3 = *(ZoneChunkList<unsigned_char> **)this;
  iVar2 = -param_5;
  if (-1 < param_5) {
    iVar2 = param_5;
  }
  uVar1 = CONCAT44(iVar2,param_5) >> 0x1f & 0xffffffff;
  do {
    iVar2 = (int)(uVar1 >> 7);
    local_34[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar3,local_34);
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  pZVar3 = *(ZoneChunkList<unsigned_char> **)this;
  iVar2 = -param_6;
  if (-1 < param_6) {
    iVar2 = param_6;
  }
  uVar1 = CONCAT44(iVar2,param_6) >> 0x1f & 0xffffffff;
  do {
    iVar2 = (int)(uVar1 >> 7);
    local_5c[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar3,local_5c);
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  return;
}

