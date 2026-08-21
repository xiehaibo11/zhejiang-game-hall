
/* cocos2d::__Dictionary::objectForKey(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall cocos2d::__Dictionary::objectForKey(__Dictionary *this,basic_string *param_1)

{
  basic_string *pbVar1;
  basic_string *__s;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  long *plVar5;
  basic_string *pbVar6;
  long lVar7;
  void *__s1;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((*(int *)(this + 0x38) != 0) && (*(long *)(this + 0x30) != 0)) {
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    pbVar1 = param_1 + 1;
    if (((byte)*param_1 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    sVar3 = strlen((char *)pbVar6);
    uVar4 = 0xfeedbeef;
    uVar8 = (uint)sVar3;
    uVar9 = 0x9e3779b9;
    uVar10 = 0x9e3779b9;
    while (0xb < uVar8) {
      uVar8 = (int)sVar3 - 0xc;
      sVar3 = (size_t)uVar8;
      uVar4 = *(int *)(pbVar6 + 8) + uVar4;
      uVar10 = ((*(int *)pbVar6 + uVar10) - (*(int *)(pbVar6 + 4) + uVar9)) - uVar4 ^ uVar4 >> 0xd;
      uVar9 = ((*(int *)(pbVar6 + 4) + uVar9) - uVar4) - uVar10 ^ uVar10 << 8;
      uVar4 = (uVar4 - uVar10) - uVar9 ^ uVar9 >> 0xd;
      uVar10 = (uVar10 - uVar9) - uVar4 ^ uVar4 >> 0xc;
      uVar9 = (uVar9 - uVar4) - uVar10 ^ uVar10 << 0x10;
      uVar4 = (uVar4 - uVar10) - uVar9 ^ uVar9 >> 5;
      uVar10 = (uVar10 - uVar9) - uVar4 ^ uVar4 >> 3;
      uVar9 = (uVar9 - uVar4) - uVar10 ^ uVar10 << 10;
      uVar4 = (uVar4 - uVar10) - uVar9 ^ uVar9 >> 0xf;
      pbVar6 = pbVar6 + 0xc;
    }
    __s = pbVar1;
    if (((byte)*param_1 & 1) != 0) {
      __s = *(basic_string **)(param_1 + 0x10);
    }
    sVar3 = strlen((char *)__s);
    uVar4 = uVar4 + (int)sVar3;
    switch(uVar8) {
    case 0xb:
      uVar4 = uVar4 + (uint)(byte)pbVar6[10] * 0x1000000;
    case 10:
      uVar4 = uVar4 + (uint)(byte)pbVar6[9] * 0x10000;
    case 9:
      uVar4 = uVar4 + (uint)(byte)pbVar6[8] * 0x100;
    case 8:
      uVar9 = uVar9 + (uint)(byte)pbVar6[7] * 0x1000000;
    case 7:
      uVar9 = uVar9 + (uint)(byte)pbVar6[6] * 0x10000;
    case 6:
      uVar9 = uVar9 + (uint)(byte)pbVar6[5] * 0x100;
    case 5:
      uVar9 = uVar9 + (byte)pbVar6[4];
    case 4:
      uVar10 = uVar10 + (uint)(byte)pbVar6[3] * 0x1000000;
    case 3:
      uVar10 = uVar10 + (uint)(byte)pbVar6[2] * 0x10000;
    case 2:
      uVar10 = uVar10 + (uint)(byte)pbVar6[1] * 0x100;
    case 1:
      uVar10 = uVar10 + (byte)*pbVar6;
    }
    uVar10 = (uVar10 - uVar4) - uVar9 ^ uVar4 >> 0xd;
    uVar9 = (uVar9 - uVar4) - uVar10 ^ uVar10 << 8;
    plVar5 = *(long **)(*(long *)(this + 0x30) + 0x110);
    uVar4 = (uVar4 - uVar10) - uVar9 ^ uVar9 >> 0xd;
    uVar10 = (uVar10 - uVar9) - uVar4 ^ uVar4 >> 0xc;
    uVar9 = (uVar9 - uVar4) - uVar10 ^ uVar10 << 0x10;
    uVar4 = (uVar4 - uVar10) - uVar9 ^ uVar9 >> 5;
    uVar10 = (uVar10 - uVar9) - uVar4 ^ uVar4 >> 3;
    uVar9 = (uVar9 - uVar4) - uVar10 ^ uVar10 << 10;
    lVar7 = *(long *)(*plVar5 +
                     (ulong)(((uVar4 - uVar10) - uVar9 ^ uVar9 >> 0xf) & (int)plVar5[1] - 1U) * 0x10
                     );
    if (lVar7 != 0) {
      while( true ) {
        lVar7 = lVar7 - plVar5[4];
        uVar4 = *(uint *)(lVar7 + 0x140);
        pbVar6 = pbVar1;
        if (((byte)*param_1 & 1) != 0) {
          pbVar6 = *(basic_string **)(param_1 + 0x10);
        }
        sVar3 = strlen((char *)pbVar6);
        if (sVar3 == uVar4) {
          __s1 = *(void **)(lVar7 + 0x138);
          pbVar6 = pbVar1;
          if (((byte)*param_1 & 1) != 0) {
            pbVar6 = *(basic_string **)(param_1 + 0x10);
          }
          sVar3 = strlen((char *)pbVar6);
          iVar2 = memcmp(__s1,pbVar6,sVar3);
          if (iVar2 == 0) {
            return *(undefined8 *)(lVar7 + 0x108);
          }
        }
        lVar7 = *(long *)(lVar7 + 0x130);
        if (lVar7 == 0) break;
        plVar5 = *(long **)(*(long *)(this + 0x30) + 0x110);
      }
    }
  }
  return 0;
}

