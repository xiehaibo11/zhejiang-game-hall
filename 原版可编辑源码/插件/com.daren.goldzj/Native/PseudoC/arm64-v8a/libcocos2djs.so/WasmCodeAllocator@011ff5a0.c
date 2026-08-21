
/* v8::internal::wasm::WasmCodeAllocator::WasmCodeAllocator(v8::internal::wasm::WasmCodeManager*,
   v8::internal::VirtualMemory, bool, std::__ndk1::shared_ptr<v8::internal::Counters>) */

void __thiscall
v8::internal::wasm::WasmCodeAllocator::WasmCodeAllocator
          (WasmCodeAllocator *this,undefined8 param_1,VirtualMemory *param_3,byte param_4,
          undefined8 *param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  *(undefined8 *)this = param_1;
  base::Mutex::Mutex((Mutex *)(this + 8));
  lVar2 = *(long *)(param_3 + 8);
  lVar4 = *(long *)(param_3 + 0x10);
  plVar5 = operator_new(0x20);
  plVar5[2] = lVar2;
  plVar5[3] = lVar4;
  *plVar5 = (long)(this + 0x30);
  plVar5[1] = (long)(this + 0x30);
  *(long **)(this + 0x30) = plVar5;
  *(long **)(this + 0x38) = plVar5;
  this[0xa9] = (WasmCodeAllocator)(param_4 & 1);
  *(undefined8 *)(this + 0x40) = 1;
  *(WasmCodeAllocator **)(this + 0x48) = this + 0x48;
  *(WasmCodeAllocator **)(this + 0x50) = this + 0x48;
  *(undefined8 *)(this + 0x58) = 0;
  *(WasmCodeAllocator **)(this + 0x60) = this + 0x60;
  *(WasmCodeAllocator **)(this + 0x68) = this + 0x60;
  *(undefined8 *)(this + 0xa1) = 0;
  *(undefined8 *)(this + 0x99) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xb0) = *param_5;
  uVar1 = 4;
  if ((param_4 & 1) == 0) {
    uVar1 = 1;
  }
  *(undefined8 *)(this + 0xb8) = param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  std::__ndk1::
  vector<v8::internal::VirtualMemory,std::__ndk1::allocator<v8::internal::VirtualMemory>>::reserve
            ((vector<v8::internal::VirtualMemory,std::__ndk1::allocator<v8::internal::VirtualMemory>>
              *)(this + 0x78),uVar1);
  puVar3 = *(undefined8 **)(this + 0x80);
  if (puVar3 < *(undefined8 **)(this + 0x88)) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = *(undefined8 *)param_3;
    uVar6 = *(undefined8 *)(param_3 + 8);
    puVar3[2] = *(undefined8 *)(param_3 + 0x10);
    puVar3[1] = uVar6;
    VirtualMemory::Reset(param_3);
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + 0x18;
  }
  else {
    std::__ndk1::
    vector<v8::internal::VirtualMemory,std::__ndk1::allocator<v8::internal::VirtualMemory>>::
    __emplace_back_slow_path<v8::internal::VirtualMemory>
              ((vector<v8::internal::VirtualMemory,std::__ndk1::allocator<v8::internal::VirtualMemory>>
                *)(this + 0x78),param_3);
  }
  Histogram::AddSample((int)*(undefined8 *)(this + 0xb0) + 0x828);
  return;
}

