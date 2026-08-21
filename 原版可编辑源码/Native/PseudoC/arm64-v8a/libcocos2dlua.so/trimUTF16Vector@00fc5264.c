
/* cocos2d::StringUtils::trimUTF16Vector(std::__ndk1::vector<char16_t,
   std::__ndk1::allocator<char16_t> >&) */

void cocos2d::StringUtils::trimUTF16Vector(vector *param_1)

{
  bool bVar1;
  void *__dest;
  void *__src;
  long lVar2;
  ushort uVar3;
  size_t __n;
  ulong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar9;
  uint uVar8;
  
  lVar2 = *(long *)param_1;
  uVar4 = *(long *)(param_1 + 8) - lVar2;
  iVar6 = (int)(uVar4 >> 1);
  iVar5 = iVar6 + -1;
  if (iVar6 < 1) {
    return;
  }
  uVar3 = *(ushort *)(lVar2 + (long)iVar5 * 2);
  uVar7 = (uint)uVar3;
  uVar8 = (uint)uVar3;
  if (uVar3 < 0x85) {
    if ((uVar7 < 0x21) && ((1L << ((ulong)uVar3 & 0x3f) & 0x100003e00U) != 0)) goto LAB_00fc52b8;
  }
  else if (((uVar8 == 0x85) || (uVar8 == 0xa0)) || (uVar7 == 0x1680)) goto LAB_00fc52b8;
  if (((10 < uVar7 - 0x2000) &&
      ((0x37 < uVar8 - 0x2028 || ((1L << ((ulong)(uVar8 - 0x2028) & 0x3f) & 0x80000000000083U) == 0)
       ))) && (uVar8 != 0x3000)) {
    return;
  }
LAB_00fc52b8:
  if (-1 < iVar6 + -2) {
    lVar9 = (long)(iVar6 + -2);
    do {
      uVar3 = *(ushort *)(lVar2 + lVar9 * 2);
      uVar7 = (uint)uVar3;
      uVar8 = (uint)uVar3;
      if (uVar3 < 0x85) {
        if ((0x20 < uVar7) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100003e00U) == 0)) {
LAB_00fc533c:
          if (((10 < uVar7 - 0x2000) &&
              ((0x37 < uVar8 - 0x2028 ||
               ((1L << ((ulong)(uVar8 - 0x2028) & 0x3f) & 0x80000000000083U) == 0)))) &&
             (uVar8 != 0x3000)) break;
        }
      }
      else if (((uVar8 != 0x85) && (uVar8 != 0xa0)) && (uVar7 != 0x1680)) goto LAB_00fc533c;
      iVar5 = iVar5 + -1;
      bVar1 = 0 < lVar9;
      lVar9 = lVar9 + -1;
    } while (bVar1);
    if (iVar6 <= iVar5) {
      return;
    }
  }
  if (iVar5 != iVar6) {
    __src = (void *)(lVar2 + ((long)(uVar4 * 0x80000000) >> 0x1f));
    __n = *(long *)(param_1 + 8) - (long)__src;
    __dest = (void *)(lVar2 + (long)iVar5 * 2);
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    *(void **)(param_1 + 8) = (void *)((long)__dest + ((long)__n >> 1) * 2);
  }
  return;
}

