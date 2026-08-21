
/* v8::internal::wasm::NativeModule::ReserveCodeTableForTesting(unsigned int) */

void __thiscall
v8::internal::wasm::NativeModule::ReserveCodeTableForTesting(NativeModule *this,uint param_1)

{
  Mutex *this_00;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  void *__s;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 local_80;
  long local_78 [5];
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)__emutls_get_address(&DAT_01d35888);
  local_78[0] = *plVar4;
  *plVar4 = (long)local_78;
  local_78[2] = 0;
  local_78[1] = 0;
  local_78[4] = 0;
  local_78[3] = 0;
  local_50 = 0x3f800000;
  __s = operator_new__((ulong)param_1 << 3);
  memset(__s,0,(ulong)param_1 << 3);
  if (*(uint *)(*(long *)(this + 200) + 0x44) != 0) {
    memcpy(__s,*(void **)(this + 0x150),(ulong)*(uint *)(*(long *)(this + 200) + 0x44) << 3);
  }
  pvVar5 = *(void **)(this + 0x150);
  *(void **)(this + 0x150) = __s;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  this_00 = (Mutex *)(this + 0x110);
  base::Mutex::Lock(this_00);
  puVar1 = *(undefined8 **)(this + 0x160);
  if (*(long *)(this + 0x168) - (long)puVar1 == 0x20) {
    uVar6 = *puVar1;
    uVar2 = puVar1[1];
    base::Mutex::Unlock(this_00);
    local_80 = 0;
    uVar6 = CreateEmptyJumpTableInRegion(this,param_1 << 2,uVar6,uVar2,&local_80);
    *(undefined8 *)(this + 0xf0) = uVar6;
    base::Mutex::Lock(this_00);
    *(undefined8 *)(*(long *)(this + 0x160) + 0x10) = *(undefined8 *)(this + 0xf0);
    base::Mutex::Unlock(this_00);
    WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)local_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","1 == code_space_data_.size()");
}

