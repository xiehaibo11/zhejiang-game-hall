
undefined8 FUN_014bd314(int param_1,ulong *param_2,Isolate *param_3)

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
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  char *local_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  if (((uVar12 & 1) == 0) ||
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x428)) {
    uStack_68 = __strlen_chk("Date.prototype.setSeconds",0x1a);
    local_70 = "Date.prototype.setSeconds";
    lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_70,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar11 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar9,param_2,0);
    uVar13 = v8::internal::Isolate::Throw(param_3,*puVar11,0);
    goto LAB_014bd430;
  }
  param_1 = param_1 + -4;
  pIVar8 = (Isolate *)(param_2 + -1);
  if (param_1 < 2) {
    pIVar8 = param_3 + 0xa0;
  }
  uVar12 = *(ulong *)pIVar8;
  if (((uVar12 & 1) != 0) &&
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
    pIVar8 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar8,0);
  }
  if (pIVar8 == (Isolate *)0x0) {
LAB_014bd584:
    uVar13 = *(undefined8 *)(param_3 + 0x180);
    goto LAB_014bd430;
  }
  uVar4 = *(uint *)(*param_2 + 0xb);
  if ((uVar4 & 1) == 0) {
    dVar17 = (double)((int)uVar4 >> 1);
LAB_014bd490:
    iVar7 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar17,1);
    lVar9 = (long)dVar17 + (long)iVar7;
    lVar1 = lVar9;
    if (lVar9 < 0) {
      lVar1 = lVar9 + -86399999;
    }
    uVar12 = *(ulong *)pIVar8;
    iVar14 = ((int)(lVar1 / 86400000) + (int)(lVar1 >> 0x3f)) -
             (SUB164(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
    iVar7 = (int)lVar9 + iVar14 * -86400000;
    if ((uVar12 & 1) == 0) {
      dVar20 = (double)((int)uVar12 >> 1);
      if (param_1 < 3) goto LAB_014bd504;
LAB_014bd538:
      puVar10 = param_2 + -2;
      uVar12 = *puVar10;
      if (((uVar12 & 1) != 0) &&
         (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
        puVar10 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar10,0);
      }
      if (puVar10 == (ulong *)0x0) goto LAB_014bd584;
      uVar12 = *puVar10;
      if ((uVar12 & 1) == 0) {
        dVar18 = (double)((int)uVar12 >> 1);
      }
      else {
        dVar18 = *(double *)(uVar12 + 3);
      }
    }
    else {
      dVar20 = *(double *)(uVar12 + 3);
      if (2 < param_1) goto LAB_014bd538;
LAB_014bd504:
      dVar18 = (double)(iVar7 % 1000);
    }
    dVar15 = ABS((double)(iVar7 / 3600000));
    dVar16 = (double)iVar14;
    dVar17 = NAN;
    if ((dVar15 != INFINITY) && (!NAN(dVar15))) {
      dVar15 = (double)((iVar7 / 60000) % 0x3c);
      dVar19 = ABS(dVar15);
      if ((dVar19 != INFINITY) &&
         ((((!NAN(dVar19) && (ABS(dVar20) != INFINITY)) && (!NAN(ABS(dVar20)))) &&
          ((ABS(dVar18) != INFINITY && (!NAN(ABS(dVar18)))))))) {
        bVar6 = dVar20 < 0.0;
        if (dVar20 != 0.0) {
          dVar17 = (double)(long)dVar20;
          dVar20 = (double)(long)dVar20;
          if (bVar6) {
            dVar20 = dVar17;
          }
        }
        bVar6 = dVar18 < 0.0;
        if (dVar18 != 0.0) {
          dVar17 = (double)(long)dVar18;
          dVar18 = (double)(long)dVar18;
          if (bVar6) {
            dVar18 = dVar17;
          }
        }
        dVar17 = (double)(iVar7 / 3600000) * 3600000.0 + dVar15 * 60000.0 + dVar20 * 1000.0 + dVar18
        ;
      }
    }
    dVar20 = ABS(dVar16);
    bVar6 = true;
    if ((ABS(dVar17) != INFINITY) && (bVar6 = true, !NAN(ABS(dVar17)))) {
      bVar6 = false;
    }
    bVar5 = true;
    if ((!bVar6) && (bVar5 = false, !NAN(dVar20))) {
      bVar5 = dVar20 == INFINITY;
    }
    bVar6 = true;
    if ((!bVar5) && (bVar6 = true, !NAN(dVar20))) {
      bVar6 = false;
    }
    dVar17 = dVar16 * 86400000.0 + dVar17;
    if (bVar6) {
      dVar17 = NAN;
    }
  }
  else {
    dVar17 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
    if (!NAN(dVar17)) goto LAB_014bd490;
  }
  dVar20 = NAN;
  if ((-8.640002592e+15 <= dVar17) && (dVar17 <= 8.640002592e+15)) {
    iVar7 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar17,0);
    dVar20 = (double)((long)dVar17 - (long)iVar7);
  }
  v8::internal::DateCache::TimeClip(dVar20);
  puVar11 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
  uVar13 = *puVar11;
LAB_014bd430:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar13;
}

