
/* v8::Value::Int32Value(v8::Local<v8::Context>) const */

ulong __thiscall v8::Value::Int32Value(Value *this,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  MicrotaskQueue *pMVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  Logger *this_00;
  Isolate *pIVar13;
  long lVar14;
  undefined8 uVar15;
  Isolate *pIVar16;
  double dVar17;
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  Isolate *local_a0;
  ulong *local_98;
  char local_90;
  Isolate local_8e;
  undefined **local_88;
  StackGuard *local_80;
  int local_68;
  long local_58;
  
  uVar6 = *(ulong *)this;
  if ((uVar6 & 1) == 0) {
    uVar6 = (ulong)(uint)((int)uVar6 >> 1);
    goto LAB_00eb4dfc;
  }
  if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42) {
    pIVar12 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
    if ((*(int *)(pIVar12 + 0x2c20) != *(int *)(pIVar12 + 0xa8)) &&
       (*(int *)(pIVar12 + 0x2c20) == *(int *)(pIVar12 + 0x188))) {
      return 0;
    }
    uVar15 = *(undefined8 *)(pIVar12 + 0x95a0);
    pIVar13 = pIVar12 + 0x95a8;
    lVar14 = *(long *)pIVar13;
    pIVar16 = pIVar12 + 0x95b0;
    *(int *)pIVar16 = *(int *)pIVar16 + 1;
    FUN_00ea94b8(&local_a0,pIVar12,param_2);
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = (RuntimeCallStats *)0x0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_d0 = (RuntimeCallStats *)(*(long *)(pIVar12 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x3f1);
    }
    this_00 = *(Logger **)(pIVar12 + 0x9558);
    uVar6 = internal::Logger::is_logging(this_00);
    if ((uVar6 & 1) != 0) {
      internal::Logger::ApiEntryCall(this_00,"v8::Value::Int32Value");
    }
    uVar2 = *(undefined4 *)(pIVar12 + 0x2c60);
    *(undefined4 *)(pIVar12 + 0x2c60) = 5;
    if (((byte)*this & 1) != 0) {
      this = (Value *)internal::Object::ConvertToInt32(pIVar12,this);
    }
    if (this == (Value *)0x0) {
      local_90 = '\x01';
      *(long *)(local_a0 + 0x2c08) = local_58;
      if (local_58 == 0) {
        bVar3 = *(long *)(local_a0 + 0x2bb8) == 0;
      }
      else {
        bVar3 = false;
      }
      internal::Isolate::OptionalRescheduleException(local_a0,bVar3);
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)this;
      if ((uVar6 & 1) == 0) {
        uVar5 = (int)uVar6 >> 1;
      }
      else {
        uVar5 = (uint)*(double *)(uVar6 + 3);
      }
      uVar6 = (ulong)uVar5 << 0x20 | 1;
    }
    *(undefined4 *)(pIVar12 + 0x2c60) = uVar2;
    if (local_d0 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
    }
    if (local_98 == (ulong *)0x0) {
      pIVar8 = local_a0 + 0xb7c0;
    }
    else {
      lVar9 = *(long *)(local_a0 + 0x95c0);
      lVar10 = *(long *)(lVar9 + 0x60) + -1;
      uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x50) + lVar10 * 8);
      *(long *)(lVar9 + 0x60) = lVar10;
      *(undefined8 *)(local_a0 + 0x2bc8) = uVar11;
      uVar7 = *local_98 & 0xffffffff00000000;
      pIVar8 = (Isolate *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*local_98 - 1)) + 0x13)) + 0x423);
    }
    pMVar4 = *(MicrotaskQueue **)pIVar8;
    if (local_90 == '\0') {
      *(long *)(local_a0 + 0x2c08) = local_58;
    }
    internal::Isolate::FireCallCompletedCallback(local_a0,pMVar4);
    local_a0[0xb828] = local_8e;
    local_88 = &PTR__InterruptsScope_01c984b0;
    if (local_68 != 2) {
      internal::StackGuard::PopInterruptsScope(local_80);
    }
    *(undefined8 *)(pIVar12 + 0x95a0) = uVar15;
    *(int *)pIVar16 = *(int *)pIVar16 + -1;
    if (*(long *)pIVar13 == lVar14) {
      return uVar6;
    }
    *(long *)pIVar13 = lVar14;
    internal::HandleScope::DeleteExtensions(pIVar12);
    return uVar6;
  }
  dVar17 = *(double *)(uVar6 + 3);
  if ((((-2147483648.0 <= dVar17) && (dVar17 <= 2147483647.0)) && (ABS(dVar17) != INFINITY)) &&
     ((!NAN(ABS(dVar17)) && (uVar6 = (ulong)(uint)(int)dVar17, dVar17 == (double)(int)dVar17))))
  goto LAB_00eb4dfc;
  uVar5 = 0xfffffbce;
  if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
    uVar5 = ((uint)((ulong)dVar17 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar5 < 0) {
    if ((int)uVar5 < -0x34) goto LAB_00eb4fbc;
    uVar6 = (ulong)dVar17 & 0xfffffffffffff;
    if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
      uVar6 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar5 = (uint)(uVar6 >> ((ulong)-uVar5 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar5) {
LAB_00eb4fbc:
      uVar6 = 0;
      goto LAB_00eb4dfc;
    }
    uVar6 = (ulong)dVar17 & 0xfffffffffffff;
    if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
      uVar6 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar5 = (uint)(uVar6 << ((ulong)uVar5 & 0x3f));
  }
  uVar1 = -uVar5;
  if (-1 < (long)dVar17) {
    uVar1 = uVar5;
  }
  uVar6 = (ulong)uVar1;
LAB_00eb4dfc:
  return uVar6 << 0x20 | 1;
}

