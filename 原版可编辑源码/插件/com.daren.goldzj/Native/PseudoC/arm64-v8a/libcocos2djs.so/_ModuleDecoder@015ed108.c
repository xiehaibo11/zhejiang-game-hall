
/* v8::internal::wasm::ModuleDecoder::~ModuleDecoder() */

void __thiscall v8::internal::wasm::ModuleDecoder::~ModuleDecoder(ModuleDecoder *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015ed120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

