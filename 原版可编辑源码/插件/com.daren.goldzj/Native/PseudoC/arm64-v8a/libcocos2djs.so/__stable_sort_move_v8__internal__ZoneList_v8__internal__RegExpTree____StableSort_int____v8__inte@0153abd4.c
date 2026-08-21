
/* void 
   std::__ndk1::__stable_sort_move<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int
   (*)(v8::internal::RegExpTree* const*, v8::internal::RegExpTree* const*)>(int
   (*)(v8::internal::RegExpTree* const*, v8::internal::RegExpTree* const*), unsigned long, unsigned
   long)::{lambda(v8::internal::RegExpTree* const&, v8::internal::RegExpTree* const&)#1}&,
   v8::internal::RegExpTree**>(v8::internal::RegExpTree**, v8::internal::RegExpTree**,
   v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int (*)(v8::internal::RegExpTree*
   const*, v8::internal::RegExpTree* const*)>(int (*)(v8::internal::RegExpTree* const*,
   v8::internal::RegExpTree* const*), unsigned long, unsigned
   long)::{lambda(v8::internal::RegExpTree* const&, v8::internal::RegExpTree* const&)#1}&,
   std::__ndk1::iterator_traits<v8::internal::RegExpTree**>::difference_type,
   std::__ndk1::iterator_traits<v8::internal::RegExpTree**>::value_type*) */

void std::__ndk1::
     __stable_sort_move<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
               undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      param_2 = param_2 + -1;
      iVar1 = (*(code *)*param_3)(param_2,param_1);
      if (iVar1 < 0) {
        *param_5 = *param_2;
        uVar2 = *param_1;
      }
      else {
        *param_5 = *param_1;
        uVar2 = *param_2;
      }
      param_5[1] = uVar2;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        puVar6 = param_1 + 1;
        *param_5 = *param_1;
        if (puVar6 != param_2) {
          lVar9 = 0;
          puVar8 = param_5;
          do {
            iVar1 = (*(code *)*param_3)(puVar6,puVar8);
            if (iVar1 < 0) {
              puVar8[1] = *puVar8;
              puVar7 = param_5;
              if (puVar8 != param_5) {
                lVar12 = 0;
                do {
                  puVar7 = (undefined8 *)((long)puVar8 + lVar12);
                  iVar1 = (*(code *)*param_3)(puVar6,puVar7 + -1);
                  if (-1 < iVar1) break;
                  lVar12 = lVar12 + -8;
                  *puVar7 = puVar7[-1];
                  puVar7 = param_5;
                } while (lVar9 != lVar12);
              }
              *puVar7 = *puVar6;
            }
            else {
              puVar8[1] = *puVar6;
            }
            puVar6 = puVar6 + 1;
            lVar9 = lVar9 + -8;
            puVar8 = puVar8 + 1;
          } while (puVar6 != param_2);
        }
      }
    }
    else {
      uVar11 = param_4 >> 1;
      puVar6 = param_1 + uVar11;
      __stable_sort<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                (param_1,puVar6,param_3,uVar11,param_5,uVar11);
      __stable_sort<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                (puVar6,param_2,param_3,param_4 - uVar11,param_5 + uVar11,param_4 - uVar11);
      puVar8 = puVar6;
      puVar7 = param_5;
      puVar4 = param_1;
      if (uVar11 != 0) {
        do {
          if (puVar8 == param_2) {
            if (puVar4 == puVar6) {
              return;
            }
            uVar3 = (long)param_1 + (uVar11 * 8 - (long)puVar4) + -8;
            uVar11 = (uVar3 >> 3) + 1;
            if ((3 < uVar11) &&
               ((uVar3 = uVar3 & 0xfffffffffffffff8,
                (undefined8 *)((long)puVar4 + uVar3 + 8) <= puVar7 ||
                ((undefined8 *)((long)puVar7 + uVar3 + 8) <= puVar4)))) {
              uVar5 = uVar11 & 0x3ffffffffffffffc;
              lVar9 = 0;
              uVar3 = uVar5;
              do {
                puVar8 = (undefined8 *)((long)puVar4 + lVar9);
                uVar2 = *puVar8;
                uVar14 = puVar8[3];
                uVar13 = puVar8[2];
                puVar10 = (undefined8 *)((long)puVar7 + lVar9);
                uVar3 = uVar3 - 4;
                lVar9 = lVar9 + 0x20;
                puVar10[1] = puVar8[1];
                *puVar10 = uVar2;
                puVar10[3] = uVar14;
                puVar10[2] = uVar13;
              } while (uVar3 != 0);
              puVar4 = puVar4 + uVar5;
              puVar7 = puVar7 + (uVar11 & 0x1ffffffffffffffc);
              if (uVar11 == uVar5) {
                return;
              }
            }
            do {
              puVar8 = puVar4 + 1;
              *puVar7 = *puVar4;
              puVar4 = puVar8;
              puVar7 = puVar7 + 1;
            } while (puVar6 != puVar8);
            return;
          }
          iVar1 = (*(code *)*param_3)(puVar8,puVar4);
          if (iVar1 < 0) {
            uVar2 = *puVar8;
            puVar10 = puVar4;
            puVar8 = puVar8 + 1;
          }
          else {
            puVar10 = puVar4 + 1;
            uVar2 = *puVar4;
          }
          param_5 = puVar7 + 1;
          *puVar7 = uVar2;
          puVar7 = param_5;
          puVar4 = puVar10;
        } while (puVar10 != puVar6);
      }
      if (puVar8 != param_2) {
        uVar3 = (long)param_2 + (-8 - (long)puVar8);
        uVar11 = (uVar3 >> 3) + 1;
        if ((3 < uVar11) &&
           ((lVar9 = (uVar3 & 0xfffffffffffffff8) + 8,
            (undefined8 *)((long)puVar8 + lVar9) <= param_5 ||
            ((undefined8 *)((long)param_5 + lVar9) <= puVar8)))) {
          uVar5 = uVar11 & 0x3ffffffffffffffc;
          puVar6 = puVar8 + 2;
          puVar8 = puVar8 + uVar5;
          puVar7 = param_5 + 2;
          uVar3 = uVar5;
          do {
            puVar4 = puVar6 + -1;
            uVar2 = puVar6[-2];
            uVar14 = puVar6[1];
            uVar13 = *puVar6;
            puVar6 = puVar6 + 4;
            uVar3 = uVar3 - 4;
            puVar7[-1] = *puVar4;
            puVar7[-2] = uVar2;
            puVar7[1] = uVar14;
            *puVar7 = uVar13;
            puVar7 = puVar7 + 4;
          } while (uVar3 != 0);
          param_5 = param_5 + uVar5;
          if (uVar11 == uVar5) {
            return;
          }
        }
        do {
          puVar6 = puVar8 + 1;
          *param_5 = *puVar8;
          param_5 = param_5 + 1;
          puVar8 = puVar6;
        } while (param_2 != puVar6);
      }
    }
  }
  return;
}

