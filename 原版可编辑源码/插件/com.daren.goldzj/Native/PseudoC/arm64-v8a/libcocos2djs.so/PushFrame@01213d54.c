
/* v8::internal::wasm::ThreadImpl::PushFrame(v8::internal::wasm::InterpreterCode*) */

void __thiscall v8::internal::wasm::ThreadImpl::PushFrame(ThreadImpl *this,InterpreterCode *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  InterpreterCode *local_38;
  undefined8 uStack_30;
  long local_28;
  
  EnsureStackSpace(this,(*(long *)(param_1 + 0x18) +
                        (long)*(int *)(*(long *)(param_1 + 0x50) + 0x20)) -
                        *(long *)(param_1 + 0x10));
  *(long *)(this + 0x70) = *(long *)(this + 0x70) + 1;
  uStack_30 = 0;
  local_28 = (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f -
             *(long *)(**(long **)param_1 + 8);
  puVar1 = *(undefined8 **)(this + 0x40);
  local_38 = param_1;
  if (puVar1 < *(undefined8 **)(this + 0x48)) {
    puVar1[2] = local_28;
    puVar1[1] = 0;
    *puVar1 = param_1;
    *(long *)(this + 0x40) = *(long *)(this + 0x40) + 0x18;
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::ThreadImpl::Frame,v8::internal::ZoneAllocator<v8::internal::wasm::ThreadImpl::Frame>>
    ::__push_back_slow_path<v8::internal::wasm::ThreadImpl::Frame>
              ((vector<v8::internal::wasm::ThreadImpl::Frame,v8::internal::ZoneAllocator<v8::internal::wasm::ThreadImpl::Frame>>
                *)(this + 0x38),(Frame *)&local_38);
  }
  uVar2 = InitLocals(this,param_1);
  *(undefined8 *)(*(long *)(this + 0x40) + -0x10) = uVar2;
  return;
}

