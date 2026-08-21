
/* v8::internal::Translation::BeginArgumentsAdaptorFrame(int, unsigned int) */

void __thiscall
v8::internal::Translation::BeginArgumentsAdaptorFrame(Translation *this,int param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ZoneChunkList<unsigned_char> *pZVar4;
  uchar local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  
  local_3c[0] = '\x18';
  ZoneChunkList<unsigned_char>::push_back(*(ZoneChunkList<unsigned_char> **)this,local_3c);
  pZVar4 = *(ZoneChunkList<unsigned_char> **)this;
  iVar3 = -param_1;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  uVar2 = CONCAT44(iVar3,param_1) >> 0x1f & 0xffffffff;
  do {
    iVar3 = (int)(uVar2 >> 7);
    local_38[0] = iVar3 != 0 | (byte)((int)uVar2 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar4,local_38);
    uVar2 = uVar2 >> 7;
  } while (iVar3 != 0);
  pZVar4 = *(ZoneChunkList<unsigned_char> **)this;
  uVar1 = -param_2;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  uVar2 = CONCAT44(uVar1,param_2) >> 0x1f & 0xffffffff;
  do {
    iVar3 = (int)(uVar2 >> 7);
    local_34[0] = iVar3 != 0 | (byte)((int)uVar2 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar4,local_34);
    uVar2 = uVar2 >> 7;
  } while (iVar3 != 0);
  return;
}

