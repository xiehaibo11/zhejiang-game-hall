
/* cocos2d::StringUtils::trimUTF32Vector(std::__ndk1::vector<char32_t,
   std::__ndk1::allocator<char32_t> >&) */

void cocos2d::StringUtils::trimUTF32Vector(vector *param_1)

{
  bool bVar1;
  void *__dest;
  void *__src;
  long lVar2;
  uint uVar3;
  size_t __n;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  lVar2 = *(long *)param_1;
  uVar4 = *(long *)(param_1 + 8) - lVar2;
  iVar6 = (int)(uVar4 >> 2);
  iVar5 = iVar6 + -1;
  if (iVar6 < 1) {
    return;
  }
  uVar3 = *(uint *)(lVar2 + (long)iVar5 * 4);
  if ((int)uVar3 < 0x85) {
    if ((uVar3 < 0x21) && ((1L << ((ulong)uVar3 & 0x3f) & 0x100003e00U) != 0)) goto LAB_00fc545c;
  }
  else if (((uVar3 == 0x85) || (uVar3 == 0xa0)) || (uVar3 == 0x1680)) goto LAB_00fc545c;
  if (((10 < uVar3 - 0x2000) &&
      ((0x37 < uVar3 - 0x2028 || ((1L << ((ulong)(uVar3 - 0x2028) & 0x3f) & 0x80000000000083U) == 0)
       ))) && (uVar3 != 0x3000)) {
    return;
  }
LAB_00fc545c:
  if (-1 < iVar6 + -2) {
    lVar7 = (long)(iVar6 + -2);
    do {
      uVar3 = *(uint *)(lVar2 + lVar7 * 4);
      if ((int)uVar3 < 0x85) {
        if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100003e00U) == 0)) {
LAB_00fc54e4:
          if (((10 < uVar3 - 0x2000) &&
              ((0x37 < uVar3 - 0x2028 ||
               ((1L << ((ulong)(uVar3 - 0x2028) & 0x3f) & 0x80000000000083U) == 0)))) &&
             (uVar3 != 0x3000)) break;
        }
      }
      else if (((uVar3 != 0x85) && (uVar3 != 0xa0)) && (uVar3 != 0x1680)) goto LAB_00fc54e4;
      iVar5 = iVar5 + -1;
      bVar1 = 0 < lVar7;
      lVar7 = lVar7 + -1;
    } while (bVar1);
    if (iVar6 <= iVar5) {
      return;
    }
  }
  if (iVar5 != iVar6) {
    __src = (void *)(lVar2 + ((long)(uVar4 * 0x40000000) >> 0x1e));
    __n = *(long *)(param_1 + 8) - (long)__src;
    __dest = (void *)(lVar2 + (long)iVar5 * 4);
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    *(void **)(param_1 + 8) = (void *)((long)__dest + ((long)__n >> 2) * 4);
  }
  return;
}

