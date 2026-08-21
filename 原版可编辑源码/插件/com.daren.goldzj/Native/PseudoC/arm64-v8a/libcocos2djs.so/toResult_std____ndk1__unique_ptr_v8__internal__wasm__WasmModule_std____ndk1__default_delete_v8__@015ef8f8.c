
/* v8::internal::wasm::Result<std::__ndk1::unique_ptr<v8::internal::wasm::WasmModule,
   std::__ndk1::default_delete<v8::internal::wasm::WasmModule> > >
   v8::internal::wasm::Decoder::toResult<std::__ndk1::unique_ptr<v8::internal::wasm::WasmModule,
   std::__ndk1::default_delete<v8::internal::wasm::WasmModule> >,
   std::__ndk1::unique_ptr<v8::internal::wasm::WasmModule,
   std::__ndk1::default_delete<v8::internal::wasm::WasmModule> >
   >(std::__ndk1::unique_ptr<v8::internal::wasm::WasmModule,
   std::__ndk1::default_delete<v8::internal::wasm::WasmModule> >&&) */

void v8::internal::wasm::Decoder::
     toResult<std::__ndk1::unique_ptr<v8::internal::wasm::WasmModule,std::__ndk1::default_delete<v8::internal::wasm::WasmModule>>,std::__ndk1::unique_ptr<v8::internal::wasm::WasmModule,std::__ndk1::default_delete<v8::internal::wasm::WasmModule>>>
               (unique_ptr *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined7 *puVar5;
  undefined8 *in_x1;
  undefined8 *in_x8;
  undefined8 uVar6;
  ulong __n;
  void *__src;
  ulong uVar7;
  byte local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined7 *local_70;
  undefined7 local_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  bVar2 = param_1[0x30];
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_015ef970:
      uVar6 = *in_x1;
      *in_x1 = 0;
      *(undefined4 *)(in_x8 + 1) = 0;
      *(undefined1 *)(in_x8 + 2) = 0;
      *(undefined8 *)((long)in_x8 + 0x11) = 0;
      in_x8[3] = 0;
      in_x8[4] = 0;
      *in_x8 = uVar6;
      goto LAB_015efa2c;
    }
  }
  else if (*(long *)(param_1 + 0x38) == 0) goto LAB_015ef970;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  local_70 = (undefined7 *)0x0;
  if ((bVar2 & 1) == 0) {
    local_70 = *(undefined7 **)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = (undefined1)*(undefined8 *)(param_1 + 0x38);
    uStack_77 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x38) >> 8);
    local_80 = (byte)uVar6;
    uStack_7f = (undefined7)((ulong)uVar6 >> 8);
  }
  else {
    __n = *(ulong *)(param_1 + 0x38);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x40);
    if (__n < 0x17) {
      puVar5 = &uStack_7f;
      local_80 = (byte)((int)__n << 1);
      if (__n != 0) goto LAB_015ef9dc;
    }
    else {
      uVar7 = __n + 0x10 & 0xfffffffffffffff0;
      puVar5 = operator_new(uVar7);
      local_80 = (byte)uVar7 | 1;
      uStack_7f = (undefined7)(uVar7 >> 8);
      uStack_78 = (undefined1)__n;
      uStack_77 = (undefined7)(__n >> 8);
      local_70 = puVar5;
LAB_015ef9dc:
      memcpy(puVar5,__src,__n);
    }
    *(undefined1 *)((long)puVar5 + __n) = 0;
  }
  puVar5 = local_70;
  uVar6 = CONCAT71(uStack_77,uStack_78);
  *(undefined4 *)(in_x8 + 1) = uVar1;
  local_68 = uStack_7f;
  uStack_61 = uStack_78;
  uStack_60 = uStack_77;
  uVar4 = CONCAT17(uStack_78,uStack_7f);
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  local_70 = (undefined7 *)0x0;
  *in_x8 = 0;
  *(byte *)(in_x8 + 2) = local_80;
  in_x8[3] = uVar6;
  in_x8[4] = puVar5;
  *(undefined8 *)((long)in_x8 + 0x11) = uVar4;
LAB_015efa2c:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

