
/* v8::internal::LoadIC::UpdateCaches(v8::internal::LookupIterator*) */

void __thiscall v8::internal::LoadIC::UpdateCaches(LoadIC *this,LookupIterator *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  Isolate *pIVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 local_40 [2];
  undefined8 *local_38;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 4) {
    if (TracingFlags::runtime_stats != 0) {
      RuntimeCallStats::CorrectCurrentCounterId
                ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x416,0);
    }
    pIVar5 = *(Isolate **)(this + 8);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(undefined8 **)(pIVar5 + 0x95a0);
      if (puVar6 == *(undefined8 **)(pIVar5 + 0x95a8)) {
        puVar6 = (undefined8 *)HandleScope::Extend(pIVar5);
      }
      *(undefined8 **)(pIVar5 + 0x95a0) = puVar6 + 1;
      *puVar6 = 0x1a;
    }
    else {
      puVar6 = (undefined8 *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar5 + 0x95b8),0x1a);
    }
    local_38 = (undefined8 *)(*(long *)(this + 8) + 0xb0);
    local_40[0] = 1;
    puVar6 = (undefined8 *)
             LoadHandler::LoadFullChain
                       (*(long *)(this + 8),*(undefined8 *)(this + 0x20),local_40,puVar6);
  }
  else if (iVar3 == 0) {
    pIVar5 = *(Isolate **)(this + 8);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(undefined8 **)(pIVar5 + 0x95a0);
      if (puVar6 == *(undefined8 **)(pIVar5 + 0x95a8)) {
        puVar6 = (undefined8 *)HandleScope::Extend(pIVar5);
      }
      *(undefined8 **)(pIVar5 + 0x95a0) = puVar6 + 1;
      *puVar6 = 0x16;
      lVar8 = *(long *)(param_1 + 0x20);
      goto joined_r0x014fb810;
    }
    puVar6 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar5 + 0x95b8),0x16);
  }
  else {
    if ((*(uint *)(this + 0x1c) | 1) == 7) {
      if (iVar3 == 3) {
        pIVar5 = *(Isolate **)(this + 8);
        if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(undefined8 **)(pIVar5 + 0x95a0);
          if (puVar6 == *(undefined8 **)(pIVar5 + 0x95a8)) {
            puVar6 = (undefined8 *)HandleScope::Extend(pIVar5);
          }
          *(undefined8 **)(pIVar5 + 0x95a0) = puVar6 + 1;
          *puVar6 = 0x16;
        }
        else {
          puVar6 = (undefined8 *)
                   CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar5 + 0x95b8),0x16);
        }
        puVar6 = (undefined8 *)
                 LoadHandler::LoadFromPrototype
                           (*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x20),
                            *(undefined8 *)(param_1 + 0x38),puVar6,1,0,1,0);
        goto LAB_014fb808;
      }
      LookupIterator::TryLookupCachedProperty(param_1);
      if (*(int *)(param_1 + 4) == 6) {
        plVar1 = *(long **)(param_1 + 0x30);
        plVar2 = *(long **)(param_1 + 0x38);
        if ((plVar1 == plVar2) ||
           (((plVar1 != (long *)0x0 && (plVar2 != (long *)0x0)) && (*plVar1 == *plVar2)))) {
          uVar7 = LookupIterator::GetPropertyCell(param_1);
          FeedbackNexus::ConfigurePropertyCellMode((FeedbackNexus *)(this + 0x50),uVar7);
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          if (TracingFlags::ic_stats == 0) {
            return;
          }
          if (*(int *)(this + 0x18) == 0) {
            uVar9 = 0;
            uVar4 = 0;
          }
          else {
            uVar4 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
            uVar9 = *(undefined4 *)(this + 0x18);
          }
          IC::TraceIC((IC *)this,"LoadGlobalIC",uVar7,uVar9,uVar4);
          return;
        }
      }
    }
    puVar6 = (undefined8 *)ComputeHandler(this,param_1);
  }
LAB_014fb808:
  lVar8 = *(long *)(param_1 + 0x20);
joined_r0x014fb810:
  if (lVar8 == 0) {
    lVar8 = Factory::SizeToString(*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
    *(long *)(param_1 + 0x20) = lVar8;
  }
  local_40[0] = 1;
  local_38 = puVar6;
  IC::SetCache((IC *)this,lVar8,local_40);
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) {
    lVar8 = Factory::SizeToString(*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
    *(long *)(param_1 + 0x20) = lVar8;
  }
  if (TracingFlags::ic_stats != 0) {
    if (*(int *)(this + 0x18) == 0) {
      uVar9 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
      uVar9 = *(undefined4 *)(this + 0x18);
    }
    IC::TraceIC((IC *)this,"LoadIC",lVar8,uVar9,uVar4);
  }
  return;
}

