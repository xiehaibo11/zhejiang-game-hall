
/* cocos2d::__Dictionary::setObject(cocos2d::Ref*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::__Dictionary::setObject(__Dictionary *this,Ref *param_1,basic_string *param_2)

{
  basic_string *pbVar1;
  basic_string *__s;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  basic_string *pbVar7;
  DictElement *pDVar8;
  uint uVar9;
  void *__s1;
  Ref *this_00;
  uint uVar10;
  uint uVar11;
  
  if (*(int *)(this + 0x38) == 0) {
    *(undefined4 *)(this + 0x38) = 1;
    lVar5 = *(long *)(this + 0x30);
  }
  else {
    lVar5 = *(long *)(this + 0x30);
  }
  if (lVar5 != 0) {
    pbVar7 = *(basic_string **)(param_2 + 0x10);
    pbVar1 = param_2 + 1;
    if (((byte)*param_2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    sVar3 = strlen((char *)pbVar7);
    uVar4 = 0xfeedbeef;
    uVar9 = (uint)sVar3;
    uVar10 = 0x9e3779b9;
    uVar11 = 0x9e3779b9;
    while (0xb < uVar9) {
      uVar9 = (int)sVar3 - 0xc;
      sVar3 = (size_t)uVar9;
      uVar4 = *(int *)(pbVar7 + 8) + uVar4;
      uVar11 = ((*(int *)pbVar7 + uVar11) - (*(int *)(pbVar7 + 4) + uVar10)) - uVar4 ^ uVar4 >> 0xd;
      uVar10 = ((*(int *)(pbVar7 + 4) + uVar10) - uVar4) - uVar11 ^ uVar11 << 8;
      uVar4 = (uVar4 - uVar11) - uVar10 ^ uVar10 >> 0xd;
      uVar11 = (uVar11 - uVar10) - uVar4 ^ uVar4 >> 0xc;
      uVar10 = (uVar10 - uVar4) - uVar11 ^ uVar11 << 0x10;
      uVar4 = (uVar4 - uVar11) - uVar10 ^ uVar10 >> 5;
      uVar11 = (uVar11 - uVar10) - uVar4 ^ uVar4 >> 3;
      uVar10 = (uVar10 - uVar4) - uVar11 ^ uVar11 << 10;
      uVar4 = (uVar4 - uVar11) - uVar10 ^ uVar10 >> 0xf;
      pbVar7 = pbVar7 + 0xc;
    }
    __s = pbVar1;
    if (((byte)*param_2 & 1) != 0) {
      __s = *(basic_string **)(param_2 + 0x10);
    }
    sVar3 = strlen((char *)__s);
    uVar4 = uVar4 + (int)sVar3;
    switch(uVar9) {
    case 0xb:
      uVar4 = uVar4 + (uint)(byte)pbVar7[10] * 0x1000000;
    case 10:
      uVar4 = uVar4 + (uint)(byte)pbVar7[9] * 0x10000;
    case 9:
      uVar4 = uVar4 + (uint)(byte)pbVar7[8] * 0x100;
    case 8:
      uVar10 = uVar10 + (uint)(byte)pbVar7[7] * 0x1000000;
    case 7:
      uVar10 = uVar10 + (uint)(byte)pbVar7[6] * 0x10000;
    case 6:
      uVar10 = uVar10 + (uint)(byte)pbVar7[5] * 0x100;
    case 5:
      uVar10 = uVar10 + (byte)pbVar7[4];
    case 4:
      uVar11 = uVar11 + (uint)(byte)pbVar7[3] * 0x1000000;
    case 3:
      uVar11 = uVar11 + (uint)(byte)pbVar7[2] * 0x10000;
    case 2:
      uVar11 = uVar11 + (uint)(byte)pbVar7[1] * 0x100;
    case 1:
      uVar11 = uVar11 + (byte)*pbVar7;
    }
    uVar11 = (uVar11 - uVar4) - uVar10 ^ uVar4 >> 0xd;
    uVar10 = (uVar10 - uVar4) - uVar11 ^ uVar11 << 8;
    plVar6 = *(long **)(*(long *)(this + 0x30) + 0x110);
    uVar4 = (uVar4 - uVar11) - uVar10 ^ uVar10 >> 0xd;
    uVar11 = (uVar11 - uVar10) - uVar4 ^ uVar4 >> 0xc;
    uVar10 = (uVar10 - uVar4) - uVar11 ^ uVar11 << 0x10;
    uVar4 = (uVar4 - uVar11) - uVar10 ^ uVar10 >> 5;
    uVar11 = (uVar11 - uVar10) - uVar4 ^ uVar4 >> 3;
    uVar10 = (uVar10 - uVar4) - uVar11 ^ uVar11 << 10;
    lVar5 = *(long *)(*plVar6 +
                     (ulong)(((uVar4 - uVar11) - uVar10 ^ uVar10 >> 0xf) & (int)plVar6[1] - 1U) *
                     0x10);
    if (lVar5 != 0) {
      while( true ) {
        pDVar8 = (DictElement *)(lVar5 - plVar6[4]);
        uVar4 = *(uint *)(pDVar8 + 0x140);
        pbVar7 = pbVar1;
        if (((byte)*param_2 & 1) != 0) {
          pbVar7 = *(basic_string **)(param_2 + 0x10);
        }
        sVar3 = strlen((char *)pbVar7);
        if (sVar3 == uVar4) {
          __s1 = *(void **)(pDVar8 + 0x138);
          pbVar7 = pbVar1;
          if (((byte)*param_2 & 1) != 0) {
            pbVar7 = *(basic_string **)(param_2 + 0x10);
          }
          sVar3 = strlen((char *)pbVar7);
          iVar2 = memcmp(__s1,pbVar7,sVar3);
          if (iVar2 == 0) {
            this_00 = *(Ref **)(pDVar8 + 0x108);
            if (this_00 == param_1) {
              return;
            }
            Ref::retain(this_00);
            removeObjectForElememt(this,pDVar8);
            setObjectUnSafe(this,param_1,param_2);
            Ref::release(this_00);
            return;
          }
        }
        lVar5 = *(long *)(pDVar8 + 0x130);
        if (lVar5 == 0) break;
        plVar6 = *(long **)(*(long *)(this + 0x30) + 0x110);
      }
    }
  }
  setObjectUnSafe(this,param_1,param_2);
  return;
}

