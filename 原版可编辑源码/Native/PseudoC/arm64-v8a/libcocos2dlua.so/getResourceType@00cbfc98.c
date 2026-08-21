
/* cocostudio::FlatBuffersSerialize::getResourceType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

bool __thiscall
cocostudio::FlatBuffersSerialize::getResourceType(FlatBuffersSerialize *this,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 7) {
    pbVar5 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar5 = param_2 + 1;
    }
    iVar4 = memcmp(pbVar5,"Default",7);
    bVar3 = false;
    if (iVar4 != 0) {
      return true;
    }
  }
  else if (uVar1 == 6) {
    pbVar5 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar5 = param_2 + 1;
    }
    iVar4 = memcmp(pbVar5,"Normal",6);
    if (iVar4 != 0) {
      return true;
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
    if ((uVar1 == 0xe) && (this[0x30] != (FlatBuffersSerialize)0x0)) {
      pbVar5 = *(byte **)(param_2 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar5 = param_2 + 1;
      }
      iVar4 = memcmp(pbVar5,"MarkedSubImage",0xe);
      bVar3 = iVar4 != 0;
    }
  }
  return bVar3;
}

