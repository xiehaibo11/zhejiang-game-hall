
/* v8::internal::GCExtension::GC(v8::FunctionCallbackInfo<v8::Value> const&) */

void v8::internal::GCExtension::GC(FunctionCallbackInfo *param_1)

{
  __shared_weak_count *p_Var1;
  Heap *pHVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  Value *this;
  ulong *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  CancelableTask *pCVar14;
  ulong *puVar15;
  Isolate *this_00;
  uint uVar16;
  long lVar17;
  CancelableTask *local_80;
  long *local_78;
  __shared_weak_count *local_70;
  ulong local_68;
  uint local_60;
  undefined4 local_58;
  uint uStack_54;
  uint uStack_50;
  
  this_00 = *(Isolate **)(*(long *)param_1 + 8);
  if (*(int *)(param_1 + 0x10) == 0) {
    Heap::SetEmbedderStackStateForNextFinalizaton((Heap *)(this_00 + 0x8850),0);
    Heap::PreciseCollectAllGarbage((Heap *)(this_00 + 0x8850),0,0x15,4);
    return;
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    uVar16 = 1;
    this = (Value *)(this_00 + 0xa0);
  }
  else {
    uVar9 = v8::Value::IsObject(*(Value **)(param_1 + 8));
    if ((uVar9 & 1) == 0) {
      uVar16 = 1;
    }
    else {
      v8::HandleScope::HandleScope((HandleScope *)&local_58,this_00);
      uVar10 = v8::Isolate::GetCurrentContext(this_00);
      if (*(int *)(param_1 + 0x10) < 1) {
        lVar17 = *(long *)(*(long *)param_1 + 8) + 0xa0;
      }
      else {
        lVar17 = *(long *)(param_1 + 8);
      }
      uVar6 = FUN_014ee074(this_00,uVar10,lVar17,"type","minor");
      if (((uVar6 & 0xff) == 0) ||
         (uVar7 = FUN_014ee074(this_00,uVar10,lVar17,"execution","async"), (uVar7 & 0xff) == 0)) {
        v8::HandleScope::~HandleScope((HandleScope *)&local_58);
        return;
      }
      uVar8 = (uint)(0xff < uVar6);
      uVar16 = (uint)(uVar7 < 0x100);
      v8::HandleScope::~HandleScope((HandleScope *)&local_58);
      local_60 = uVar16;
      if (((uVar7 | uVar6) & 0xff00) != 0) goto LAB_014edd84;
    }
    if (*(int *)(param_1 + 0x10) < 1) {
      this = (Value *)(*(long *)(*(long *)param_1 + 8) + 0xa0);
    }
    else {
      this = *(Value **)(param_1 + 8);
    }
  }
  uVar8 = v8::Value::BooleanValue(this,this_00);
  local_60 = uVar16;
LAB_014edd84:
  uStack_54 = uVar8 & 1;
  uVar16 = uStack_54;
  local_58 = CONCAT31(local_58._1_3_,1);
  local_68 = CONCAT44(uVar8,local_58) & 0x1ffffffff;
  uStack_50 = local_60;
  if (local_60 == 0) {
    v8::HandleScope::HandleScope((HandleScope *)&local_58,this_00);
    v8::Isolate::GetCurrentContext(this_00);
    puVar11 = (ulong *)Promise::Resolver::New();
    if (puVar11 == (ulong *)0x0) {
      v8::V8::ToLocalEmpty();
    }
    lVar17 = *(long *)param_1;
    puVar12 = (undefined8 *)Promise::Resolver::GetPromise();
    puVar3 = (undefined8 *)(lVar17 + 0x10);
    if (puVar12 != (undefined8 *)0x0) {
      puVar3 = puVar12;
    }
    *(undefined8 *)(lVar17 + 0x18) = *puVar3;
    plVar13 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar13 + 0x30))(&local_78,plVar13,this_00);
    uVar9 = (**(code **)(*local_78 + 0x30))();
    if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","task_runner->NonNestableTasksEnabled()");
    }
    pCVar14 = operator_new(0x48);
    CancelableTask::CancelableTask(pCVar14,(Isolate *)this_00);
    *(undefined ***)pCVar14 = &PTR_FUN_01cc6bc0;
    *(undefined ***)(pCVar14 + 0x20) = &PTR_FUN_01cc6bf0;
    *(Isolate **)(pCVar14 + 0x28) = this_00;
    puVar15 = (ulong *)v8::Isolate::GetCurrentContext(this_00);
    uVar10 = 0;
    if (puVar15 != (ulong *)0x0) {
      uVar10 = v8::V8::GlobalizeReference((Isolate *)this_00,puVar15);
    }
    *(undefined8 *)(pCVar14 + 0x30) = uVar10;
    if (puVar11 == (ulong *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = v8::V8::GlobalizeReference((Isolate *)this_00,puVar11);
    }
    *(undefined8 *)(pCVar14 + 0x38) = uVar10;
    *(uint *)(pCVar14 + 0x40) = uVar16;
    local_80 = pCVar14 + 0x20;
    (**(code **)(*local_78 + 8))(local_78,&local_80);
    pCVar14 = local_80;
    local_80 = (CancelableTask *)0x0;
    if (pCVar14 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar14 + 8))();
    }
    if (local_70 != (__shared_weak_count *)0x0) {
      p_Var1 = local_70 + 8;
      do {
        lVar17 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*(long *)local_70 + 0x10))(local_70);
        std::__ndk1::__shared_weak_count::__release_weak(local_70);
      }
    }
    v8::HandleScope::~HandleScope((HandleScope *)&local_58);
  }
  else if (local_60 == 1) {
    pHVar2 = (Heap *)(this_00 + 0x8850);
    if (uStack_54 == 0) {
      Heap::SetEmbedderStackStateForNextFinalizaton(pHVar2,0);
      Heap::PreciseCollectAllGarbage(pHVar2,0,0x15,4);
    }
    else if (uStack_54 == 1) {
      Heap::CollectGarbage(pHVar2,1,0x15,4);
    }
  }
  return;
}

