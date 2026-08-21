
/* v8::internal::String::LastIndexOf(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

ulong v8::internal::String::LastIndexOf
                (Factory *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ushort *puVar12;
  long lVar13;
  ulong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char *local_40;
  undefined8 uStack_38;
  
  uVar9 = *param_2;
  if ((uVar9 & 1) == 0) {
LAB_01137c0c:
    param_2 = (ulong *)Object::ConvertToString(param_1,param_2);
  }
  else {
    if (((int)uVar9 == *(int *)(param_1 + 0xb0)) || ((int)uVar9 == *(int *)(param_1 + 0xa0))) {
      uStack_38 = __strlen_chk("String.prototype.lastIndexOf",0x1d);
      local_40 = "String.prototype.lastIndexOf";
      lVar3 = Factory::NewStringFromOneByte(param_1,&local_40,0);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)Factory::NewTypeError(param_1,0x1a,lVar3,0,0);
        uVar9 = Isolate::Throw((Isolate *)param_1,*puVar4,0);
        return uVar9;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    if (0x3f < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)))
    goto LAB_01137c0c;
  }
  if (param_2 == (ulong *)0x0) {
LAB_01137ce8:
    return *(ulong *)(param_1 + 0x180);
  }
  uVar9 = *param_3;
  if (((uVar9 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)))) {
    param_3 = (ulong *)Object::ConvertToString(param_1,param_3);
  }
  if (param_3 == (ulong *)0x0) goto LAB_01137ce8;
  uVar9 = *param_4;
  if (((uVar9 & 1) != 0) &&
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x42)) {
    param_4 = (ulong *)Object::ConvertToNumberOrNumeric(param_1,param_4,0);
  }
  if (param_4 == (ulong *)0x0) goto LAB_01137ce8;
  uVar9 = *param_4;
  if ((uVar9 & 1) == 0) {
LAB_01137ccc:
    uVar9 = *param_4;
    if ((uVar9 & 1) == 0) {
      uVar10 = 0;
      if (1 < (int)uVar9) {
        uVar10 = (int)uVar9 >> 1;
      }
    }
    else if (1.0 <= *(double *)(uVar9 + 3)) {
      dVar15 = (double)NEON_fminnm(*(double *)(uVar9 + 3),0x41efffffffe00000);
      uVar10 = (int)dVar15;
    }
    else {
      uVar10 = 0;
    }
    uVar2 = *(uint *)(*param_2 + 7);
    if (uVar10 <= *(uint *)(*param_2 + 7)) {
      uVar2 = uVar10;
    }
  }
  else {
    if ((*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x42) ||
       (!NAN(*(double *)(uVar9 + 3)))) {
      param_4 = (ulong *)Object::ConvertToInteger(param_1,param_4);
      if (param_4 == (ulong *)0x0) goto LAB_01137ce8;
      goto LAB_01137ccc;
    }
    uVar2 = *(uint *)(*param_2 + 7);
  }
  iVar7 = *(int *)(*param_3 + 7);
  uVar10 = *(uint *)(*param_2 + 7) - iVar7;
  if (iVar7 + uVar2 <= *(uint *)(*param_2 + 7)) {
    uVar10 = uVar2;
  }
  uVar9 = (ulong)uVar10;
  if (iVar7 == 0) {
    return -(ulong)(uVar10 >> 0x1f) & 0xfffffffe00000000 | uVar9 << 1;
  }
  puVar4 = (undefined8 *)Flatten(param_1,param_2,0);
  puVar5 = (undefined8 *)Flatten(param_1,param_3,0);
  local_40 = (char *)*puVar4;
  auVar16 = GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_40);
  lVar3 = auVar16._0_8_;
  local_40 = (char *)*puVar5;
  auVar17 = GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_40);
  uVar8 = auVar17._8_8_;
  puVar6 = auVar17._0_8_;
  uVar11 = auVar16._8_8_ & 0xffffffff00000000;
  iVar7 = auVar17._8_4_;
  if (uVar8 >> 0x20 == 1) {
    if (uVar11 == 0x100000000) {
      if (-1 < (int)uVar10) {
        lVar13 = lVar3 + (ulong)uVar10;
        uVar9 = (ulong)uVar10;
        do {
          if (*(byte *)(lVar3 + uVar9) == (byte)*puVar6) {
            uVar11 = 1;
            uVar14 = uVar9;
            if (1 < iVar7) {
              while (*(byte *)((long)puVar6 + uVar11) == *(byte *)(lVar13 + uVar11)) {
                uVar11 = uVar11 + 1;
                if ((uVar8 & 0xffffffff) == uVar11) goto LAB_01138054;
              }
            }
            if ((int)uVar11 == iVar7) break;
          }
          lVar13 = lVar13 + -1;
          bVar1 = 0 < (long)uVar9;
          uVar9 = uVar9 - 1;
          uVar14 = 0xffffffffffffffff;
        } while (bVar1);
        goto LAB_01138054;
      }
    }
    else if (-1 < (int)uVar10) {
      lVar13 = lVar3 + uVar9 * 2;
      do {
        if (*(ushort *)(lVar3 + uVar9 * 2) == (ushort)(byte)*puVar6) {
          uVar11 = 1;
          uVar14 = uVar9;
          if (1 < iVar7) {
            while (*(ushort *)(lVar13 + uVar11 * 2) == (ushort)*(byte *)((long)puVar6 + uVar11)) {
              uVar11 = uVar11 + 1;
              if ((uVar8 & 0xffffffff) == uVar11) goto LAB_01138054;
            }
          }
          if ((int)uVar11 == iVar7) break;
        }
        lVar13 = lVar13 + -2;
        bVar1 = 0 < (long)uVar9;
        uVar9 = uVar9 - 1;
        uVar14 = 0xffffffffffffffff;
      } while (bVar1);
      goto LAB_01138054;
    }
  }
  else if (uVar11 == 0x100000000) {
    if (0 < iVar7) {
      uVar11 = uVar8 & 0xffffffff;
      puVar12 = puVar6;
      do {
        if (0xff < *puVar12) goto LAB_01137fa0;
        uVar11 = uVar11 - 1;
        puVar12 = puVar12 + 1;
      } while (uVar11 != 0);
    }
    if (-1 < (int)uVar10) {
      lVar13 = lVar3 + uVar9;
      do {
        if (*puVar6 == (ushort)*(byte *)(lVar3 + uVar9)) {
          uVar11 = 1;
          uVar14 = uVar9;
          if (1 < iVar7) {
            while (puVar6[uVar11] == (ushort)*(byte *)(lVar13 + uVar11)) {
              uVar11 = uVar11 + 1;
              if ((uVar8 & 0xffffffff) == uVar11) goto LAB_01138054;
            }
          }
          if ((int)uVar11 == iVar7) break;
        }
        lVar13 = lVar13 + -1;
        bVar1 = 0 < (long)uVar9;
        uVar9 = uVar9 - 1;
        uVar14 = 0xffffffffffffffff;
      } while (bVar1);
      goto LAB_01138054;
    }
  }
  else if (-1 < (int)uVar10) {
    lVar13 = lVar3 + uVar9 * 2;
    do {
      if (*(ushort *)(lVar3 + uVar9 * 2) == *puVar6) {
        uVar11 = 1;
        uVar14 = uVar9;
        if (1 < iVar7) {
          while (puVar6[uVar11] == *(ushort *)(lVar13 + uVar11 * 2)) {
            uVar11 = uVar11 + 1;
            if ((uVar8 & 0xffffffff) == uVar11) goto LAB_01138054;
          }
        }
        if ((int)uVar11 == iVar7) break;
      }
      lVar13 = lVar13 + -2;
      bVar1 = 0 < (long)uVar9;
      uVar9 = uVar9 - 1;
      uVar14 = 0xffffffffffffffff;
    } while (bVar1);
    goto LAB_01138054;
  }
LAB_01137fa0:
  uVar14 = 0xffffffffffffffff;
LAB_01138054:
  return -(uVar14 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar14 & 0xffffffff) << 1;
}

