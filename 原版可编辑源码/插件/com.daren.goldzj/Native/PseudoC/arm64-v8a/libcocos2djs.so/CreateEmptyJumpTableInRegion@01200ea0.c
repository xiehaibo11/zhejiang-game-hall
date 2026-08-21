
/* v8::internal::wasm::NativeModule::CreateEmptyJumpTableInRegion(unsigned int,
   v8::base::AddressRegion, v8::internal::wasm::WasmCodeAllocator::OptionalLock const&) */

undefined8
v8::internal::wasm::NativeModule::CreateEmptyJumpTableInRegion
          (NativeModule *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 (*local_28) [16];
  
  param_2 = param_2 & 0xffffffff;
  auVar3 = WasmCodeAllocator::AllocateForCodeInRegion
                     (param_1,param_1,param_2,param_3,param_4,param_5);
  memset(auVar3._0_8_,0xcc,auVar3._8_8_);
  pauVar1 = operator_new(0x90);
  *(undefined8 *)(pauVar1[1] + 8) = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[2] + 8) = 0;
  *(undefined8 *)pauVar1[2] = 0;
  *(ulong *)pauVar1[4] = param_2;
  *(undefined8 *)(pauVar1[4] + 8) = 0;
  *(undefined8 *)pauVar1[5] = 0;
  *(ulong *)(pauVar1[5] + 8) = param_2;
  *(ulong *)pauVar1[6] = param_2;
  *(ulong *)(pauVar1[6] + 8) = param_2;
  *pauVar1 = auVar3;
  *(NativeModule **)pauVar1[3] = param_1;
  *(undefined8 *)(pauVar1[7] + 8) = 0;
  *(undefined8 *)pauVar1[8] = 0;
  pauVar1[8][8] = 0;
  *(undefined4 *)pauVar1[7] = 0xffffffff;
  *(undefined4 *)(pauVar1[8] + 0xc) = 1;
  *(undefined8 *)(pauVar1[3] + 8) = 0x4ffffffff;
  local_48 = 0;
  base::Mutex::Lock((Mutex *)(param_1 + 0x110));
  local_50 = 0;
  local_28 = pauVar1;
  uVar2 = PublishCodeLocked(param_1,&local_28);
  FUN_012017d0(&local_28);
  base::Mutex::Unlock((Mutex *)(param_1 + 0x110));
  FUN_012017d0(&local_50);
  FUN_012017d0(&local_48);
  return uVar2;
}

