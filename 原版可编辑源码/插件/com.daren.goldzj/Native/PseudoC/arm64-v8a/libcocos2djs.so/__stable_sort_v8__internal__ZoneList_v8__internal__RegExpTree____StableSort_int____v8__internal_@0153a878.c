
/* void std::__ndk1::__stable_sort<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int
   (*)(v8::internal::RegExpTree* const*, v8::internal::RegExpTree* const*)>(int
   (*)(v8::internal::RegExpTree* const*, v8::internal::RegExpTree* const*), unsigned long, unsigned
   long)::{lambda(v8::internal::RegExpTree* const&, v8::internal::RegExpTree* const&)#1}&,
   v8::internal::RegExpTree**>(v8::internal::RegExpTree**, v8::internal::RegExpTree**,
   v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int (*)(v8::internal::RegExpTree*
   const*, v8::internal::RegExpTree* const*)>(int (*)(v8::internal::RegExpTree* const*,
   v8::internal::RegExpTree* const*), unsigned long, unsigned
   long)::{lambda(v8::internal::RegExpTree* const&, v8::internal::RegExpTree* const&)#1}&,
   std::__ndk1::iterator_traits<v8::internal::RegExpTree**>::difference_type,
   std::__ndk1::iterator_traits<v8::internal::RegExpTree**>::value_type*, long) */

void std::__ndk1::
     __stable_sort<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
               undefined8 *param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_48;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      param_2 = param_2 + -1;
      iVar1 = (*(code *)*param_3)(param_2,param_1);
      if (iVar1 < 0) {
        uVar5 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar5;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (puVar10 = param_1 + 1, puVar10 != param_2)) {
        lVar11 = 0;
        do {
          local_48 = *puVar10;
          puVar6 = param_1;
          lVar12 = lVar11;
          if (puVar10 != param_1) {
            do {
              puVar3 = (undefined8 *)((long)param_1 + lVar12);
              iVar1 = (*(code *)*param_3)(&local_48,puVar3);
              if (-1 < iVar1) {
                puVar6 = puVar3 + 1;
                break;
              }
              lVar12 = lVar12 + -8;
              puVar3[1] = *puVar3;
            } while (lVar12 != -8);
          }
          puVar10 = puVar10 + 1;
          lVar11 = lVar11 + 8;
          *puVar6 = local_48;
        } while (puVar10 != param_2);
      }
    }
    else {
      uVar13 = param_4 >> 1;
      puVar10 = param_1 + uVar13;
      if (param_6 < (long)param_4) {
        __stable_sort<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                  ();
        __stable_sort<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                  (puVar10,param_2,param_3,param_4 - uVar13,param_5,param_6);
        __inplace_merge<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                  (param_1,puVar10,param_2,param_3,uVar13,param_4 - uVar13,param_5,param_6);
        return;
      }
      __stable_sort_move<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                (param_1,puVar10,param_3,uVar13);
      puVar6 = param_5 + uVar13;
      __stable_sort_move<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                (puVar10,param_2,param_3,param_4 - uVar13,puVar6);
      puVar10 = param_5 + param_4;
      puVar3 = puVar6;
      puVar4 = param_5;
      do {
        if (puVar3 == puVar10) {
          if (puVar4 == puVar6) {
            return;
          }
          uVar2 = (long)param_5 + (uVar13 * 8 - (long)puVar4) + -8;
          uVar13 = (uVar2 >> 3) + 1;
          if ((3 < uVar13) &&
             ((uVar2 = uVar2 & 0xfffffffffffffff8,
              (undefined8 *)((long)puVar4 + uVar2 + 8) <= param_1 ||
              ((undefined8 *)((long)param_1 + uVar2 + 8) <= puVar4)))) {
            uVar7 = uVar13 & 0x3ffffffffffffffc;
            lVar11 = 0;
            uVar2 = uVar7;
            do {
              puVar10 = (undefined8 *)((long)puVar4 + lVar11);
              uVar5 = *puVar10;
              uVar15 = puVar10[3];
              uVar14 = puVar10[2];
              puVar3 = (undefined8 *)((long)param_1 + lVar11);
              uVar2 = uVar2 - 4;
              lVar11 = lVar11 + 0x20;
              puVar3[1] = puVar10[1];
              *puVar3 = uVar5;
              puVar3[3] = uVar15;
              puVar3[2] = uVar14;
            } while (uVar2 != 0);
            puVar4 = puVar4 + uVar7;
            param_1 = param_1 + (uVar13 & 0x1ffffffffffffffc);
            if (uVar13 == uVar7) {
              return;
            }
          }
          do {
            puVar10 = puVar4 + 1;
            *param_1 = *puVar4;
            puVar4 = puVar10;
            param_1 = param_1 + 1;
          } while (puVar6 != puVar10);
          return;
        }
        iVar1 = (*(code *)*param_3)(puVar3,puVar4);
        if (iVar1 < 0) {
          uVar5 = *puVar3;
          puVar9 = puVar4;
          puVar3 = puVar3 + 1;
        }
        else {
          puVar9 = puVar4 + 1;
          uVar5 = *puVar4;
        }
        puVar8 = param_1 + 1;
        *param_1 = uVar5;
        puVar4 = puVar9;
        param_1 = puVar8;
      } while (puVar9 != puVar6);
      if (puVar3 == puVar10) {
        return;
      }
      uVar2 = (long)param_5 + (param_4 * 8 - (long)puVar3) + -8;
      uVar13 = (uVar2 >> 3) + 1;
      if ((3 < uVar13) &&
         ((uVar2 = uVar2 & 0xfffffffffffffff8, (undefined8 *)((long)puVar3 + uVar2 + 8) <= puVar8 ||
          ((undefined8 *)((long)puVar8 + uVar2 + 8) <= puVar3)))) {
        uVar7 = uVar13 & 0x3ffffffffffffffc;
        lVar11 = 0;
        uVar2 = uVar7;
        do {
          puVar6 = (undefined8 *)((long)puVar3 + lVar11);
          uVar5 = *puVar6;
          uVar15 = puVar6[3];
          uVar14 = puVar6[2];
          puVar4 = (undefined8 *)((long)puVar8 + lVar11);
          uVar2 = uVar2 - 4;
          lVar11 = lVar11 + 0x20;
          puVar4[1] = puVar6[1];
          *puVar4 = uVar5;
          puVar4[3] = uVar15;
          puVar4[2] = uVar14;
        } while (uVar2 != 0);
        puVar3 = puVar3 + uVar7;
        puVar8 = puVar8 + (uVar13 & 0x1ffffffffffffffc);
        if (uVar13 == uVar7) {
          return;
        }
      }
      do {
        puVar6 = puVar3 + 1;
        *puVar8 = *puVar3;
        puVar3 = puVar6;
        puVar8 = puVar8 + 1;
      } while (puVar10 != puVar6);
    }
  }
  return;
}

