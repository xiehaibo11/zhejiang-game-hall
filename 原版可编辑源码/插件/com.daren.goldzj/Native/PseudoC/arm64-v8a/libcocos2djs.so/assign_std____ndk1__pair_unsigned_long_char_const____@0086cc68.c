
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::pair<unsigned long, char
   const*>*>::value&&is_constructible<std::__ndk1::pair<unsigned long, char const*>,
   std::__ndk1::iterator_traits<std::__ndk1::pair<unsigned long, char const*>*>::reference>::value,
   void>::type std::__ndk1::vector<std::__ndk1::pair<unsigned long, char const*>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long, char const*> >
   >::assign<std::__ndk1::pair<unsigned long, char const*>*>(std::__ndk1::pair<unsigned long, char
   const*>*, std::__ndk1::pair<unsigned long, char const*>*) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
::assign<std::__ndk1::pair<unsigned_long,char_const*>*>
          (vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
           *this,pair *param_1,pair *param_2)

{
  ulong uVar1;
  pair *__src;
  pair *ppVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  pair *ppVar5;
  ulong uVar6;
  pair *ppVar7;
  pair *ppVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar3 = *(long *)(this + 0x10);
  ppVar2 = *(pair **)this;
  sVar10 = (long)param_2 - (long)param_1;
  uVar11 = (long)sVar10 >> 4;
  if ((ulong)(lVar3 - (long)ppVar2 >> 4) < uVar11) {
    if (ppVar2 != (pair *)0x0) {
      *(pair **)(this + 8) = ppVar2;
      operator_delete(ppVar2);
      lVar3 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (uVar11 >> 0x3c != 0) {
LAB_0086cce4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((ulong)(lVar3 >> 4) < 0x7ffffffffffffff) {
      uVar4 = lVar3 >> 3;
      if ((uVar11 <= uVar4) && (uVar11 = uVar4, uVar4 >> 0x3c != 0)) goto LAB_0086cce4;
    }
    else {
      uVar11 = 0xfffffffffffffff;
    }
    __dest = operator_new(uVar11 * 0x10);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar11 * 0x10);
    if ((long)sVar10 < 1) {
      return;
    }
    memcpy(__dest,param_1,sVar10);
    lVar3 = (long)__dest + sVar10;
    goto LAB_0086ce40;
  }
  uVar4 = *(long *)(this + 8) - (long)ppVar2 >> 4;
  __src = param_1 + (*(long *)(this + 8) - (long)ppVar2);
  if (uVar11 <= uVar4) {
    __src = param_2;
  }
  if (__src != param_1) {
    ppVar5 = __src + (-0x10 - (long)param_1);
    uVar1 = ((ulong)ppVar5 >> 4) + 1;
    ppVar7 = ppVar2;
    if (uVar1 < 4) {
LAB_0086cdfc:
      do {
        ppVar8 = param_1 + 0x10;
        uVar12 = *(undefined8 *)param_1;
        *(undefined8 *)(ppVar7 + 8) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)ppVar7 = uVar12;
        ppVar7 = ppVar7 + 0x10;
        param_1 = ppVar8;
      } while (__src != ppVar8);
    }
    else {
      uVar6 = (ulong)ppVar5 & 0xfffffffffffffff0;
      if ((ppVar2 < param_1 + uVar6 + 8 && param_1 < ppVar2 + uVar6 + 8) ||
         (ppVar2 + 8 < param_1 + uVar6 + 0x10 && param_1 + 8 < ppVar2 + uVar6 + 0x10))
      goto LAB_0086cdfc;
      uVar9 = uVar1 & 0x1ffffffffffffffc;
      ppVar7 = ppVar2 + 0x20;
      ppVar8 = param_1 + 0x20;
      uVar6 = uVar9;
      do {
        uVar12 = *(undefined8 *)(ppVar8 + -0x20);
        uVar14 = *(undefined8 *)(ppVar8 + -8);
        uVar13 = *(undefined8 *)(ppVar8 + -0x10);
        uVar16 = *(undefined8 *)(ppVar8 + 8);
        uVar15 = *(undefined8 *)ppVar8;
        uVar18 = *(undefined8 *)(ppVar8 + 0x18);
        uVar17 = *(undefined8 *)(ppVar8 + 0x10);
        uVar6 = uVar6 - 4;
        *(undefined8 *)(ppVar7 + -0x18) = *(undefined8 *)(ppVar8 + -0x18);
        *(undefined8 *)(ppVar7 + -0x20) = uVar12;
        *(undefined8 *)(ppVar7 + -8) = uVar14;
        *(undefined8 *)(ppVar7 + -0x10) = uVar13;
        *(undefined8 *)(ppVar7 + 8) = uVar16;
        *(undefined8 *)ppVar7 = uVar15;
        *(undefined8 *)(ppVar7 + 0x18) = uVar18;
        *(undefined8 *)(ppVar7 + 0x10) = uVar17;
        ppVar7 = ppVar7 + 0x40;
        ppVar8 = ppVar8 + 0x40;
      } while (uVar6 != 0);
      ppVar7 = ppVar2 + uVar9 * 0x10;
      param_1 = param_1 + uVar9 * 0x10;
      if (uVar1 != uVar9) goto LAB_0086cdfc;
    }
    ppVar2 = ppVar2 + ((ulong)ppVar5 & 0xfffffffffffffff0) + 0x10;
  }
  if (uVar11 <= uVar4) {
    *(pair **)(this + 8) = ppVar2;
    return;
  }
  sVar10 = (long)param_2 - (long)__src;
  if ((long)sVar10 < 1) {
    return;
  }
  memcpy(*(void **)(this + 8),__src,sVar10);
  lVar3 = *(long *)(this + 8) + sVar10;
LAB_0086ce40:
  *(long *)(this + 8) = lVar3;
  return;
}

