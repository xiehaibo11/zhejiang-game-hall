
/* cocos2d::PUAffector::removeEmitterToExclude(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::PUAffector::removeEmitterToExclude(PUAffector *this,basic_string *param_1)

{
  size_t sVar1;
  size_t __n;
  basic_string *pbVar2;
  basic_string bVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  int iVar6;
  size_t sVar7;
  undefined8 uVar8;
  basic_string *__s1;
  basic_string *pbVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  undefined8 uVar12;
  
  pbVar9 = *(basic_string **)(this + 0x78);
  pbVar11 = *(basic_string **)(this + 0x80);
                    /* try { // try from 00e211e0 to 00f216b3 has its CatchHandler @ 00e211e0
                       catch() { ... } // from try @ 00e211e0 with catch @ 00e211e0
                       catch() { ... } // from try @ 00e216bc with catch @ 00e211e0
                       catch() { ... } // from try @ 00e221f4 with catch @ 00e211e0 */
  pbVar10 = pbVar9;
  if (pbVar9 != pbVar11) {
    __n = *(size_t *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    do {
      bVar3 = *pbVar9;
      sVar7 = (size_t)((byte)bVar3 >> 1);
      sVar1 = sVar7;
      if (((byte)bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar9 + 8);
      }
      if (sVar1 == __n) {
        __s1 = *(basic_string **)(pbVar9 + 0x10);
        if (((byte)bVar3 & 1) == 0) {
          __s1 = pbVar9 + 1;
        }
        pbVar4 = pbVar9;
        pbVar5 = pbVar2;
        sVar1 = __n;
        pbVar10 = pbVar9;
        if (((byte)bVar3 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) goto LAB_00e2128c;
            if (pbVar4[1] != *pbVar5) break;
            sVar7 = sVar7 - 1;
            pbVar4 = pbVar4 + 1;
            pbVar5 = pbVar5 + 1;
            sVar1 = sVar7;
          }
        }
        else if ((__n == 0) || (iVar6 = memcmp(__s1,pbVar2,__n), iVar6 == 0)) break;
      }
      pbVar9 = pbVar9 + 0x18;
      pbVar10 = pbVar11;
    } while (pbVar9 != pbVar11);
  }
LAB_00e2128c:
  if (pbVar10 == pbVar11) {
    return;
  }
  if (pbVar10 + 0x18 != pbVar11) {
    pbVar9 = pbVar10;
    do {
      if (((byte)*pbVar9 & 1) == 0) {
        *(undefined2 *)pbVar9 = 0;
      }
      else {
        **(undefined1 **)(pbVar9 + 0x10) = 0;
        *(undefined8 *)(pbVar9 + 8) = 0;
        if (((byte)*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar9 + 0x10));
          *(undefined8 *)pbVar9 = 0;
        }
      }
      uVar12 = *(undefined8 *)(pbVar9 + 0x20);
      uVar8 = *(undefined8 *)(pbVar9 + 0x28);
      pbVar10 = pbVar9 + 0x18;
      *(undefined8 *)(pbVar9 + 0x20) = 0;
      *(undefined8 *)(pbVar9 + 0x28) = 0;
      *(undefined8 *)(pbVar9 + 8) = uVar12;
      *(undefined8 *)pbVar9 = *(undefined8 *)(pbVar9 + 0x18);
      *(undefined8 *)(pbVar9 + 0x10) = uVar8;
      *(undefined8 *)(pbVar9 + 0x18) = 0;
      pbVar9 = pbVar10;
    } while (pbVar11 + -0x18 != pbVar10);
    pbVar11 = *(basic_string **)(this + 0x80);
    if (pbVar11 == pbVar10) goto LAB_00e21334;
  }
  bVar3 = pbVar11[-0x18];
  pbVar9 = pbVar11 + -0x18;
  while( true ) {
    pbVar2 = pbVar9;
    if (((byte)bVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar11 + -8));
    }
    if (pbVar10 == pbVar2) break;
    bVar3 = pbVar2[-0x18];
    pbVar9 = pbVar2 + -0x18;
    pbVar11 = pbVar2;
  }
LAB_00e21334:
  *(basic_string **)(this + 0x80) = pbVar10;
  return;
}

