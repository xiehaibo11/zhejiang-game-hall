
/* v8::internal::Isolate::Iterate(v8::internal::RootVisitor*, v8::internal::ThreadLocalTop*) */

void __thiscall
v8::internal::Isolate::Iterate(Isolate *this,RootVisitor *param_1,ThreadLocalTop *param_2)

{
  long lVar1;
  long lVar2;
  StackFrameIterator aSStack_618 [1416];
  long *local_90;
  WasmCodeRefScope aWStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0,param_2 + 0x20);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0,param_2 + 0x58);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0,param_2 + 0x10);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0,param_2 + 0x68);
  for (lVar2 = *(long *)param_2; lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0,lVar2 + 0x10);
    (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0,lVar2 + 0x18);
  }
  wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_78);
  StackFrameIterator::StackFrameIterator(aSStack_618,this,param_2);
  while (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90,param_1);
    StackFrameIterator::Advance(aSStack_618);
  }
  wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_78);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

