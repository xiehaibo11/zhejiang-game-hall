
/* v8::internal::wasm::NativeModule::AddDeserializedCode(unsigned int, v8::internal::Vector<unsigned
   char const>, unsigned int, unsigned int, unsigned long, unsigned long, unsigned long, unsigned
   long, unsigned long,
   v8::internal::OwnedVector<v8::internal::trap_handler::ProtectedInstructionData>,
   v8::internal::OwnedVector<unsigned char const>, v8::internal::OwnedVector<unsigned char const>,
   v8::internal::wasm::WasmCode::Kind, v8::internal::wasm::ExecutionTier) */

undefined8
v8::internal::wasm::NativeModule::AddDeserializedCode
          (NativeModule *param_1,undefined4 param_2,void *param_3,size_t param_4,undefined4 param_5,
          undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,undefined8 *param_12,undefined8 *param_13,
          undefined8 *param_14,undefined4 param_15,undefined1 param_16)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 (*local_68) [16];
  
  local_68 = (undefined1 (*) [16])0x0;
  auVar8 = WasmCodeAllocator::AllocateForCodeInRegion
                     (param_1,param_1,param_4,0,0xffffffffffffffff,&local_68);
  memcpy(auVar8._0_8_,param_3,param_4);
  pauVar1 = operator_new(0x90);
  uVar3 = param_12[1];
  uVar2 = *param_12;
  *param_12 = 0;
  uVar5 = param_13[1];
  uVar4 = *param_13;
  *param_13 = 0;
  uVar7 = param_14[1];
  uVar6 = *param_14;
  *param_14 = 0;
  *(undefined4 *)(pauVar1[3] + 8) = param_2;
  *(undefined4 *)(pauVar1[3] + 0xc) = param_15;
  *(undefined4 *)pauVar1[7] = 0xffffffff;
  *(undefined4 *)(pauVar1[4] + 8) = param_5;
  *(undefined4 *)(pauVar1[4] + 0xc) = param_6;
  *pauVar1 = auVar8;
  *(NativeModule **)pauVar1[3] = param_1;
  *(undefined8 *)pauVar1[4] = param_9;
  *(undefined8 *)pauVar1[5] = param_7;
  pauVar1[8][8] = param_16;
  *(undefined4 *)(pauVar1[8] + 0xc) = 1;
  *(undefined8 *)pauVar1[8] = uVar3;
  *(undefined8 *)(pauVar1[7] + 8) = uVar2;
  *(undefined8 *)(pauVar1[5] + 8) = param_8;
  *(undefined8 *)(pauVar1[1] + 8) = uVar5;
  *(undefined8 *)pauVar1[1] = uVar4;
  *(undefined8 *)(pauVar1[2] + 8) = uVar7;
  *(undefined8 *)pauVar1[2] = uVar6;
  local_70 = 0;
  *(undefined8 *)pauVar1[6] = param_10;
  *(undefined8 *)(pauVar1[6] + 8) = param_11;
  base::Mutex::Lock((Mutex *)(param_1 + 0x110));
  local_78 = 0;
  local_68 = pauVar1;
  uVar2 = PublishCodeLocked(param_1,&local_68);
  FUN_012017d0(&local_68);
  base::Mutex::Unlock((Mutex *)(param_1 + 0x110));
  FUN_012017d0(&local_78);
  FUN_012017d0(&local_70);
  return uVar2;
}

