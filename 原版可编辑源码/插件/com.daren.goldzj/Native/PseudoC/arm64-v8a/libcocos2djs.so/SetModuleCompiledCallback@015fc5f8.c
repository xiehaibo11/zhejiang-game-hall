
/* v8::internal::wasm::StreamingDecoder::SetModuleCompiledCallback(std::__ndk1::function<void
   (std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule> const&)>) */

void __thiscall
v8::internal::wasm::StreamingDecoder::SetModuleCompiledCallback
          (StreamingDecoder *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else if (param_2 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_015fdc7c(alStack_60,this + 0x40);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_015fc69c;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_015fc69c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

