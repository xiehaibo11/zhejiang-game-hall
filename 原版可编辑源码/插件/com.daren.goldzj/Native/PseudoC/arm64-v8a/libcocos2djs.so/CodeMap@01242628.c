
/* WARNING: Removing unreachable block (ram,0x012427c8) */
/* WARNING: Removing unreachable block (ram,0x012427d0) */
/* WARNING: Removing unreachable block (ram,0x01242874) */
/* WARNING: Removing unreachable block (ram,0x012427e8) */
/* WARNING: Removing unreachable block (ram,0x012427f0) */
/* WARNING: Removing unreachable block (ram,0x01242808) */
/* WARNING: Removing unreachable block (ram,0x01242708) */
/* WARNING: Removing unreachable block (ram,0x012428a0) */
/* WARNING: Removing unreachable block (ram,0x01242710) */
/* WARNING: Removing unreachable block (ram,0x01242868) */
/* WARNING: Removing unreachable block (ram,0x01242728) */
/* WARNING: Removing unreachable block (ram,0x01242730) */
/* WARNING: Removing unreachable block (ram,0x01242748) */
/* WARNING: Removing unreachable block (ram,0x01242764) */
/* v8::internal::wasm::CodeMap::CodeMap(v8::internal::wasm::WasmModule const*, unsigned char const*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::wasm::CodeMap::CodeMap(CodeMap *this,WasmModule *param_1,uchar *param_2,Zone *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  uchar *local_88;
  uchar *puStack_80;
  uchar *puStack_78;
  uchar *local_70;
  undefined8 local_68;
  
  *(Zone **)this = param_3;
  *(WasmModule **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x28) = param_3;
  if (param_1 != (WasmModule *)0x0) {
    std::__ndk1::
    vector<v8::internal::wasm::InterpreterCode,v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>>
    ::reserve((vector<v8::internal::wasm::InterpreterCode,v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>>
               *)(this + 0x10),*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 5);
    lVar3 = *(long *)(param_1 + 0x88);
    lVar1 = *(long *)(param_1 + 0x90);
    if (lVar3 != lVar1) {
      if (*(char *)(lVar3 + 0x18) != '\0') goto LAB_012426b4;
LAB_01242768:
      local_90 = *(long *)this;
      puStack_78 = param_2 + *(uint *)(lVar3 + 0x10);
      local_70 = param_2 + (*(int *)(lVar3 + 0x14) + *(uint *)(lVar3 + 0x10));
      plVar4 = *(long **)(this + 0x18);
      if (plVar4 == *(long **)(this + 0x20)) goto LAB_0124284c;
      *plVar4 = lVar3;
      *(undefined4 *)(plVar4 + 1) = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = local_90;
      do {
        plVar4[10] = 0;
        plVar4[7] = (long)local_70;
        plVar4[6] = (long)puStack_78;
        plVar4[9] = (long)local_70;
        plVar4[8] = (long)puStack_78;
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x58;
        lVar2 = lVar3;
        while( true ) {
          lVar3 = lVar2 + 0x20;
          if (lVar3 == lVar1) {
            return;
          }
          if (*(char *)(lVar2 + 0x38) == '\0') goto LAB_01242768;
LAB_012426b4:
          local_90 = *(long *)this;
          local_70 = (uchar *)0x0;
          puStack_78 = (uchar *)0x0;
          plVar4 = *(long **)(this + 0x18);
          if (plVar4 != *(long **)(this + 0x20)) break;
LAB_0124284c:
          local_68 = 0;
          local_98 = 0;
          local_a0 = 0;
          local_a8 = 0;
          local_b0 = 0;
          local_b8 = lVar3;
          local_88 = puStack_78;
          puStack_80 = local_70;
          std::__ndk1::
          vector<v8::internal::wasm::InterpreterCode,v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>>
          ::__push_back_slow_path<v8::internal::wasm::InterpreterCode_const&>
                    ((vector<v8::internal::wasm::InterpreterCode,v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>>
                      *)(this + 0x10),(InterpreterCode *)&local_b8);
          lVar2 = lVar3;
        }
        *plVar4 = lVar3;
        *(undefined4 *)(plVar4 + 1) = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = local_90;
      } while( true );
    }
  }
  return;
}

