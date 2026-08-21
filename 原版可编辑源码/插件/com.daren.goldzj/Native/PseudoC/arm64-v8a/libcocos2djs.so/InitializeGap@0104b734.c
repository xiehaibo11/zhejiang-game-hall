
/* v8::internal::JsonStringifier::InitializeGap(v8::internal::Handle<v8::internal::Object>) */

undefined4 __thiscall
v8::internal::JsonStringifier::InitializeGap(JsonStringifier *this,ulong *param_2)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  Isolate *pIVar12;
  undefined4 uVar13;
  double dVar14;
  
  pIVar12 = *(Isolate **)this;
  uVar1 = *(undefined8 *)(pIVar12 + 0x95a0);
  lVar2 = *(long *)(pIVar12 + 0x95a8);
  *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) != 0) &&
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x411)) {
    pIVar3 = *(Isolate **)this;
    uVar10 = *(uint *)(uVar8 + 0xb);
    uVar8 = uVar8 & 0xffffffff00000000 | (ulong)uVar10;
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar8;
      if ((uVar10 & 1) != 0) goto LAB_0104b7ec;
LAB_0104b84c:
      uVar8 = *param_2;
      if (((uVar8 & 1) != 0) &&
         (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42)) {
        param_2 = (ulong *)Object::ConvertToNumberOrNumeric(*(undefined8 *)this,param_2,0);
      }
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar8);
      uVar8 = *puVar4;
      if ((uVar8 & 1) == 0) goto LAB_0104b84c;
LAB_0104b7ec:
      uVar11 = uVar8 & 0xffffffff00000000 | 7;
      if (0x3f < *(ushort *)(uVar11 + *(uint *)(uVar8 - 1))) {
        if (*(short *)(uVar11 + *(uint *)(uVar8 - 1)) != 0x42) goto LAB_0104b884;
        goto LAB_0104b84c;
      }
      uVar8 = *param_2;
      if (((uVar8 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
        param_2 = (ulong *)Object::ConvertToString(*(undefined8 *)this,param_2);
      }
    }
    if (param_2 == (ulong *)0x0) {
      uVar13 = 0;
      goto joined_r0x0104bab0;
    }
  }
LAB_0104b884:
  uVar8 = *param_2;
  if ((uVar8 & 1) != 0) {
    uVar11 = uVar8 & 0xffffffff00000000 | 7;
    if (*(ushort *)(uVar11 + *(uint *)(uVar8 - 1)) < 0x40) {
      uVar10 = *(uint *)(uVar8 + 7);
      if (0 < (int)uVar10) {
        if (9 < (int)uVar10) {
          uVar10 = 10;
        }
        uVar8 = -(ulong)(uVar10 + 1 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar10 + 1) << 1;
        pvVar5 = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
        if (pvVar5 == (void *)0x0) {
          plVar6 = (long *)V8::GetCurrentPlatform();
          (**(code **)(*plVar6 + 0x18))();
          pvVar5 = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
          if (pvVar5 == (void *)0x0) goto LAB_0104bb38;
        }
        *(void **)(this + 0x48) = pvVar5;
        String::WriteToFlat<unsigned_short>(*param_2,pvVar5,0,uVar10);
        uVar8 = 0;
        do {
          if (0xff < *(ushort *)(*(long *)(this + 0x48) + uVar8 * 2)) {
            puVar7 = (undefined8 *)
                     SeqString::Truncate(*(undefined8 *)(this + 0x28),*(undefined4 *)(this + 0x1c));
            **(undefined8 **)(this + 0x28) = *puVar7;
            *(undefined4 *)(this + 0x10) = 1;
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar10);
        *(undefined2 *)(*(long *)(this + 0x48) + (ulong)uVar10 * 2) = 0;
      }
    }
    else if (*(short *)(uVar11 + *(uint *)(uVar8 - 1)) == 0x42) {
      dVar14 = *(double *)(uVar8 + 3);
      goto LAB_0104b894;
    }
    goto LAB_0104baec;
  }
  dVar14 = (double)((int)uVar8 >> 1);
LAB_0104b894:
  if ((((dVar14 < -2147483648.0) || (2147483647.0 < dVar14)) || (ABS(dVar14) == INFINITY)) ||
     ((NAN(ABS(dVar14)) || (uVar10 = (int)dVar14, dVar14 != (double)(int)dVar14)))) {
    uVar10 = 0xfffffbce;
    if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
      uVar10 = ((uint)((ulong)dVar14 >> 0x34) & 0x7ff) - 0x433;
    }
    if ((int)uVar10 < 0) {
      if (-0x35 < (int)uVar10) {
        uVar8 = (ulong)dVar14 & 0xfffffffffffff;
        if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
          uVar8 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar9 = (uint)(uVar8 >> ((ulong)-uVar10 & 0x3f));
        goto LAB_0104ba1c;
      }
    }
    else if ((int)uVar10 < 0x20) {
      uVar8 = (ulong)dVar14 & 0xfffffffffffff;
      if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
        uVar8 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
      }
      uVar9 = (uint)(uVar8 << ((ulong)uVar10 & 0x3f));
LAB_0104ba1c:
      uVar10 = -uVar9;
      if (-1 < (long)dVar14) {
        uVar10 = uVar9;
      }
      goto LAB_0104ba24;
    }
  }
  else {
LAB_0104ba24:
    if (0 < (int)uVar10) {
      if (9 < (int)uVar10) {
        uVar10 = 10;
      }
      uVar8 = -(ulong)(uVar10 + 1 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar10 + 1) << 1;
      pvVar5 = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
      if (pvVar5 == (void *)0x0) {
        plVar6 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar6 + 0x18))();
        pvVar5 = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
        if (pvVar5 == (void *)0x0) {
LAB_0104bb38:
                    /* WARNING: Subroutine does not return */
          FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
        }
      }
      uVar8 = 0;
      *(void **)(this + 0x48) = pvVar5;
      do {
        *(undefined2 *)((long)pvVar5 + uVar8 * 2) = 0x20;
        pvVar5 = *(void **)(this + 0x48);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar10);
      *(undefined2 *)((long)pvVar5 + (ulong)uVar10 * 2) = 0;
      uVar13 = 1;
      goto joined_r0x0104bab0;
    }
  }
LAB_0104baec:
  uVar13 = 1;
joined_r0x0104bab0:
  if (pIVar12 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar12 + 0x95a0) = uVar1;
    *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
    if (*(long *)(pIVar12 + 0x95a8) != lVar2) {
      *(long *)(pIVar12 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar12);
    }
  }
  return uVar13;
}

