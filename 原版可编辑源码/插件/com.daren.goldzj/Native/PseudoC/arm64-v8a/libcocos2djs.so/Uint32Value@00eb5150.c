
/* v8::Value::Uint32Value(v8::Local<v8::Context>) const */

ulong __thiscall v8::Value::Uint32Value(Value *this,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  ulong *puVar4;
  MicrotaskQueue *pMVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  Isolate *pIVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  Isolate *pIVar14;
  Logger *this_00;
  Isolate *pIVar15;
  long lVar16;
  undefined8 uVar17;
  Isolate *pIVar18;
  double dVar19;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Isolate *local_b0;
  ulong *local_a8;
  char local_a0;
  Isolate local_9e;
  undefined **local_98;
  StackGuard *local_90;
  int local_78;
  long local_68;
  
  uVar8 = *(ulong *)this;
  if ((uVar8 & 1) == 0) {
    uVar8 = (ulong)(uint)((int)uVar8 >> 1);
    goto LAB_00eb517c;
  }
  if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42) {
    pIVar14 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
    if ((*(int *)(pIVar14 + 0x2c20) != *(int *)(pIVar14 + 0xa8)) &&
       (*(int *)(pIVar14 + 0x2c20) == *(int *)(pIVar14 + 0x188))) {
      return 0;
    }
    uVar17 = *(undefined8 *)(pIVar14 + 0x95a0);
    pIVar15 = pIVar14 + 0x95a8;
    lVar16 = *(long *)pIVar15;
    pIVar18 = pIVar14 + 0x95b0;
    *(int *)pIVar18 = *(int *)pIVar18 + 1;
    FUN_00ea94b8(&local_b0,pIVar14,param_2);
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = (RuntimeCallStats *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_e0 = (RuntimeCallStats *)(*(long *)(pIVar14 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3f5);
    }
    this_00 = *(Logger **)(pIVar14 + 0x9558);
    uVar8 = internal::Logger::is_logging(this_00);
    if ((uVar8 & 1) != 0) {
      internal::Logger::ApiEntryCall(this_00,"v8::Value::Uint32Value");
    }
    uVar2 = *(undefined4 *)(pIVar14 + 0x2c60);
    *(undefined4 *)(pIVar14 + 0x2c60) = 5;
    iVar6 = (int)*(ulong *)this;
    if ((*(ulong *)this & 1) == 0) {
      uVar8 = 0;
      if (1 < iVar6) {
        uVar8 = (ulong)(uint)(iVar6 >> 1) << 1;
      }
      if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar14 + 0x95a0);
        if (puVar4 == *(ulong **)pIVar15) {
          puVar4 = (ulong *)internal::HandleScope::Extend(pIVar14);
        }
        *(ulong **)(pIVar14 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar8;
      }
      else {
        puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar8);
      }
    }
    else {
      puVar4 = (ulong *)internal::Object::ConvertToUint32(pIVar14,this);
    }
    if (puVar4 == (ulong *)0x0) {
      local_a0 = '\x01';
      *(long *)(local_b0 + 0x2c08) = local_68;
      if (local_68 == 0) {
        bVar3 = *(long *)(local_b0 + 0x2bb8) == 0;
      }
      else {
        bVar3 = false;
      }
      internal::Isolate::OptionalRescheduleException(local_b0,bVar3);
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar4;
      if ((uVar8 & 1) == 0) {
        uVar7 = (int)uVar8 >> 1;
      }
      else {
        uVar7 = (uint)*(double *)(uVar8 + 3);
      }
      uVar8 = (ulong)uVar7 << 0x20 | 1;
    }
    *(undefined4 *)(pIVar14 + 0x2c60) = uVar2;
    if (local_e0 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
    }
    if (local_a8 == (ulong *)0x0) {
      pIVar10 = local_b0 + 0xb7c0;
    }
    else {
      lVar11 = *(long *)(local_b0 + 0x95c0);
      lVar12 = *(long *)(lVar11 + 0x60) + -1;
      uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x50) + lVar12 * 8);
      *(long *)(lVar11 + 0x60) = lVar12;
      *(undefined8 *)(local_b0 + 0x2bc8) = uVar13;
      uVar9 = *local_a8 & 0xffffffff00000000;
      pIVar10 = (Isolate *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*local_a8 - 1)) + 0x13)) + 0x423);
    }
    pMVar5 = *(MicrotaskQueue **)pIVar10;
    if (local_a0 == '\0') {
      *(long *)(local_b0 + 0x2c08) = local_68;
    }
    internal::Isolate::FireCallCompletedCallback(local_b0,pMVar5);
    local_b0[0xb828] = local_9e;
    local_98 = &PTR__InterruptsScope_01c984b0;
    if (local_78 != 2) {
      internal::StackGuard::PopInterruptsScope(local_90);
    }
    *(undefined8 *)(pIVar14 + 0x95a0) = uVar17;
    *(int *)pIVar18 = *(int *)pIVar18 + -1;
    if (*(long *)pIVar15 != lVar16) {
      *(long *)pIVar15 = lVar16;
      internal::HandleScope::DeleteExtensions(pIVar14);
      return uVar8;
    }
    return uVar8;
  }
  dVar19 = *(double *)(uVar8 + 3);
  if ((((-2147483648.0 <= dVar19) && (dVar19 <= 2147483647.0)) && (ABS(dVar19) != INFINITY)) &&
     ((!NAN(ABS(dVar19)) && (uVar8 = (ulong)(uint)(int)dVar19, dVar19 == (double)(int)dVar19))))
  goto LAB_00eb517c;
  uVar7 = 0xfffffbce;
  if (((ulong)dVar19 & 0x7ff0000000000000) != 0) {
    uVar7 = ((uint)((ulong)dVar19 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar7 < 0) {
    if ((int)uVar7 < -0x34) goto LAB_00eb5384;
    uVar8 = (ulong)dVar19 & 0xfffffffffffff;
    if (((ulong)dVar19 & 0x7ff0000000000000) != 0) {
      uVar8 = (ulong)dVar19 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar7 = (uint)(uVar8 >> ((ulong)-uVar7 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar7) {
LAB_00eb5384:
      uVar8 = 0;
      goto LAB_00eb517c;
    }
    uVar8 = (ulong)dVar19 & 0xfffffffffffff;
    if (((ulong)dVar19 & 0x7ff0000000000000) != 0) {
      uVar8 = (ulong)dVar19 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar7 = (uint)(uVar8 << ((ulong)uVar7 & 0x3f));
  }
  uVar1 = -uVar7;
  if (-1 < (long)dVar19) {
    uVar1 = uVar7;
  }
  uVar8 = (ulong)uVar1;
LAB_00eb517c:
  return uVar8 << 0x20 | 1;
}

