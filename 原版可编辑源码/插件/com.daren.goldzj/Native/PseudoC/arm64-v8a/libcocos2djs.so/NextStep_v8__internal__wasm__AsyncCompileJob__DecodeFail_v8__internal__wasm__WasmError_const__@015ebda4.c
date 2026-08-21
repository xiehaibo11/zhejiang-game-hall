
/* void 
   v8::internal::wasm::AsyncCompileJob::NextStep<v8::internal::wasm::AsyncCompileJob::DecodeFail,
   v8::internal::wasm::WasmError const&>(v8::internal::wasm::WasmError const&) */

void __thiscall
v8::internal::wasm::AsyncCompileJob::
NextStep<v8::internal::wasm::AsyncCompileJob::DecodeFail,v8::internal::wasm::WasmError_const&>
          (AsyncCompileJob *this,WasmError *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *__dest;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 local_68;
  ulong uStack_60;
  void *local_58;
  
  puVar2 = operator_new(0x28);
  uVar1 = *(undefined4 *)param_1;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  if (((byte)param_1[8] & 1) == 0) {
    local_58 = *(void **)(param_1 + 0x18);
    uStack_60 = *(ulong *)(param_1 + 0x10);
    local_68 = *(ulong *)(param_1 + 8);
    goto LAB_015ebe70;
  }
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar5 = *(void **)(param_1 + 0x18);
  if (uVar4 < 0x17) {
    __dest = (void *)((long)&local_68 + 1);
    local_68 = (ulong)(byte)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_015ebe58;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    local_68 = uVar6 | 1;
    uStack_60 = uVar4;
    local_58 = __dest;
LAB_015ebe58:
    memcpy(__dest,pvVar5,uVar4);
  }
  *(undefined1 *)((long)__dest + uVar4) = 0;
LAB_015ebe70:
  pvVar5 = local_58;
  uVar4 = uStack_60;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  *puVar2 = &PTR__DecodeFail_01cc9bb8;
  puVar2[4] = pvVar5;
  puVar2[3] = uVar4;
  puVar2[2] = local_68;
  local_68 = 0;
  plVar3 = *(long **)(this + 0x68);
  *(undefined8 **)(this + 0x68) = puVar2;
  if ((plVar3 != (long *)0x0) && ((**(code **)(*plVar3 + 8))(), (local_68 & 1) != 0)) {
    operator_delete(local_58);
  }
  return;
}

