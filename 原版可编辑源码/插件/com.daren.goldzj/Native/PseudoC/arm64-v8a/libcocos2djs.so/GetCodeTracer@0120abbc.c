
/* v8::internal::wasm::WasmEngine::GetCodeTracer() */

undefined8 * __thiscall v8::internal::wasm::WasmEngine::GetCodeTracer(WasmEngine *this)

{
  internal *piVar1;
  undefined4 uVar2;
  Malloced *this_00;
  ulong extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *pvVar3;
  undefined8 *puVar4;
  
  base::Mutex::Lock((Mutex *)(this + 0x100));
  puVar4 = *(undefined8 **)(this + 0x158);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = Malloced::operator_new((Malloced *)0xa0,extraout_x1);
    piVar1 = (internal *)(puVar4 + 2);
    puVar4[0x12] = 0;
    *(undefined4 *)(puVar4 + 0x13) = 0;
    *puVar4 = piVar1;
    puVar4[1] = 0x80;
    if (FLAG_redirect_code_traces == '\0') {
      puVar4[0x12] = waitpid;
      pvVar3 = extraout_x1_00;
    }
    else {
      if (FLAG_redirect_code_traces_to == 0) {
        uVar2 = base::OS::GetCurrentProcessId();
        SNPrintF(piVar1,0x80,"code-%d.asm",uVar2);
      }
      else {
        StrNCpy(piVar1,0x80,FLAG_redirect_code_traces_to,0x80);
      }
      WriteChars((char *)*puVar4,"",0,false);
      pvVar3 = extraout_x1_01;
    }
    this_00 = *(Malloced **)(this + 0x158);
    *(undefined8 **)(this + 0x158) = puVar4;
    if (this_00 != (Malloced *)0x0) {
      Malloced::operator_delete(this_00,pvVar3);
      puVar4 = *(undefined8 **)(this + 0x158);
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  return puVar4;
}

