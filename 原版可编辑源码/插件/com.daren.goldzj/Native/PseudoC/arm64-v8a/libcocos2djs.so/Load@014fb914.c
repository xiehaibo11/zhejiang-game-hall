
/* v8::internal::LoadGlobalIC::Load(v8::internal::Handle<v8::internal::Name>, bool) */

ulong * __thiscall v8::internal::LoadGlobalIC::Load(LoadGlobalIC *this,ulong *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  Isolate *pIVar8;
  Factory *pFVar9;
  int local_70;
  int local_6c;
  char local_68;
  undefined8 local_60;
  undefined8 *local_58;
  
  pIVar8 = *(Isolate **)(this + 8);
  local_60 = *(undefined8 *)(pIVar8 + 0x2bc8);
  uVar3 = Context::global_object((Context *)&local_60);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
  }
  if (0x3f < *(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1))) {
LAB_014fba84:
    puVar4 = (ulong *)LoadIC::Load((LoadIC *)this,puVar4,param_2,param_3 & 1);
    return puVar4;
  }
  uVar3 = *puVar4 & 0xffffffff00000000;
  pIVar8 = *(Isolate **)(this + 8);
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)(*puVar4 + 0xb)) + 0x273);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar3;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
    uVar3 = *puVar5;
  }
  uVar3 = ScriptContextTable::Lookup(*(undefined8 *)(this + 8),uVar3,*param_2,&local_70);
  if ((uVar3 & 1) == 0) goto LAB_014fba84;
  pIVar8 = *(Isolate **)(this + 8);
  uVar3 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + (long)(local_70 * 4 + 4) + 7);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
    uVar3 = *puVar4;
  }
  uVar1 = *(uint *)(uVar3 + (long)(local_6c << 2) + 7);
  pIVar8 = *(Isolate **)(this + 8);
  uVar3 = uVar3 & 0xffffffff00000000 | (ulong)uVar1;
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
    if ((uVar1 & 1) == 0) goto LAB_014fbb94;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar3);
    uVar3 = *puVar4;
    if ((uVar3 & 1) == 0) goto LAB_014fbb94;
  }
  pFVar9 = *(Factory **)(this + 8);
  if ((int)uVar3 == *(int *)(pFVar9 + 0xa8)) {
    puVar6 = (undefined8 *)Factory::NewReferenceError(pFVar9,0xb4,param_2,0,0);
    Isolate::Throw((Isolate *)pFVar9,*puVar6,0);
    return (ulong *)0x0;
  }
LAB_014fbb94:
  if (((*(int *)(this + 0x18) != 0) && (FLAG_use_ic != '\0')) && ((param_3 & 1) != 0)) {
    uVar3 = FeedbackNexus::ConfigureLexicalVarMode
                      ((FeedbackNexus *)(this + 0x50),local_70,local_6c,local_68 == '\x01');
    if ((uVar3 & 1) == 0) {
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x404,0);
      }
      pIVar8 = *(Isolate **)(this + 8);
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        local_58 = *(undefined8 **)(pIVar8 + 0x95a0);
        if (local_58 == *(undefined8 **)(pIVar8 + 0x95a8)) {
          local_58 = (undefined8 *)HandleScope::Extend(pIVar8);
        }
        *(undefined8 **)(pIVar8 + 0x95a0) = local_58 + 1;
        *local_58 = 0x16;
      }
      else {
        local_58 = (undefined8 *)
                   CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar8 + 0x95b8),0x16);
      }
      local_60 = CONCAT44(local_60._4_4_,1);
      IC::SetCache((IC *)this,param_2,&local_60);
    }
    else if (TracingFlags::runtime_stats != 0) {
      RuntimeCallStats::CorrectCurrentCounterId
                ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x403,0);
    }
    if (TracingFlags::ic_stats == 0) {
      return puVar4;
    }
    if (*(int *)(this + 0x18) == 0) {
      uVar7 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
      uVar7 = *(undefined4 *)(this + 0x18);
    }
    IC::TraceIC((IC *)this,"LoadGlobalIC",param_2,uVar7,uVar2);
    return puVar4;
  }
  if (*(int *)(this + 0x18) != 0) {
    return puVar4;
  }
  if (TracingFlags::ic_stats == 0) {
    return puVar4;
  }
  IC::TraceIC((IC *)this,"LoadGlobalIC",param_2,0,0);
  return puVar4;
}

