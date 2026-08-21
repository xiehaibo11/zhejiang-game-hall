
ulong FUN_014bdcc8(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  Isolate *pIVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char *local_60;
  undefined8 uStack_58;
  int iStack_38;
  int local_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if (((uVar11 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x428)) {
    uStack_58 = __strlen_chk("Date.prototype.setUTCDate",0x1a);
    local_60 = "Date.prototype.setUTCDate";
    lVar8 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar9 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar8,param_2,0);
    uVar11 = v8::internal::Isolate::Throw(param_3,*puVar9,0);
  }
  else {
    pIVar7 = (Isolate *)(param_2 + -1);
    if (param_1 < 6) {
      pIVar7 = param_3 + 0xa0;
    }
    uVar11 = *(ulong *)pIVar7;
    if (((uVar11 & 1) != 0) &&
       (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42)) {
      pIVar7 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar7,0);
    }
    if (pIVar7 == (Isolate *)0x0) {
      uVar11 = *(ulong *)(param_3 + 0x180);
    }
    else {
      uVar4 = *(uint *)(*param_2 + 0xb);
      if ((uVar4 & 1) == 0) {
        dVar13 = (double)((int)uVar4 >> 1);
      }
      else {
        uVar11 = *param_2 & 0xffffffff00000000 | (ulong)uVar4;
        dVar13 = *(double *)(uVar11 + 3);
        if (NAN(dVar13)) goto LAB_014bdddc;
      }
      lVar12 = (long)dVar13;
      lVar8 = lVar12;
      if (lVar12 < 0) {
        lVar8 = lVar12 + -86399999;
      }
      iVar1 = (int)(SUB168(SEXT816(lVar8) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
              (SUB164(SEXT816(lVar8) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
      v8::internal::DateCache::YearMonthDayFromDays
                (*(DateCache **)(param_3 + 0xb638),iVar1,(int *)&local_60,&local_34,&iStack_38);
      uVar11 = *(ulong *)pIVar7;
      if ((uVar11 & 1) == 0) {
        dVar13 = (double)((int)uVar11 >> 1);
      }
      else {
        dVar13 = *(double *)(uVar11 + 3);
      }
      dVar13 = (double)FUN_014c290c((double)(long)(int)local_60,(double)(long)local_34,dVar13);
      dVar14 = (double)((int)lVar12 + iVar1 * -86400000);
      bVar6 = true;
      if ((ABS(dVar13) != INFINITY) && (bVar6 = true, !NAN(ABS(dVar13)))) {
        bVar6 = false;
      }
      dVar15 = ABS(dVar14);
      bVar5 = true;
      if ((!bVar6) && (bVar5 = false, !NAN(dVar15))) {
        bVar5 = dVar15 == INFINITY;
      }
      bVar6 = true;
      if ((!bVar5) && (bVar6 = true, !NAN(dVar15))) {
        bVar6 = false;
      }
      dVar14 = dVar13 * 86400000.0 + dVar14;
      if (bVar6) {
        dVar14 = NAN;
      }
      v8::internal::DateCache::TimeClip(dVar14);
      puVar10 = (ulong *)v8::internal::JSDate::SetValue(param_2);
      uVar11 = *puVar10;
    }
  }
LAB_014bdddc:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar11;
}

