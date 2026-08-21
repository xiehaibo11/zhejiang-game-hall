
/* v8::internal::StoreIC::UpdateCaches(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::StoreOrigin) */

void v8::internal::StoreIC::UpdateCaches(StoreIC *param_1,LookupIterator *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  Isolate *pIVar10;
  undefined1 local_40 [16];
  
  local_40._0_4_ = 1;
  local_40._8_8_ = 0;
  uVar4 = LookupForWrite();
  if ((uVar4 & 1) == 0) {
    pIVar10 = *(Isolate **)(param_1 + 8);
    *(char **)(param_1 + 0x48) = "LookupForWrite said \'false\'";
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(undefined8 **)(pIVar10 + 0x95a0);
      if (puVar7 == *(undefined8 **)(pIVar10 + 0x95a8)) {
        puVar7 = (undefined8 *)HandleScope::Extend(pIVar10);
      }
      *(undefined8 **)(pIVar10 + 0x95a0) = puVar7 + 1;
      *puVar7 = 0x14;
    }
    else {
      puVar7 = (undefined8 *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar10 + 0x95b8),0x14);
    }
    local_40._0_4_ = 1;
    local_40._8_8_ = puVar7;
    lVar6 = *(long *)(param_2 + 0x20);
  }
  else {
    if (((*(int *)(param_1 + 0x1c) == 10) || (*(int *)(param_1 + 0x1c) == 1)) &&
       (*(int *)(param_2 + 4) == 6)) {
      plVar1 = *(long **)(param_2 + 0x30);
      plVar2 = *(long **)(param_2 + 0x38);
      if ((plVar1 == plVar2) ||
         (((plVar1 != (long *)0x0 && (plVar2 != (long *)0x0)) && (*plVar1 == *plVar2)))) {
        uVar5 = LookupIterator::GetPropertyCell(param_2);
        FeedbackNexus::ConfigurePropertyCellMode((FeedbackNexus *)(param_1 + 0x50),uVar5);
        lVar6 = *(long *)(param_2 + 0x20);
        if (lVar6 == 0) {
          lVar6 = Factory::SizeToString
                            (*(Factory **)(param_2 + 0x18),*(ulong *)(param_2 + 0x48),true);
          *(long *)(param_2 + 0x20) = lVar6;
        }
        if (TracingFlags::ic_stats == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x18) == 0) {
          uVar9 = 0;
          uVar3 = 0;
        }
        else {
          uVar3 = FeedbackNexus::ic_state((FeedbackNexus *)(param_1 + 0x50));
          uVar9 = *(undefined4 *)(param_1 + 0x18);
        }
        pcVar8 = "StoreGlobalIC";
        goto LAB_01500200;
      }
    }
    local_40 = ComputeHandler(param_1,param_2);
    lVar6 = *(long *)(param_2 + 0x20);
  }
  if (lVar6 == 0) {
    lVar6 = Factory::SizeToString(*(Factory **)(param_2 + 0x18),*(ulong *)(param_2 + 0x48),true);
    *(long *)(param_2 + 0x20) = lVar6;
  }
  IC::SetCache((IC *)param_1,lVar6,local_40);
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 == 0) {
    lVar6 = Factory::SizeToString(*(Factory **)(param_2 + 0x18),*(ulong *)(param_2 + 0x48),true);
    *(long *)(param_2 + 0x20) = lVar6;
  }
  if (TracingFlags::ic_stats == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar9 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = FeedbackNexus::ic_state((FeedbackNexus *)(param_1 + 0x50));
    uVar9 = *(undefined4 *)(param_1 + 0x18);
  }
  pcVar8 = "StoreIC";
LAB_01500200:
  IC::TraceIC((IC *)param_1,pcVar8,lVar6,uVar9,uVar3);
  return;
}

