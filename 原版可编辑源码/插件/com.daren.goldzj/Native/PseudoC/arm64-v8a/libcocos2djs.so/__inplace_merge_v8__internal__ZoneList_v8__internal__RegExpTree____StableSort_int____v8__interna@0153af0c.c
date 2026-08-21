
/* void 
   std::__ndk1::__inplace_merge<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int
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
   std::__ndk1::iterator_traits<v8::internal::RegExpTree**>::value_type*, long) */

void std::__ndk1::
     __inplace_merge<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               long param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  size_t sVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *__dest;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  do {
    if (param_6 == 0) {
      return;
    }
    if ((param_6 <= param_8) || (param_5 <= param_8)) {
      __buffered_inplace_merge<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
    if (param_5 == 0) {
      return;
    }
    lVar17 = 0;
    lVar18 = 0;
    while( true ) {
      puVar1 = (undefined8 *)((long)param_1 + lVar18);
      iVar3 = (*(code *)*param_4)(param_2,puVar1);
      if (iVar3 < 0) break;
      lVar17 = lVar17 + 1;
      lVar18 = lVar18 + 8;
      if (param_5 == lVar17) {
        return;
      }
    }
    lVar5 = param_5 - lVar17;
    if (lVar5 < param_6) {
      lVar18 = param_6;
      if (param_6 < 0) {
        lVar18 = param_6 + 1;
      }
      lVar18 = lVar18 >> 1;
      puVar20 = param_2 + lVar18;
      __dest = puVar1;
      if ((long)param_2 - (long)puVar1 != 0) {
        uVar21 = (long)param_2 - (long)puVar1 >> 3;
        do {
          uVar19 = uVar21 >> 1;
          iVar3 = (*(code *)*param_4)(puVar20,__dest + uVar19);
          uVar10 = uVar21 + ~uVar19;
          uVar21 = uVar19;
          if (-1 < iVar3) {
            __dest = __dest + uVar19 + 1;
            uVar21 = uVar10;
          }
        } while (uVar21 != 0);
      }
      lVar5 = (long)__dest - (long)puVar1 >> 3;
    }
    else {
      if (param_5 + -1 == lVar17) {
        uVar11 = param_1[lVar17];
        param_1[lVar17] = *param_2;
        *param_2 = uVar11;
        return;
      }
      if (lVar5 < 0) {
        lVar5 = lVar5 + 1;
      }
      lVar5 = lVar5 >> 1;
      __dest = (undefined8 *)((long)param_1 + lVar18 + lVar5 * 8);
      puVar20 = param_2;
      if ((long)param_3 - (long)param_2 != 0) {
        uVar21 = (long)param_3 - (long)param_2 >> 3;
        puVar7 = param_2;
        do {
          uVar10 = uVar21 >> 1;
          iVar3 = (*(code *)*param_4)(puVar7 + uVar10,__dest);
          puVar20 = puVar7 + uVar10 + 1;
          uVar21 = uVar21 + ~uVar10;
          if (-1 < iVar3) {
            puVar20 = puVar7;
            uVar21 = uVar10;
          }
          puVar7 = puVar20;
        } while (uVar21 != 0);
      }
      lVar18 = (long)puVar20 - (long)param_2 >> 3;
    }
    lVar4 = (param_5 - lVar5) - lVar17;
    param_1 = puVar20;
    if ((__dest != param_2) && (param_1 = __dest, param_2 != puVar20)) {
      if (__dest + 1 == param_2) {
        uVar11 = *__dest;
        sVar2 = (long)puVar20 - (long)param_2;
        if (sVar2 != 0) {
          memmove(__dest,param_2,sVar2);
        }
        __dest[(long)sVar2 >> 3] = uVar11;
        param_1 = __dest + ((long)sVar2 >> 3);
      }
      else if (param_2 + 1 == puVar20) {
        uVar11 = puVar20[-1];
        sVar2 = (long)(puVar20 + -1) - (long)__dest;
        param_1 = puVar20;
        if (sVar2 != 0) {
          param_1 = (undefined8 *)((long)puVar20 - sVar2);
          memmove(param_1,__dest,sVar2);
        }
        *__dest = uVar11;
      }
      else {
        lVar8 = (long)param_2 - (long)__dest >> 3;
        lVar6 = (long)puVar20 - (long)param_2 >> 3;
        lVar14 = lVar8;
        lVar13 = lVar6;
        if (lVar8 == lVar6) {
          uVar10 = ((long)param_2 - (long)__dest) - 8;
          uVar21 = (uVar10 >> 3) + 1;
          puVar7 = param_2;
          puVar9 = __dest;
          param_1 = param_2;
          if ((3 < uVar21) &&
             ((uVar10 = uVar10 & 0xfffffffffffffff8,
              (undefined8 *)((long)param_2 + uVar10 + 8) <= __dest ||
              ((undefined8 *)((long)__dest + uVar10 + 8) <= param_2)))) {
            uVar19 = uVar21 & 0x3ffffffffffffffc;
            lVar14 = 0;
            uVar10 = uVar19;
            do {
              puVar7 = (undefined8 *)((long)__dest + lVar14);
              puVar9 = (undefined8 *)((long)param_2 + lVar14);
              uVar11 = *puVar9;
              uVar23 = puVar9[3];
              uVar22 = puVar9[2];
              uVar25 = puVar7[1];
              uVar24 = *puVar7;
              uVar27 = puVar7[3];
              uVar26 = puVar7[2];
              uVar10 = uVar10 - 4;
              lVar14 = lVar14 + 0x20;
              puVar7[1] = puVar9[1];
              *puVar7 = uVar11;
              puVar7[3] = uVar23;
              puVar7[2] = uVar22;
              puVar9[1] = uVar25;
              *puVar9 = uVar24;
              puVar9[3] = uVar27;
              puVar9[2] = uVar26;
            } while (uVar10 != 0);
            puVar7 = param_2 + uVar19;
            puVar9 = __dest + uVar19;
            if (uVar21 == uVar19) goto LAB_0153b2a4;
          }
          do {
            uVar11 = *puVar9;
            puVar15 = puVar9 + 1;
            *puVar9 = *puVar7;
            *puVar7 = uVar11;
            puVar7 = puVar7 + 1;
            puVar9 = puVar15;
          } while (param_2 != puVar15);
        }
        else {
          do {
            lVar12 = lVar13;
            lVar13 = 0;
            if (lVar12 != 0) {
              lVar13 = lVar14 / lVar12;
            }
            lVar13 = lVar14 - lVar13 * lVar12;
            lVar14 = lVar12;
          } while (lVar13 != 0);
          if (lVar12 != 0) {
            puVar7 = __dest + lVar12;
            do {
              puVar7 = puVar7 + -1;
              uVar11 = *puVar7;
              puVar15 = puVar7;
              puVar9 = puVar7 + lVar8;
              do {
                puVar16 = puVar9;
                lVar14 = (long)puVar20 - (long)puVar16 >> 3;
                puVar9 = puVar16 + lVar8;
                if (lVar14 <= lVar8) {
                  puVar9 = __dest + (lVar8 - lVar14);
                }
                *puVar15 = *puVar16;
                puVar15 = puVar16;
              } while (puVar9 != puVar7);
              *puVar16 = uVar11;
            } while (puVar7 != __dest);
          }
          param_1 = __dest + lVar6;
        }
      }
    }
LAB_0153b2a4:
    if (lVar18 + lVar5 < ((param_6 + param_5) - (lVar18 + lVar5)) - lVar17) {
      __inplace_merge<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                (puVar1,__dest,param_1,param_4,lVar5,lVar18,param_7,param_8);
      param_6 = param_6 - lVar18;
      param_5 = lVar4;
      param_2 = puVar20;
    }
    else {
      __inplace_merge<v8::internal::ZoneList<v8::internal::RegExpTree*>::StableSort<int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*)>(int(*)(v8::internal::RegExpTree*const*,v8::internal::RegExpTree*const*),unsigned_long,unsigned_long)::_lambda(v8::internal::RegExpTree*const&,v8::internal::RegExpTree*const&)_1_&,v8::internal::RegExpTree**>
                (param_1,puVar20,param_3,param_4,lVar4,param_6 - lVar18,param_7,param_8);
      param_6 = lVar18;
      param_5 = lVar5;
      param_3 = param_1;
      param_2 = __dest;
      param_1 = puVar1;
    }
  } while( true );
}

