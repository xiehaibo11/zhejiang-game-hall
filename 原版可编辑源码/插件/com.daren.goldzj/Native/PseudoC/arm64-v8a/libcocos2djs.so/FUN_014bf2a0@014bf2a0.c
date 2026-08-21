
undefined8 FUN_014bf2a0(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  Isolate *pIVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  double dVar15;
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
  uVar10 = *param_2;
  if (((uVar10 & 1) == 0) ||
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x428)) {
    uStack_78 = __strlen_chk("Date.prototype.setUTCMinutes",0x1d);
    local_80 = "Date.prototype.setUTCMinutes";
    lVar7 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_80,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar9 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar7,param_2,0);
    uVar12 = v8::internal::Isolate::Throw(param_3,*puVar9,0);
    goto LAB_014bf3b8;
  }
  pIVar6 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar6 = param_3 + 0xa0;
  }
  uVar10 = *(ulong *)pIVar6;
  if (((uVar10 & 1) != 0) &&
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x42)) {
    pIVar6 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar6,0);
  }
  if (pIVar6 == (Isolate *)0x0) goto LAB_014bf64c;
  uVar3 = *(uint *)(*param_2 + 0xb);
  if ((uVar3 & 1) == 0) {
    dVar15 = (double)((int)uVar3 >> 1);
LAB_014bf41c:
    lVar11 = (long)dVar15;
    lVar7 = lVar11;
    if (lVar11 < 0) {
      lVar7 = lVar11 + -86399999;
    }
    uVar10 = *(ulong *)pIVar6;
    iVar14 = ((int)(lVar7 / 86400000) + (int)(lVar7 >> 0x3f)) -
             (SUB164(SEXT816(lVar7) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
    iVar13 = (int)lVar11 + iVar14 * -86400000;
    if ((uVar10 & 1) == 0) {
      dVar19 = (double)((int)uVar10 >> 1);
    }
    else {
      dVar19 = *(double *)(uVar10 + 3);
    }
    dVar20 = (double)(iVar13 % 1000);
    if (param_1 + -5 < 2) {
      dVar21 = (double)((iVar13 / 1000) % 0x3c);
    }
    else {
      puVar8 = param_2 + -2;
      uVar10 = *puVar8;
      if (((uVar10 & 1) != 0) &&
         (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x42)) {
        puVar8 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar8,0);
      }
      if (puVar8 == (ulong *)0x0) {
LAB_014bf64c:
        uVar12 = *(undefined8 *)(param_3 + 0x180);
        goto LAB_014bf3b8;
      }
      uVar10 = *puVar8;
      if ((uVar10 & 1) == 0) {
        dVar21 = (double)((int)uVar10 >> 1);
      }
      else {
        dVar21 = *(double *)(uVar10 + 3);
      }
      if (2 < param_1 + -5) {
        puVar8 = param_2 + -3;
        uVar10 = *puVar8;
        if (((uVar10 & 1) != 0) &&
           (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x42)) {
          puVar8 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar8,0);
        }
        if (puVar8 == (ulong *)0x0) goto LAB_014bf64c;
        uVar10 = *puVar8;
        if ((uVar10 & 1) == 0) {
          dVar20 = (double)((int)uVar10 >> 1);
        }
        else {
          dVar20 = *(double *)(uVar10 + 3);
        }
      }
    }
    dVar16 = (double)iVar14;
    dVar15 = NAN;
    if ((ABS(dVar20) != INFINITY) && (!NAN(ABS(dVar20)))) {
      dVar17 = ABS((double)(iVar13 / 3600000));
      if ((dVar17 != INFINITY) &&
         ((((!NAN(dVar17) && (ABS(dVar19) != INFINITY)) && (!NAN(ABS(dVar19)))) &&
          ((ABS(dVar21) != INFINITY && (!NAN(ABS(dVar21)))))))) {
        dVar17 = 0.0;
        dVar18 = 0.0;
        if (NAN(dVar19)) {
LAB_014bf660:
          dVar19 = dVar18;
          if (NAN(dVar21)) goto LAB_014bf678;
LAB_014bf5d8:
          dVar18 = dVar19;
          if (dVar21 != 0.0) {
            dVar17 = (double)(long)dVar21;
            if (dVar21 < 0.0) {
              dVar17 = (double)(long)dVar21;
            }
            goto LAB_014bf678;
          }
          dVar17 = dVar21;
          if (!NAN(dVar20)) goto LAB_014bf680;
LAB_014bf5ec:
          dVar15 = 0.0;
        }
        else {
          if (dVar19 != 0.0) {
            dVar18 = (double)(long)dVar19;
            if (dVar19 < 0.0) {
              dVar18 = (double)(long)dVar19;
            }
            goto LAB_014bf660;
          }
          dVar18 = dVar19;
          if (!NAN(dVar21)) goto LAB_014bf5d8;
LAB_014bf678:
          if (NAN(dVar20)) goto LAB_014bf5ec;
LAB_014bf680:
          dVar15 = dVar20;
          if (dVar20 != 0.0) {
            dVar15 = (double)(long)dVar20;
            if (dVar20 < 0.0) {
              dVar15 = (double)(long)dVar20;
            }
          }
        }
        dVar15 = (double)(iVar13 / 3600000) * 3600000.0 + dVar18 * 60000.0 + dVar17 * 1000.0 +
                 dVar15;
      }
    }
    dVar19 = ABS(dVar16);
    bVar5 = true;
    if ((ABS(dVar15) != INFINITY) && (bVar5 = true, !NAN(ABS(dVar15)))) {
      bVar5 = false;
    }
    bVar4 = true;
    if ((!bVar5) && (bVar4 = false, !NAN(dVar19))) {
      bVar4 = dVar19 == INFINITY;
    }
    bVar5 = true;
    if ((!bVar4) && (bVar5 = true, !NAN(dVar19))) {
      bVar5 = false;
    }
    dVar15 = dVar16 * 86400000.0 + dVar15;
    if (bVar5) {
      dVar15 = NAN;
    }
  }
  else {
    dVar15 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar3) + 3);
    if (!NAN(dVar15)) goto LAB_014bf41c;
  }
  v8::internal::DateCache::TimeClip(dVar15);
  puVar9 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
  uVar12 = *puVar9;
LAB_014bf3b8:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar12;
}

