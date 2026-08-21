
/* v8::Value::IntegerValue(v8::Local<v8::Context>) const */

undefined1  [16] __thiscall v8::Value::IntegerValue(Value *this,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  MicrotaskQueue *pMVar3;
  ulong uVar4;
  Isolate *pIVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  undefined8 uVar10;
  Logger *this_00;
  Isolate *pIVar11;
  long lVar12;
  undefined8 uVar13;
  Isolate *pIVar14;
  double dVar15;
  undefined1 auVar16 [16];
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
  
  uVar4 = *(ulong *)this;
  if ((uVar4 & 1) == 0) {
    this = (Value *)((long)(uVar4 << 0x20) >> 0x21);
  }
  else {
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42) {
      pIVar9 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
      if ((*(int *)(pIVar9 + 0x2c20) != *(int *)(pIVar9 + 0xa8)) &&
         (*(int *)(pIVar9 + 0x2c20) == *(int *)(pIVar9 + 0x188))) {
        uVar10 = 0;
        goto LAB_00eb4acc;
      }
      uVar13 = *(undefined8 *)(pIVar9 + 0x95a0);
      pIVar11 = pIVar9 + 0x95a8;
      lVar12 = *(long *)pIVar11;
      pIVar14 = pIVar9 + 0x95b0;
      *(int *)pIVar14 = *(int *)pIVar14 + 1;
      FUN_00ea94b8(&local_b0,pIVar9,param_2);
      local_c0 = 0;
      uStack_d8 = 0;
      local_e0 = (RuntimeCallStats *)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      if (internal::TracingFlags::runtime_stats != 0) {
        local_e0 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
        internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3f2);
      }
      this_00 = *(Logger **)(pIVar9 + 0x9558);
      uVar4 = internal::Logger::is_logging(this_00);
      if ((uVar4 & 1) != 0) {
        internal::Logger::ApiEntryCall(this_00,"v8::Value::IntegerValue");
      }
      uVar1 = *(undefined4 *)(pIVar9 + 0x2c60);
      *(undefined4 *)(pIVar9 + 0x2c60) = 5;
      if (((byte)*this & 1) != 0) {
        this = (Value *)internal::Object::ConvertToInteger(pIVar9,this);
      }
      if (this == (Value *)0x0) {
        local_a0 = '\x01';
        *(long *)(local_b0 + 0x2c08) = local_68;
        if (local_68 == 0) {
          bVar2 = *(long *)(local_b0 + 0x2bb8) == 0;
        }
        else {
          bVar2 = false;
        }
        internal::Isolate::OptionalRescheduleException(local_b0,bVar2);
        uVar10 = 0;
        this = (Value *)0x0;
      }
      else {
        uVar4 = *(ulong *)this;
        if ((uVar4 & 1) == 0) {
          this = (Value *)((long)(uVar4 << 0x20) >> 0x21);
        }
        else {
          dVar15 = *(double *)(uVar4 + 3);
          if (NAN(dVar15)) {
            this = (Value *)0x0;
          }
          else if (9.223372036854776e+18 <= dVar15) {
            this = (Value *)0x7fffffffffffffff;
          }
          else if (dVar15 <= -9.223372036854776e+18) {
            this = (Value *)0x8000000000000000;
          }
          else {
            this = (Value *)(long)dVar15;
          }
        }
        uVar10 = 1;
      }
      *(undefined4 *)(pIVar9 + 0x2c60) = uVar1;
      if (local_e0 == (RuntimeCallStats *)0x0) {
        if (local_a8 == (ulong *)0x0) goto LAB_00eb4d40;
LAB_00eb4cbc:
        lVar6 = *(long *)(local_b0 + 0x95c0);
        lVar7 = *(long *)(lVar6 + 0x60) + -1;
        uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x50) + lVar7 * 8);
        *(long *)(lVar6 + 0x60) = lVar7;
        *(undefined8 *)(local_b0 + 0x2bc8) = uVar8;
        uVar4 = *local_a8 & 0xffffffff00000000;
        pIVar5 = (Isolate *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*local_a8 - 1)) + 0x13)) + 0x423)
        ;
      }
      else {
        internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
        if (local_a8 != (ulong *)0x0) goto LAB_00eb4cbc;
LAB_00eb4d40:
        pIVar5 = local_b0 + 0xb7c0;
      }
      pMVar3 = *(MicrotaskQueue **)pIVar5;
      if (local_a0 == '\0') {
        *(long *)(local_b0 + 0x2c08) = local_68;
      }
      internal::Isolate::FireCallCompletedCallback(local_b0,pMVar3);
      local_b0[0xb828] = local_9e;
      local_98 = &PTR__InterruptsScope_01c984b0;
      if (local_78 != 2) {
        internal::StackGuard::PopInterruptsScope(local_90);
      }
      *(undefined8 *)(pIVar9 + 0x95a0) = uVar13;
      *(int *)pIVar14 = *(int *)pIVar14 + -1;
      if (*(long *)pIVar11 != lVar12) {
        *(long *)pIVar11 = lVar12;
        internal::HandleScope::DeleteExtensions(pIVar9);
      }
      goto LAB_00eb4acc;
    }
    dVar15 = *(double *)(uVar4 + 3);
    if (NAN(dVar15)) {
      this = (Value *)0x0;
    }
    else if (9.223372036854776e+18 <= dVar15) {
      this = (Value *)0x7fffffffffffffff;
    }
    else if (dVar15 <= -9.223372036854776e+18) {
      this = (Value *)0x8000000000000000;
    }
    else {
      this = (Value *)(long)dVar15;
    }
  }
  uVar10 = 1;
LAB_00eb4acc:
  auVar16._8_8_ = this;
  auVar16._0_8_ = uVar10;
  return auVar16;
}

