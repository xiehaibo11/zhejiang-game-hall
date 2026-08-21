
/* v8::internal::wasm::LiftoffAssembler::set_num_locals(unsigned int) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::set_num_locals(LiftoffAssembler *this,uint param_1)

{
  void *pvVar1;
  
  *(uint *)(this + 0x1b8) = param_1;
  if (8 < param_1) {
    pvVar1 = malloc((ulong)param_1);
    *(void **)(this + 0x1c0) = pvVar1;
  }
  return;
}

