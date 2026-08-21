
/* std::__ndk1::enable_if<__is_forward_iterator<v8::internal::MachineType*>::value&&is_constructible<v8::internal::MachineType,
   std::__ndk1::iterator_traits<v8::internal::MachineType*>::reference>::value,
   std::__ndk1::__wrap_iter<v8::internal::MachineType*> >::type
   std::__ndk1::vector<v8::internal::MachineType, std::__ndk1::allocator<v8::internal::MachineType>
   >::insert<v8::internal::MachineType*>(std::__ndk1::__wrap_iter<v8::internal::MachineType const*>,
   v8::internal::MachineType*, v8::internal::MachineType*) */

undefined2 * __thiscall
std::__ndk1::vector<v8::internal::MachineType,std::__ndk1::allocator<v8::internal::MachineType>>::
insert<v8::internal::MachineType*>
          (vector<v8::internal::MachineType,std::__ndk1::allocator<v8::internal::MachineType>> *this
          ,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  ulong uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  size_t __n;
  long lVar13;
  undefined2 *puVar14;
  void *pvVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar13 = (long)param_4 - (long)param_3;
  if (lVar13 < 1) {
    return param_2;
  }
  puVar2 = *(undefined2 **)(this + 8);
  lVar16 = lVar13 >> 1;
  if (lVar16 <= *(long *)(this + 0x10) - (long)puVar2 >> 1) {
    lVar13 = (long)puVar2 - (long)param_2 >> 1;
    puVar7 = puVar2;
    if (lVar13 < lVar16) {
      puVar14 = param_3 + lVar13;
      sVar5 = (long)param_4 - (long)puVar14;
      if (0 < (long)sVar5) {
        memcpy(puVar2,puVar14,sVar5);
        lVar13 = *(long *)(this + 8);
        *(undefined2 **)(this + 8) = (undefined2 *)(lVar13 + sVar5);
        puVar7 = (undefined2 *)(lVar13 + sVar5);
      }
      param_4 = puVar14;
      if ((long)puVar2 - (long)param_2 < 1) {
        return param_2;
      }
    }
    sVar5 = (long)puVar7 - (long)(param_2 + lVar16);
    puVar14 = puVar7;
    for (puVar8 = puVar7 + -lVar16; puVar8 < puVar2; puVar8 = puVar8 + 1) {
      *puVar14 = *puVar8;
      puVar14 = (undefined2 *)(*(long *)(this + 8) + 2);
      *(undefined2 **)(this + 8) = puVar14;
    }
    if (sVar5 != 0) {
      memmove(puVar7 + -((long)sVar5 >> 1),param_2,sVar5);
    }
    if ((long)param_4 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)param_4 - (long)param_3);
    return param_2;
  }
  pvVar15 = *(void **)this;
  uVar1 = lVar16 + ((long)puVar2 - (long)pvVar15 >> 1);
  if ((long)uVar1 < 0) {
LAB_00ef0f1c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = *(long *)(this + 0x10) - (long)pvVar15;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0x3ffffffffffffffe < (ulong)((long)uVar6 >> 1)) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if ((long)uVar1 < 0) goto LAB_00ef0f1c;
    pvVar4 = operator_new(uVar1 << 1);
  }
  lVar16 = (long)param_2 - (long)pvVar15 >> 1;
  puVar2 = (undefined2 *)((long)pvVar4 + lVar16 * 2);
  puVar7 = puVar2;
  if (param_3 == param_4) goto LAB_00ef0ea0;
  uVar9 = lVar13 - 2U >> 1;
  uVar6 = uVar9 + 1;
  puVar14 = puVar2;
  if ((uVar6 < 0x10) ||
     ((puVar2 < param_3 + uVar9 + 1 &&
      (param_3 < (undefined2 *)((long)pvVar4 + (lVar16 + uVar9) * 2 + 2))))) {
LAB_00ef0e8c:
    do {
      puVar8 = param_3 + 1;
      puVar7 = puVar14 + 1;
      *puVar14 = *param_3;
      param_3 = puVar8;
      puVar14 = puVar7;
    } while (param_4 != puVar8);
  }
  else {
    uVar10 = uVar6 & 0xfffffffffffffff0;
    puVar12 = (undefined8 *)(param_3 + 8);
    puVar7 = puVar2 + uVar10;
    param_3 = param_3 + uVar10;
    puVar11 = (undefined8 *)((long)pvVar4 + lVar16 * 2 + 0x10);
    uVar9 = uVar10;
    do {
      puVar3 = puVar12 + -1;
      uVar17 = puVar12[-2];
      uVar19 = puVar12[1];
      uVar18 = *puVar12;
      puVar12 = puVar12 + 4;
      uVar9 = uVar9 - 0x10;
      puVar11[-1] = *puVar3;
      puVar11[-2] = uVar17;
      puVar11[1] = uVar19;
      *puVar11 = uVar18;
      puVar11 = puVar11 + 4;
    } while (uVar9 != 0);
    puVar14 = puVar7;
    if (uVar6 != uVar10) goto LAB_00ef0e8c;
  }
  pvVar15 = *(void **)this;
LAB_00ef0ea0:
  sVar5 = (long)param_2 - (long)pvVar15;
  if (0 < (long)sVar5) {
    memcpy((void *)((long)puVar2 - sVar5),pvVar15,sVar5);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar7,param_2,__n);
    puVar7 = (undefined2 *)((long)puVar7 + __n);
  }
  pvVar15 = *(void **)this;
  *(void **)this = (void *)((long)puVar2 - sVar5);
  *(undefined2 **)(this + 8) = puVar7;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 2);
  if (pvVar15 != (void *)0x0) {
    operator_delete(pvVar15);
  }
  return puVar2;
}

