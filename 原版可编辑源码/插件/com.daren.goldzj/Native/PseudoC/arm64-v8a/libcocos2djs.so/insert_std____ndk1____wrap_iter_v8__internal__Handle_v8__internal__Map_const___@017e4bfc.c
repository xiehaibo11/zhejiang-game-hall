
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map>
   const*> >::value&&is_constructible<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map>
   const*> >::reference>::value, std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map>*>
   >::type std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map> >
   >::insert<std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map> const*>
   >(std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map> const*>,
   std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map> const*>,
   std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map> const*>) */

undefined8 * __thiscall
std::__ndk1::
vector<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
::insert<std::__ndk1::__wrap_iter<v8::internal::Handle<v8::internal::Map>const*>>
          (vector<v8::internal::Handle<v8::internal::Map>,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Map>>>
           *this,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  Zone *this_00;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar12 = (long)param_4 - (long)param_3;
  if (lVar12 < 1) {
    return param_2;
  }
  puVar3 = *(undefined8 **)(this + 8);
  lVar13 = *(long *)this;
  lVar4 = lVar12 >> 3;
  lVar11 = (long)param_2 - lVar13 >> 3;
  if (lVar4 <= *(long *)(this + 0x10) - (long)puVar3 >> 3) {
    lVar12 = (long)puVar3 - (long)param_2 >> 3;
    puVar2 = puVar3;
    if (lVar12 < lVar4) {
      for (puVar6 = param_3 + lVar12; puVar6 != param_4; puVar6 = puVar6 + 1) {
        *puVar2 = *puVar6;
        puVar2 = (undefined8 *)(*(long *)(this + 8) + 8);
        *(undefined8 **)(this + 8) = puVar2;
      }
      param_4 = param_3 + lVar12;
      if ((long)puVar3 - (long)param_2 < 1) {
        return param_2;
      }
    }
    __n = (long)puVar2 - (long)(param_2 + lVar4);
    puVar6 = puVar2;
    for (puVar8 = puVar2 + -lVar4; puVar8 < puVar3; puVar8 = puVar8 + 1) {
      *puVar6 = *puVar8;
      puVar6 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar6;
    }
    if (__n != 0) {
      memmove(puVar2 + -((long)__n >> 3),param_2,__n);
    }
    if ((long)param_4 - (long)param_3 == 0) {
      return param_2;
    }
    uVar5 = ((long)param_4 - (long)param_3) - 8U >> 3;
    uVar1 = uVar5 + 1;
    puVar3 = param_2;
    if ((3 < uVar1) &&
       ((param_3 + uVar5 + 1 <= param_2 ||
        ((undefined8 *)(lVar13 + (lVar11 + uVar5) * 8 + 8) <= param_3)))) {
      uVar9 = uVar1 & 0x3ffffffffffffffc;
      puVar3 = param_3 + 2;
      puVar2 = (undefined8 *)(lVar13 + lVar11 * 8 + 0x10);
      uVar5 = uVar9;
      do {
        puVar6 = puVar3 + -1;
        uVar14 = puVar3[-2];
        uVar16 = puVar3[1];
        uVar15 = *puVar3;
        puVar3 = puVar3 + 4;
        uVar5 = uVar5 - 4;
        puVar2[-1] = *puVar6;
        puVar2[-2] = uVar14;
        puVar2[1] = uVar16;
        *puVar2 = uVar15;
        puVar2 = puVar2 + 4;
      } while (uVar5 != 0);
      puVar3 = param_2 + uVar9;
      param_3 = param_3 + uVar9;
      if (uVar1 == uVar9) {
        return param_2;
      }
    }
    do {
      puVar2 = param_3 + 1;
      *puVar3 = *param_3;
      puVar3 = puVar3 + 1;
      param_3 = puVar2;
    } while (param_4 != puVar2);
    return param_2;
  }
  uVar1 = lVar4 + ((long)puVar3 - lVar13 >> 3);
  if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar13 = *(long *)(this + 0x10) - lVar13;
  uVar5 = lVar13 >> 2;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  if (0x7fffffe < (ulong)(lVar13 >> 3)) {
    uVar1 = 0xfffffff;
  }
  if (uVar1 == 0) {
    lVar13 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar5 = uVar1 * 8;
    lVar13 = *(long *)(this_00 + 0x10);
    if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - lVar13) ||
        uVar5 - (*(long *)(this_00 + 0x18) - lVar13) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar13 + uVar5;
    }
    else {
      lVar13 = v8::internal::Zone::NewExpand(this_00,uVar5);
    }
  }
  puVar3 = (undefined8 *)(lVar13 + lVar11 * 8);
  puVar2 = puVar3;
  if (param_3 != param_4) {
    uVar9 = lVar12 - 8U >> 3;
    uVar5 = uVar9 + 1;
    puVar6 = puVar3;
    if ((3 < uVar5) &&
       ((param_3 + uVar9 + 1 <= puVar3 ||
        ((undefined8 *)(lVar13 + (lVar11 + uVar9) * 8 + 8) <= param_3)))) {
      uVar10 = uVar5 & 0x3ffffffffffffffc;
      puVar2 = param_3 + 2;
      puVar6 = (undefined8 *)(lVar13 + lVar11 * 8 + 0x10);
      uVar9 = uVar10;
      do {
        puVar8 = puVar2 + -1;
        uVar14 = puVar2[-2];
        uVar16 = puVar2[1];
        uVar15 = *puVar2;
        puVar2 = puVar2 + 4;
        uVar9 = uVar9 - 4;
        puVar6[-1] = *puVar8;
        puVar6[-2] = uVar14;
        puVar6[1] = uVar16;
        *puVar6 = uVar15;
        puVar6 = puVar6 + 4;
      } while (uVar9 != 0);
      puVar2 = puVar3 + uVar10;
      puVar6 = puVar3 + uVar10;
      param_3 = param_3 + uVar10;
      if (uVar5 == uVar10) goto LAB_017e4e94;
    }
    do {
      puVar8 = param_3 + 1;
      puVar2 = puVar6 + 1;
      *puVar6 = *param_3;
      puVar6 = puVar2;
      param_3 = puVar8;
    } while (param_4 != puVar8);
  }
LAB_017e4e94:
  puVar7 = *(undefined8 **)this;
  puVar6 = puVar3;
  puVar8 = param_2;
  while (puVar7 != puVar8) {
    puVar8 = puVar8 + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *puVar8;
  }
  puVar8 = *(undefined8 **)(this + 8);
  for (; puVar8 != param_2; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar2;
  *(ulong *)(this + 0x10) = lVar13 + uVar1 * 8;
  return puVar3;
}

