
/* std::__ndk1::vector<v8::internal::wasm::ValueType,
   v8::internal::ZoneAllocator<v8::internal::wasm::ValueType>
   >::insert(std::__ndk1::__wrap_iter<v8::internal::wasm::ValueType const*>, unsigned long,
   v8::internal::wasm::ValueType const&) */

undefined1 * __thiscall
std::__ndk1::
vector<v8::internal::wasm::ValueType,v8::internal::ZoneAllocator<v8::internal::wasm::ValueType>>::
insert(vector<v8::internal::wasm::ValueType,v8::internal::ZoneAllocator<v8::internal::wasm::ValueType>>
       *this,undefined1 *param_2,ulong param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  Zone *this_00;
  long lVar4;
  size_t __n;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (param_3 == 0) {
    return param_2;
  }
  puVar6 = *(undefined1 **)(this + 8);
  if (param_3 <= (ulong)(*(long *)(this + 0x10) - (long)puVar6)) {
    uVar14 = (long)puVar6 - (long)param_2;
    puVar9 = puVar6;
    uVar5 = param_3;
    if (uVar14 < param_3) {
      lVar17 = param_3 - uVar14;
      do {
        lVar17 = lVar17 + -1;
        *puVar9 = *param_4;
        puVar9 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar9;
      } while (lVar17 != 0);
      uVar5 = uVar14;
      if (uVar14 == 0) {
        return param_2;
      }
    }
    __n = (long)puVar9 - (long)(param_2 + param_3);
    if (puVar9 + -param_3 < puVar6) {
      puVar6 = puVar6 + (long)(param_2 + param_3 + (-(long)param_2 - (long)puVar9));
      puVar10 = puVar9 + -param_3;
      puVar7 = puVar9;
      do {
        puVar6 = puVar6 + -1;
        *puVar7 = *puVar10;
        puVar7 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar7;
        puVar10 = puVar10 + 1;
      } while (puVar6 != (undefined1 *)0x0);
    }
    if (__n != 0) {
      memmove(puVar9 + -__n,param_2,__n);
    }
    puVar6 = param_4;
    if ((param_2 <= param_4) && (puVar6 = param_4 + param_3, *(undefined1 **)(this + 8) <= param_4))
    {
      puVar6 = param_4;
    }
    puVar9 = param_2;
    if ((0x1f < uVar5) && ((puVar6 + 1 <= param_2 || (param_2 + uVar5 <= puVar6)))) {
      uVar1 = *puVar6;
      uVar18 = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
      uVar19 = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
      uVar15 = uVar5 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(param_2 + 0x10);
      uVar14 = uVar15;
      do {
        puVar8[-1] = uVar19;
        puVar8[-2] = uVar18;
        puVar8[1] = uVar19;
        *puVar8 = uVar18;
        uVar14 = uVar14 - 0x20;
        puVar8 = puVar8 + 4;
      } while (uVar14 != 0);
      bVar3 = uVar5 == uVar15;
      puVar9 = param_2 + uVar15;
      uVar5 = uVar5 - uVar15;
      if (bVar3) {
        return param_2;
      }
    }
    do {
      uVar5 = uVar5 - 1;
      *puVar9 = *puVar6;
      puVar9 = puVar9 + 1;
    } while (uVar5 != 0);
    return param_2;
  }
  lVar17 = *(long *)this;
  puVar6 = puVar6 + (param_3 - lVar17);
  if ((ulong)puVar6 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = *(long *)(this + 0x10) - lVar17;
  puVar9 = (undefined1 *)(uVar5 * 2);
  if (puVar6 <= puVar9) {
    puVar6 = puVar9;
  }
  if (0x3ffffffe < uVar5) {
    puVar6 = (undefined1 *)0x7fffffff;
  }
  if (puVar6 == (undefined1 *)0x0) {
    lVar4 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar5 = (ulong)(puVar6 + 7) & 0xfffffffffffffff8;
    lVar4 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar4) < uVar5) {
      lVar4 = v8::internal::Zone::NewExpand(this_00,uVar5);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar4 + uVar5;
    }
  }
  puVar9 = param_2 + (lVar4 - lVar17);
  puVar7 = puVar9;
  if ((param_3 < 0x20) ||
     ((puVar9 < param_4 + 1 && (param_4 < param_2 + lVar4 + (param_3 - lVar17))))) {
LAB_01333054:
    do {
      param_3 = param_3 - 1;
      puVar10 = puVar7 + 1;
      *puVar7 = *param_4;
      puVar7 = puVar10;
    } while (param_3 != 0);
  }
  else {
    uVar1 = *param_4;
    uVar18 = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
    uVar19 = CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(
                                                  uVar1,CONCAT11(uVar1,uVar1)))))));
    uVar14 = param_3 & 0xffffffffffffffe0;
    puVar10 = puVar9 + uVar14;
    puVar8 = (undefined8 *)(param_2 + (lVar4 - lVar17) + 0x10);
    uVar5 = uVar14;
    do {
      puVar8[-1] = uVar19;
      puVar8[-2] = uVar18;
      puVar8[1] = uVar19;
      *puVar8 = uVar18;
      uVar5 = uVar5 - 0x20;
      puVar8 = puVar8 + 4;
    } while (uVar5 != 0);
    bVar3 = uVar14 != param_3;
    puVar7 = puVar10;
    param_3 = param_3 - uVar14;
    if (bVar3) goto LAB_01333054;
  }
  puVar12 = *(undefined1 **)this;
  puVar7 = puVar9;
  puVar13 = param_2;
  while (puVar12 != puVar13) {
    puVar13 = puVar13 + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *puVar13;
  }
  puVar13 = *(undefined1 **)(this + 8);
  uVar5 = (long)puVar13 - (long)param_2;
  if (uVar5 != 0) {
    if ((0x1f < uVar5) && ((puVar13 <= puVar10 || (puVar10 + uVar5 <= param_2)))) {
      uVar15 = uVar5 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(param_2 + 0x10);
      puVar12 = puVar10 + uVar15;
      param_2 = param_2 + uVar15;
      puVar11 = (undefined8 *)(puVar10 + 0x10);
      uVar14 = uVar15;
      do {
        puVar2 = puVar8 + -1;
        uVar18 = puVar8[-2];
        uVar20 = puVar8[1];
        uVar19 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar14 = uVar14 - 0x20;
        puVar11[-1] = *puVar2;
        puVar11[-2] = uVar18;
        puVar11[1] = uVar20;
        *puVar11 = uVar19;
        puVar11 = puVar11 + 4;
      } while (uVar14 != 0);
      puVar10 = puVar12;
      if (uVar15 == uVar5) goto LAB_01333184;
    }
    do {
      puVar16 = param_2 + 1;
      puVar12 = puVar10 + 1;
      *puVar10 = *param_2;
      puVar10 = puVar12;
      param_2 = puVar16;
    } while (puVar13 != puVar16);
  }
LAB_01333184:
  *(undefined1 **)this = puVar7;
  *(undefined1 **)(this + 8) = puVar10;
  *(undefined1 **)(this + 0x10) = puVar6 + lVar4;
  return puVar9;
}

