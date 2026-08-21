
/* std::__ndk1::vector<char, std::__ndk1::allocator<char> >::__append(unsigned long, char const&) */

void __thiscall
std::__ndk1::vector<char,std::__ndk1::allocator<char>>::__append
          (vector<char,std::__ndk1::allocator<char>> *this,ulong param_1,char *param_2)

{
  char *pcVar1;
  void *__src;
  char cVar2;
  long lVar3;
  bool bVar4;
  void *pvVar5;
  size_t __n;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  
  pcVar10 = *(char **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pcVar10)) {
    do {
      param_1 = param_1 - 1;
      *pcVar10 = *param_2;
      pcVar10 = (char *)(*(long *)(this + 8) + 1);
      *(char **)(this + 8) = pcVar10;
    } while (param_1 != 0);
    return;
  }
  lVar11 = *(long *)this;
  uVar9 = ((long)pcVar10 - lVar11) + param_1;
  if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = *(long *)(this + 0x10) - lVar11;
  if (uVar6 < 0x3fffffffffffffff) {
    uVar6 = uVar6 * 2;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 != 0) goto LAB_00a97958;
    pvVar5 = (void *)0x0;
  }
  else {
    uVar9 = 0x7fffffffffffffff;
LAB_00a97958:
    pvVar5 = operator_new(uVar9);
  }
  pcVar1 = (char *)((long)pvVar5 + ((long)pcVar10 - lVar11));
  lVar3 = param_1 - lVar11;
  pcVar7 = pcVar1;
  if ((0x1f < param_1) &&
     ((param_2 + 1 <= pcVar1 || ((char *)((long)pvVar5 + (long)(pcVar10 + lVar3)) <= param_2)))) {
    cVar2 = *param_2;
    uVar8 = param_1 & 0xffffffffffffffe0;
    pcVar7 = (char *)((long)pvVar5 + (long)(pcVar10 + (0x10 - lVar11)));
    uVar6 = uVar8;
    do {
      *(ulong *)(pcVar7 + -8) =
           CONCAT17(cVar2,CONCAT16(cVar2,CONCAT15(cVar2,CONCAT14(cVar2,CONCAT13(cVar2,CONCAT12(cVar2
                                                  ,CONCAT11(cVar2,cVar2)))))));
      *(ulong *)(pcVar7 + -0x10) =
           CONCAT17(cVar2,CONCAT16(cVar2,CONCAT15(cVar2,CONCAT14(cVar2,CONCAT13(cVar2,CONCAT12(cVar2
                                                  ,CONCAT11(cVar2,cVar2)))))));
      *(ulong *)(pcVar7 + 8) =
           CONCAT17(cVar2,CONCAT16(cVar2,CONCAT15(cVar2,CONCAT14(cVar2,CONCAT13(cVar2,CONCAT12(cVar2
                                                  ,CONCAT11(cVar2,cVar2)))))));
      *(ulong *)pcVar7 =
           CONCAT17(cVar2,CONCAT16(cVar2,CONCAT15(cVar2,CONCAT14(cVar2,CONCAT13(cVar2,CONCAT12(cVar2
                                                  ,CONCAT11(cVar2,cVar2)))))));
      uVar6 = uVar6 - 0x20;
      pcVar7 = pcVar7 + 0x20;
    } while (uVar6 != 0);
    bVar4 = uVar8 == param_1;
    pcVar7 = pcVar1 + uVar8;
    param_1 = param_1 - uVar8;
    if (bVar4) goto LAB_00a979a4;
  }
  do {
    param_1 = param_1 - 1;
    *pcVar7 = *param_2;
    pcVar7 = pcVar7 + 1;
  } while (param_1 != 0);
LAB_00a979a4:
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  if (0 < (long)__n) {
    memcpy(pcVar1 + -__n,__src,__n);
  }
  *(char **)this = pcVar1 + -__n;
  *(char **)(this + 8) = (char *)((long)pvVar5 + (long)(pcVar10 + lVar3));
  *(ulong *)(this + 0x10) = (long)pvVar5 + uVar9;
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

