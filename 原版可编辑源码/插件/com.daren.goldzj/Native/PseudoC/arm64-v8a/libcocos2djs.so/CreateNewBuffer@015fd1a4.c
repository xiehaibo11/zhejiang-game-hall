
/* v8::internal::wasm::StreamingDecoder::CreateNewBuffer(unsigned int, unsigned char, unsigned long,
   v8::internal::Vector<unsigned char const>) */

undefined8
v8::internal::wasm::StreamingDecoder::CreateNewBuffer
          (long param_1,undefined4 param_2,undefined1 param_3,long param_4,void *param_5,
          long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  __shared_weak_count *p_Var5;
  undefined1 *puVar6;
  __shared_weak_count *p_Var7;
  long lVar8;
  __shared_weak_count *local_70;
  __shared_weak_count *local_68;
  
  p_Var5 = operator_new(0x40);
  *(undefined8 *)(p_Var5 + 0x10) = 0;
  *(undefined ***)p_Var5 = &PTR____shared_ptr_emplace_01cca2e8;
  *(undefined8 *)(p_Var5 + 8) = 0;
  lVar8 = (param_6 << 0x20) + 0x100000000 >> 0x20;
  p_Var7 = p_Var5 + 0x18;
  *(undefined ***)p_Var7 = &PTR__SectionBuffer_01cca320;
  uVar1 = lVar8 + param_4;
  *(undefined4 *)(p_Var5 + 0x20) = param_2;
  if (uVar1 == 0) {
    puVar6 = (undefined1 *)0x0;
    *(undefined8 *)(p_Var5 + 0x28) = 0;
    *(undefined8 *)(p_Var5 + 0x30) = 0;
  }
  else {
    puVar6 = operator_new__(uVar1);
    *(undefined1 **)(p_Var5 + 0x28) = puVar6;
    *(ulong *)(p_Var5 + 0x30) = uVar1;
  }
  *(long *)(p_Var5 + 0x38) = lVar8;
  *puVar6 = param_3;
  memcpy(puVar6 + 1,param_5,(param_6 << 0x20) >> 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 < *(undefined8 **)(param_1 + 0x20)) {
    *puVar2 = p_Var7;
    puVar2[1] = p_Var5;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 0x10;
  }
  else {
    local_70 = p_Var7;
    local_68 = p_Var5;
    std::__ndk1::
    vector<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>>>
    ::
    __emplace_back_slow_path<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>>
              ((vector<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::StreamingDecoder::SectionBuffer>>>
                *)(param_1 + 0x10),(shared_ptr *)&local_70);
    p_Var5 = local_68;
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var7 = local_68 + 8;
      do {
        lVar8 = *(long *)p_Var7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var7,0x10);
        if (bVar4) {
          *(long *)p_Var7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var5);
      }
    }
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + -0x10);
}

