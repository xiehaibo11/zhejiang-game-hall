
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::TopLevelLiveRange**>
   >::value&&is_constructible<v8::internal::compiler::TopLevelLiveRange*,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::compiler::TopLevelLiveRange**>
   >::reference>::value, std::__ndk1::__wrap_iter<v8::internal::compiler::TopLevelLiveRange**>
   >::type std::__ndk1::vector<v8::internal::compiler::TopLevelLiveRange*,
   v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>
   >::insert<std::__ndk1::__wrap_iter<v8::internal::compiler::TopLevelLiveRange**>
   >(std::__ndk1::__wrap_iter<v8::internal::compiler::TopLevelLiveRange* const*>,
   std::__ndk1::__wrap_iter<v8::internal::compiler::TopLevelLiveRange**>,
   std::__ndk1::__wrap_iter<v8::internal::compiler::TopLevelLiveRange**>) */

undefined8 * __thiscall
std::__ndk1::
vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
::insert<std::__ndk1::__wrap_iter<v8::internal::compiler::TopLevelLiveRange**>>
          (vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
           *this,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t __n;
  Zone *this_00;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = (long)param_4 - (long)param_3;
  if (lVar5 < 1) {
    return param_2;
  }
  puVar2 = *(undefined8 **)(this + 8);
  lVar4 = lVar5 >> 3;
  if (lVar4 <= *(long *)(this + 0x10) - (long)puVar2 >> 3) {
    lVar5 = (long)puVar2 - (long)param_2 >> 3;
    puVar3 = puVar2;
    puVar6 = param_4;
    if (lVar5 < lVar4) {
      puVar6 = param_3 + lVar5;
      for (puVar10 = puVar6; puVar10 != param_4; puVar10 = puVar10 + 1) {
        *puVar3 = *puVar10;
        puVar3 = (undefined8 *)(*(long *)(this + 8) + 8);
        *(undefined8 **)(this + 8) = puVar3;
      }
      if ((long)puVar2 - (long)param_2 < 1) {
        return param_2;
      }
    }
    __n = (long)puVar3 - (long)(param_2 + lVar4);
    puVar10 = puVar3;
    for (puVar9 = puVar3 + -lVar4; puVar9 < puVar2; puVar9 = puVar9 + 1) {
      *puVar10 = *puVar9;
      puVar10 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar10;
    }
    if (__n != 0) {
      memmove(puVar3 + -((long)__n >> 3),param_2,__n);
    }
    if ((long)puVar6 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)puVar6 - (long)param_3);
    return param_2;
  }
  lVar7 = *(long *)this;
  uVar1 = lVar4 + ((long)puVar2 - lVar7 >> 3);
  if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(this + 0x10) - lVar7;
  uVar8 = lVar4 >> 2;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x7fffffe < (ulong)(lVar4 >> 3)) {
    uVar1 = 0xfffffff;
  }
  lVar4 = (long)param_2 - lVar7 >> 3;
  if (uVar1 == 0) {
    lVar7 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar8 = uVar1 * 8;
    lVar7 = *(long *)(this_00 + 0x10);
    if (uVar8 < (ulong)(*(long *)(this_00 + 0x18) - lVar7) ||
        uVar8 - (*(long *)(this_00 + 0x18) - lVar7) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar7 + uVar8;
    }
    else {
      lVar7 = v8::internal::Zone::NewExpand(this_00,uVar8);
    }
  }
  puVar2 = (undefined8 *)(lVar7 + lVar4 * 8);
  puVar3 = puVar2;
  if (param_3 != param_4) {
    uVar11 = lVar5 - 8U >> 3;
    uVar8 = uVar11 + 1;
    puVar6 = puVar2;
    if ((3 < uVar8) &&
       ((param_3 + uVar11 + 1 <= puVar2 ||
        ((undefined8 *)(lVar7 + (lVar4 + uVar11) * 8 + 8) <= param_3)))) {
      uVar12 = uVar8 & 0x3ffffffffffffffc;
      puVar3 = param_3 + 2;
      puVar6 = (undefined8 *)(lVar7 + lVar4 * 8 + 0x10);
      uVar11 = uVar12;
      do {
        puVar10 = puVar3 + -1;
        uVar13 = puVar3[-2];
        uVar15 = puVar3[1];
        uVar14 = *puVar3;
        puVar3 = puVar3 + 4;
        uVar11 = uVar11 - 4;
        puVar6[-1] = *puVar10;
        puVar6[-2] = uVar13;
        puVar6[1] = uVar15;
        *puVar6 = uVar14;
        puVar6 = puVar6 + 4;
      } while (uVar11 != 0);
      puVar3 = puVar2 + uVar12;
      puVar6 = puVar2 + uVar12;
      param_3 = param_3 + uVar12;
      if (uVar8 == uVar12) goto LAB_01658084;
    }
    do {
      puVar10 = param_3 + 1;
      puVar3 = puVar6 + 1;
      *puVar6 = *param_3;
      puVar6 = puVar3;
      param_3 = puVar10;
    } while (param_4 != puVar10);
  }
LAB_01658084:
  puVar9 = *(undefined8 **)this;
  puVar6 = puVar2;
  puVar10 = param_2;
  while (puVar9 != puVar10) {
    puVar10 = puVar10 + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *puVar10;
  }
  puVar10 = *(undefined8 **)(this + 8);
  for (; puVar10 != param_2; param_2 = param_2 + 1) {
    *puVar3 = *param_2;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar3;
  *(ulong *)(this + 0x10) = lVar7 + uVar1 * 8;
  return puVar2;
}

