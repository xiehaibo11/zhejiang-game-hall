
/* v8::internal::wasm::NativeModule::GetFunctionIndexFromJumpTableSlot(unsigned long) const */

int __thiscall
v8::internal::wasm::NativeModule::GetFunctionIndexFromJumpTableSlot
          (NativeModule *this,ulong param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long local_68 [5];
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)__emutls_get_address(&DAT_01d35888);
  local_68[0] = *plVar4;
  *plVar4 = (long)local_68;
  local_68[2] = 0;
  local_68[1] = 0;
  local_68[4] = 0;
  local_68[3] = 0;
  local_40 = 0x3f800000;
  piVar5 = (int *)Lookup(this,param_1);
  iVar1 = *piVar5;
  iVar2 = *(int *)(*(long *)(this + 200) + 0x3c);
  WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)local_68);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return iVar2 + ((uint)((int)param_1 - iVar1) >> 2);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

