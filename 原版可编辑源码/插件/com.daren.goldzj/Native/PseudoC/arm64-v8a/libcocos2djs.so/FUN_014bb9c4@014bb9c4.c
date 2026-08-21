
undefined8 FUN_014bb9c4(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  Isolate *pIVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  char *local_80;
  undefined8 uStack_78;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar13 = *param_2;
  if (((uVar13 & 1) == 0) ||
     (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x428)) {
    uStack_78 = __strlen_chk("Date.prototype.setHours",0x18);
    local_80 = "Date.prototype.setHours";
    lVar10 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_80,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar12 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar10,param_2,0);
    uVar14 = v8::internal::Isolate::Throw(param_3,*puVar12,0);
    goto LAB_014bbad8;
  }
  iVar8 = param_1 + -5;
  pIVar9 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar9 = param_3 + 0xa0;
  }
  uVar13 = *(ulong *)pIVar9;
  if (((uVar13 & 1) != 0) &&
     (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x42)) {
    pIVar9 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar9,0);
  }
  if (pIVar9 == (Isolate *)0x0) goto LAB_014bbf50;
  uVar13 = *(ulong *)pIVar9;
  if ((uVar13 & 1) == 0) {
    dVar18 = (double)((int)uVar13 >> 1);
  }
  else {
    dVar18 = *(double *)(uVar13 + 3);
  }
  uVar4 = *(uint *)(*param_2 + 0xb);
  if ((uVar4 & 1) == 0) {
    dVar17 = (double)((int)uVar4 >> 1);
LAB_014bbb58:
    iVar7 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar17,1);
    lVar10 = (long)dVar17 + (long)iVar7;
    lVar1 = lVar10;
    if (lVar10 < 0) {
      lVar1 = lVar10 + -86399999;
    }
    iVar15 = ((int)(lVar1 / 86400000) + (int)(lVar1 >> 0x3f)) -
             (SUB164(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
    iVar7 = (int)lVar10 + iVar15 * -86400000;
    dVar20 = (double)((iVar7 / 1000) % 0x3c);
    dVar19 = (double)(iVar7 % 1000);
    if (iVar8 < 2) {
      dVar21 = (double)((iVar7 / 60000) % 0x3c);
    }
    else {
      puVar11 = param_2 + -2;
      uVar13 = *puVar11;
      if (((uVar13 & 1) != 0) &&
         (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x42)) {
        puVar11 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar11,0);
      }
      if (puVar11 == (ulong *)0x0) {
LAB_014bbf50:
        uVar14 = *(undefined8 *)(param_3 + 0x180);
        goto LAB_014bbad8;
      }
      uVar13 = *puVar11;
      if ((uVar13 & 1) == 0) {
        dVar21 = (double)((int)uVar13 >> 1);
      }
      else {
        dVar21 = *(double *)(uVar13 + 3);
      }
      if (2 < iVar8) {
        puVar11 = param_2 + -3;
        uVar13 = *puVar11;
        if (((uVar13 & 1) != 0) &&
           (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x42)) {
          puVar11 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar11,0);
        }
        if (puVar11 == (ulong *)0x0) goto LAB_014bbf50;
        uVar13 = *puVar11;
        if ((uVar13 & 1) == 0) {
          dVar20 = (double)((int)uVar13 >> 1);
        }
        else {
          dVar20 = *(double *)(uVar13 + 3);
        }
        if (3 < iVar8) {
          puVar11 = param_2 + -4;
          uVar13 = *puVar11;
          if (((uVar13 & 1) != 0) &&
             (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x42))
          {
            puVar11 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar11,0);
          }
          if (puVar11 == (ulong *)0x0) goto LAB_014bbf50;
          uVar13 = *puVar11;
          if ((uVar13 & 1) == 0) {
            dVar19 = (double)((int)uVar13 >> 1);
          }
          else {
            dVar19 = *(double *)(uVar13 + 3);
          }
        }
      }
    }
    dVar16 = (double)iVar15;
    dVar17 = NAN;
    if (((((ABS(dVar19) != INFINITY) && (!NAN(ABS(dVar19)))) && (ABS(dVar20) != INFINITY)) &&
        ((!NAN(ABS(dVar20)) && (ABS(dVar18) != INFINITY)))) &&
       ((!NAN(ABS(dVar18)) && ((ABS(dVar21) != INFINITY && (!NAN(ABS(dVar21)))))))) {
      bVar6 = dVar18 < 0.0;
      if (dVar18 != 0.0) {
        dVar17 = (double)(long)dVar18;
        dVar18 = (double)(long)dVar18;
        if (bVar6) {
          dVar18 = dVar17;
        }
      }
      bVar6 = dVar21 < 0.0;
      if (dVar21 != 0.0) {
        dVar17 = (double)(long)dVar21;
        dVar21 = (double)(long)dVar21;
        if (bVar6) {
          dVar21 = dVar17;
        }
      }
      bVar6 = dVar20 < 0.0;
      if (dVar20 != 0.0) {
        dVar17 = (double)(long)dVar20;
        dVar20 = (double)(long)dVar20;
        if (bVar6) {
          dVar20 = dVar17;
        }
      }
      bVar6 = dVar19 < 0.0;
      if (dVar19 != 0.0) {
        dVar17 = (double)(long)dVar19;
        dVar19 = (double)(long)dVar19;
        if (bVar6) {
          dVar19 = dVar17;
        }
      }
      dVar17 = dVar18 * 3600000.0 + dVar21 * 60000.0 + dVar20 * 1000.0 + dVar19;
    }
    dVar18 = ABS(dVar16);
    bVar6 = true;
    if ((ABS(dVar17) != INFINITY) && (bVar6 = true, !NAN(ABS(dVar17)))) {
      bVar6 = false;
    }
    bVar5 = true;
    if ((!bVar6) && (bVar5 = false, !NAN(dVar18))) {
      bVar5 = dVar18 == INFINITY;
    }
    bVar6 = true;
    if ((!bVar5) && (bVar6 = true, !NAN(dVar18))) {
      bVar6 = false;
    }
    dVar17 = dVar16 * 86400000.0 + dVar17;
    if (bVar6) {
      dVar17 = NAN;
    }
  }
  else {
    dVar17 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
    if (!NAN(dVar17)) goto LAB_014bbb58;
  }
  dVar18 = NAN;
  if ((-8.640002592e+15 <= dVar17) && (dVar17 <= 8.640002592e+15)) {
    iVar8 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar17,0);
    dVar18 = (double)((long)dVar17 - (long)iVar8);
  }
  v8::internal::DateCache::TimeClip(dVar18);
  puVar12 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
  uVar14 = *puVar12;
LAB_014bbad8:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar14;
}

