
/* v8::internal::wasm::ModuleDecoderImpl::~ModuleDecoderImpl() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::~ModuleDecoderImpl(ModuleDecoderImpl *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this_00;
  
  *(undefined ***)this = &PTR__ModuleDecoderImpl_01cc9e28;
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  this_00 = *(__shared_weak_count **)(this + 0x58);
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
  *(undefined ***)this = &PTR__Decoder_01cbc3a8;
  if (((byte)this[0x30] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x40));
  return;
}

