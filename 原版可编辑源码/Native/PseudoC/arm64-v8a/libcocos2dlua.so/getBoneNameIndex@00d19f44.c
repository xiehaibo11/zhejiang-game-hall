
/* cocos2d::SkinData::getBoneNameIndex(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

int __thiscall cocos2d::SkinData::getBoneNameIndex(SkinData *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  basic_string *pbVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  
  pbVar10 = *(byte **)this;
  pbVar3 = *(byte **)(this + 8);
  iVar9 = 0;
  if (pbVar10 != pbVar3) {
    sVar2 = *(size_t *)(param_1 + 8);
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar4 = param_1 + 1;
      sVar2 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      bVar5 = *pbVar10;
      sVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar10 + 8);
      }
      if (sVar1 == sVar2) {
        pbVar8 = *(byte **)(pbVar10 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar8 = pbVar10 + 1;
        }
        if ((bVar5 & 1) == 0) {
          if (sVar2 == 0) {
            return iVar9;
          }
          uVar7 = 0;
          while (*(basic_string *)(pbVar10 + uVar7 + 1) == pbVar4[uVar7]) {
            uVar7 = uVar7 + 1;
            if (bVar5 >> 1 == uVar7) {
              return iVar9;
            }
          }
        }
        else {
          if (sVar2 == 0) {
            return iVar9;
          }
          iVar6 = memcmp(pbVar8,pbVar4,sVar2);
          if (iVar6 == 0) {
            return iVar9;
          }
        }
      }
      pbVar10 = pbVar10 + 0x18;
      iVar9 = iVar9 + 1;
    } while (pbVar10 != pbVar3);
  }
  pbVar10 = *(byte **)(this + 0x18);
  pbVar3 = *(byte **)(this + 0x20);
  if (pbVar10 != pbVar3) {
    sVar2 = *(size_t *)(param_1 + 8);
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar4 = param_1 + 1;
      sVar2 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      bVar5 = *pbVar10;
      sVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar10 + 8);
      }
      if (sVar1 == sVar2) {
        pbVar8 = *(byte **)(pbVar10 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar8 = pbVar10 + 1;
        }
        if ((bVar5 & 1) == 0) {
          if (sVar2 == 0) {
            return iVar9;
          }
          uVar7 = 0;
          while (*(basic_string *)(pbVar10 + uVar7 + 1) == pbVar4[uVar7]) {
            uVar7 = uVar7 + 1;
            if (bVar5 >> 1 == uVar7) {
              return iVar9;
            }
          }
        }
        else {
          if (sVar2 == 0) {
            return iVar9;
          }
          iVar6 = memcmp(pbVar8,pbVar4,sVar2);
          if (iVar6 == 0) {
            return iVar9;
          }
        }
      }
      pbVar10 = pbVar10 + 0x18;
      iVar9 = iVar9 + 1;
    } while (pbVar10 != pbVar3);
  }
  return -1;
}

