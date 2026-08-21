
/* std::__ndk1::vector<char, std::__ndk1::allocator<char> >::__append(unsigned long, char const&) */

void __thiscall
std::__ndk1::vector<char,std::__ndk1::allocator<char>>::__append
          (vector<char,std::__ndk1::allocator<char>> *this,ulong param_1,char *param_2)

{
  void *__src;
  char cVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  
  pcVar4 = *(char **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pcVar4)) {
    pcVar9 = pcVar4;
    if (param_1 != 0) {
      pcVar9 = pcVar4 + param_1;
      if ((0x1f < param_1) && ((param_2 + 1 <= pcVar4 || (pcVar9 <= param_2)))) {
        cVar1 = *param_2;
        uVar3 = param_1 & 0xffffffffffffffe0;
        pcVar5 = pcVar4 + 0x10;
        uVar8 = uVar3;
        do {
          *(ulong *)(pcVar5 + -8) =
               CONCAT17(cVar1,CONCAT16(cVar1,CONCAT15(cVar1,CONCAT14(cVar1,CONCAT13(cVar1,CONCAT12(
                                                  cVar1,CONCAT11(cVar1,cVar1)))))));
          *(ulong *)(pcVar5 + -0x10) =
               CONCAT17(cVar1,CONCAT16(cVar1,CONCAT15(cVar1,CONCAT14(cVar1,CONCAT13(cVar1,CONCAT12(
                                                  cVar1,CONCAT11(cVar1,cVar1)))))));
          *(ulong *)(pcVar5 + 8) =
               CONCAT17(cVar1,CONCAT16(cVar1,CONCAT15(cVar1,CONCAT14(cVar1,CONCAT13(cVar1,CONCAT12(
                                                  cVar1,CONCAT11(cVar1,cVar1)))))));
          *(ulong *)pcVar5 =
               CONCAT17(cVar1,CONCAT16(cVar1,CONCAT15(cVar1,CONCAT14(cVar1,CONCAT13(cVar1,CONCAT12(
                                                  cVar1,CONCAT11(cVar1,cVar1)))))));
          uVar8 = uVar8 - 0x20;
          pcVar5 = pcVar5 + 0x20;
        } while (uVar8 != 0);
        pcVar4 = pcVar4 + uVar3;
        if (uVar3 == param_1) goto LAB_00e8da78;
      }
      do {
        pcVar5 = pcVar4 + 1;
        *pcVar4 = *param_2;
        pcVar4 = pcVar5;
      } while (pcVar9 != pcVar5);
    }
LAB_00e8da78:
    *(char **)(this + 8) = pcVar9;
    return;
  }
  lVar10 = *(long *)this;
  lVar11 = (long)pcVar4 - lVar10;
  uVar8 = lVar11 + param_1;
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *(long *)(this + 0x10) - lVar10;
  if (uVar3 < 0x3fffffffffffffff) {
    uVar3 = uVar3 * 2;
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    if (uVar8 != 0) goto LAB_00e8da84;
    pvVar2 = (void *)0x0;
  }
  else {
    uVar8 = 0x7fffffffffffffff;
LAB_00e8da84:
    pvVar2 = operator_new(uVar8);
  }
  pcVar9 = (char *)((long)pvVar2 + lVar11);
  pcVar5 = pcVar9;
  if ((0x1f < param_1) && ((param_2 + 1 <= pcVar9 || (pcVar9 + param_1 <= param_2)))) {
    cVar1 = *param_2;
    uVar6 = param_1 & 0xffffffffffffffe0;
    puVar7 = (undefined8 *)((long)pvVar2 + lVar11 + 0x10);
    uVar3 = uVar6;
    do {
      puVar7[-1] = CONCAT17(cVar1,CONCAT16(cVar1,CONCAT15(cVar1,CONCAT14(cVar1,CONCAT13(cVar1,
                                                  CONCAT12(cVar1,CONCAT11(cVar1,cVar1)))))));
      puVar7[-2] = CONCAT17(cVar1,CONCAT16(cVar1,CONCAT15(cVar1,CONCAT14(cVar1,CONCAT13(cVar1,
                                                  CONCAT12(cVar1,CONCAT11(cVar1,cVar1)))))));
      puVar7[1] = CONCAT17(cVar1,CONCAT16(cVar1,CONCAT15(cVar1,CONCAT14(cVar1,CONCAT13(cVar1,
                                                  CONCAT12(cVar1,CONCAT11(cVar1,cVar1)))))));
      *puVar7 = CONCAT17(cVar1,CONCAT16(cVar1,CONCAT15(cVar1,CONCAT14(cVar1,CONCAT13(cVar1,CONCAT12(
                                                  cVar1,CONCAT11(cVar1,cVar1)))))));
      uVar3 = uVar3 - 0x20;
      puVar7 = puVar7 + 4;
    } while (uVar3 != 0);
    pcVar5 = pcVar9 + uVar6;
    if (uVar6 == param_1) goto LAB_00e8db0c;
  }
  pcVar4 = (char *)((long)pvVar2 + (long)(pcVar4 + ((param_1 - (long)pcVar5) - lVar10)));
  do {
    pcVar4 = pcVar4 + -1;
    *pcVar5 = *param_2;
    pcVar5 = pcVar5 + 1;
  } while (pcVar4 != (char *)0x0);
LAB_00e8db0c:
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  if (0 < (long)__n) {
    memcpy(pcVar9 + -__n,__src,__n);
  }
  *(char **)this = pcVar9 + -__n;
  *(char **)(this + 8) = pcVar9 + param_1;
  *(ulong *)(this + 0x10) = (long)pvVar2 + uVar8;
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

