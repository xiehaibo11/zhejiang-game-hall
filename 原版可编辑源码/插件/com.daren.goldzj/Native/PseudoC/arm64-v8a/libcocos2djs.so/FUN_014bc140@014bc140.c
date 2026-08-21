
undefined8 FUN_014bc140(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  Isolate *pIVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  char *local_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  if (((uVar12 & 1) == 0) ||
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x428)) {
    uStack_58 = __strlen_chk("Date.prototype.setMilliseconds",0x1f);
    local_60 = "Date.prototype.setMilliseconds";
    lVar10 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar11 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar10,param_2,0);
    uVar13 = v8::internal::Isolate::Throw(param_3,*puVar11,0);
    goto LAB_014bc254;
  }
  pIVar9 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar9 = param_3 + 0xa0;
  }
  uVar12 = *(ulong *)pIVar9;
  if (((uVar12 & 1) != 0) &&
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
    pIVar9 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar9,0);
  }
  if (pIVar9 == (Isolate *)0x0) {
    uVar13 = *(undefined8 *)(param_3 + 0x180);
    goto LAB_014bc254;
  }
  uVar4 = *(uint *)(*param_2 + 0xb);
  if ((uVar4 & 1) == 0) {
    dVar15 = (double)((int)uVar4 >> 1);
LAB_014bc2b8:
    iVar8 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar15,1);
    lVar10 = (long)dVar15 + (long)iVar8;
    lVar1 = lVar10;
    if (lVar10 < 0) {
      lVar1 = lVar10 + -86399999;
    }
    iVar8 = (int)(SUB168(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
            (SUB164(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
    iVar5 = (int)lVar10 + iVar8 * -86400000;
    uVar12 = *(ulong *)pIVar9;
    dVar14 = (double)((iVar5 / 1000) % 0x3c);
    if ((uVar12 & 1) == 0) {
      dVar18 = (double)((int)uVar12 >> 1);
    }
    else {
      dVar18 = *(double *)(uVar12 + 3);
    }
    dVar16 = ABS(dVar14);
    dVar17 = (double)iVar8;
    dVar15 = NAN;
    if ((dVar16 != INFINITY) && (!NAN(dVar16))) {
      dVar16 = ABS((double)(iVar5 / 3600000));
      if ((dVar16 != INFINITY) && (!NAN(dVar16))) {
        dVar16 = (double)((iVar5 / 60000) % 0x3c);
        dVar19 = ABS(dVar16);
        if ((((dVar19 != INFINITY) && (!NAN(dVar19))) && (ABS(dVar18) != INFINITY)) &&
           (!NAN(ABS(dVar18)))) {
          if (NAN(dVar18)) {
            dVar15 = 0.0;
          }
          else {
            dVar15 = dVar18;
            if (dVar18 != 0.0) {
              dVar15 = (double)(long)dVar18;
              if (dVar18 < 0.0) {
                dVar15 = (double)(long)dVar18;
              }
            }
          }
          dVar15 = dVar14 * 1000.0 + (double)(iVar5 / 3600000) * 3600000.0 + dVar16 * 60000.0 +
                   dVar15;
        }
      }
    }
    dVar14 = ABS(dVar17);
    bVar7 = true;
    if ((ABS(dVar15) != INFINITY) && (bVar7 = true, !NAN(ABS(dVar15)))) {
      bVar7 = false;
    }
    bVar6 = true;
    if ((!bVar7) && (bVar6 = false, !NAN(dVar14))) {
      bVar6 = dVar14 == INFINITY;
    }
    bVar7 = true;
    if ((!bVar6) && (bVar7 = true, !NAN(dVar14))) {
      bVar7 = false;
    }
    dVar15 = dVar17 * 86400000.0 + dVar15;
    if (bVar7) {
      dVar15 = NAN;
    }
  }
  else {
    dVar15 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
    if (!NAN(dVar15)) goto LAB_014bc2b8;
  }
  dVar14 = NAN;
  if ((-8.640002592e+15 <= dVar15) && (dVar15 <= 8.640002592e+15)) {
    iVar8 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar15,0);
    dVar14 = (double)((long)dVar15 - (long)iVar8);
  }
  v8::internal::DateCache::TimeClip(dVar14);
  puVar11 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
  uVar13 = *puVar11;
LAB_014bc254:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar13;
}

