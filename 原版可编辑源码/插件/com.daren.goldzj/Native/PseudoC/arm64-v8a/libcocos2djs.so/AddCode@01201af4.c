
/* v8::internal::wasm::NativeModule::AddCode(unsigned int, v8::internal::CodeDesc const&, unsigned
   int, unsigned int,
   v8::internal::OwnedVector<v8::internal::trap_handler::ProtectedInstructionData>,
   v8::internal::OwnedVector<unsigned char const>, v8::internal::wasm::WasmCode::Kind,
   v8::internal::wasm::ExecutionTier) */

void v8::internal::wasm::NativeModule::AddCode
               (undefined8 param_1,long param_2,undefined4 param_3,long param_4_00,
               undefined4 param_4,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
               undefined4 param_9,undefined1 param_10)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  auVar6 = WasmCodeAllocator::AllocateForCodeInRegion
                     (param_2,param_2,(long)*(int *)(param_4_00 + 0xc),0,0xffffffffffffffff,
                      &local_70);
  base::Mutex::Lock((Mutex *)(param_2 + 0x110));
  if (*(long **)(param_2 + 0x160) != *(long **)(param_2 + 0x168)) {
    plVar3 = *(long **)(param_2 + 0x160) + 2;
    do {
      if (((ulong)(auVar6._0_8_ - plVar3[-2]) < (ulong)plVar3[-1]) &&
         ((undefined8 *)plVar3[1] != (undefined8 *)0x0)) {
        if ((undefined8 *)*plVar3 == (undefined8 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)*plVar3;
        }
        uVar5 = *(undefined8 *)plVar3[1];
        base::Mutex::Unlock((Mutex *)(param_2 + 0x110));
        uStack_78 = param_7[1];
        local_80 = (void *)*param_7;
        *param_7 = 0;
        uStack_88 = param_8[1];
        local_90 = (void *)*param_8;
        *param_8 = 0;
        local_70 = uVar4;
        uStack_68 = uVar5;
        AddCodeWithCodeSpace
                  (param_1,param_2,param_3,param_4_00,param_4,param_6,&local_80,&local_90,param_9,
                   param_10,auVar6,&local_70);
        pvVar2 = local_90;
        local_90 = (void *)0x0;
        if (pvVar2 != (void *)0x0) {
          operator_delete__(pvVar2);
        }
        pvVar2 = local_80;
        local_80 = (void *)0x0;
        if (pvVar2 != (void *)0x0) {
          operator_delete__(pvVar2);
        }
        return;
      }
      plVar1 = plVar3 + 2;
      plVar3 = plVar3 + 4;
    } while (plVar1 != *(long **)(param_2 + 0x168));
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("code_addr is not part of a code space");
}

