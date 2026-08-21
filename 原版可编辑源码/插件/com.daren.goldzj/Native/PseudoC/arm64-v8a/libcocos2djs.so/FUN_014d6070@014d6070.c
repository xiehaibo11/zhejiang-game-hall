
int FUN_014d6070(Factory *param_1,undefined8 param_2,long param_3,int param_4)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  double dVar9;
  
  puVar8 = (ulong *)(param_3 - (param_4 * 8 + 8));
  uVar5 = *puVar8;
  if (((uVar5 & 1) != 0) &&
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42)) {
    puVar8 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_1,puVar8,0);
  }
  if (puVar8 == (ulong *)0x0) {
    return -1;
  }
  uVar5 = *puVar8;
  puVar3 = puVar8;
  puVar2 = puVar8;
  if ((uVar5 & 1) == 0) {
LAB_014d6138:
    uVar5 = *puVar3;
  }
  else {
    uVar7 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar7 + *(uint *)(uVar5 - 1)) == 0x42) {
LAB_014d6128:
      puVar3 = (ulong *)v8::internal::Object::ConvertToInteger(param_1,puVar2);
      if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      goto LAB_014d6138;
    }
    if ((*(short *)(uVar7 + *(uint *)(uVar5 - 1)) != 0x42) &&
       (puVar2 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_1,puVar8,0),
       puVar2 == (ulong *)0x0)) goto LAB_014d61c8;
    uVar5 = *puVar2;
    if ((uVar5 & 1) != 0) goto LAB_014d6128;
  }
  if ((uVar5 & 1) == 0) {
    dVar9 = (double)((int)uVar5 >> 1);
    uVar5 = *puVar2;
    if ((uVar5 & 1) != 0) goto LAB_014d6150;
LAB_014d618c:
    if (dVar9 != (double)((int)uVar5 >> 1)) goto LAB_014d61c8;
  }
  else {
    dVar9 = *(double *)(uVar5 + 3);
    uVar5 = *puVar2;
    if ((uVar5 & 1) == 0) goto LAB_014d618c;
LAB_014d6150:
    if (dVar9 != *(double *)(uVar5 + 3)) goto LAB_014d61c8;
  }
  iVar6 = (int)uVar5 >> 1;
  if ((uVar5 & 1) == 0) {
    dVar9 = (double)iVar6;
  }
  else {
    dVar9 = *(double *)(uVar5 + 3);
  }
  if (0.0 <= dVar9) {
    if ((uVar5 & 1) == 0) {
      dVar9 = (double)iVar6;
    }
    else {
      dVar9 = *(double *)(uVar5 + 3);
    }
    if (dVar9 <= 1114111.0) {
      uVar5 = *puVar8;
      if ((uVar5 & 1) == 0) {
        dVar9 = (double)((int)uVar5 >> 1);
      }
      else {
        dVar9 = *(double *)(uVar5 + 3);
      }
      if ((((-2147483648.0 <= dVar9) && (dVar9 <= 2147483647.0)) && (ABS(dVar9) != INFINITY)) &&
         ((!NAN(ABS(dVar9)) && (dVar9 == (double)(int)dVar9)))) {
        return (int)dVar9;
      }
      uVar1 = 0xfffffbce;
      if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
        uVar1 = ((uint)((ulong)dVar9 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar1 < 0) {
        if ((int)uVar1 < -0x34) {
          return 0;
        }
        uVar5 = (ulong)dVar9 & 0xfffffffffffff;
        if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
          uVar5 = (ulong)dVar9 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar6 = (int)(uVar5 >> ((ulong)-uVar1 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar1) {
          return 0;
        }
        uVar5 = (ulong)dVar9 & 0xfffffffffffff;
        if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
          uVar5 = (ulong)dVar9 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar6 = (int)(uVar5 << ((ulong)uVar1 & 0x3f));
      }
      if (-1 < (long)dVar9) {
        return iVar6;
      }
      return -iVar6;
    }
  }
LAB_014d61c8:
  puVar4 = (undefined8 *)v8::internal::Factory::NewRangeError(param_1,0xc0,puVar8,0,0);
  v8::internal::Isolate::Throw((Isolate *)param_1,*puVar4,0);
  return -1;
}

