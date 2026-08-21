
undefined8 FUN_014b9978(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  Isolate *pIVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int *piVar15;
  ulong *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 *local_158;
  long lStack_150;
  undefined1 *local_148;
  int local_140;
  undefined1 auStack_130 [128];
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  piVar15 = (int *)(param_2 - (param_1 * 8 + -8));
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  if (*piVar15 == *(int *)(param_3 + 0xa0)) {
    v8::internal::JSDate::CurrentTimeValue(param_3);
    FUN_014c21c8(&local_148,*(undefined8 *)(param_3 + 0xb638),2);
    lStack_150 = (long)(local_140 - (int)local_148);
    local_158 = local_148;
    pIVar9 = (Isolate *)v8::internal::Factory::NewStringFromUtf8((Factory *)param_3,&local_158,0);
    pIVar1 = param_3 + 0x180;
    if (pIVar9 != (Isolate *)0x0) {
      pIVar1 = pIVar9;
    }
    uVar14 = *(undefined8 *)pIVar1;
    if (local_148 != auStack_130) {
      free(local_148);
    }
    goto LAB_014ba08c;
  }
  if (param_1 == 6) {
    puVar16 = (ulong *)(param_2 + -8);
    uVar12 = *puVar16;
    if ((uVar12 & 1) != 0) {
      uVar13 = uVar12 & 0xffffffff00000000;
      if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x428) {
        uVar4 = *(uint *)(uVar12 + 0xb);
        if ((uVar4 & 1) == 0) {
          dVar17 = (double)((int)uVar4 >> 1);
        }
        else {
          dVar17 = *(double *)((uVar13 | uVar4) + 3);
        }
        goto LAB_014b9a78;
      }
      if (0x43 < *(ushort *)((uVar13 | *(uint *)(uVar12 - 1)) + 7)) {
        puVar16 = (ulong *)v8::internal::JSReceiver::ToPrimitive(puVar16,0);
      }
    }
    if (puVar16 == (ulong *)0x0) goto LAB_014ba088;
    uVar12 = *puVar16;
    if ((uVar12 & 1) != 0) {
      uVar13 = uVar12 & 0xffffffff00000000 | 7;
      if (*(ushort *)(uVar13 + *(uint *)(uVar12 - 1)) < 0x40) {
        dVar17 = (double)FUN_014c2658(param_3);
        goto LAB_014b9a78;
      }
      if ((*(short *)(uVar13 + *(uint *)(uVar12 - 1)) != 0x42) &&
         (puVar16 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar16,0),
         puVar16 == (ulong *)0x0)) goto LAB_014ba088;
    }
    uVar12 = *puVar16;
    if ((uVar12 & 1) == 0) {
      dVar17 = (double)((int)uVar12 >> 1);
    }
    else {
      dVar17 = *(double *)(uVar12 + 3);
    }
