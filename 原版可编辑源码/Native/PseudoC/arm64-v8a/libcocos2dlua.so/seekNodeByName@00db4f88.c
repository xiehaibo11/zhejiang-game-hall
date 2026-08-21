
/* cocos2d::ui::Helper::seekNodeByName(cocos2d::Node*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Node * cocos2d::ui::Helper::seekNodeByName(Node *param_1,basic_string *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  basic_string bVar4;
  basic_string bVar5;
  int iVar6;
  basic_string *pbVar7;
  long *plVar8;
  Node *pNVar9;
  basic_string *__s1;
  size_t sVar10;
  basic_string *__s2;
  
  if (param_1 == (Node *)0x0) {
    return (Node *)0x0;
  }
  pbVar7 = (basic_string *)(**(code **)(*(long *)param_1 + 0x2c8))(param_1);
  bVar4 = *pbVar7;
  bVar5 = *param_2;
  sVar10 = (size_t)((byte)bVar4 >> 1);
  __n = sVar10;
  if (((byte)bVar4 & 1) != 0) {
    __n = *(size_t *)(pbVar7 + 8);
  }
  sVar1 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(basic_string **)(pbVar7 + 0x10);
    __s2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)bVar4 & 1) == 0) {
      __s1 = pbVar7 + 1;
    }
    if (((byte)bVar5 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if (((byte)bVar4 & 1) == 0) {
      while( true ) {
        if (__n == 0) {
          return param_1;
        }
        pbVar7 = pbVar7 + 1;
        if (*pbVar7 != *__s2) break;
        sVar10 = sVar10 - 1;
        __s2 = __s2 + 1;
        __n = sVar10;
      }
    }
    else {
      if (__n == 0) {
        return param_1;
      }
      iVar6 = memcmp(__s1,__s2,__n);
      if (iVar6 == 0) {
        return param_1;
      }
    }
  }
                    /* try { // try from 00db5048 to 00eb504f has its CatchHandler @ 00db51d8 */
  plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  puVar2 = (undefined8 *)*plVar8;
  puVar3 = (undefined8 *)plVar8[1];
  while( true ) {
    if (puVar2 == puVar3) {
      return (Node *)0x0;
    }
    if (((Node *)*puVar2 != (Node *)0x0) &&
       (pNVar9 = (Node *)seekNodeByName((Node *)*puVar2,param_2), pNVar9 != (Node *)0x0)) break;
    puVar2 = puVar2 + 1;
  }
  return pNVar9;
}

