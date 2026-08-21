
/* v8::internal::wasm::AsyncStreamingProcessor::CommitCompilationUnits() */

void __thiscall
v8::internal::wasm::AsyncStreamingProcessor::CommitCompilationUnits(AsyncStreamingProcessor *this)

{
  __shared_weak_count *p_Var1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *this_00;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(this + 0x28);
  lVar2 = plVar6[2];
  if (lVar2 == plVar6[3]) {
    lVar7 = plVar6[5];
    lVar5 = plVar6[6];
    if ((lVar7 == lVar5) && (plVar6[8] == plVar6[9])) {
      return;
    }
  }
  else {
    lVar7 = plVar6[5];
    lVar5 = plVar6[6];
  }
  FUN_015e9c50(*(undefined8 *)(*plVar6 + 0x100),lVar2,plVar6[3] - lVar2 >> 3,lVar7,
               lVar5 - lVar7 >> 3,plVar6[8],plVar6[9] - plVar6[8] >> 4);
  lVar2 = plVar6[8];
  lVar7 = plVar6[9];
  plVar6[3] = plVar6[2];
  plVar6[6] = plVar6[5];
  while (lVar7 != lVar2) {
    this_00 = *(__shared_weak_count **)(lVar7 + -8);
    lVar7 = lVar7 + -0x10;
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar5 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
  }
  plVar6[9] = lVar2;
  return;
}

