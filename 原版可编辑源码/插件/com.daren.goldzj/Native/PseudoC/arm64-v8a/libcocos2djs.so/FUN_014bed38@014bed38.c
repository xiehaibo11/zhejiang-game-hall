
undefined8 FUN_014bed38(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  Isolate *pIVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  char *local_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if (((uVar11 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x428)) {
    uStack_48 = __strlen_chk("Date.prototype.setUTCMilliseconds",0x22);
    local_50 = "Date.prototype.setUTCMilliseconds";
    lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar10 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar9,param_2,0);
    uVar13 = v8::internal::Isolate::Throw(param_3,*puVar10,0);
    goto LAB_014bee44;
  }
  pIVar8 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar8 = param_3 + 0xa0;
  }
  uVar11 = *(ulong *)pIVar8;
  if (((uVar11 & 1) != 0) &&
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42)) {
    pIVar8 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar8,0);
  }
  if (pIVar8 == (Isolate *)0x0) {
    uVar13 = *(undefined8 *)(param_3 + 0x180);
    goto LAB_014bee44;
  }
  uVar4 = *(uint *)(*param_2 + 0xb);
  if ((uVar4 & 1) == 0) {
    dVar14 = (double)((int)uVar4 >> 1);
LAB_014beea4:
    lVar12 = (long)dVar14;
    lVar9 = lVar12;
    if (lVar12 < 0) {
      lVar9 = lVar12 + -86399999;
    }
    iVar1 = (int)(SUB168(SEXT816(lVar9) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
            (SUB164(SEXT816(lVar9) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
    iVar5 = (int)lVar12 + iVar1 * -86400000;
    uVar11 = *(ulong *)pIVar8;
    dVar15 = (double)((iVar5 / 1000) % 0x3c);
    if ((uVar11 & 1) == 0) {
      dVar18 = (double)((int)uVar11 >> 1);
    }
    else {
      dVar18 = *(double *)(uVar11 + 3);
    }
    dVar16 = ABS(dVar15);
    dVar17 = (double)iVar1;
    dVar14 = NAN;
    if ((dVar16 != INFINITY) && (!NAN(dVar16))) {
      dVar16 = ABS((double)(iVar5 / 3600000));
      if ((dVar16 != INFINITY) && (!NAN(dVar16))) {
        dVar16 = (double)((iVar5 / 60000) % 0x3c);
        dVar19 = ABS(dVar16);
        if ((((dVar19 != INFINITY) && (!NAN(dVar19))) && (ABS(dVar18) != INFINITY)) &&
           (!NAN(ABS(dVar18)))) {
          if (NAN(dVar18)) {
            dVar14 = 0.0;
          }
          else {
            dVar14 = dVar18;
            if (dVar18 != 0.0) {
              dVar14 = (double)(long)dVar18;
              if (dVar18 < 0.0) {
                dVar14 = (double)(long)dVar18;
              }
            }
          }
          dVar14 = dVar15 * 1000.0 + (double)(iVar5 / 3600000) * 3600000.0 + dVar16 * 60000.0 +
                   dVar14;
        }
      }
    }
    dVar15 = ABS(dVar17);
    bVar7 = true;
    if ((ABS(dVar14) != INFINITY) && (bVar7 = true, !NAN(ABS(dVar14)))) {
      bVar7 = false;
    }
    bVar6 = true;
    if ((!bVar7) && (bVar6 = false, !NAN(dVar15))) {
      bVar6 = dVar15 == INFINITY;
    }
    bVar7 = true;
    if ((!bVar6) && (bVar7 = true, !NAN(dVar15))) {
      bVar7 = false;
    }
    dVar14 = dVar17 * 86400000.0 + dVar14;
    if (bVar7) {
      dVar14 = NAN;
    }
  }
  else {
    dVar14 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
    if (!NAN(dVar14)) goto LAB_014beea4;
  }
  v8::internal::DateCache::TimeClip(dVar14);
  puVar10 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
  uVar13 = *puVar10;
LAB_014bee44:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar13;
}

