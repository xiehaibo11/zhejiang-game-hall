
/* v8::internal::wasm::DecodeWasmInitExprForTesting(v8::internal::wasm::WasmFeatures const&,
   unsigned char const*, unsigned char const*) */

undefined1  [16]
v8::internal::wasm::DecodeWasmInitExprForTesting
          (WasmFeatures *param_1,uchar *param_2,uchar *param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  long lVar5;
  undefined1 auVar6 [16];
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined **local_d0;
  uchar *local_c8;
  uchar *local_c0;
  uchar *local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined4 local_88;
  undefined8 local_80;
  __shared_weak_count *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  ulong local_58;
  undefined8 local_50;
  void *local_48;
  undefined1 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_e8 = &PTR__AccountingAllocator_01cbced0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_88 = *(undefined4 *)param_1;
  local_68 = 1;
  local_78 = (__shared_weak_count *)0x0;
  uStack_70 = 0;
  local_80 = 0;
  local_40 = FLAG_assume_asmjs_origin;
  local_64 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_58 = 0;
  local_d0 = &PTR__ModuleDecoderImpl_01cc9e28;
  local_c8 = param_2;
  local_b8 = param_3;
  if (param_3 < param_2) {
    local_c0 = param_2;
    Decoder::error((Decoder *)&local_d0,param_2,"end is less than start");
    local_b8 = local_c8;
  }
  local_c0 = param_2;
  auVar6 = ModuleDecoderImpl::consume_init_expr((ModuleDecoderImpl *)&local_d0,0,0);
  local_d0 = &PTR__ModuleDecoderImpl_01cc9e28;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  this = local_78;
  if (local_78 != (__shared_weak_count *)0x0) {
    p_Var1 = local_78 + 8;
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
      (**(code **)(*(long *)local_78 + 0x10))(local_78);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  local_d0 = &PTR__Decoder_01cbc3a8;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  AccountingAllocator::~AccountingAllocator((AccountingAllocator *)&local_e8);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

