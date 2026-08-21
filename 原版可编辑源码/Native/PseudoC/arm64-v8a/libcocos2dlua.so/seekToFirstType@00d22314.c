
/* cocos2d::Bundle3D::seekToFirstType(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

byte * __thiscall
cocos2d::Bundle3D::seekToFirstType(Bundle3D *this,uint param_1,basic_string *param_2)

{
  byte *pbVar1;
  long lVar2;
  size_t sVar3;
  size_t __n;
  basic_string *__s1;
  uint uVar4;
  basic_string bVar5;
  byte bVar6;
  basic_string *pbVar7;
  int iVar8;
  basic_string *__s2;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar4 = *(uint *)(this + 0x120);
  if (uVar4 != 0) {
    bVar5 = *param_2;
    __n = *(size_t *)(param_2 + 8);
    __s1 = *(basic_string **)(param_2 + 0x10);
    lVar10 = *(long *)(this + 0x128);
    uVar11 = 0;
    if (((byte)bVar5 & 1) == 0) {
      __s1 = param_2 + 1;
      __n = (ulong)((byte)bVar5 >> 1);
    }
    do {
      pbVar1 = (byte *)(lVar10 + uVar11 * 0x20);
      if (*(uint *)(pbVar1 + 0x18) == param_1) {
        if (__n == 0) {
LAB_00d223f8:
          uVar11 = BundleReader::seek((BundleReader *)(this + 0xe0),
                                      (ulong)*(uint *)(lVar10 + (uVar11 & 0xffffffff) * 0x20 + 0x1c)
                                      ,0);
          if ((uVar11 & 1) != 0) {
            return pbVar1;
          }
          return (byte *)0x0;
        }
        bVar6 = *pbVar1;
        lVar2 = lVar10 + uVar11 * 0x20;
        sVar3 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar3 = *(size_t *)(lVar2 + 8);
        }
        if (__n == sVar3) {
          __s2 = *(basic_string **)(lVar2 + 0x10);
          if ((bVar6 & 1) == 0) {
            __s2 = (basic_string *)(pbVar1 + 1);
          }
          uVar9 = (ulong)((byte)bVar5 >> 1);
          pbVar7 = param_2;
          if (((byte)bVar5 & 1) == 0) {
            while (pbVar7[1] == *__s2) {
              uVar9 = uVar9 - 1;
              __s2 = __s2 + 1;
              pbVar7 = pbVar7 + 1;
              if (uVar9 == 0) goto LAB_00d223f8;
            }
          }
          else {
            iVar8 = memcmp(__s1,__s2,__n);
            if (iVar8 == 0) goto LAB_00d223f8;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  return (byte *)0x0;
}

