
/* v8::internal::Translation::BeginJavaScriptBuiltinContinuationFrame(v8::internal::BailoutId, int,
   unsigned int) */

void __thiscall
v8::internal::Translation::BeginJavaScriptBuiltinContinuationFrame
          (Translation *this,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  ZoneChunkList<unsigned_char> *pZVar3;
  uchar local_48 [4];
  byte local_44 [4];
  byte local_28 [4];
  byte local_24 [4];
  
  local_48[0] = '\f';
  ZoneChunkList<unsigned_char>::push_back(*(ZoneChunkList<unsigned_char> **)this,local_48);
  pZVar3 = *(ZoneChunkList<unsigned_char> **)this;
  iVar2 = -param_2;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  uVar1 = CONCAT44(iVar2,param_2) >> 0x1f & 0xffffffff;
  do {
    iVar2 = (int)(uVar1 >> 7);
    local_28[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar3,local_28);
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
    local_24[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar3,local_24);
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
    local_44[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar3,local_44);
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  return;
}

