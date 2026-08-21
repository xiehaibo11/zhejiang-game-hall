
/* v8::internal::Translation::AddUpdateFeedback(int, int) */

void __thiscall
v8::internal::Translation::AddUpdateFeedback(Translation *this,int param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  ZoneChunkList<unsigned_char> *pZVar3;
  uchar local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  
  local_3c[0] = 'h';
  ZoneChunkList<unsigned_char>::push_back(*(ZoneChunkList<unsigned_char> **)this,local_3c);
  pZVar3 = *(ZoneChunkList<unsigned_char> **)this;
  iVar2 = -param_1;
  if (-1 < param_1) {
    iVar2 = param_1;
  }
  uVar1 = CONCAT44(iVar2,param_1) >> 0x1f & 0xffffffff;
  do {
    iVar2 = (int)(uVar1 >> 7);
    local_38[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar3,local_38);
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  pZVar3 = *(ZoneChunkList<unsigned_char> **)this;
  iVar2 = -param_2;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  uVar1 = CONCAT44(iVar2,param_2) >> 0x1f & 0xffffffff;
  do {
    iVar2 = (int)(uVar1 >> 7);
    local_34[0] = iVar2 != 0 | (byte)((int)uVar1 << 1);
    ZoneChunkList<unsigned_char>::push_back(pZVar3,local_34);
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  return;
}

