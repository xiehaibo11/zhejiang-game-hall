
/* v8::internal::MutableBigInt::AbsoluteDivSmall(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, unsigned long,
   v8::internal::Handle<v8::internal::MutableBigInt>*, unsigned long*) */

void v8::internal::MutableBigInt::AbsoluteDivSmall
               (Factory *param_1,long *param_2,long param_3,long *param_4,ulong *param_5)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  *param_5 = 0;
  lVar14 = *param_2;
  uVar1 = *(uint *)(lVar14 + 3);
  uVar2 = uVar1 >> 1 & 0x3fffffff;
  if (param_4 == (long *)0x0) {
    if (uVar2 != 0) {
      uVar10 = LZCOUNT(param_3);
      uVar11 = param_3 << (uVar10 & 0x3f);
      uVar16 = 0;
      uVar12 = uVar11 >> 0x20;
      uVar13 = (ulong)(uVar1 >> 1) & 0x3fffffff;
      do {
        uVar13 = uVar13 - 1;
        uVar6 = *(ulong *)(lVar14 + ((long)((int)uVar13 << 3) | 7U));
        uVar15 = uVar6 >> (-(int)uVar10 & 0x3fU) & -(ulong)((uint)-(int)uVar10 >> 0x1f) |
                 uVar16 << (uVar10 & 0x3f);
        uVar6 = uVar6 << (uVar10 & 0x3f);
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = uVar15 / uVar12;
        }
        uVar7 = uVar6 >> 0x20;
        uVar6 = uVar6 & 0xffffffff;
        uVar17 = uVar15 - uVar16 * uVar12;
        if (uVar16 >> 0x20 == 0) goto LAB_0106ce2c;
        do {
          do {
            uVar17 = uVar17 + uVar12;
            uVar16 = uVar16 - 1;
            if (uVar17 >> 0x20 != 0) goto LAB_0106ce40;
          } while (uVar16 >> 0x20 != 0);
LAB_0106ce2c:
          uVar8 = uVar16 * (uVar11 & 0xffffffff);
          uVar4 = uVar7 | uVar17 << 0x20;
        } while (uVar4 <= uVar8 && uVar8 - uVar4 != 0);
LAB_0106ce40:
        uVar15 = (uVar7 | uVar15 << 0x20) - uVar16 * uVar11;
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = uVar15 / uVar12;
        }
        uVar17 = uVar15 - uVar16 * uVar12;
        if (uVar16 >> 0x20 == 0) goto LAB_0106ce70;
        do {
          do {
            uVar17 = uVar17 + uVar12;
            uVar16 = uVar16 - 1;
            if (uVar17 >> 0x20 != 0) goto LAB_0106ce84;
          } while (uVar16 >> 0x20 != 0);
LAB_0106ce70:
          uVar4 = uVar16 * (uVar11 & 0xffffffff);
          uVar7 = uVar6 | uVar17 << 0x20;
        } while (uVar7 <= uVar4 && uVar4 - uVar7 != 0);
LAB_0106ce84:
        uVar16 = (uVar6 | uVar15 << 0x20) - uVar16 * uVar11 >> (uVar10 & 0x3f);
        *param_5 = uVar16;
        if ((long)uVar13 < 1) {
          return;
        }
        lVar14 = *param_2;
      } while( true );
    }
  }
  else {
    if (*param_4 == 0) {
      if (0x1000000 < uVar2) {
        if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Aborting on invalid BigInt length");
        }
        puVar5 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
        Isolate::Throw((Isolate *)param_1,*puVar5,0);
LAB_0106cef0:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      plVar3 = (long *)Factory::NewBigInt(param_1,uVar2,0);
      *(uint *)(*plVar3 + 3) = uVar2 << 1;
      if (plVar3 == (long *)0x0) goto LAB_0106cef0;
      *param_4 = (long)plVar3;
    }
    if (uVar2 != 0) {
      uVar10 = LZCOUNT(param_3);
      uVar11 = param_3 << (uVar10 & 0x3f);
      uVar12 = uVar11 >> 0x20;
      uVar13 = (ulong)(uVar1 >> 1 & 0x3fffffff);
      do {
        uVar13 = uVar13 - 1;
        uVar15 = (long)((int)uVar13 << 3) | 7;
        uVar17 = *(ulong *)(*param_2 + uVar15);
        uVar6 = uVar17 >> (-(int)uVar10 & 0x3fU) & -(ulong)((uint)-(int)uVar10 >> 0x1f) |
                *param_5 << (uVar10 & 0x3f);
        uVar17 = uVar17 << (uVar10 & 0x3f);
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = uVar6 / uVar12;
        }
        uVar4 = uVar17 >> 0x20;
        uVar17 = uVar17 & 0xffffffff;
        uVar7 = uVar6 - uVar16 * uVar12;
        if (uVar16 >> 0x20 == 0) goto LAB_0106cd50;
        do {
          do {
            uVar7 = uVar7 + uVar12;
            uVar16 = uVar16 - 1;
            if (uVar7 >> 0x20 != 0) goto LAB_0106cd64;
          } while (uVar16 >> 0x20 != 0);
LAB_0106cd50:
          uVar9 = uVar16 * (uVar11 & 0xffffffff);
          uVar8 = uVar4 | uVar7 << 0x20;
        } while (uVar8 <= uVar9 && uVar9 - uVar8 != 0);
LAB_0106cd64:
        uVar7 = (uVar4 | uVar6 << 0x20) - uVar16 * uVar11;
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar7 / uVar12;
        }
        uVar4 = uVar7 - uVar6 * uVar12;
        if (uVar6 >> 0x20 == 0) goto LAB_0106cd94;
        do {
          do {
            uVar4 = uVar4 + uVar12;
            uVar6 = uVar6 - 1;
            if (uVar4 >> 0x20 != 0) goto LAB_0106ccc8;
          } while (uVar6 >> 0x20 != 0);
LAB_0106cd94:
          uVar9 = uVar6 * (uVar11 & 0xffffffff);
          uVar8 = uVar17 | uVar4 << 0x20;
        } while (uVar8 <= uVar9 && uVar9 - uVar8 != 0);
LAB_0106ccc8:
        *param_5 = (uVar17 | uVar7 << 0x20) - uVar6 * uVar11 >> (uVar10 & 0x3f);
        *(ulong *)(*(long *)*param_4 + uVar15) = uVar6 + (uVar16 << 0x20);
      } while (0 < (long)uVar13);
    }
  }
  return;
}

