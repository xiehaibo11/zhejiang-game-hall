
/* void 
   std::__ndk1::__buffered_inplace_merge<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int
   (*)(v8::internal::RegExpTree* const*, v8::internal::RegExpTree* const*)>(int
   (*)(v8::internal::RegExpTree* const*, v8::internal::RegExpTree* const*), unsigned long, unsigned
   long)::{lambda(v8::internal::RegExpTree* const&, v8::internal::RegExpTree* const&)#1}&,
   v8::internal::RegExpTree**>(v8::internal::RegExpTree**, v8::internal::RegExpTree**,
   v8::internal::RegExpTree**, v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int
   (*)(v8::internal::RegExpTree* const*, v8::internal::RegExpTree* const*)>(int
   (*)(v8::internal::RegExpTree* const*, v8::internal::RegExpTree* const*), unsigned long, unsigned
   long)::{lambda(v8::internal::RegExpTree* const&, v8::internal::RegExpTree* const&)#1}&,
   std::__ndk1::iterator_traits<v8::internal::RegExpTree**>::difference_type,
   std::__ndk1::iterator_traits<v8::internal::RegExpTree**>::difference_type,
   std::__ndk1::iterator_traits<v8::internal::RegExpTree**>::value_type*) */

void std::__ndk1::
     __buffered_inplace_merge<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               long param_5,long param_6,undefined8 *param_7)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_5 <= param_6) {
    if (param_1 == param_2) {
      return;
    }
    uVar7 = (long)param_2 + (-8 - (long)param_1);
    uVar1 = (uVar7 >> 3) + 1;
    puVar5 = param_1;
    puVar9 = param_7;
    if ((3 < uVar1) &&
       ((lVar6 = (uVar7 & 0xfffffffffffffff8) + 8, (undefined8 *)((long)param_1 + lVar6) <= param_7
        || ((undefined8 *)((long)param_7 + lVar6) <= param_1)))) {
      uVar8 = uVar1 & 0x3ffffffffffffffc;
      puVar5 = param_1 + 2;
      puVar11 = param_7 + uVar8;
      puVar9 = param_7 + 2;
      uVar7 = uVar8;
      do {
        puVar3 = puVar5 + -1;
        uVar4 = puVar5[-2];
        uVar13 = puVar5[1];
        uVar12 = *puVar5;
        puVar5 = puVar5 + 4;
        uVar7 = uVar7 - 4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar4;
        puVar9[1] = uVar13;
        *puVar9 = uVar12;
        puVar9 = puVar9 + 4;
      } while (uVar7 != 0);
      puVar5 = param_1 + uVar8;
      puVar9 = puVar11;
      if (uVar1 == uVar8) goto LAB_0153b578;
    }
    do {
      puVar3 = puVar5 + 1;
      puVar11 = puVar9 + 1;
      *puVar9 = *puVar5;
      puVar5 = puVar3;
      puVar9 = puVar11;
    } while (param_2 != puVar3);
LAB_0153b578:
    if (puVar11 == param_7) {
      return;
    }
    pcVar10 = (code *)*param_4;
    do {
      if (param_2 == param_3) {
        if ((long)puVar11 - (long)param_7 == 0) {
          return;
        }
        memmove(param_1,param_7,(long)puVar11 - (long)param_7);
        return;
      }
      iVar2 = (*pcVar10)(param_2,param_7);
      if (iVar2 < 0) {
        uVar4 = *param_2;
        puVar5 = param_7;
        param_2 = param_2 + 1;
      }
      else {
        puVar5 = param_7 + 1;
        uVar4 = *param_7;
      }
      *param_1 = uVar4;
      param_7 = puVar5;
      param_1 = param_1 + 1;
    } while (puVar5 != puVar11);
    return;
  }
  if (param_2 == param_3) {
    return;
  }
  uVar7 = (long)param_3 + (-8 - (long)param_2);
  uVar1 = (uVar7 >> 3) + 1;
  puVar5 = param_2;
  puVar9 = param_7;
  if ((3 < uVar1) &&
     ((lVar6 = (uVar7 & 0xfffffffffffffff8) + 8, (undefined8 *)((long)param_2 + lVar6) <= param_7 ||
      ((undefined8 *)((long)param_7 + lVar6) <= param_2)))) {
    uVar8 = uVar1 & 0x3ffffffffffffffc;
    puVar5 = param_7 + 2;
    puVar11 = param_7 + uVar8;
    puVar9 = param_2 + 2;
    uVar7 = uVar8;
    do {
      puVar3 = puVar9 + -1;
      uVar4 = puVar9[-2];
      uVar13 = puVar9[1];
      uVar12 = *puVar9;
      uVar7 = uVar7 - 4;
      puVar9 = puVar9 + 4;
      puVar5[-1] = *puVar3;
      puVar5[-2] = uVar4;
      puVar5[1] = uVar13;
      *puVar5 = uVar12;
      puVar5 = puVar5 + 4;
    } while (uVar7 != 0);
    puVar5 = param_2 + uVar8;
    puVar9 = puVar11;
    if (uVar1 == uVar8) goto joined_r0x0153b480;
  }
  do {
    puVar3 = puVar5 + 1;
    puVar11 = puVar9 + 1;
    *puVar9 = *puVar5;
    puVar5 = puVar3;
    puVar9 = puVar11;
  } while (param_3 != puVar3);
joined_r0x0153b480:
  while( true ) {
    if (puVar11 == param_7) {
      return;
    }
    param_3 = param_3 + -1;
    if (param_2 == param_1) break;
    puVar9 = param_2 + -1;
    puVar5 = puVar11 + -1;
    iVar2 = (*(code *)*param_4)(puVar5,puVar9);
    if (iVar2 < 0) {
      uVar4 = *puVar9;
      param_2 = puVar9;
      puVar5 = puVar11;
    }
    else {
      uVar4 = *puVar5;
    }
    *param_3 = uVar4;
    puVar11 = puVar5;
  }
  lVar6 = 0;
  do {
    *(undefined8 *)((long)param_3 + lVar6) = *(undefined8 *)((long)puVar11 + lVar6 + -8);
    lVar6 = lVar6 + -8;
  } while ((long)param_7 - (long)puVar11 != lVar6);
  return;
}

