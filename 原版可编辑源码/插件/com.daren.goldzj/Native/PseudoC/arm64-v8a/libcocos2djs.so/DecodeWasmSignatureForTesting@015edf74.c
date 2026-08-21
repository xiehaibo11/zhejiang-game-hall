
/* v8::internal::wasm::DecodeWasmSignatureForTesting(v8::internal::wasm::WasmFeatures const&,
   v8::internal::Zone*, unsigned char const*, unsigned char const*) */

undefined8
v8::internal::wasm::DecodeWasmSignatureForTesting
          (WasmFeatures *param_1,Zone *param_2,uchar *param_3,uchar *param_4)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *this;
  undefined8 uVar6;
  long lVar7;
  undefined **local_d0;
  uchar *local_c8;
  uchar *local_c0;
  uchar *local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  ulong local_a0;
  ulong local_98;
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
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
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
  local_c8 = param_3;
  local_b8 = param_4;
  if (param_4 < param_3) {
    local_c0 = param_3;
    Decoder::error((Decoder *)&local_d0,param_3,"end is less than start");
    local_b8 = local_c8;
  }
  local_c0 = param_3;
  uVar6 = ModuleDecoderImpl::consume_sig((ModuleDecoderImpl *)&local_d0,param_2);
  uVar2 = local_a0 >> 1 & 0x7f;
  if ((local_a0 & 1) != 0) {
    uVar2 = local_98;
  }
  if (uVar2 != 0) {
    uVar6 = 0;
  }
  local_d0 = &PTR__ModuleDecoderImpl_01cc9e28;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  this = local_78;
  if (local_78 != (__shared_weak_count *)0x0) {
    p_Var1 = local_78 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)local_78 + 0x10))(local_78);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  local_d0 = &PTR__Decoder_01cbc3a8;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

