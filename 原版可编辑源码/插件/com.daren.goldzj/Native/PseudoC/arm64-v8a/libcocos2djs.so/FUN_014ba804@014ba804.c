
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_014ba804(int param_1,long param_2,Factory *param_3)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  Factory *pFVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  param_1 = param_1 + -5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (param_1 < 1) {
    dVar11 = 1.0;
    dVar12 = 0.0;
    dVar14 = 0.0;
    dVar15 = 0.0;
    dVar16 = 0.0;
    dVar10 = NAN;
    dVar13 = 0.0;
  }
  else {
    puVar6 = (ulong *)(param_2 + -8);
    uVar7 = *puVar6;
    if (((uVar7 & 1) != 0) &&
       (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)) {
      puVar6 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar6,0);
    }
    if (puVar6 == (ulong *)0x0) {
LAB_014bad6c:
      pFVar5 = param_3 + 0x180;
      goto LAB_014bad70;
    }
    uVar7 = *puVar6;
    if ((uVar7 & 1) == 0) {
      dVar9 = (double)((int)uVar7 >> 1);
    }
    else {
      dVar9 = *(double *)(uVar7 + 3);
    }
    dVar11 = 1.0;
    dVar13 = 0.0;
    if (param_1 < 2) {
      dVar15 = 0.0;
      dVar14 = 0.0;
      dVar12 = 0.0;
      goto joined_r0x014ba938;
    }
    puVar6 = (ulong *)(param_2 + -0x10);
    uVar7 = *puVar6;
    if (((uVar7 & 1) != 0) &&
       (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)) {
      puVar6 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar6,0);
    }
    if (puVar6 == (ulong *)0x0) goto LAB_014bad6c;
    uVar7 = *puVar6;
    if ((uVar7 & 1) == 0) {
      dVar12 = (double)((int)uVar7 >> 1);
      if (param_1 < 3) goto LAB_014baaa0;
LAB_014ba950:
      puVar6 = (ulong *)(param_2 + -0x18);
      uVar7 = *puVar6;
      if (((uVar7 & 1) != 0) &&
         (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)) {
        puVar6 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar6,0);
      }
      if (puVar6 == (ulong *)0x0) goto LAB_014bad6c;
      uVar7 = *puVar6;
      if ((uVar7 & 1) == 0) {
        dVar11 = (double)((int)uVar7 >> 1);
      }
      else {
        dVar11 = *(double *)(uVar7 + 3);
      }
      if (param_1 < 4) goto LAB_014baaa0;
      puVar6 = (ulong *)(param_2 + -0x20);
      uVar7 = *puVar6;
      if (((uVar7 & 1) != 0) &&
         (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)) {
        puVar6 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar6,0);
      }
      if (puVar6 == (ulong *)0x0) goto LAB_014bad6c;
      uVar7 = *puVar6;
      if ((uVar7 & 1) == 0) {
        dVar14 = (double)((int)uVar7 >> 1);
      }
      else {
        dVar14 = *(double *)(uVar7 + 3);
      }
      if (param_1 < 5) {
        dVar15 = 0.0;
joined_r0x014ba938:
        dVar16 = 0.0;
      }
      else {
        puVar6 = (ulong *)(param_2 + -0x28);
        uVar7 = *puVar6;
        if (((uVar7 & 1) != 0) &&
           (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)) {
          puVar6 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar6,0);
        }
        if (puVar6 == (ulong *)0x0) goto LAB_014bad6c;
        uVar7 = *puVar6;
        if ((uVar7 & 1) == 0) {
          dVar15 = (double)((int)uVar7 >> 1);
        }
        else {
          dVar15 = *(double *)(uVar7 + 3);
        }
        if (param_1 < 6) goto joined_r0x014ba938;
        puVar6 = (ulong *)(param_2 + -0x30);
        uVar7 = *puVar6;
        if (((uVar7 & 1) != 0) &&
           (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)) {
          puVar6 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar6,0);
        }
        if (puVar6 == (ulong *)0x0) goto LAB_014bad6c;
        uVar7 = *puVar6;
        if ((uVar7 & 1) == 0) {
          dVar16 = (double)((int)uVar7 >> 1);
        }
        else {
          dVar16 = *(double *)(uVar7 + 3);
        }
        if (6 < param_1) {
          puVar6 = (ulong *)(param_2 + -0x38);
          uVar7 = *puVar6;
          if (((uVar7 & 1) != 0) &&
             (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)) {
            puVar6 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar6,0);
          }
          if (puVar6 == (ulong *)0x0) goto LAB_014bad6c;
          uVar7 = *puVar6;
          if ((uVar7 & 1) == 0) {
            dVar13 = (double)((int)uVar7 >> 1);
          }
          else {
            dVar13 = *(double *)(uVar7 + 3);
          }
        }
      }
    }
    else {
      dVar12 = *(double *)(uVar7 + 3);
      if (2 < param_1) goto LAB_014ba950;
LAB_014baaa0:
      dVar16 = 0.0;
      dVar15 = 0.0;
      dVar14 = 0.0;
    }
    dVar10 = dVar9;
    if (!NAN(dVar9)) {
      bVar4 = true;
      if ((ABS(dVar9) != INFINITY) && (bVar4 = true, !NAN(ABS(dVar9)))) {
        bVar4 = false;
      }
      bVar3 = true;
      if ((!bVar4) && (bVar3 = false, !NAN(dVar9))) {
        bVar3 = dVar9 == 0.0;
      }
      if (!bVar3) {
        dVar10 = (double)(long)dVar9;
      }
      bVar4 = true;
      bVar3 = false;
      if (dVar10 <= 99.0) {
        bVar4 = false;
        bVar3 = true;
        if (!NAN(dVar10)) {
          bVar4 = dVar10 < 0.0;
          bVar3 = false;
        }
      }
      dVar10 = dVar10 + 1900.0;
      if (bVar4 != bVar3) {
        dVar10 = dVar9;
      }
    }
  }
  dVar11 = (double)FUN_014c290c(dVar10,dVar12,dVar11);
  dVar12 = NAN;
  if (((((ABS(dVar14) != INFINITY) && (!NAN(ABS(dVar14)))) && (ABS(dVar15) != INFINITY)) &&
      ((!NAN(ABS(dVar15)) && (ABS(dVar16) != INFINITY)))) &&
     ((!NAN(ABS(dVar16)) && ((ABS(dVar13) != INFINITY && (!NAN(ABS(dVar13)))))))) {
    if (dVar14 != 0.0) {
      dVar14 = (double)(long)dVar14;
    }
    bVar4 = dVar15 < 0.0;
    if (dVar15 != 0.0) {
      dVar12 = (double)(long)dVar15;
      dVar15 = (double)(long)dVar15;
      if (bVar4) {
        dVar15 = dVar12;
      }
    }
    if (dVar16 != 0.0) {
      dVar16 = (double)(long)dVar16;
    }
    bVar4 = dVar13 < 0.0;
    if (dVar13 != 0.0) {
      dVar12 = (double)(long)dVar13;
      dVar13 = (double)(long)dVar13;
      if (bVar4) {
        dVar13 = dVar12;
      }
    }
    dVar12 = dVar14 * 3600000.0 + dVar15 * 60000.0 + dVar16 * 1000.0 + dVar13;
  }
  dVar15 = ABS(dVar11);
  bVar4 = true;
  if ((ABS(dVar12) != INFINITY) && (bVar4 = true, !NAN(ABS(dVar12)))) {
    bVar4 = false;
  }
  bVar3 = true;
  if ((!bVar4) && (bVar3 = false, !NAN(dVar15))) {
    bVar3 = dVar15 == INFINITY;
  }
  bVar4 = true;
  if ((!bVar3) && (bVar4 = true, !NAN(dVar15))) {
    bVar4 = false;
  }
  dVar12 = dVar11 * 86400000.0 + dVar12;
  if (bVar4) {
    dVar12 = NAN;
  }
  dVar15 = (double)v8::internal::DateCache::TimeClip(dVar12);
  pFVar5 = (Factory *)
           v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>(param_3,dVar15);
LAB_014bad70:
  uVar8 = *(undefined8 *)pFVar5;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  return uVar8;
}

