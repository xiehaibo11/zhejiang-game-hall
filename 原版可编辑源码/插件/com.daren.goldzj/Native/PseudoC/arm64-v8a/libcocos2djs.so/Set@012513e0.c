
/* v8::internal::IndirectFunctionTableEntry::Set(int,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, int) */

void __thiscall
v8::internal::IndirectFunctionTableEntry::Set
          (IndirectFunctionTableEntry *this,undefined4 param_1,ulong *param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  NativeModule *this_00;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_3;
  uVar4 = uVar5 & 0xffffffff00000000;
  this_00 = (NativeModule *)
            **(undefined8 **)
              (*(long *)((uVar4 | *(uint *)((uVar4 | *(uint *)(uVar5 + 0x6f)) + 0xb)) + 3) + 0x18);
  uVar2 = *(uint *)(*(long *)(this_00 + 200) + 0x3c);
  if ((int)param_4 < (int)uVar2) {
    plVar1 = (long *)(uVar5 + 0x2f);
    uVar5 = uVar4 | *(uint *)((uVar4 | *(uint *)(uVar5 + 0x2b)) + (long)(int)(param_4 << 2) + 7);
    uVar3 = *(undefined8 *)(*plVar1 + (long)(int)param_4 * 8);
  }
  else if (param_4 < uVar2) {
    uVar3 = *(undefined8 *)(*(long *)(uVar5 + 0x2f) + (ulong)param_4 * 8);
  }
  else {
    uVar3 = wasm::NativeModule::GetCallTargetForFunction(this_00,param_4);
  }
  Set(this,param_1,uVar3,uVar5);
  return;
}

