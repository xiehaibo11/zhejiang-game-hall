
undefined8
FUN_00eba024(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7,undefined4 param_8,byte param_9,byte param_10,
            int param_11,int param_12)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  undefined8 uVar13;
  Isolate *pIVar14;
  Logger *this;
  Isolate *pIVar15;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Isolate *local_b8;
  long local_b0;
  char local_a8;
  Isolate local_a6;
  undefined **local_a0;
  StackGuard *local_98;
  int local_80;
  long local_70;
  
  pIVar12 = (Isolate *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  if ((*(int *)(pIVar12 + 0x2c20) != *(int *)(pIVar12 + 0xa8)) &&
     (*(int *)(pIVar12 + 0x2c20) == *(int *)(pIVar12 + 0x188))) {
    return 0;
  }
  uVar7 = *(undefined8 *)(pIVar12 + 0x95a0);
  pIVar14 = pIVar12 + 0x95a8;
  lVar8 = *(long *)pIVar14;
  pIVar15 = pIVar12 + 0x95b0;
  *(int *)pIVar15 = *(int *)pIVar15 + 1;
  FUN_00eaadd8(&local_b8,pIVar12,param_1);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(pIVar12 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3a8);
  }
  this = *(Logger **)(pIVar12 + 0x9558);
  uVar4 = v8::internal::Logger::is_logging(this);
  if ((uVar4 & 1) != 0) {
    v8::internal::Logger::ApiEntryCall(this,"v8::Object::SetAccessor");
  }
  uVar1 = *(undefined4 *)(pIVar12 + 0x2c60);
  *(undefined4 *)(pIVar12 + 0x2c60) = 5;
  if (*(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xaa) {
    uVar13 = 1;
    goto LAB_00eba2dc;
  }
  puVar5 = (ulong *)FUN_00ed757c(pIVar12,param_3,param_4,param_5,param_6,param_7,0,param_9 & 1,
                                 param_10 & 1);
  *(uint *)(*puVar5 + 7) = *(uint *)(*puVar5 + 7) & 0xffffff3e | param_11 << 6;
  if (param_12 == 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","value != SideEffectType::kHasNoSideEffect");
  }
  *(uint *)(*puVar5 + 7) = *(uint *)(*puVar5 + 7) & 0xfffffcfe | param_12 << 8;
  if (puVar5 != (ulong *)0x0) {
    uVar2 = *(uint *)((*param_2 & 0xffffffff00000000 | 0xb) + (ulong)*(uint *)(*param_2 - 1));
    uVar4 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 3);
    if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar12 + 0x95a0);
      if (puVar6 == *(ulong **)pIVar14) {
        puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar12);
      }
      *(ulong **)(pIVar12 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar4;
    }
    else {
      puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar4);
    }
    puVar5 = (ulong *)v8::internal::JSObject::SetAccessor(param_2,puVar6,puVar5,param_8);
    if (puVar5 != (ulong *)0x0) {
      if ((*puVar5 & 1) == 0) {
        if ((uVar2 >> 0x15 & 1) == 0) goto LAB_00eba2ac;
      }
      else {
        uVar13 = 0x101;
        if ((int)*puVar5 == *(int *)(pIVar12 + 0xa0)) {
          uVar13 = 1;
          goto LAB_00eba2dc;
        }
        if ((uVar2 >> 0x15 & 1) != 0) goto LAB_00eba2dc;
LAB_00eba2ac:
        v8::internal::JSObject::MigrateSlowToFast(param_2,0,"APISetAccessor");
      }
      uVar13 = 0x101;
      goto LAB_00eba2dc;
    }
    local_a8 = '\x01';
    *(long *)(local_b8 + 0x2c08) = local_70;
    if (local_70 == 0) {
      bVar3 = *(long *)(local_b8 + 0x2bb8) == 0;
    }
    else {
      bVar3 = false;
    }
    v8::internal::Isolate::OptionalRescheduleException(local_b8,bVar3);
  }
  uVar13 = 0;
LAB_00eba2dc:
  *(undefined4 *)(pIVar12 + 0x2c60) = uVar1;
  if (local_e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (local_b0 != 0) {
    lVar9 = *(long *)(local_b8 + 0x95c0);
    lVar10 = *(long *)(lVar9 + 0x60) + -1;
    uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x50) + lVar10 * 8);
    *(long *)(lVar9 + 0x60) = lVar10;
    *(undefined8 *)(local_b8 + 0x2bc8) = uVar11;
  }
  if (local_a8 == '\0') {
    *(long *)(local_b8 + 0x2c08) = local_70;
  }
  local_b8[0xb828] = local_a6;
  local_a0 = &PTR__InterruptsScope_01c984b0;
  if (local_80 != 2) {
    v8::internal::StackGuard::PopInterruptsScope(local_98);
  }
  *(undefined8 *)(pIVar12 + 0x95a0) = uVar7;
  *(int *)pIVar15 = *(int *)pIVar15 + -1;
  if (*(long *)pIVar14 != lVar8) {
    *(long *)pIVar14 = lVar8;
    v8::internal::HandleScope::DeleteExtensions(pIVar12);
  }
  return uVar13;
}

