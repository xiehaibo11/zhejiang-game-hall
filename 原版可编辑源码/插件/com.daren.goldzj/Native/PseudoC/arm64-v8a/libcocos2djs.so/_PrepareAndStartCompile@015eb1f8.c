
/* v8::internal::wasm::AsyncCompileJob::PrepareAndStartCompile::~PrepareAndStartCompile() */

void __thiscall
v8::internal::wasm::AsyncCompileJob::PrepareAndStartCompile::~PrepareAndStartCompile
          (PrepareAndStartCompile *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this_00;
  
  this_00 = *(__shared_weak_count **)(this + 0x10);
  *(undefined ***)this = &PTR__PrepareAndStartCompile_01cc9be8;
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  operator_delete(this);
  return;
}

