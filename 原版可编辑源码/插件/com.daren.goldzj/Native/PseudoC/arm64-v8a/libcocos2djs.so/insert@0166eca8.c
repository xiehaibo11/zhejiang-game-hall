
/* std::__ndk1::vector<v8::internal::compiler::Node*,
   v8::internal::ZoneAllocator<v8::internal::compiler::Node*>
   >::insert(std::__ndk1::__wrap_iter<v8::internal::compiler::Node* const*>, unsigned long,
   v8::internal::compiler::Node* const&) */

undefined8 * __thiscall
std::__ndk1::
vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>::
insert(vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
       *this,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  Zone *this_00;
  size_t __n;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 == 0) {
    return param_2;
  }
  puVar12 = *(undefined8 **)(this + 8);
  lVar13 = *(long *)this;
  uVar14 = (long)param_2 - lVar13 >> 3;
  if (param_3 <= (ulong)(*(long *)(this + 0x10) - (long)puVar12 >> 3)) {
    uVar8 = (long)puVar12 - (long)param_2 >> 3;
    lVar4 = uVar8 - param_3;
    puVar3 = puVar12;
    uVar5 = param_3;
    if (uVar8 < param_3) {
      do {
        bVar2 = lVar4 != -1;
        lVar4 = lVar4 + 1;
        *puVar3 = *param_4;
        puVar3 = (undefined8 *)(*(long *)(this + 8) + 8);
        *(undefined8 **)(this + 8) = puVar3;
      } while (bVar2);
      uVar5 = uVar8;
      if ((long)puVar12 - (long)param_2 == 0) {
        return param_2;
      }
    }
    __n = (long)puVar3 - (long)(param_2 + param_3);
    puVar7 = puVar3;
    for (puVar10 = puVar3 + -param_3; puVar10 < puVar12; puVar10 = puVar10 + 1) {
      *puVar7 = *puVar10;
      puVar7 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar7;
    }
    if (__n != 0) {
      memmove(puVar3 + -((long)__n >> 3),param_2,__n);
    }
    puVar12 = param_4;
    if ((param_2 <= param_4) && (puVar12 = param_4 + param_3, *(undefined8 **)(this + 8) <= param_4)
       ) {
      puVar12 = param_4;
    }
    puVar3 = param_2;
    if ((3 < uVar5) &&
       (((undefined8 *)((long)puVar12 + 1U) <= param_2 ||
        ((undefined8 *)(lVar13 + (uVar14 + uVar5) * 8) <= puVar12)))) {
      uVar15 = *puVar12;
      uVar8 = uVar5 & 0xfffffffffffffffc;
      puVar3 = (undefined8 *)(lVar13 + uVar14 * 8 + 0x10);
      uVar14 = uVar8;
      do {
        puVar3[-1] = uVar15;
        puVar3[-2] = uVar15;
        puVar3[1] = uVar15;
        *puVar3 = uVar15;
        uVar14 = uVar14 - 4;
        puVar3 = puVar3 + 4;
      } while (uVar14 != 0);
      bVar2 = uVar5 == uVar8;
      puVar3 = param_2 + uVar8;
      uVar5 = uVar5 - uVar8;
      if (bVar2) {
        return param_2;
      }
    }
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = *puVar12;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
    return param_2;
  }
  uVar5 = param_3 + ((long)puVar12 - lVar13 >> 3);
  if (uVar5 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(this + 0x10) - lVar13;
  uVar8 = lVar4 >> 2;
  if (uVar5 <= uVar8) {
    uVar5 = uVar8;
  }
  if (0x7fffffe < (ulong)(lVar4 >> 3)) {
    uVar5 = 0xfffffff;
  }
  if (uVar5 == 0) {
    lVar4 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar8 = uVar5 * 8;
    lVar4 = *(long *)(this_00 + 0x10);
    if (uVar8 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
        uVar8 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar4 + uVar8;
    }
    else {
      lVar4 = v8::internal::Zone::NewExpand(this_00,uVar8);
    }
  }
  puVar12 = (undefined8 *)(lVar4 + uVar14 * 8);
  puVar3 = puVar12;
  if ((param_3 < 4) ||
     ((puVar12 < (undefined8 *)((long)param_4 + 1U) &&
      (param_4 < (undefined8 *)(lVar4 + (uVar14 + param_3) * 8))))) {
LAB_0166ee60:
    do {
      param_3 = param_3 - 1;
      puVar7 = puVar3 + 1;
      *puVar3 = *param_4;
      puVar3 = puVar7;
    } while (param_3 != 0);
  }
  else {
    uVar15 = *param_4;
    uVar6 = param_3 & 0xfffffffffffffffc;
    puVar7 = puVar12 + uVar6;
    puVar3 = (undefined8 *)(lVar4 + uVar14 * 8 + 0x10);
    uVar8 = uVar6;
    do {
      puVar3[-1] = uVar15;
      puVar3[-2] = uVar15;
      puVar3[1] = uVar15;
      *puVar3 = uVar15;
      uVar8 = uVar8 - 4;
      puVar3 = puVar3 + 4;
    } while (uVar8 != 0);
    bVar2 = uVar6 != param_3;
    param_3 = param_3 - uVar6;
    puVar3 = puVar7;
    if (bVar2) goto LAB_0166ee60;
  }
  puVar9 = *(undefined8 **)this;
  puVar3 = puVar12;
  puVar10 = param_2;
  while (puVar9 != puVar10) {
    puVar10 = puVar10 + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *puVar10;
  }
  puVar10 = *(undefined8 **)(this + 8);
  if (puVar10 != param_2) {
    uVar6 = (long)puVar10 + (~uVar14 * 8 - lVar13) >> 3;
    uVar8 = uVar6 + 1;
    if ((3 < uVar8) &&
       (((undefined8 *)(lVar13 + (uVar14 + uVar6) * 8 + 8) <= puVar7 ||
        (puVar7 + uVar6 + 1 <= param_2)))) {
      uVar6 = uVar8 & 0x3ffffffffffffffc;
      puVar9 = (undefined8 *)(lVar13 + uVar14 * 8 + 0x10);
      puVar11 = puVar7 + uVar6;
      param_2 = param_2 + uVar6;
      puVar7 = puVar7 + 2;
      uVar14 = uVar6;
      do {
        puVar1 = puVar9 + -1;
        uVar15 = puVar9[-2];
        uVar17 = puVar9[1];
        uVar16 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar14 = uVar14 - 4;
        puVar7[-1] = *puVar1;
        puVar7[-2] = uVar15;
        puVar7[1] = uVar17;
        *puVar7 = uVar16;
        puVar7 = puVar7 + 4;
      } while (uVar14 != 0);
      puVar7 = puVar11;
      if (uVar8 == uVar6) goto LAB_0166efc0;
    }
    do {
      puVar11 = param_2 + 1;
      puVar9 = puVar7 + 1;
      *puVar7 = *param_2;
      puVar7 = puVar9;
      param_2 = puVar11;
    } while (puVar10 != puVar11);
  }
LAB_0166efc0:
  *(undefined8 **)this = puVar3;
  *(undefined8 **)(this + 8) = puVar7;
  *(ulong *)(this + 0x10) = lVar4 + uVar5 * 8;
  return puVar12;
}

