
void FUN_015e18d0(char *param_1,undefined8 param_2,undefined8 param_3,WasmFunction *param_4,
                 WasmModule *param_5,uint *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auVar7 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  uint local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined7 uStack_54;
  undefined1 local_4d;
  undefined7 uStack_4c;
  undefined8 uStack_45;
  undefined2 local_3d;
  undefined1 local_3b;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_88 = param_2;
  uStack_80 = param_3;
  auVar7 = v8::internal::wasm::ModuleWireBytes::GetNameOrNull
                     ((ModuleWireBytes *)&local_88,param_4,param_5);
  uVar4 = auVar7._8_4_;
  puVar5 = auVar7._0_8_;
  if (puVar5 == (undefined8 *)0x0) {
    if ((param_6[2] & 1) == 0) {
      lVar6 = (long)param_6 + 9;
    }
    else {
      lVar6 = *(long *)(param_6 + 6);
    }
    v8::internal::wasm::ErrorThrower::CompileError
              (param_1,&BYTE_01a54453,(ulong)*(uint *)(param_4 + 8),lVar6,(ulong)*param_6);
  }
  else {
    local_70 = uVar4;
    if (0x31 < (int)uVar4) {
      local_70 = 0x32;
    }
    if (0x32 < uVar4) {
      uStack_64 = puVar5[1];
      local_6c = *puVar5;
      puVar3 = puVar5 + 3;
      uStack_5c = puVar5[2];
      puVar1 = (undefined8 *)((long)puVar5 + 0x1f);
      uStack_45 = *(undefined8 *)((long)puVar5 + 0x27);
      puVar5 = &local_6c;
      local_3d = 0x2e2e;
      local_3b = 0x2e;
      uStack_4c = (undefined7)((ulong)*puVar1 >> 8);
      uStack_54 = (undefined7)*puVar3;
      local_4d = (undefined1)((ulong)*puVar3 >> 0x38);
    }
    if ((param_6[2] & 1) == 0) {
      lVar6 = (long)param_6 + 9;
    }
    else {
      lVar6 = *(long *)(param_6 + 6);
    }
    local_78 = puVar5;
    v8::internal::wasm::ErrorThrower::CompileError
              (param_1,"Compiling function #%d:\"%.*s\" failed: %s @+%u",
               (ulong)*(uint *)(param_4 + 8),(ulong)local_70,puVar5,lVar6,(ulong)*param_6);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

