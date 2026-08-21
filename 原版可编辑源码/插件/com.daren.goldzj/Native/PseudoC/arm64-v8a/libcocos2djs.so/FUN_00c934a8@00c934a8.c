
void FUN_00c934a8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  ScriptEngine *pSVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  void *pvVar9;
  code *pcVar10;
  long *plVar11;
  char *__s;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  Object *pOVar15;
  undefined8 local_108;
  ulong uStack_100;
  void *local_f8;
  Object *local_f0;
  undefined8 local_e8;
  ulong uStack_e0;
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b8;
  size_t sStack_b0;
  void *local_a8;
  HandleScope aHStack_a0 [32];
  HandleScope *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  plVar11 = (long *)*param_2;
  if (plVar11 == (long *)0x0) {
    __cxa_bad_typeid();
    goto LAB_00c9387c;
  }
  __s = *(char **)(*(long *)(*plVar11 + -8) + 8);
  local_b8 = 0;
  sStack_b0 = 0;
  local_a8 = (void *)0x0;
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) goto LAB_00c93874;
  if (sVar2 < 0x17) {
    pvVar12 = (void *)((ulong)&local_b8 | 1);
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar2 << 1));
    if (sVar2 != 0) goto LAB_00c93544;
  }
  else {
    uVar14 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar12 = operator_new(uVar14);
    local_b8 = uVar14 | 1;
    sStack_b0 = sVar2;
    local_a8 = pvVar12;
LAB_00c93544:
    memcpy(pvVar12,__s,sVar2);
  }
  *(undefined1 *)((long)pvVar12 + sVar2) = 0;
  lVar3 = se::NativePtrToObjectMap::find(plVar11);
  lVar4 = se::NativePtrToObjectMap::end();
  uVar14 = local_b8;
  if (lVar3 != lVar4) {
    pOVar15 = *(Object **)(lVar3 + 0x18);
    se::NativePtrToObjectMap::erase(lVar3);
    pvVar12 = local_a8;
    sVar2 = sStack_b0;
    uVar14 = local_b8;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = (void *)0x0;
    if ((local_b8 & 1) == 0) {
      local_c0 = local_a8;
      uStack_c8 = sStack_b0;
      local_d0 = local_b8;
    }
    else {
      if (0xffffffffffffffef < sStack_b0) goto LAB_00c93874;
      if (sStack_b0 < 0x17) {
        pvVar9 = (void *)((ulong)&local_d0 | 1);
        local_d0 = (ulong)(byte)((int)sStack_b0 << 1);
        if (sStack_b0 != 0) goto LAB_00c93600;
      }
      else {
        uVar13 = sStack_b0 + 0x10 & 0xfffffffffffffff0;
        pvVar9 = operator_new(uVar13);
        local_d0 = uVar13 | 1;
        uStack_c8 = sVar2;
        local_c0 = pvVar9;
LAB_00c93600:
        memcpy(pvVar9,pvVar12,sVar2);
      }
      *(undefined1 *)((long)pvVar9 + sVar2) = 0;
    }
    pvVar12 = local_c0;
    uVar7 = uStack_c8;
    uVar13 = local_d0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = (void *)0x0;
    local_f0 = pOVar15;
    if ((local_d0 & 1) == 0) {
      local_d8 = local_c0;
      uStack_e0 = uStack_c8;
      local_e8 = local_d0;
    }
    else {
      if (0xffffffffffffffef < uStack_c8) goto LAB_00c93874;
      if (uStack_c8 < 0x17) {
        pvVar9 = (void *)((long)&local_e8 + 1);
        local_e8 = (ulong)(byte)((int)uStack_c8 << 1);
        if (uStack_c8 != 0) goto LAB_00c9368c;
      }
      else {
        uVar6 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
        pvVar9 = operator_new(uVar6);
        local_e8 = uVar6 | 1;
        uStack_e0 = uVar7;
        local_d8 = pvVar9;
LAB_00c9368c:
        memcpy(pvVar9,pvVar12,uVar7);
      }
      *(undefined1 *)((long)pvVar9 + uVar7) = 0;
    }
    pSVar5 = (ScriptEngine *)se::ScriptEngine::getInstance();
    uVar6 = se::ScriptEngine::isGarbageCollecting(pSVar5);
    pvVar12 = local_d8;
    uVar7 = uStack_e0;
    pOVar15 = local_f0;
    if ((uVar6 & 1) == 0) {
      pSVar5 = (ScriptEngine *)se::ScriptEngine::getInstance();
      uVar7 = se::ScriptEngine::isValid(pSVar5);
      if (((uVar7 & 1) != 0) && (pSVar5[0x20e] == (ScriptEngine)0x0)) {
        pIVar8 = (Isolate *)v8::Isolate::GetCurrent();
        v8::HandleScope::HandleScope(aHStack_a0,pIVar8);
        se::ScriptEngine::clearException();
        pOVar15 = local_f0;
        se::Object::clearPrivateData(local_f0,false);
        se::Object::unroot(pOVar15);
        se::RefCounter::decRef((RefCounter *)pOVar15);
        v8::HandleScope::~HandleScope(aHStack_a0);
      }
    }
    else {
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = (void *)0x0;
      if ((local_e8 & 1) == 0) {
        local_f8 = local_d8;
        uStack_100 = uStack_e0;
        local_108 = local_e8;
      }
      else {
        if (0xffffffffffffffef < uStack_e0) {
LAB_00c93874:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uStack_e0 < 0x17) {
          pvVar9 = (void *)((long)&local_108 + 1);
          local_108 = (ulong)(byte)((int)uStack_e0 << 1);
          if (uStack_e0 != 0) goto LAB_00c9378c;
        }
        else {
          uVar6 = uStack_e0 + 0x10 & 0xfffffffffffffff0;
          pvVar9 = operator_new(uVar6);
          local_108 = uVar6 | 1;
          uStack_100 = uVar7;
          local_f8 = pvVar9;
LAB_00c9378c:
          memcpy(pvVar9,pvVar12,uVar7);
        }
        *(undefined1 *)((long)pvVar9 + uVar7) = 0;
      }
      local_80 = operator_new(0x28);
      *(undefined ***)local_80 = &PTR_FUN_01c8dda0;
      *(Object **)(local_80 + 8) = pOVar15;
      *(void **)(local_80 + 0x20) = local_f8;
      *(ulong *)(local_80 + 0x18) = uStack_100;
      *(ulong *)(local_80 + 0x10) = local_108;
      uStack_100 = 0;
      local_f8 = (void *)0x0;
      local_108 = 0;
      CleanupTask::pushTaskToAutoReleasePool(aHStack_a0);
      if (aHStack_a0 == local_80) {
        pcVar10 = *(code **)(*(long *)local_80 + 0x20);
      }
      else {
        if (local_80 == (HandleScope *)0x0) goto joined_r0x00c93738;
        pcVar10 = *(code **)(*(long *)local_80 + 0x28);
      }
      (*pcVar10)();
    }
joined_r0x00c93738:
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((uVar13 & 1) != 0) {
      operator_delete(local_c0);
    }
  }
  if ((uVar14 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
LAB_00c9387c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

