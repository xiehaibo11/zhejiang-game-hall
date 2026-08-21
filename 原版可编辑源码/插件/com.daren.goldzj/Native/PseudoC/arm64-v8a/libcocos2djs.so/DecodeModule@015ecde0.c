
/* WARNING: Removing unreachable block (ram,0x015ed01c) */
/* v8::internal::wasm::ModuleDecoderImpl::DecodeModule(v8::internal::Counters*,
   v8::internal::AccountingAllocator*, bool) */

void v8::internal::wasm::ModuleDecoderImpl::DecodeModule
               (Counters *param_1,AccountingAllocator *param_2,bool param_3)

{
  Counters CVar1;
  undefined8 *puVar2;
  uint in_w3;
  long *in_x8;
  int iVar3;
  ulong uVar4;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  undefined ***local_b8;
  char local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined **local_90;
  long lStack_88;
  long local_80;
  long local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  ulong local_60;
  ulong local_58;
  void *local_50;
  
  StartDecoding((ModuleDecoderImpl *)param_1,(Counters *)param_2,
                (AccountingAllocator *)(ulong)param_3);
  DecodeModuleHeader(param_1,*(long *)(param_1 + 8),
                     *(long *)(param_1 + 0x18) - *(long *)(param_1 + 8),0);
  if (((byte)param_1[0x30] & 1) == 0) {
    if ((byte)param_1[0x30] >> 1 == 0) {
LAB_015ece70:
      local_78 = *(long *)(param_1 + 0x18);
      local_b8 = &local_90;
      local_a8 = *(long *)(param_1 + 8) + 8;
      local_90 = &PTR__Decoder_01cbc3a8;
      iVar3 = 8;
      local_60 = 0;
      local_58 = 0;
      local_50 = (void *)0x0;
      local_b0 = '\0';
      local_68 = 0;
      uStack_70 = 8;
      local_98 = local_a8;
      lStack_88 = local_a8;
      local_80 = local_a8;
      FUN_015efa60(&local_b8);
      CVar1 = param_1[0x30];
      if (((byte)CVar1 & 1) == 0) goto LAB_015ecee0;
      while (*(long *)(param_1 + 0x38) == 0) {
        while( true ) {
          if ((*(byte *)(local_b8 + 6) & 1) == 0) {
            if (*(byte *)(local_b8 + 6) >> 1 != 0) goto LAB_015ecf54;
          }
          else if (local_b8[7] != (undefined **)0x0) goto LAB_015ecf54;
          if (local_b8[3] <= local_b8[2]) goto LAB_015ecf54;
          uVar4 = local_98 - local_a0;
          iVar3 = iVar3 + ((int)local_a0 - (int)local_a8);
          if (local_b0 != '\0') {
            DecodeSection(param_1,local_b0,local_a0,uVar4 & 0xffffffff,iVar3,in_w3 & 1);
          }
          iVar3 = iVar3 + (int)uVar4;
          FUN_015ef850(&local_b8);
          CVar1 = param_1[0x30];
          if (((byte)CVar1 & 1) != 0) break;
LAB_015ecee0:
          if ((byte)CVar1 >> 1 != 0) goto LAB_015ecf54;
        }
      }
LAB_015ecf54:
      uVar4 = local_60 >> 1 & 0x7f;
      if ((local_60 & 1) != 0) {
        uVar4 = local_58;
      }
      if (uVar4 == 0) {
        FinishDecoding(SUB81(param_1,0));
        in_x8[1] = lStack_e8;
        *in_x8 = local_f0;
        *(undefined4 *)(in_x8 + 2) = (undefined4)local_e0;
        in_x8[5] = local_c8;
        in_x8[4] = local_d0;
        in_x8[3] = lStack_d8;
      }
      else {
        Decoder::
        toResult<std::__ndk1::unique_ptr<v8::internal::wasm::WasmModule,std::__ndk1::default_delete<v8::internal::wasm::WasmModule>>,std::__ndk1::unique_ptr<v8::internal::wasm::WasmModule,std::__ndk1::default_delete<v8::internal::wasm::WasmModule>>>
                  ((unique_ptr *)&local_90);
        *in_x8 = local_f0;
        if (local_f0 == 0) {
          in_x8[1] = 0;
        }
        else {
          puVar2 = operator_new(0x20);
          puVar2[2] = 0;
          puVar2[3] = local_f0;
          in_x8[1] = (long)puVar2;
          *puVar2 = &PTR____shared_weak_count_01cc9e50;
          puVar2[1] = 0;
        }
        *(undefined4 *)(in_x8 + 2) = (undefined4)lStack_e8;
        in_x8[5] = local_d0;
        in_x8[4] = lStack_d8;
        in_x8[3] = local_e0;
      }
      local_90 = &PTR__Decoder_01cbc3a8;
      if ((local_60 & 1) == 0) {
        return;
      }
      operator_delete(local_50);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x38) == 0) goto LAB_015ece70;
  FinishDecoding(SUB81(param_1,0));
  in_x8[1] = lStack_88;
  *in_x8 = (long)local_90;
  *(undefined4 *)(in_x8 + 2) = (undefined4)local_80;
  in_x8[5] = CONCAT44(uStack_64,local_68);
  in_x8[4] = CONCAT44(uStack_6c,uStack_70);
  in_x8[3] = local_78;
  return;
}

