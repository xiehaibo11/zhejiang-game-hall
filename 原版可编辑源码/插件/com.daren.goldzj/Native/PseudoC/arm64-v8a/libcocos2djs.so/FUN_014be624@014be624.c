
undefined8 FUN_014be624(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  Isolate *pIVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
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
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if (((uVar11 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x428)) {
    uStack_78 = __strlen_chk("Date.prototype.setUTCHours",0x1b);
    local_80 = "Date.prototype.setUTCHours";
    lVar8 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_80,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar10 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar8,param_2,0);
    uVar14 = v8::internal::Isolate::Throw(param_3,*puVar10,0);
    goto LAB_014be738;
  }
  iVar4 = param_1 + -5;
  pIVar7 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar7 = param_3 + 0xa0;
  }
  uVar11 = *(ulong *)pIVar7;
  if (((uVar11 & 1) != 0) &&
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42)) {
    pIVar7 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar7,0);
  }
  if (pIVar7 == (Isolate *)0x0) goto LAB_014beb48;
  uVar11 = *(ulong *)pIVar7;
  if ((uVar11 & 1) == 0) {
    dVar18 = (double)((int)uVar11 >> 1);
  }
  else {
    dVar18 = *(double *)(uVar11 + 3);
  }
  uVar3 = *(uint *)(*param_2 + 0xb);
  if ((uVar3 & 1) == 0) {
    dVar16 = (double)((int)uVar3 >> 1);
LAB_014be7b8:
    lVar13 = (long)dVar16;
    lVar8 = lVar13;
    if (lVar13 < 0) {
      lVar8 = lVar13 + -86399999;
    }
    iVar15 = ((int)(lVar8 / 86400000) + (int)(lVar8 >> 0x3f)) -
             (SUB164(SEXT816(lVar8) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
    iVar12 = (int)lVar13 + iVar15 * -86400000;
    dVar20 = (double)((iVar12 / 1000) % 0x3c);
    dVar19 = (double)(iVar12 % 1000);
    if (iVar4 < 2) {
      dVar21 = (double)((iVar12 / 60000) % 0x3c);
    }
    else {
      puVar9 = param_2 + -2;
      uVar11 = *puVar9;
      if (((uVar11 & 1) != 0) &&
         (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42)) {
        puVar9 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar9,0);
      }
      if (puVar9 == (ulong *)0x0) {
LAB_014beb48:
        uVar14 = *(undefined8 *)(param_3 + 0x180);
        goto LAB_014be738;
      }
      uVar11 = *puVar9;
      if ((uVar11 & 1) == 0) {
        dVar21 = (double)((int)uVar11 >> 1);
      }
      else {
        dVar21 = *(double *)(uVar11 + 3);
      }
      if (2 < iVar4) {
        puVar9 = param_2 + -3;
        uVar11 = *puVar9;
        if (((uVar11 & 1) != 0) &&
           (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42)) {
          puVar9 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar9,0);
        }
        if (puVar9 == (ulong *)0x0) goto LAB_014beb48;
        uVar11 = *puVar9;
        if ((uVar11 & 1) == 0) {
          dVar20 = (double)((int)uVar11 >> 1);
        }
        else {
          dVar20 = *(double *)(uVar11 + 3);
        }
        if (3 < iVar4) {
          puVar9 = param_2 + -4;
          uVar11 = *puVar9;
          if (((uVar11 & 1) != 0) &&
             (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42))
          {
            puVar9 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar9,0);
          }
          if (puVar9 == (ulong *)0x0) goto LAB_014beb48;
          uVar11 = *puVar9;
          if ((uVar11 & 1) == 0) {
            dVar19 = (double)((int)uVar11 >> 1);
          }
          else {
            dVar19 = *(double *)(uVar11 + 3);
          }
        }
      }
    }
    dVar17 = (double)iVar15;
    dVar16 = NAN;
    if (((((ABS(dVar19) != INFINITY) && (!NAN(ABS(dVar19)))) && (ABS(dVar20) != INFINITY)) &&
        ((!NAN(ABS(dVar20)) && (ABS(dVar18) != INFINITY)))) &&
       ((!NAN(ABS(dVar18)) && ((ABS(dVar21) != INFINITY && (!NAN(ABS(dVar21)))))))) {
      bVar6 = dVar18 < 0.0;
      if (dVar18 != 0.0) {
        dVar16 = (double)(long)dVar18;
        dVar18 = (double)(long)dVar18;
        if (bVar6) {
          dVar18 = dVar16;
        }
      }
      bVar6 = dVar21 < 0.0;
      if (dVar21 != 0.0) {
        dVar16 = (double)(long)dVar21;
        dVar21 = (double)(long)dVar21;
        if (bVar6) {
          dVar21 = dVar16;
        }
      }
      bVar6 = dVar20 < 0.0;
      if (dVar20 != 0.0) {
        dVar16 = (double)(long)dVar20;
        dVar20 = (double)(long)dVar20;
        if (bVar6) {
          dVar20 = dVar16;
        }
      }
      bVar6 = dVar19 < 0.0;
      if (dVar19 != 0.0) {
        dVar16 = (double)(long)dVar19;
        dVar19 = (double)(long)dVar19;
        if (bVar6) {
          dVar19 = dVar16;
        }
      }
      dVar16 = dVar18 * 3600000.0 + dVar21 * 60000.0 + dVar20 * 1000.0 + dVar19;
    }
    dVar18 = ABS(dVar17);
    bVar6 = true;
    if ((ABS(dVar16) != INFINITY) && (bVar6 = true, !NAN(ABS(dVar16)))) {
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
    dVar16 = dVar17 * 86400000.0 + dVar16;
    if (bVar6) {
      dVar16 = NAN;
    }
  }
  else {
    dVar16 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar3) + 3);
    if (!NAN(dVar16)) goto LAB_014be7b8;
  }
  v8::internal::DateCache::TimeClip(dVar16);
  puVar10 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
  uVar14 = *puVar10;
LAB_014be738:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar14;
}

