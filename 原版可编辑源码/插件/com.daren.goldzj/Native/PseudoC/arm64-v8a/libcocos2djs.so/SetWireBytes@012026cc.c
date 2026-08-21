
/* v8::internal::wasm::NativeModule::SetWireBytes(v8::internal::OwnedVector<unsigned char const>) */

void __thiscall
v8::internal::wasm::NativeModule::SetWireBytes(NativeModule *this,undefined8 *param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *p_Var4;
  long lVar5;
  CompilationState *pCVar6;
  __shared_weak_count *this_00;
  __shared_weak_count *p_Var7;
  __shared_weak_count *p_Var8;
  undefined8 uVar9;
  __shared_weak_count *local_50;
  __shared_weak_count *local_48;
  
  p_Var4 = operator_new(0x28);
  *(undefined8 *)(p_Var4 + 0x10) = 0;
  p_Var8 = p_Var4 + 8;
  *(long *)p_Var8 = 0;
  *(undefined ***)p_Var4 = &PTR____shared_ptr_emplace_01cbc2e8;
  uVar9 = *param_2;
  *param_2 = 0;
  p_Var7 = p_Var4 + 0x18;
  *(undefined8 *)(p_Var4 + 0x20) = param_2[1];
  *(undefined8 *)p_Var7 = uVar9;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var8,0x10);
    if (bVar3) {
      *(long *)p_Var8 = *(long *)p_Var8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  this_00 = *(__shared_weak_count **)(this + 0xe8);
  *(__shared_weak_count **)(this + 0xe0) = p_Var7;
  *(__shared_weak_count **)(this + 0xe8) = p_Var4;
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
      lVar5 = *(long *)(p_Var4 + 0x20);
      goto joined_r0x012027f8;
    }
  }
  lVar5 = *(long *)(p_Var4 + 0x20);
joined_r0x012027f8:
  if (lVar5 == 0) {
    do {
      lVar5 = *(long *)p_Var8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var8,0x10);
      if (bVar3) {
        *(long *)p_Var8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
      return;
    }
  }
  else {
    pCVar6 = *(CompilationState **)(this + 0x100);
    local_48 = operator_new(0x30);
    *(undefined8 *)(local_48 + 8) = 0;
    *(undefined8 *)(local_48 + 0x10) = 0;
    *(undefined ***)local_48 = &PTR_FUN_01cbc320;
    local_50 = local_48 + 0x18;
    *(undefined ***)local_50 = &PTR_FUN_01cbc358;
    *(__shared_weak_count **)(local_48 + 0x20) = p_Var7;
    *(__shared_weak_count **)(local_48 + 0x28) = p_Var4;
    CompilationState::SetWireBytesStorage(pCVar6,&local_50);
    p_Var4 = local_48;
    if (local_48 != (__shared_weak_count *)0x0) {
      p_Var7 = local_48 + 8;
      do {
        lVar5 = *(long *)p_Var7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var7,0x10);
        if (bVar3) {
          *(long *)p_Var7 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*(long *)local_48 + 0x10))(local_48);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
      }
    }
  }
  return;
}

