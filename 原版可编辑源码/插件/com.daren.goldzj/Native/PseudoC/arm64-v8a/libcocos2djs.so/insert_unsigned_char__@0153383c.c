
/* std::__ndk1::enable_if<__is_forward_iterator<unsigned char*>::value&&is_constructible<unsigned
   char, std::__ndk1::iterator_traits<unsigned char*>::reference>::value,
   std::__ndk1::__wrap_iter<unsigned char*> >::type std::__ndk1::vector<unsigned char,
   v8::internal::ZoneAllocator<unsigned char> >::insert<unsigned
   char*>(std::__ndk1::__wrap_iter<unsigned char const*>, unsigned char*, unsigned char*) */

undefined1 * __thiscall
std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
insert<unsigned_char*>
          (vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *this,
          undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  Zone *this_00;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar7 = (long)param_4 - (long)param_3;
  if ((long)uVar7 < 1) {
    return param_2;
  }
  puVar4 = *(undefined1 **)(this + 8);
  if ((long)uVar7 <= *(long *)(this + 0x10) - (long)puVar4) {
    lVar15 = (long)puVar4 - (long)param_2;
    puVar9 = puVar4;
    if (lVar15 < (long)uVar7) {
      for (puVar5 = param_3 + lVar15; puVar5 != param_4; puVar5 = puVar5 + 1) {
        *puVar9 = *puVar5;
        puVar9 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar9;
      }
      param_4 = param_3 + lVar15;
      if (lVar15 < 1) {
        return param_2;
      }
    }
    __n = (long)puVar9 - (long)(param_2 + uVar7);
    if (puVar9 + -uVar7 < puVar4) {
      puVar4 = puVar4 + (long)(param_2 + uVar7 + (-(long)param_2 - (long)puVar9));
      puVar8 = puVar9 + -uVar7;
      puVar5 = puVar9;
      do {
        puVar4 = puVar4 + -1;
        *puVar5 = *puVar8;
        puVar5 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar5;
        puVar8 = puVar8 + 1;
      } while (puVar4 != (undefined1 *)0x0);
    }
    if (__n != 0) {
      memmove(puVar9 + -__n,param_2,__n);
    }
    if ((long)param_4 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)param_4 - (long)param_3);
    return param_2;
  }
  lVar15 = *(long *)this;
  puVar4 = puVar4 + (uVar7 - lVar15);
  if ((ulong)puVar4 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *(long *)(this + 0x10) - lVar15;
  puVar9 = (undefined1 *)(uVar3 * 2);
  if (puVar4 <= puVar9) {
    puVar4 = puVar9;
  }
  if (0x3ffffffe < uVar3) {
    puVar4 = (undefined1 *)0x7fffffff;
  }
  if (puVar4 == (undefined1 *)0x0) {
    lVar2 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar3 = (ulong)(puVar4 + 7) & 0xfffffffffffffff8;
    lVar2 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar2) < uVar3) {
      lVar2 = v8::internal::Zone::NewExpand(this_00,uVar3);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar2 + uVar3;
    }
  }
  puVar9 = param_2 + (lVar2 - lVar15);
  puVar5 = puVar9;
  if (param_3 != param_4) {
    puVar8 = puVar9;
    if ((0x1f < uVar7) &&
       ((param_4 <= puVar9 ||
        (param_4 + (long)(param_2 + lVar2 + (-lVar15 - (long)param_3)) <= param_3)))) {
      uVar12 = uVar7 & 0xffffffffffffffe0;
      puVar11 = (undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + uVar12;
      puVar6 = (undefined8 *)(param_2 + (lVar2 - lVar15) + 0x10);
      uVar3 = uVar12;
      do {
        puVar1 = puVar11 + -1;
        uVar16 = puVar11[-2];
        uVar18 = puVar11[1];
        uVar17 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar3 = uVar3 - 0x20;
        puVar6[-1] = *puVar1;
        puVar6[-2] = uVar16;
        puVar6[1] = uVar18;
        *puVar6 = uVar17;
        puVar6 = puVar6 + 4;
      } while (uVar3 != 0);
      puVar8 = puVar9 + uVar12;
      puVar5 = puVar9 + uVar12;
      if (uVar7 == uVar12) goto LAB_01533a38;
    }
    do {
      puVar14 = param_3 + 1;
      puVar5 = puVar8 + 1;
      *puVar8 = *param_3;
      puVar8 = puVar5;
      param_3 = puVar14;
    } while (param_4 != puVar14);
  }
LAB_01533a38:
  puVar10 = *(undefined1 **)this;
  puVar8 = puVar9;
  puVar14 = param_2;
  while (puVar10 != puVar14) {
    puVar14 = puVar14 + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = *puVar14;
  }
  puVar10 = *(undefined1 **)(this + 8);
  uVar7 = (long)puVar10 - (long)param_2;
  puVar14 = puVar5;
  if (uVar7 != 0) {
    if ((0x1f < uVar7) && ((puVar10 <= puVar5 || (puVar5 + uVar7 <= param_2)))) {
      uVar12 = uVar7 & 0xffffffffffffffe0;
      puVar11 = (undefined8 *)(param_2 + 0x10);
      puVar14 = puVar5 + uVar12;
      param_2 = param_2 + uVar12;
      puVar6 = (undefined8 *)(puVar5 + 0x10);
      uVar3 = uVar12;
      do {
        puVar1 = puVar11 + -1;
        uVar16 = puVar11[-2];
        uVar18 = puVar11[1];
        uVar17 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar3 = uVar3 - 0x20;
        puVar6[-1] = *puVar1;
        puVar6[-2] = uVar16;
        puVar6[1] = uVar18;
        *puVar6 = uVar17;
        puVar6 = puVar6 + 4;
      } while (uVar3 != 0);
      puVar5 = puVar14;
      if (uVar12 == uVar7) goto LAB_01533ae0;
    }
    do {
      puVar13 = param_2 + 1;
      puVar14 = puVar5 + 1;
      *puVar5 = *param_2;
      puVar5 = puVar14;
      param_2 = puVar13;
    } while (puVar10 != puVar13);
  }
LAB_01533ae0:
  *(undefined1 **)this = puVar8;
  *(undefined1 **)(this + 8) = puVar14;
  *(undefined1 **)(this + 0x10) = puVar4 + lVar2;
  return puVar9;
}

