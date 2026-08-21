
/* cocostudio::PageViewReader::getResourceType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

bool __thiscall cocostudio::PageViewReader::getResourceType(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
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
    iVar3 = memcmp(pbVar5,"Default",7);
    if (iVar3 == 0) {
      return false;
    }
  }
  else if (uVar1 == 6) {
    pbVar5 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar5 = param_2 + 1;
    }
    iVar3 = memcmp(pbVar5,"Normal",6);
    if (iVar3 == 0) {
      return false;
    }
  }
  lVar4 = FlatBuffersSerialize::getInstance();
  if (*(char *)(lVar4 + 0x30) != '\0') {
    bVar2 = *param_2;
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    if (uVar1 == 0xe) {
      pbVar5 = *(byte **)(param_2 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar5 = param_2 + 1;
      }
      iVar3 = memcmp(pbVar5,"MarkedSubImage",0xe);
      return iVar3 != 0;
    }
  }
  return true;
}

