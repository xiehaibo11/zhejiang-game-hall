
/* v8::internal::WasmModuleObject::GetFunctionName(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmModuleObject>, unsigned int) */

void v8::internal::WasmModuleObject::GetFunctionName(Factory *param_1,ulong *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *local_80;
  long lStack_78;
  undefined1 *local_70;
  long lStack_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = **(long **)(*(long *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) +
                               3) + 0x18);
  puVar5 = *(undefined8 **)(lVar4 + 0xe0);
  lStack_68 = puVar5[1];
  local_70 = (undefined1 *)*puVar5;
  uVar3 = wasm::WasmModule::LookupFunctionName
                    (*(WasmModule **)(lVar4 + 200),(ModuleWireBytes *)&local_70,param_3);
  if ((int)uVar3 != 0) {
    lStack_68 = (long)uVar3 >> 0x20;
    local_70 = (undefined1 *)
               (**(long **)(**(long **)(*(long *)((*param_2 & 0xffffffff00000000 |
                                                  (ulong)*(uint *)(*param_2 + 0xb)) + 3) + 0x18) +
                           0xe0) + (uVar3 & 0xffffffff));
    lVar4 = Factory::NewStringFromUtf8(param_1,&local_70,0);
    if (lVar4 != 0) goto LAB_0124f284;
  }
  local_70 = auStack_60;
  lStack_68 = 0x20;
  iVar2 = SNPrintF(local_70,0x20,"wasm-function[%u]",param_3);
  lStack_78 = (long)iVar2;
  local_80 = local_70;
  lVar4 = Factory::NewStringFromOneByte(param_1,&local_80,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
LAB_0124f284:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