LAB_014b9a78:
    puVar10 = (undefined8 *)
              v8::internal::JSDate::New(dVar17,param_2 - (param_1 * 8 + -0x10),piVar15);
    if (puVar10 != (undefined8 *)0x0) {
      uVar14 = *puVar10;
      goto LAB_014ba08c;
    }
  }
  else {
    if (param_1 == 5) {
      dVar17 = (double)v8::internal::JSDate::CurrentTimeValue(param_3);
      goto LAB_014b9a78;
    }
    puVar16 = (ulong *)(param_2 + -8);
    uVar12 = *puVar16;
    if (((uVar12 & 1) != 0) &&
       (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
      puVar16 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar16,0);
    }
    if (puVar16 != (ulong *)0x0) {
      puVar11 = (ulong *)(param_2 + -0x10);
      uVar12 = *puVar11;
      if (((uVar12 & 1) != 0) &&
         (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
        puVar11 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar11,0);
      }
      if (puVar11 != (ulong *)0x0) {
        uVar12 = *puVar16;
        if ((uVar12 & 1) == 0) {
          dVar17 = (double)((int)uVar12 >> 1);
        }
        else {
          dVar17 = *(double *)(uVar12 + 3);
        }
        uVar12 = *puVar11;
        iVar8 = param_1 + -5;
        if ((uVar12 & 1) == 0) {
          dVar19 = (double)((int)uVar12 >> 1);
        }
        else {
          dVar19 = *(double *)(uVar12 + 3);
        }
        dVar21 = 0.0;
        if (iVar8 < 3) {
          dVar20 = 1.0;
          goto LAB_014b9c48;
        }
        puVar16 = (ulong *)(param_2 + -0x18);
        uVar12 = *puVar16;
        if (((uVar12 & 1) != 0) &&
           (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
          puVar16 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar16,0);
        }
        if (puVar16 == (ulong *)0x0) goto LAB_014ba088;
        uVar12 = *puVar16;
        if ((uVar12 & 1) == 0) {
          dVar20 = (double)((int)uVar12 >> 1);
          if (3 < iVar8) goto LAB_014b9dac;
LAB_014b9c48:
          dVar24 = 0.0;
          dVar23 = 0.0;
          dVar22 = 0.0;
        }
        else {
          dVar20 = *(double *)(uVar12 + 3);
          if (iVar8 < 4) goto LAB_014b9c48;
LAB_014b9dac:
          puVar16 = (ulong *)(param_2 + -0x20);
          uVar12 = *puVar16;
          if (((uVar12 & 1) != 0) &&
             (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42))
          {
            puVar16 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar16,0);
          }
          if (puVar16 == (ulong *)0x0) goto LAB_014ba088;
          uVar12 = *puVar16;
          if ((uVar12 & 1) == 0) {
            dVar22 = (double)((int)uVar12 >> 1);
          }
          else {
            dVar22 = *(double *)(uVar12 + 3);
          }
          if (iVar8 < 5) {
            dVar24 = 0.0;
            dVar23 = 0.0;
          }
          else {
            puVar16 = (ulong *)(param_2 + -0x28);
            uVar12 = *puVar16;
            if (((uVar12 & 1) != 0) &&
               (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42
               )) {
              puVar16 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar16,0);
            }
            if (puVar16 == (ulong *)0x0) goto LAB_014ba088;
            uVar12 = *puVar16;
            if ((uVar12 & 1) == 0) {
              dVar23 = (double)((int)uVar12 >> 1);
            }
            else {
              dVar23 = *(double *)(uVar12 + 3);
            }
            if (iVar8 < 6) {
              dVar24 = 0.0;
            }
            else {
              puVar16 = (ulong *)(param_2 + -0x30);
              uVar12 = *puVar16;
              if (((uVar12 & 1) != 0) &&
                 (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) !=
                  0x42)) {
                puVar16 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar16,0)
                ;
              }
              if (puVar16 == (ulong *)0x0) goto LAB_014ba088;
              uVar12 = *puVar16;
              if ((uVar12 & 1) == 0) {
                dVar24 = (double)((int)uVar12 >> 1);
              }
              else {
                dVar24 = *(double *)(uVar12 + 3);
              }
              if (6 < iVar8) {
                puVar16 = (ulong *)(param_2 + -0x38);
                uVar12 = *puVar16;
                if (((uVar12 & 1) != 0) &&
                   (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) !=
                    0x42)) {
                  puVar16 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric
                                               (param_3,puVar16,0);
                }
                if (puVar16 == (ulong *)0x0) goto LAB_014ba088;
                uVar12 = *puVar16;
                if ((uVar12 & 1) == 0) {
                  dVar21 = (double)((int)uVar12 >> 1);
                }
                else {
                  dVar21 = *(double *)(uVar12 + 3);
                }
              }
            }
          }
        }
        dVar18 = dVar17;
        if (!NAN(dVar17)) {
          bVar7 = true;
          if ((ABS(dVar17) != INFINITY) && (bVar7 = true, !NAN(ABS(dVar17)))) {
            bVar7 = false;
          }
          bVar6 = true;
          if ((!bVar7) && (bVar6 = false, !NAN(dVar17))) {
            bVar6 = dVar17 == 0.0;
          }
          if (!bVar6) {
            dVar18 = (double)(long)dVar17;
          }
          bVar7 = true;
          bVar6 = false;
          if (dVar18 <= 99.0) {
            bVar7 = false;
            bVar6 = true;
            if (!NAN(dVar18)) {
              bVar7 = dVar18 < 0.0;
              bVar6 = false;
            }
          }
          dVar18 = dVar18 + 1900.0;
          if (bVar7 != bVar6) {
            dVar18 = dVar17;
          }
        }
        dVar17 = (double)FUN_014c290c(dVar18,dVar19,dVar20);
        dVar19 = NAN;
        if (((((ABS(dVar21) != INFINITY) && (!NAN(ABS(dVar21)))) && (ABS(dVar24) != INFINITY)) &&
            ((!NAN(ABS(dVar24)) && (ABS(dVar23) != INFINITY)))) &&
           ((!NAN(ABS(dVar23)) && ((ABS(dVar22) != INFINITY && (!NAN(ABS(dVar22)))))))) {
          bVar7 = dVar22 < 0.0;
          if (dVar22 != 0.0) {
            dVar19 = (double)(long)dVar22;
            dVar22 = (double)(long)dVar22;
            if (bVar7) {
              dVar22 = dVar19;
            }
          }
          bVar7 = dVar23 < 0.0;
          if (dVar23 != 0.0) {
            dVar19 = (double)(long)dVar23;
            dVar23 = (double)(long)dVar23;
            if (bVar7) {
              dVar23 = dVar19;
            }
          }
          bVar7 = dVar24 < 0.0;
          if (dVar24 != 0.0) {
            dVar19 = (double)(long)dVar24;
            dVar24 = (double)(long)dVar24;
            if (bVar7) {
              dVar24 = dVar19;
            }
          }
          bVar7 = dVar21 < 0.0;
          if (dVar21 != 0.0) {
            dVar19 = (double)(long)dVar21;
            dVar21 = (double)(long)dVar21;
            if (bVar7) {
              dVar21 = dVar19;
            }
          }
          dVar19 = dVar22 * 3600000.0 + dVar23 * 60000.0 + dVar24 * 1000.0 + dVar21;
        }
        dVar21 = ABS(dVar17);
        bVar7 = true;
        if ((ABS(dVar19) != INFINITY) && (bVar7 = true, !NAN(ABS(dVar19)))) {
          bVar7 = false;
        }
        bVar6 = true;
        if ((!bVar7) && (bVar6 = false, !NAN(dVar21))) {
          bVar6 = dVar21 == INFINITY;
        }
        bVar7 = true;
        if ((!bVar6) && (bVar7 = true, !NAN(dVar21))) {
          bVar7 = false;
        }
        dVar19 = dVar17 * 86400000.0 + dVar19;
        if (bVar7) {
          dVar19 = NAN;
        }
        dVar17 = NAN;
        if ((-8.640002592e+15 <= dVar19) && (dVar17 = NAN, dVar19 <= 8.640002592e+15)) {
          iVar8 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                            (*(long **)(param_3 + 0xb638),(long)dVar19,0);
          dVar17 = (double)((long)dVar19 - (long)iVar8);
        }
        goto LAB_014b9a78;
      }
    }
  }
LAB_014ba088:
  uVar14 = *(undefined8 *)(param_3 + 0x180);
LAB_014ba08c:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}

