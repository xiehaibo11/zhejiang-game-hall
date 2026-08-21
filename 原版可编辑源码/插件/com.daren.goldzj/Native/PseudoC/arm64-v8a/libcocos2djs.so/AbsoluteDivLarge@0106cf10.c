
/* v8::internal::MutableBigInt::AbsoluteDivLarge(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, v8::internal::Handle<v8::internal::BigIntBase>,
   v8::internal::Handle<v8::internal::MutableBigInt>*,
   v8::internal::Handle<v8::internal::MutableBigInt>*) */

undefined8
v8::internal::MutableBigInt::AbsoluteDivLarge
          (Factory *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  char *pcVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long *local_a0;
  long local_68;
  
  uVar1 = *(uint *)(*param_3 + 3);
  uVar30 = uVar1 >> 1;
  uVar17 = (ulong)uVar30 & 0x3fffffff;
  uVar4 = *(uint *)(*param_2 + 3) >> 1;
  uVar16 = (uint)uVar17;
  uVar8 = (uVar4 & 0x3fffffff) - uVar16;
  if (param_4 == (long *)0x0) {
    local_a0 = (long *)0x0;
    uVar30 = uVar16 >> 0x18;
  }
  else {
    if (0xffffff < (int)uVar8) {
      if (FLAG_correctness_fuzzer_suppressions == '\0') {
        puVar9 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
        Isolate::Throw((Isolate *)param_1,*puVar9,0);
        goto LAB_0106d488;
      }
      goto LAB_0106d49c;
    }
    local_a0 = (long *)Factory::NewBigInt(param_1,uVar8 + 1,0);
    *(uint *)(*local_a0 + 3) = (uVar8 + 1) * 2;
    if (local_a0 == (long *)0x0) goto LAB_0106d488;
    uVar30 = uVar30 & 0x3f000000;
  }
  if (uVar30 == 0) {
    plVar11 = (long *)Factory::NewBigInt(param_1,uVar16 + 1,0);
    *(uint *)(*plVar11 + 3) = (uVar16 + 1) * 2;
    uVar10 = 0;
    if (plVar11 != (long *)0x0) {
      uVar1 = uVar1 >> 1;
      iVar2 = uVar1 * 8;
      uVar31 = (long)(iVar2 + -8) | 7;
      lVar28 = LZCOUNT(*(undefined8 *)(*param_3 + uVar31));
      if (((int)lVar28 != 0) &&
         (param_3 = (long *)SpecialLeftShift(param_1,param_3,lVar28,0), param_3 == (long *)0x0)) {
LAB_0106d488:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      plVar12 = (long *)SpecialLeftShift(param_1,param_2,lVar28,1);
      uVar10 = 0;
      if (plVar12 != (long *)0x0) {
        if (-1 < (int)uVar8) {
          uVar33 = *(ulong *)(*param_3 + uVar31);
          uVar30 = uVar4 * 8 + uVar16 * -8 | 7;
          uVar14 = LZCOUNT(uVar33);
          uVar18 = uVar33 << (uVar14 & 0x3f);
          pcVar29 = (char *)0x0;
          uVar27 = uVar18 >> 0x20;
          uVar31 = (ulong)uVar8;
          do {
            lVar15 = *plVar12;
            iVar3 = (uVar1 + (int)uVar31) * 8;
            uVar32 = (long)iVar3 | 7;
            if (*(ulong *)(lVar15 + uVar32) == uVar33) {
              lVar13 = *param_3;
              uVar26 = 0xffffffffffffffff;
            }
            else {
              uVar26 = *(ulong *)(lVar15 + ((long)(iVar3 + -8) | 7U));
              uVar21 = uVar26 << (uVar14 & 0x3f);
              uVar20 = uVar26 >> (ulong)(-(int)uVar14 & 0x3f) & -(ulong)((uint)-(int)uVar14 >> 0x1f)
                       | *(ulong *)(lVar15 + uVar32) << (uVar14 & 0x3f);
              uVar19 = uVar21 >> 0x20;
              uVar21 = uVar21 & 0xffffffff;
              uVar26 = 0;
              if (uVar27 != 0) {
                uVar26 = uVar20 / uVar27;
              }
              uVar24 = uVar20 - uVar26 * uVar27;
              if (uVar26 >> 0x20 == 0) goto LAB_0106d19c;
              do {
                do {
                  uVar24 = uVar24 + uVar27;
                  uVar26 = uVar26 - 1;
                  if (uVar24 >> 0x20 != 0) goto LAB_0106d1b0;
                } while (uVar26 >> 0x20 != 0);
LAB_0106d19c:
                uVar25 = uVar26 * (uVar18 & 0xffffffff);
                uVar22 = uVar19 | uVar24 << 0x20;
              } while (uVar22 <= uVar25 && uVar25 - uVar22 != 0);
LAB_0106d1b0:
              uVar20 = (uVar19 | uVar20 << 0x20) - uVar26 * uVar18;
              uVar19 = 0;
              if (uVar27 != 0) {
                uVar19 = uVar20 / uVar27;
              }
              uVar24 = uVar20 - uVar19 * uVar27;
              if (uVar19 >> 0x20 == 0) goto LAB_0106d1e8;
              do {
                do {
                  uVar24 = uVar24 + uVar27;
                  uVar19 = uVar19 - 1;
                  if (uVar24 >> 0x20 != 0) goto LAB_0106d1fc;
                } while (uVar19 >> 0x20 != 0);
LAB_0106d1e8:
                uVar25 = uVar19 * (uVar18 & 0xffffffff);
                uVar22 = uVar21 | uVar24 << 0x20;
              } while (uVar22 <= uVar25 && uVar25 - uVar22 != 0);
LAB_0106d1fc:
              lVar13 = *param_3;
              uVar26 = uVar19 + (uVar26 << 0x20);
              uVar24 = *(ulong *)(lVar13 + ((long)(iVar2 + -0x10) | 7U));
              uVar21 = (uVar21 | uVar20 << 0x20) - uVar19 * uVar18 >> (uVar14 & 0x3f);
              do {
                auVar5._8_8_ = 0;
                auVar5._0_8_ = uVar26;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar24;
                uVar19 = SUB168(auVar5 * auVar6,8);
                if ((uVar19 <= uVar21) &&
                   ((uVar26 * uVar24 <= *(ulong *)(lVar15 + ((long)(iVar3 + -0x10) | 7U)) ||
                    (uVar21 != uVar19)))) break;
                bVar7 = CARRY8(uVar21,uVar33);
                uVar21 = uVar21 + uVar33;
                uVar26 = uVar26 - 1;
              } while (!bVar7);
            }
            InternalMultiplyAdd(lVar13,uVar26,0,uVar17,*plVar11);
            lVar13 = *plVar11;
            lVar15 = *plVar12;
            uVar21 = (ulong)(*(uint *)(lVar13 + 3) >> 1) & 0x3fffffff;
            if ((int)uVar21 != 0) {
              uVar19 = 0;
              uVar20 = 0;
              while( true ) {
                lVar23 = (long)(int)(uVar30 + (int)uVar19);
                uVar25 = *(ulong *)(lVar15 + lVar23);
                uVar22 = *(ulong *)((uVar19 & 0xfffffff8 | 7) + lVar13);
                uVar24 = uVar25 - uVar22;
                lVar13 = uVar24 - uVar20;
                uVar20 = (-(ulong)(uVar24 < uVar20) & 1) + (-(ulong)(uVar25 < uVar22) & 1);
                *(long *)(lVar15 + lVar23) = lVar13;
                if (uVar21 * 8 - 8 == uVar19) break;
                lVar13 = *plVar11;
                uVar19 = uVar19 + 8;
              }
              if (uVar20 != 0) {
                lVar13 = *param_3;
                lVar15 = *plVar12;
                uVar21 = (ulong)(*(uint *)(lVar13 + 3) >> 1) & 0x3fffffff;
                if ((int)uVar21 == 0) {
                  uVar19 = 0;
                }
                else {
                  uVar20 = 0;
                  uVar19 = 0;
                  while( true ) {
                    lVar23 = (long)(int)(uVar30 + (int)uVar20);
                    uVar25 = *(ulong *)(lVar15 + lVar23);
                    uVar22 = *(ulong *)((uVar20 & 0xfffffff8 | 7) + lVar13);
                    uVar24 = uVar22 + uVar25;
                    lVar13 = uVar24 + uVar19;
                    uVar19 = (ulong)CARRY8(uVar24,uVar19) + (ulong)CARRY8(uVar22,uVar25);
                    *(long *)(lVar15 + lVar23) = lVar13;
                    if (uVar21 * 8 - 8 == uVar20) break;
                    lVar13 = *param_3;
                    uVar20 = uVar20 + 8;
                  }
                  lVar15 = *plVar12;
                }
                uVar26 = uVar26 - 1;
                *(ulong *)(lVar15 + uVar32) = *(long *)(lVar15 + uVar32) + uVar19;
              }
            }
            if (param_4 != (long *)0x0) {
              *(ulong *)(*local_a0 + ((long)((int)uVar31 << 3) | 7U)) = uVar26;
            }
            pcVar29 = pcVar29 + uVar17;
            if ("_5ValueEEEEiNS0_18PropertyAttributesE" < pcVar29) {
              uVar32 = GetCurrentStackPosition();
              if (((uVar32 < *(ulong *)(param_1 + 0x68)) &&
                  (uVar8 = StackGuard::HandleInterrupts((StackGuard *)(param_1 + 0x48)),
                  (uVar8 & 1) != 0)) && (uVar8 == *(uint *)(param_1 + 0x180))) {
                return 0;
              }
              pcVar29 = (char *)0x0;
            }
            uVar30 = uVar30 - 8;
            bVar7 = 0 < (long)uVar31;
            uVar31 = uVar31 - 1;
          } while (bVar7);
        }
        if (param_4 != (long *)0x0) {
          *param_4 = (long)local_a0;
        }
        if (param_5 != (long *)0x0) {
          local_68 = *plVar12;
          InplaceRightShift((MutableBigInt *)&local_68,(int)lVar28);
          *param_5 = (long)plVar12;
        }
        uVar10 = 1;
      }
    }
  }
  else {
    if (FLAG_correctness_fuzzer_suppressions != '\0') {
LAB_0106d49c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
    puVar9 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar9,0);
    uVar10 = 0;
  }
  return uVar10;
}

