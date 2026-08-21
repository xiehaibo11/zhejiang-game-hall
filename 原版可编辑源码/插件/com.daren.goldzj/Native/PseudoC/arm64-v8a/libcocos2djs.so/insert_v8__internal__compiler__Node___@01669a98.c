
/* std::__ndk1::enable_if<__is_forward_iterator<v8::internal::compiler::Node**>::value&&is_constructible<v8::internal::compiler::Node*,
   std::__ndk1::iterator_traits<v8::internal::compiler::Node**>::reference>::value,
   std::__ndk1::__wrap_iter<v8::internal::compiler::Node**> >::type
   std::__ndk1::vector<v8::internal::compiler::Node*,
   v8::internal::ZoneAllocator<v8::internal::compiler::Node*>
   >::insert<v8::internal::compiler::Node**>(std::__ndk1::__wrap_iter<v8::internal::compiler::Node*
   const*>, v8::internal::compiler::Node**, v8::internal::compiler::Node**) */

undefined8 * __thiscall
std::__ndk1::
vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>::
insert<v8::internal::compiler::Node**>
          (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
           *this,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t __n;
  Zone *this_00;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar12 = (long)param_4 - (long)param_3;
  if (lVar12 < 1) {
    return param_2;
  }
  puVar2 = *(undefined8 **)(this + 8);
  lVar4 = lVar12 >> 3;
  if (lVar4 <= *(long *)(this + 0x10) - (long)puVar2 >> 3) {
    lVar12 = (long)puVar2 - (long)param_2 >> 3;
    puVar3 = puVar2;
    if (lVar12 < lVar4) {
      for (puVar7 = param_3 + lVar12; puVar7 != param_4; puVar7 = puVar7 + 1) {
        *puVar3 = *puVar7;
        puVar3 = (undefined8 *)(*(long *)(this + 8) + 8);
        *(undefined8 **)(this + 8) = puVar3;
      }
      param_4 = param_3 + lVar12;
      if ((long)puVar2 - (long)param_2 < 1) {
        return param_2;
      }
    }
    __n = (long)puVar3 - (long)(param_2 + lVar4);
    puVar7 = puVar3;
    for (puVar11 = puVar3 + -lVar4; puVar11 < puVar2; puVar11 = puVar11 + 1) {
      *puVar7 = *puVar11;
      puVar7 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar7;
    }
    if (__n != 0) {
      memmove(puVar3 + -((long)__n >> 3),param_2,__n);
    }
    if ((long)param_4 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)param_4 - (long)param_3);
    return param_2;
  }
  lVar5 = *(long *)this;
  uVar1 = lVar4 + ((long)puVar2 - lVar5 >> 3);
  if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(this + 0x10) - lVar5;
  uVar6 = lVar4 >> 2;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0x7fffffe < (ulong)(lVar4 >> 3)) {
    uVar1 = 0xfffffff;
  }
  lVar4 = (long)param_2 - lVar5 >> 3;
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar6 = uVar1 * 8;
    lVar5 = *(long *)(this_00 + 0x10);
    if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
        uVar6 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar5 + uVar6;
    }
    else {
      lVar5 = v8::internal::Zone::NewExpand(this_00,uVar6);
    }
  }
  puVar2 = (undefined8 *)(lVar5 + lVar4 * 8);
  puVar3 = puVar2;
  if (param_3 != param_4) {
    uVar8 = lVar12 - 8U >> 3;
    uVar6 = uVar8 + 1;
    puVar7 = puVar2;
    if ((3 < uVar6) &&
       ((param_3 + uVar8 + 1 <= puVar2 ||
        ((undefined8 *)(lVar5 + (lVar4 + uVar8) * 8 + 8) <= param_3)))) {
      uVar9 = uVar6 & 0x3ffffffffffffffc;
      puVar3 = param_3 + 2;
      param_3 = param_3 + uVar9;
      puVar7 = (undefined8 *)(lVar5 + lVar4 * 8 + 0x10);
      uVar8 = uVar9;
      do {
        puVar11 = puVar3 + -1;
        uVar13 = puVar3[-2];
        uVar15 = puVar3[1];
        uVar14 = *puVar3;
        puVar3 = puVar3 + 4;
        uVar8 = uVar8 - 4;
        puVar7[-1] = *puVar11;
        puVar7[-2] = uVar13;
        puVar7[1] = uVar15;
        *puVar7 = uVar14;
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0);
      puVar7 = puVar2 + uVar9;
      puVar3 = puVar2 + uVar9;
      if (uVar6 == uVar9) goto LAB_01669cac;
    }
    do {
      puVar11 = param_3 + 1;
      puVar3 = puVar7 + 1;
      *puVar7 = *param_3;
      puVar7 = puVar3;
      param_3 = puVar11;
    } while (param_4 != puVar11);
  }
LAB_01669cac:
  puVar10 = *(undefined8 **)this;
  puVar7 = puVar2;
  puVar11 = param_2;
  while (puVar10 != puVar11) {
    puVar11 = puVar11 + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *puVar11;
  }
  puVar11 = *(undefined8 **)(this + 8);
  for (; puVar11 != param_2; param_2 = param_2 + 1) {
    *puVar3 = *param_2;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar3;
  *(ulong *)(this + 0x10) = lVar5 + uVar1 * 8;
  return puVar2;
}

