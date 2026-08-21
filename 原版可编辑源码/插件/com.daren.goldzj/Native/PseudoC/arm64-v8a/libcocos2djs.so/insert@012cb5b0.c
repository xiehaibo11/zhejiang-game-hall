
/* std::__ndk1::vector<v8::internal::compiler::Hints,
   v8::internal::ZoneAllocator<v8::internal::compiler::Hints>
   >::insert(std::__ndk1::__wrap_iter<v8::internal::compiler::Hints const*>,
   v8::internal::compiler::Hints const&) */

undefined8 * __thiscall
std::__ndk1::
vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>::
insert(vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
       *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar3 < *(undefined8 **)(this + 0x10)) {
    if (param_2 != puVar3) {
      __n = (long)puVar3 + (-8 - (long)param_2);
      puVar8 = puVar3;
      for (puVar5 = puVar3 + -1; puVar5 < puVar3; puVar5 = puVar5 + 1) {
        *puVar8 = *puVar5;
        puVar8 = (undefined8 *)(*(long *)(this + 8) + 8);
        *(undefined8 **)(this + 8) = puVar8;
      }
      if (__n != 0) {
        memmove(puVar3 + -((long)__n >> 3),param_2,__n);
      }
      puVar3 = param_3;
      if ((param_2 <= param_3) && (puVar3 = param_3 + 1, *(undefined8 **)(this + 8) <= param_3)) {
        puVar3 = param_3;
      }
      *param_2 = *puVar3;
      return param_2;
    }
    *param_2 = *param_3;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
    return param_2;
  }
  lVar13 = *(long *)this;
  uVar7 = ((long)puVar3 - lVar13 >> 3) + 1;
  if (uVar7 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = (long)*(undefined8 **)(this + 0x10) - lVar13;
  uVar9 = lVar6 >> 2;
  lVar14 = (long)param_2 - lVar13;
  if (uVar7 <= uVar9) {
    uVar7 = uVar9;
  }
  if (0x7fffffe < (ulong)(lVar6 >> 3)) {
    uVar7 = 0xfffffff;
  }
  uVar9 = lVar14 >> 3;
  if (uVar7 == 0) {
    lVar6 = 0;
  }
  else {
    pZVar2 = *(Zone **)(this + 0x18);
    uVar4 = uVar7 * 8;
    lVar6 = *(long *)(pZVar2 + 0x10);
    if (uVar4 < (ulong)(*(long *)(pZVar2 + 0x18) - lVar6) ||
        uVar4 - (*(long *)(pZVar2 + 0x18) - lVar6) == 0) {
      *(ulong *)(pZVar2 + 0x10) = lVar6 + uVar4;
    }
    else {
      lVar6 = v8::internal::Zone::NewExpand(pZVar2,uVar4);
    }
  }
  puVar3 = (undefined8 *)(lVar6 + uVar9 * 8);
  lVar6 = lVar6 + uVar7 * 8;
  if (uVar9 == uVar7) {
    if (lVar14 < 1) {
      pZVar2 = *(Zone **)(this + 0x18);
      uVar7 = lVar14 >> 2;
      if (lVar14 == 0) {
        uVar7 = 1;
      }
      lVar6 = *(long *)(pZVar2 + 0x10);
      uVar4 = uVar7 * 8;
      if (uVar4 < (ulong)(*(long *)(pZVar2 + 0x18) - lVar6) ||
          uVar4 - (*(long *)(pZVar2 + 0x18) - lVar6) == 0) {
        *(ulong *)(pZVar2 + 0x10) = lVar6 + uVar4;
      }
      else {
        lVar6 = v8::internal::Zone::NewExpand(pZVar2,uVar4);
      }
      puVar3 = (undefined8 *)(lVar6 + (uVar7 >> 2) * 8);
      lVar6 = lVar6 + uVar7 * 8;
    }
    else {
      uVar7 = uVar9 + 2;
      if (-1 < (long)(uVar9 + 1)) {
        uVar7 = uVar9 + 1;
      }
      puVar3 = (undefined8 *)((long)puVar3 + (uVar7 & 0x3ffffffffffffffe) * -4);
    }
  }
  puVar8 = puVar3 + 1;
  *puVar3 = *param_3;
  puVar10 = *(undefined8 **)this;
  puVar5 = puVar3;
  puVar11 = param_2;
  while (puVar10 != puVar11) {
    puVar11 = puVar11 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puVar11;
  }
  puVar11 = *(undefined8 **)(this + 8);
  if (puVar11 != param_2) {
    uVar4 = (long)puVar11 + (~uVar9 * 8 - lVar13) >> 3;
    uVar7 = uVar4 + 1;
    puVar10 = puVar8;
    if ((3 < uVar7) &&
       (((undefined8 *)(lVar13 + (uVar9 + uVar4) * 8 + 8) <= puVar8 ||
        (puVar3 + uVar4 + 2 <= param_2)))) {
      uVar4 = uVar7 & 0x3ffffffffffffffc;
      puVar10 = (undefined8 *)(lVar13 + uVar9 * 8 + 0x10);
      puVar8 = puVar8 + uVar4;
      puVar12 = puVar3 + 3;
      uVar9 = uVar4;
      do {
        puVar1 = puVar10 + -1;
        uVar15 = puVar10[-2];
        uVar17 = puVar10[1];
        uVar16 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar9 = uVar9 - 4;
        puVar12[-1] = *puVar1;
        puVar12[-2] = uVar15;
        puVar12[1] = uVar17;
        *puVar12 = uVar16;
        puVar12 = puVar12 + 4;
      } while (uVar9 != 0);
      puVar10 = puVar8;
      param_2 = param_2 + uVar4;
      if (uVar7 == uVar4) goto LAB_012cb820;
    }
    do {
      puVar12 = param_2 + 1;
      puVar8 = puVar10 + 1;
      *puVar10 = *param_2;
      puVar10 = puVar8;
      param_2 = puVar12;
    } while (puVar11 != puVar12);
  }
LAB_012cb820:
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar6;
  return puVar3;
}

