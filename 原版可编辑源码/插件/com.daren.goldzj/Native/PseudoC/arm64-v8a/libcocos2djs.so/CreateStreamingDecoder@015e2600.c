
/* v8::internal::wasm::AsyncCompileJob::CreateStreamingDecoder() */

void v8::internal::wasm::AsyncCompileJob::CreateStreamingDecoder(void)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long *in_x0;
  StreamingDecoder *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *in_x8;
  long lVar7;
  __shared_weak_count *this;
  long *local_38;
  
  pSVar4 = operator_new(0xa0);
  plVar5 = operator_new(0x38);
  *plVar5 = (long)&PTR__AsyncStreamingProcessor_01cc9990;
  ModuleDecoder::ModuleDecoder((ModuleDecoder *)(plVar5 + 1),(WasmFeatures *)(in_x0 + 2));
  plVar5[3] = (long)in_x0;
  lVar7 = *(long *)(*in_x0 + 0xc770);
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[4] = lVar7;
  plVar5[5] = 0;
  local_38 = plVar5;
  StreamingDecoder::StreamingDecoder(pSVar4,&local_38);
  puVar6 = operator_new(0x20);
  puVar6[2] = 0;
  puVar6[3] = pSVar4;
  *puVar6 = &PTR____shared_weak_count_01cc9d08;
  puVar6[1] = 0;
  this = (__shared_weak_count *)in_x0[0x25];
  in_x0[0x24] = (long)pSVar4;
  in_x0[0x25] = (long)puVar6;
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  plVar5 = local_38;
  local_38 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *in_x8 = in_x0[0x24];
  lVar7 = in_x0[0x25];
  in_x8[1] = lVar7;
  if (lVar7 != 0) {
    plVar5 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

