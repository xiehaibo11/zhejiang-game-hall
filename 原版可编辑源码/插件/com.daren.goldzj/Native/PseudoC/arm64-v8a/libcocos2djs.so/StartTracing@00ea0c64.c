
/* v8::platform::tracing::TracingController::StartTracing(v8::platform::tracing::TraceConfig*) */

void __thiscall
v8::platform::tracing::TracingController::StartTracing(TracingController *this,TraceConfig *param_1)

{
  TracingController *pTVar1;
  TracingController TVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  void *pvVar10;
  Mutex *this_00;
  void *pvVar11;
  byte *pbVar12;
  char *__s1;
  long lVar13;
  undefined **ppuVar14;
  void *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pvVar10 = *(void **)(this + 0x10);
  *(TraceConfig **)(this + 0x10) = param_1;
  if (pvVar10 != (void *)0x0) {
    pbVar12 = *(byte **)((long)pvVar10 + 8);
    if (pbVar12 != (byte *)0x0) {
      pbVar8 = *(byte **)((long)pvVar10 + 0x10);
      pbVar7 = pbVar12;
      if (pbVar8 != pbVar12) {
        bVar5 = pbVar8[-0x18];
        pbVar7 = pbVar8 + -0x18;
        while( true ) {
          if ((bVar5 & 1) != 0) {
            operator_delete(*(void **)(pbVar8 + -8));
          }
          if (pbVar12 == pbVar7) break;
          bVar5 = pbVar7[-0x18];
          pbVar8 = pbVar7;
          pbVar7 = pbVar7 + -0x18;
        }
        pbVar7 = *(byte **)((long)pvVar10 + 8);
      }
      *(byte **)((long)pvVar10 + 0x10) = pbVar12;
      operator_delete(pbVar7);
    }
    operator_delete(pvVar10);
  }
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_78 = 0;
  local_80 = (undefined8 *)0x0;
  local_70 = 0x3f800000;
  this_00 = *(Mutex **)(this + 0x18);
  base::Mutex::Lock(this_00);
  *(undefined4 *)(this + 0x48) = 1;
  if (g_category_index != 0) {
    ppuVar14 = &g_category_groups;
    lVar13 = g_category_index;
    pbVar12 = &g_category_group_enabled;
    do {
      pTVar1 = this + 0x48;
      __s1 = *ppuVar14;
      if (((byte)*pTVar1 & 1) == 0) {
        bVar5 = 0;
        TVar2 = *pTVar1;
      }
      else {
        bVar5 = TraceConfig::IsCategoryGroupEnabled(*(TraceConfig **)(this + 0x10),__s1);
        bVar5 = bVar5 & 1;
        TVar2 = *pTVar1;
      }
      if ((((byte)TVar2 & 1) != 0) && (iVar6 = strcmp(__s1,"__metadata"), iVar6 == 0)) {
        bVar5 = 1;
      }
      *pbVar12 = bVar5;
      lVar13 = lVar13 + -1;
      ppuVar14 = ppuVar14 + 1;
      pbVar12 = pbVar12 + 1;
    } while (lVar13 != 0);
  }
  if ((TracingController *)&local_90 != this + 0x20) {
    local_70 = *(undefined4 *)(this + 0x40);
    std::__ndk1::
    __hash_table<v8::TracingController::TraceStateObserver*,std::__ndk1::hash<v8::TracingController::TraceStateObserver*>,std::__ndk1::equal_to<v8::TracingController::TraceStateObserver*>,std::__ndk1::allocator<v8::TracingController::TraceStateObserver*>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::TracingController::TraceStateObserver*,void*>*>>
              ((__hash_table<v8::TracingController::TraceStateObserver*,std::__ndk1::hash<v8::TracingController::TraceStateObserver*>,std::__ndk1::equal_to<v8::TracingController::TraceStateObserver*>,std::__ndk1::allocator<v8::TracingController::TraceStateObserver*>>
                *)&local_90,*(undefined8 *)(this + 0x30),0);
  }
  base::Mutex::Unlock(this_00);
  for (puVar9 = local_80; pvVar10 = local_90, puVar4 = local_80, puVar9 != (undefined8 *)0x0;
      puVar9 = (undefined8 *)*puVar9) {
    (**(code **)(*(long *)puVar9[2] + 0x10))();
  }
  while (puVar4 != (void *)0x0) {
    pvVar11 = (void *)*puVar4;
    local_90 = pvVar10;
    operator_delete(puVar4);
    pvVar10 = local_90;
    puVar4 = pvVar11;
  }
  local_90 = (void *)0x0;
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

