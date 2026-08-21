
undefined8 FUN_014bf90c(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  Isolate *pIVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int local_78;
  int iStack_74;
  char *local_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if (((uVar11 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x428)) {
    uStack_68 = __strlen_chk("Date.prototype.setUTCMonth",0x1b);
    local_70 = "Date.prototype.setUTCMonth";
    lVar8 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_70,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar10 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar8,param_2,0);
    uVar12 = v8::internal::Isolate::Throw(param_3,*puVar10,0);
    goto LAB_014bfa2c;
  }
  param_1 = param_1 + -4;
  pIVar7 = (Isolate *)(param_2 + -1);
  if (param_1 < 2) {
    pIVar7 = param_3 + 0xa0;
  }
  uVar11 = *(ulong *)pIVar7;
  if (((uVar11 & 1) != 0) &&
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42)) {
    pIVar7 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar7,0);
  }
  if (pIVar7 == (Isolate *)0x0) {
LAB_014bfb60:
    uVar12 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
    uVar4 = *(uint *)(*param_2 + 0xb);
    if ((uVar4 & 1) == 0) {
      dVar14 = (double)((int)uVar4 >> 1);
LAB_014bfa90:
      lVar13 = (long)dVar14;
      lVar8 = lVar13;
      if (lVar13 < 0) {
        lVar8 = lVar13 + -86399999;
      }
      iVar1 = (int)(SUB168(SEXT816(lVar8) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
              (SUB164(SEXT816(lVar8) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
      v8::internal::DateCache::YearMonthDayFromDays
                (*(DateCache **)(param_3 + 0xb638),iVar1,(int *)&local_70,&iStack_74,&local_78);
      uVar11 = *(ulong *)pIVar7;
      if ((uVar11 & 1) == 0) {
        dVar14 = (double)((int)uVar11 >> 1);
        if (2 < param_1) goto LAB_014bfb14;
LAB_014bfaf8:
        dVar15 = (double)(long)local_78;
      }
      else {
        dVar14 = *(double *)(uVar11 + 3);
        if (param_1 < 3) goto LAB_014bfaf8;
LAB_014bfb14:
        puVar9 = param_2 + -2;
        uVar11 = *puVar9;
        if (((uVar11 & 1) != 0) &&
           (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42)) {
          puVar9 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar9,0);
        }
        if (puVar9 == (ulong *)0x0) goto LAB_014bfb60;
        uVar11 = *puVar9;
        if ((uVar11 & 1) == 0) {
          dVar15 = (double)((int)uVar11 >> 1);
        }
        else {
          dVar15 = *(double *)(uVar11 + 3);
        }
      }
      dVar15 = (double)FUN_014c290c((double)(long)(int)local_70,dVar14,dVar15);
      dVar14 = (double)((int)lVar13 + iVar1 * -86400000);
      bVar6 = true;
      if ((ABS(dVar15) != INFINITY) && (bVar6 = true, !NAN(ABS(dVar15)))) {
        bVar6 = false;
      }
      dVar16 = ABS(dVar14);
      bVar5 = true;
      if ((!bVar6) && (bVar5 = false, !NAN(dVar16))) {
        bVar5 = dVar16 == INFINITY;
      }
      bVar6 = true;
      if ((!bVar5) && (bVar6 = true, !NAN(dVar16))) {
        bVar6 = false;
      }
      dVar14 = dVar15 * 86400000.0 + dVar14;
      if (bVar6) {
        dVar14 = NAN;
      }
    }
    else {
      dVar14 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
      if (!NAN(dVar14)) goto LAB_014bfa90;
    }
    v8::internal::DateCache::TimeClip(dVar14);
    puVar10 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
    uVar12 = *puVar10;
  }
LAB_014bfa2c:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar12;
}

