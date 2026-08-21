
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
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  
  lVar2 = *(long *)param_1;
  uVar5 = *(long *)(param_1 + 8) - lVar2;
  iVar7 = (int)(uVar5 >> 1);
  iVar6 = iVar7 + -1;
  if (iVar7 < 1) {
    return;
  }
  uVar3 = *(ushort *)(lVar2 + (long)iVar6 * 2);
  if (4 < uVar3 - 9) {
    uVar4 = (uint)uVar3;
    uVar8 = (uint)uVar3;
    if (uVar4 < 0xa0) {
      if ((uVar8 == 0x20) || (uVar8 == 0x85)) goto LAB_0088a5bc;
    }
    else if ((uVar4 == 0xa0) || (uVar8 == 0x1680)) goto LAB_0088a5bc;
    if ((10 < uVar8 - 0x2000) &&
       (((0x37 < uVar4 - 0x2028 ||
         ((1L << ((ulong)(uVar4 - 0x2028) & 0x3f) & 0x80000000000083U) == 0)) && (uVar4 != 0x3000)))
       ) {
      return;
    }
  }
LAB_0088a5bc:
  if (-1 < iVar7 + -2) {
    lVar9 = (long)(iVar7 + -2);
    do {
      uVar3 = *(ushort *)(lVar2 + lVar9 * 2);
      if (4 < uVar3 - 9) {
        uVar4 = (uint)uVar3;
        uVar8 = (uint)uVar3;
        if (uVar4 < 0xa0) {
          if ((uVar8 != 0x20) && (uVar8 != 0x85)) {
LAB_0088a62c:
            if ((10 < uVar8 - 0x2000) &&
               (((0x37 < uVar4 - 0x2028 ||
                 ((1L << ((ulong)(uVar4 - 0x2028) & 0x3f) & 0x80000000000083U) == 0)) &&
                (uVar4 != 0x3000)))) break;
          }
        }
        else if ((uVar4 != 0xa0) && (uVar8 != 0x1680)) goto LAB_0088a62c;
      }
      iVar6 = iVar6 + -1;
      bVar1 = 0 < lVar9;
      lVar9 = lVar9 + -1;
    } while (bVar1);
    if (iVar7 <= iVar6) {
      return;
    }
  }
  if (iVar6 != iVar7) {
    __src = (void *)(lVar2 + ((long)(uVar5 * 0x80000000) >> 0x1f));
    __n = *(long *)(param_1 + 8) - (long)__src;
    __dest = (void *)(lVar2 + (long)iVar6 * 2);
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    *(void **)(param_1 + 8) = (void *)((long)__dest + ((long)__n >> 1) * 2);
  }
  return;
}

