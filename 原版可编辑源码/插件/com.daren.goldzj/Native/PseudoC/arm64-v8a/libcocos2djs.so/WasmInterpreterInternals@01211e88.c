
/* v8::internal::wasm::WasmInterpreterInternals::WasmInterpreterInternals(v8::internal::Zone*,
   v8::internal::wasm::WasmModule const*, v8::internal::wasm::ModuleWireBytes const&,
   v8::internal::Handle<v8::internal::WasmInstanceObject>) */

void __thiscall
v8::internal::wasm::WasmInterpreterInternals::WasmInterpreterInternals
          (WasmInterpreterInternals *this,Zone *param_1,WasmModule *param_2,undefined8 *param_3,
          undefined8 param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  uchar *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  CodeMap *local_48;
  Zone *local_40;
  undefined8 local_38;
  
  puVar4 = (undefined1 *)*param_3;
  uVar5 = param_3[1];
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x18) = param_1;
  local_40 = param_1;
  local_38 = param_5;
  if (uVar5 == 0) {
    puVar3 = (uchar *)0x0;
  }
  else {
    if (uVar5 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar1 = *(undefined1 **)(param_1 + 0x10);
    uVar2 = uVar5 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < uVar2) {
      puVar1 = (undefined1 *)Zone::NewExpand(param_1,uVar2);
    }
    else {
      *(undefined1 **)(param_1 + 0x10) = puVar1 + uVar2;
    }
    *(undefined1 **)this = puVar1;
    *(undefined1 **)(this + 8) = puVar1;
    *(undefined1 **)(this + 0x10) = puVar1 + uVar5;
    do {
      uVar5 = uVar5 - 1;
      *puVar1 = *puVar4;
      puVar1 = (undefined1 *)(*(long *)(this + 8) + 1);
      *(undefined1 **)(this + 8) = puVar1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    puVar3 = *(uchar **)this;
  }
  CodeMap::CodeMap((CodeMap *)(this + 0x20),param_2,puVar3,local_40);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  local_48 = (CodeMap *)(this + 0x20);
  std::__ndk1::
  vector<v8::internal::wasm::ThreadImpl,std::__ndk1::allocator<v8::internal::wasm::ThreadImpl>>::
  __emplace_back_slow_path<v8::internal::Zone*&,v8::internal::wasm::CodeMap*,v8::internal::Handle<v8::internal::WasmInstanceObject>&>
            ((vector<v8::internal::wasm::ThreadImpl,std::__ndk1::allocator<v8::internal::wasm::ThreadImpl>>
              *)(this + 0x50),&local_40,&local_48,(Handle *)&local_38);
  return;
}

