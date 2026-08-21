
undefined8 FUN_014bb444(int param_1,ulong *param_2,Isolate *param_3)

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
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char *local_80;
  undefined8 uStack_78;
  int local_38;
  int iStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  if (((uVar12 & 1) == 0) ||
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x428)) {
    uStack_78 = __strlen_chk("Date.prototype.setFullYear",0x1b);
    local_80 = "Date.prototype.setFullYear";
    lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_80,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar11 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar9,param_2,0);
    uVar13 = v8::internal::Isolate::Throw(param_3,*puVar11,0);
    goto LAB_014bb558;
  }
  pIVar8 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar8 = param_3 + 0xa0;
  }
  uVar12 = *(ulong *)pIVar8;
  if (((uVar12 & 1) != 0) &&
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
    pIVar8 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar8,0);
  }
  if (pIVar8 == (Isolate *)0x0) {
LAB_014bb718:
    uVar13 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
    uVar12 = *(ulong *)pIVar8;
    if ((uVar12 & 1) == 0) {
      dVar15 = (double)((int)uVar12 >> 1);
    }
    else {
      dVar15 = *(double *)(uVar12 + 3);
    }
    uVar4 = *(uint *)(*param_2 + 0xb);
    if ((uVar4 & 1) == 0) {
      dVar14 = (double)((int)uVar4 >> 1);
LAB_014bb5d8:
      iVar7 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                        (*(long **)(param_3 + 0xb638),(long)dVar14,1);
      lVar9 = (long)dVar14 + (long)iVar7;
      lVar1 = lVar9;
      if (lVar9 < 0) {
        lVar1 = lVar9 + -86399999;
      }
      iVar7 = (int)(SUB168(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
              (SUB164(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
      v8::internal::DateCache::YearMonthDayFromDays
                (*(DateCache **)(param_3 + 0xb638),iVar7,(int *)&local_80,&iStack_34,&local_38);
      dVar14 = (double)((int)lVar9 + iVar7 * -86400000);
      dVar17 = (double)(long)iStack_34;
      dVar16 = (double)(long)local_38;
    }
    else {
      dVar14 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
      if (!NAN(dVar14)) goto LAB_014bb5d8;
      dVar16 = 1.0;
      dVar14 = 0.0;
      dVar17 = 0.0;
    }
    if (1 < param_1 + -5) {
      puVar10 = param_2 + -2;
      uVar12 = *puVar10;
      if (((uVar12 & 1) != 0) &&
         (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
        puVar10 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar10,0);
      }
      if (puVar10 == (ulong *)0x0) goto LAB_014bb718;
      uVar12 = *puVar10;
      if ((uVar12 & 1) == 0) {
        dVar17 = (double)((int)uVar12 >> 1);
      }
      else {
        dVar17 = *(double *)(uVar12 + 3);
      }
      if (2 < param_1 + -5) {
        puVar10 = param_2 + -3;
        uVar12 = *puVar10;
        if (((uVar12 & 1) != 0) &&
           (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
          puVar10 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar10,0);
        }
        if (puVar10 == (ulong *)0x0) goto LAB_014bb718;
        uVar12 = *puVar10;
        if ((uVar12 & 1) == 0) {
          dVar16 = (double)((int)uVar12 >> 1);
        }
        else {
          dVar16 = *(double *)(uVar12 + 3);
        }
      }
    }
    dVar15 = (double)FUN_014c290c(dVar15,dVar17,dVar16);
    bVar6 = true;
    if ((ABS(dVar15) != INFINITY) && (bVar6 = true, !NAN(ABS(dVar15)))) {
      bVar6 = false;
    }
    dVar17 = ABS(dVar14);
    bVar5 = true;
    if ((!bVar6) && (bVar5 = false, !NAN(dVar17))) {
      bVar5 = dVar17 == INFINITY;
    }
    bVar6 = true;
    if ((!bVar5) && (bVar6 = true, !NAN(dVar17))) {
      bVar6 = false;
    }
    dVar14 = dVar14 + dVar15 * 86400000.0;
    dVar15 = NAN;
    if (bVar6) {
      dVar14 = NAN;
    }
    if ((-8.640002592e+15 <= dVar14) && (dVar14 <= 8.640002592e+15)) {
      iVar7 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                        (*(long **)(param_3 + 0xb638),(long)dVar14,0);
      dVar15 = (double)((long)dVar14 - (long)iVar7);
    }
    v8::internal::DateCache::TimeClip(dVar15);
    puVar11 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
    uVar13 = *puVar11;
  }
LAB_014bb558:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar13;
}

