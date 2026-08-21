
/* void std::__ndk1::__sort<bool (*&)(double, double), v8::internal::UnalignedSlot<double>
   >(v8::internal::UnalignedSlot<double>, v8::internal::UnalignedSlot<double>, bool (*&)(double,
   double)) */

void std::__ndk1::__sort<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
LAB_015b4af8:
  puVar8 = param_2 + -1;
  puVar9 = param_1;
LAB_015b4b04:
  while( true ) {
    param_1 = puVar9;
    uVar5 = (ulong)((int)param_2 - (int)param_1);
    iVar6 = (int)(uVar5 >> 3);
    switch(uVar5 >> 3 & 0xffffffff) {
    case 0:
    case 1:
      return;
    case 2:
      uVar5 = (*(code *)*param_3)(param_2[-1],*param_1);
      if ((uVar5 & 1) != 0) {
        uVar7 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar7;
        return;
      }
      return;
    case 3:
      __sort3<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
                (param_1,param_1 + 1,puVar8,param_3);
      return;
    case 4:
      __sort4<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
                (param_1,param_1 + 1,param_1 + 2,puVar8,param_3);
      return;
    case 5:
      FUN_015b5028(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar8,param_3);
      return;
    }
    if (iVar6 < 0x1f) {
      __insertion_sort_3<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
                (param_1,param_2,param_3);
      return;
    }
    puVar9 = (undefined8 *)((uVar5 >> 1 & 0x3fffffff8) + (long)param_1);
    if (iVar6 < 1000) {
      uVar4 = __sort3<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
                        (param_1,puVar9,puVar8,param_3);
    }
    else {
      uVar5 = uVar5 >> 2 & 0x1fffffff8;
      uVar4 = FUN_015b5028(param_1,uVar5 + (long)param_1,puVar9,(long)puVar9 + uVar5,puVar8,param_3)
      ;
    }
    uVar5 = (*(code *)*param_3)(*param_1,*puVar9);
    puVar10 = puVar8;
    puVar12 = param_2 + -2;
    if ((uVar5 & 1) != 0) break;
    while (puVar10 = puVar12, param_1 != puVar10) {
      uVar5 = (*(code *)*param_3)(*puVar10,*puVar9);
      puVar12 = puVar10 + -1;
      if ((uVar5 & 1) != 0) goto code_r0x015b4bb4;
    }
    puVar10 = param_1 + 1;
    uVar5 = (*(code *)*param_3)(*param_1,*puVar8);
    if ((uVar5 & 1) == 0) {
      if (puVar10 == puVar8) {
        return;
      }
      puVar10 = param_1 + 2;
      while (uVar5 = (*(code *)*param_3)(*param_1,puVar10[-1]), (uVar5 & 1) == 0) {
        puVar10 = puVar10 + 1;
        if (param_2 == puVar10) {
          return;
        }
      }
      uVar7 = puVar10[-1];
      puVar10[-1] = *puVar8;
      *puVar8 = uVar7;
    }
    puVar12 = puVar8;
    if (puVar10 == puVar8) {
      return;
    }
    while( true ) {
      do {
        puVar9 = puVar10;
        uVar5 = (*(code *)*param_3)(*param_1,*puVar9);
        puVar10 = puVar9 + 1;
      } while ((uVar5 & 1) == 0);
      do {
        puVar12 = puVar12 + -1;
        uVar5 = (*(code *)*param_3)(*param_1,*puVar12);
      } while ((uVar5 & 1) != 0);
      if (puVar12 <= puVar9) break;
      uVar7 = *puVar9;
      *puVar9 = *puVar12;
      *puVar12 = uVar7;
    }
  }
  goto LAB_015b4bc8;
code_r0x015b4bb4:
  uVar7 = *param_1;
  uVar4 = uVar4 + 1;
  *param_1 = *puVar10;
  *puVar10 = uVar7;
LAB_015b4bc8:
  puVar12 = param_1 + 1;
  puVar1 = puVar9;
  puVar11 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      puVar9 = puVar1;
      puVar12 = puVar11 + -1;
      do {
        puVar11 = puVar12;
        puVar12 = puVar11 + 1;
        uVar5 = (*(code *)*param_3)(*puVar12,*puVar9);
      } while ((uVar5 & 1) != 0);
      puVar11 = puVar11 + 2;
      do {
        puVar10 = puVar10 + -1;
        uVar5 = (*(code *)*param_3)(*puVar10,*puVar9);
      } while ((uVar5 & 1) == 0);
      if (puVar10 < puVar12) break;
      uVar7 = *puVar12;
      uVar4 = uVar4 + 1;
      *puVar12 = *puVar10;
      *puVar10 = uVar7;
      puVar1 = puVar10;
      if (puVar9 != puVar12) {
        puVar1 = puVar9;
      }
    }
  }
  if ((puVar12 != puVar9) && (uVar5 = (*(code *)*param_3)(*puVar9,*puVar12), (uVar5 & 1) != 0)) {
    uVar7 = *puVar12;
    uVar4 = uVar4 + 1;
    *puVar12 = *puVar9;
    *puVar9 = uVar7;
  }
  if (uVar4 == 0) {
    bVar2 = __insertion_sort_incomplete<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
                      (param_1,puVar12,param_3);
    bVar3 = __insertion_sort_incomplete<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
                      (puVar12 + 1,param_2,param_3);
    if (bVar3) goto LAB_015b4d90;
    puVar9 = puVar12 + 1;
    if (bVar2) goto LAB_015b4b04;
  }
  if ((int)((ulong)(long)((int)param_2 - (int)puVar12) >> 3) <=
      (int)((ulong)(long)((int)puVar12 - (int)param_1) >> 3)) {
    __sort<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>(puVar12 + 1,param_2,param_3)
    ;
    param_2 = puVar12;
    goto LAB_015b4af8;
  }
  __sort<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>(param_1,puVar12,param_3);
  puVar9 = puVar12 + 1;
  goto LAB_015b4b04;
LAB_015b4d90:
  param_2 = puVar12;
  if (bVar2) {
    return;
  }
  goto LAB_015b4af8;
}

