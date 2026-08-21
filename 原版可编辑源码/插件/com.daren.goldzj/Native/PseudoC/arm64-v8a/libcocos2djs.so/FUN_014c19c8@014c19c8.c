
undefined8 FUN_014c19c8(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  Isolate *pIVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int local_68;
  int iStack_64;
  char *local_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if (((uVar11 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x428)) {
    uStack_58 = __strlen_chk("Date.prototype.setYear",0x17);
    local_60 = "Date.prototype.setYear";
    lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar10 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar9,param_2,0);
    uVar12 = v8::internal::Isolate::Throw(param_3,*puVar10,0);
    goto LAB_014c1ad4;
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
    uVar12 = *(undefined8 *)(param_3 + 0x180);
    goto LAB_014c1ad4;
  }
  uVar11 = *(ulong *)pIVar8;
  if ((uVar11 & 1) == 0) {
    dVar13 = (double)((int)uVar11 >> 1);
LAB_014c1b30:
    bVar6 = true;
    if ((ABS(dVar13) != INFINITY) && (bVar6 = true, !NAN(ABS(dVar13)))) {
      bVar6 = false;
    }
    bVar5 = true;
    if ((!bVar6) && (bVar5 = false, !NAN(dVar13))) {
      bVar5 = dVar13 == 0.0;
    }
    dVar14 = dVar13;
    if (!bVar5) {
      dVar14 = (double)(long)dVar13;
    }
    bVar6 = true;
    bVar5 = false;
    if (dVar14 <= 99.0) {
      bVar6 = false;
      bVar5 = true;
      if (!NAN(dVar14)) {
        bVar6 = dVar14 < 0.0;
        bVar5 = false;
      }
    }
    dVar14 = dVar14 + 1900.0;
    if (bVar6 != bVar5) {
      dVar14 = dVar13;
    }
  }
  else {
    dVar14 = *(double *)(uVar11 + 3);
    dVar13 = dVar14;
    if (!NAN(dVar14)) goto LAB_014c1b30;
  }
  uVar4 = *(uint *)(*param_2 + 0xb);
  if ((uVar4 & 1) == 0) {
    dVar13 = (double)((int)uVar4 >> 1);
LAB_014c1bb4:
    iVar7 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar13,1);
    lVar9 = (long)dVar13 + (long)iVar7;
    lVar1 = lVar9;
    if (lVar9 < 0) {
      lVar1 = lVar9 + -86399999;
    }
    iVar7 = (int)(SUB168(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
            (SUB164(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
    v8::internal::DateCache::YearMonthDayFromDays
              (*(DateCache **)(param_3 + 0xb638),iVar7,(int *)&local_60,&iStack_64,&local_68);
    dVar13 = (double)((int)lVar9 + iVar7 * -86400000);
    dVar15 = (double)(long)iStack_64;
    dVar16 = (double)(long)local_68;
  }
  else {
    dVar13 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
    if (!NAN(dVar13)) goto LAB_014c1bb4;
    dVar16 = 1.0;
    dVar13 = 0.0;
    dVar15 = 0.0;
  }
  dVar14 = (double)FUN_014c290c(dVar14,dVar15,dVar16);
  bVar6 = true;
  if ((ABS(dVar14) != INFINITY) && (bVar6 = true, !NAN(ABS(dVar14)))) {
    bVar6 = false;
  }
  dVar15 = ABS(dVar13);
  bVar5 = true;
  if ((!bVar6) && (bVar5 = false, !NAN(dVar15))) {
    bVar5 = dVar15 == INFINITY;
  }
  bVar6 = true;
  if ((!bVar5) && (bVar6 = true, !NAN(dVar15))) {
    bVar6 = false;
  }
  dVar13 = dVar13 + dVar14 * 86400000.0;
  dVar14 = NAN;
  if (bVar6) {
    dVar13 = NAN;
  }
  if ((-8.640002592e+15 <= dVar13) && (dVar13 <= 8.640002592e+15)) {
    iVar7 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar13,0);
    dVar14 = (double)((long)dVar13 - (long)iVar7);
  }
  v8::internal::DateCache::TimeClip(dVar14);
  puVar10 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
  uVar12 = *puVar10;
LAB_014c1ad4:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar12;
}

