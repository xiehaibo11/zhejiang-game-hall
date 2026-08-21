
/* v8::internal::wasm::ModuleDecoderImpl::DecodeSingleFunction(v8::internal::Zone*,
   v8::internal::wasm::ModuleWireBytes const&, v8::internal::wasm::WasmModule const*,
   std::__ndk1::unique_ptr<v8::internal::wasm::WasmFunction,
   std::__ndk1::default_delete<v8::internal::wasm::WasmFunction> >) */

void v8::internal::wasm::ModuleDecoderImpl::DecodeSingleFunction
               (long *param_1_00,ModuleDecoderImpl *param_1,Zone *param_2,ModuleWireBytes *param_3,
               WasmModule *param_5,long *param_6)

{
  undefined4 uVar1;
  ModuleDecoderImpl MVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 local_71;
  undefined7 uStack_70;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  uVar4 = consume_sig(param_1,param_2);
  *(undefined8 *)*param_6 = uVar4;
  *(ulong *)(*param_6 + 0x10) =
       CONCAT44(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10),
                *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)));
  if (((byte)param_1[0x30] & 1) == 0) {
    if ((byte)param_1[0x30] >> 1 == 0) {
LAB_015ee53c:
      VerifyFunctionBody(param_1,*(AccountingAllocator **)(param_2 + 0x20),0,param_3,param_5,
                         (WasmFunction *)*param_6);
    }
  }
  else if (*(long *)(param_1 + 0x38) == 0) goto LAB_015ee53c;
  MVar2 = param_1[0x78];
  if (((byte)MVar2 & 1) == 0) {
    if ((byte)MVar2 >> 1 == 0) {
LAB_015ee5cc:
      lVar6 = *param_6;
      *param_6 = 0;
      *(undefined4 *)(param_1_00 + 1) = 0;
      *(undefined1 *)(param_1_00 + 2) = 0;
      *(undefined8 *)((long)param_1_00 + 0x11) = 0;
      param_1_00[3] = 0;
      param_1_00[4] = 0;
      *param_1_00 = lVar6;
      goto LAB_015ee5e8;
    }
  }
  else if (*(long *)(param_1 + 0x80) == 0) goto LAB_015ee5cc;
  uVar4 = *(undefined8 *)(param_1 + 0x79);
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  uStack_70 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x80) >> 8);
  local_71 = (undefined1)((ulong)uVar4 >> 0x38);
  lVar6 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(ModuleDecoderImpl *)(param_1_00 + 2) = MVar2;
  *param_1_00 = 0;
  *(undefined4 *)(param_1_00 + 1) = uVar1;
  param_1_00[3] = CONCAT71(uStack_70,local_71);
  param_1_00[4] = lVar6;
  *(undefined8 *)((long)param_1_00 + 0x11) = uVar4;
LAB_015ee5e8:
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

