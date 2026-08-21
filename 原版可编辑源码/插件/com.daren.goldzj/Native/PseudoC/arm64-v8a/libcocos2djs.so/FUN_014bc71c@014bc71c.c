
undefined8 FUN_014bc71c(int param_1,ulong *param_2,Isolate *param_3)

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
  double dVar21;
  char *local_80;
  undefined8 uStack_78;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  if (((uVar12 & 1) == 0) ||
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x428)) {
    uStack_78 = __strlen_chk("Date.prototype.setMinutes",0x1a);
    local_80 = "Date.prototype.setMinutes";
    lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_80,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar11 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar9,param_2,0);
    uVar13 = v8::internal::Isolate::Throw(param_3,*puVar11,0);
    goto LAB_014bc838;
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
  if (pIVar8 == (Isolate *)0x0) goto LAB_014bcae8;
  uVar4 = *(uint *)(*param_2 + 0xb);
  if ((uVar4 & 1) == 0) {
    dVar16 = (double)((int)uVar4 >> 1);
LAB_014bc89c:
    iVar7 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar16,1);
    lVar9 = (long)dVar16 + (long)iVar7;
    lVar1 = lVar9;
    if (lVar9 < 0) {
      lVar1 = lVar9 + -86399999;
    }
    uVar12 = *(ulong *)pIVar8;
    iVar14 = ((int)(lVar1 / 86400000) + (int)(lVar1 >> 0x3f)) -
             (SUB164(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
    iVar7 = (int)lVar9 + iVar14 * -86400000;
    if ((uVar12 & 1) == 0) {
      dVar19 = (double)((int)uVar12 >> 1);
    }
    else {
      dVar19 = *(double *)(uVar12 + 3);
    }
    dVar20 = (double)(iVar7 % 1000);
    if (param_1 + -5 < 2) {
      dVar21 = (double)((iVar7 / 1000) % 0x3c);
    }
    else {
      puVar10 = param_2 + -2;
      uVar12 = *puVar10;
      if (((uVar12 & 1) != 0) &&
         (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
        puVar10 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar10,0);
      }
      if (puVar10 == (ulong *)0x0) {
LAB_014bcae8:
        uVar13 = *(undefined8 *)(param_3 + 0x180);
        goto LAB_014bc838;
      }
      uVar12 = *puVar10;
      if ((uVar12 & 1) == 0) {
        dVar21 = (double)((int)uVar12 >> 1);
      }
      else {
        dVar21 = *(double *)(uVar12 + 3);
      }
      if (2 < param_1 + -5) {
        puVar10 = param_2 + -3;
        uVar12 = *puVar10;
        if (((uVar12 & 1) != 0) &&
           (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x42)) {
          puVar10 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar10,0);
        }
        if (puVar10 == (ulong *)0x0) goto LAB_014bcae8;
        uVar12 = *puVar10;
        if ((uVar12 & 1) == 0) {
          dVar20 = (double)((int)uVar12 >> 1);
        }
        else {
          dVar20 = *(double *)(uVar12 + 3);
        }
      }
    }
    dVar15 = (double)iVar14;
    dVar16 = NAN;
    if ((ABS(dVar20) != INFINITY) && (!NAN(ABS(dVar20)))) {
      dVar17 = ABS((double)(iVar7 / 3600000));
      if ((dVar17 != INFINITY) &&
         ((((!NAN(dVar17) && (ABS(dVar19) != INFINITY)) && (!NAN(ABS(dVar19)))) &&
          ((ABS(dVar21) != INFINITY && (!NAN(ABS(dVar21)))))))) {
        dVar17 = 0.0;
        dVar18 = 0.0;
        if (NAN(dVar19)) {
LAB_014bcafc:
          dVar19 = dVar18;
          if (NAN(dVar21)) goto LAB_014bcb14;
LAB_014bca74:
          dVar18 = dVar19;
          if (dVar21 != 0.0) {
            dVar17 = (double)(long)dVar21;
            if (dVar21 < 0.0) {
              dVar17 = (double)(long)dVar21;
            }
            goto LAB_014bcb14;
          }
          dVar17 = dVar21;
          if (!NAN(dVar20)) goto LAB_014bcb1c;
LAB_014bca88:
          dVar16 = 0.0;
        }
        else {
          if (dVar19 != 0.0) {
            dVar18 = (double)(long)dVar19;
            if (dVar19 < 0.0) {
              dVar18 = (double)(long)dVar19;
            }
            goto LAB_014bcafc;
          }
          dVar18 = dVar19;
          if (!NAN(dVar21)) goto LAB_014bca74;
LAB_014bcb14:
          if (NAN(dVar20)) goto LAB_014bca88;
LAB_014bcb1c:
          dVar16 = dVar20;
          if (dVar20 != 0.0) {
            dVar16 = (double)(long)dVar20;
            if (dVar20 < 0.0) {
              dVar16 = (double)(long)dVar20;
            }
          }
        }
        dVar16 = (double)(iVar7 / 3600000) * 3600000.0 + dVar18 * 60000.0 + dVar17 * 1000.0 + dVar16
        ;
      }
    }
    dVar19 = ABS(dVar15);
    bVar6 = true;
    if ((ABS(dVar16) != INFINITY) && (bVar6 = true, !NAN(ABS(dVar16)))) {
      bVar6 = false;
    }
    bVar5 = true;
    if ((!bVar6) && (bVar5 = false, !NAN(dVar19))) {
      bVar5 = dVar19 == INFINITY;
    }
    bVar6 = true;
    if ((!bVar5) && (bVar6 = true, !NAN(dVar19))) {
      bVar6 = false;
    }
    dVar16 = dVar15 * 86400000.0 + dVar16;
    if (bVar6) {
      dVar16 = NAN;
    }
  }
  else {
    dVar16 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar4) + 3);
    if (!NAN(dVar16)) goto LAB_014bc89c;
  }
  dVar19 = NAN;
  if ((-8.640002592e+15 <= dVar16) && (dVar16 <= 8.640002592e+15)) {
    iVar7 = (**(code **)(**(long **)(param_3 + 0xb638) + 0x18))
                      (*(long **)(param_3 + 0xb638),(long)dVar16,0);
    dVar19 = (double)((long)dVar16 - (long)iVar7);
  }
  v8::internal::DateCache::TimeClip(dVar19);
  puVar11 = (undefined8 *)v8::internal::JSDate::SetValue(param_2);
  uVar13 = *puVar11;
LAB_014bc838:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar13;
}

