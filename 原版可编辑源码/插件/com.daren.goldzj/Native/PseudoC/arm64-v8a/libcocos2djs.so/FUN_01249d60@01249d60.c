
void FUN_01249d60(long *param_1)

{
  __shared_weak_count *p_Var1;
  undefined8 uVar2;
  __shared_weak_count *this;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  Isolate *pIVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar8 = *param_1;
  pIVar7 = *(Isolate **)(lVar8 + 8);
  iVar4 = *(int *)(pIVar7 + 0x95b0);
  *(int *)(pIVar7 + 0x95b0) = iVar4 + 1;
  puVar9 = *(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x20) + 3) + 0x18);
  puVar10 = (undefined8 *)*puVar9;
  this = (__shared_weak_count *)puVar9[1];
  uVar2 = *(undefined8 *)(pIVar7 + 0x95a0);
  lVar8 = *(long *)(pIVar7 + 0x95a8);
  if (this == (__shared_weak_count *)0x0) {
    *(int *)(pIVar7 + 0x95b0) = iVar4;
  }
  else {
    p_Var1 = this + 8;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined8 *)(pIVar7 + 0x95a0) = uVar2;
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
    if (*(long *)(pIVar7 + 0x95a8) != lVar8) {
      *(long *)(pIVar7 + 0x95a8) = lVar8;
      v8::internal::HandleScope::DeleteExtensions(pIVar7);
    }
  }
  if ((int)param_1[2] < 1) {
    lVar8 = *(long *)(*param_1 + 8) + 0xa0;
  }
  else {
    lVar8 = param_1[1];
  }
  puVar10 = (undefined8 *)*puVar10;
  pIVar7 = (Isolate *)*puVar10;
  uVar2 = *(undefined8 *)(pIVar7 + 0x95a0);
  lVar3 = *(long *)(pIVar7 + 0x95a8);
  *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
  v8::internal::wasm::StreamingDecoder::Abort((StreamingDecoder *)puVar10[1]);
  if (lVar8 != 0) {
    (**(code **)(*(long *)puVar10[3] + 8))((long *)puVar10[3],lVar8);
  }
  if (pIVar7 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar7 + 0x95a0) = uVar2;
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
    if (*(long *)(pIVar7 + 0x95a8) != lVar3) {
      *(long *)(pIVar7 + 0x95a8) = lVar3;
      v8::internal::HandleScope::DeleteExtensions(pIVar7);
    }
  }
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}

