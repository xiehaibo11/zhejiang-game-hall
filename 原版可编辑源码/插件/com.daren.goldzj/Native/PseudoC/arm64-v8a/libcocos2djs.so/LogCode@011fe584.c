
/* v8::internal::wasm::WasmCode::LogCode(v8::internal::Isolate*) const */

void __thiscall v8::internal::wasm::WasmCode::LogCode(WasmCode *this,Isolate *param_1)

{
  Mutex *this_00;
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  WasmModuleSourceMap *pWVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined8 local_98;
  int local_8c;
  char *local_88;
  long lStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(uint *)(this + 0x38) != 0xffffffff) {
    puVar8 = *(undefined8 **)(*(long *)(this + 0x30) + 0xe0);
    uStack_68 = puVar8[1];
    local_70 = *puVar8;
    uVar3 = WasmModule::LookupFunctionName
                      (*(WasmModule **)(*(long *)(this + 0x30) + 200),(ModuleWireBytes *)&local_70,
                       *(uint *)(this + 0x38));
    auVar13 = ModuleWireBytes::GetNameOrNull((ModuleWireBytes *)&local_70,uVar3);
    if (*(long *)(*(long *)(this + 0x30) + 0xd8) == 0) {
      lVar10 = *(long *)(*(long *)(this + 0x30) + 200);
      bVar1 = *(byte *)(lVar10 + 0x188);
      if ((bVar1 & 1) == 0) {
        uVar5 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar5 = *(ulong *)(lVar10 + 400);
      }
      if ((*(code **)(param_1 + 0xb788) != (code *)0x0) && (uVar5 != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x95a0);
        lVar11 = *(long *)(param_1 + 0x95a8);
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
        if ((*(byte *)(lVar10 + 0x188) & 1) == 0) {
          lVar10 = lVar10 + 0x189;
        }
        else {
          lVar10 = *(long *)(lVar10 + 0x198);
        }
        uVar6 = (**(code **)(param_1 + 0xb788))(param_1,lVar10);
        lVar10 = *(long *)(this + 0x30);
        pWVar7 = operator_new(0x68);
        WasmModuleSourceMap::WasmModuleSourceMap(pWVar7,param_1,uVar6);
        local_78 = 0;
        plVar12 = (long *)(lVar10 + 0xd8);
        lVar10 = *plVar12;
        *plVar12 = (long)pWVar7;
        if (lVar10 == 0) {
          local_78 = 0;
        }
        else {
          FUN_01203e64(plVar12);
          lVar10 = local_78;
          local_78 = 0;
          if (lVar10 != 0) {
            FUN_01203e64(&local_78);
          }
        }
        *(undefined8 *)(param_1 + 0x95a0) = uVar3;
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
        if (*(long *)(param_1 + 0x95a8) != lVar11) {
          *(long *)(param_1 + 0x95a8) = lVar11;
          HandleScope::DeleteExtensions(param_1);
        }
      }
    }
    if (*(int *)(this + 0x3c) == 2) {
      pcVar4 = operator_new__(0x80);
      pcVar4[0x23] = '\0';
      pcVar4[0x24] = '\0';
      pcVar4[0x25] = '\0';
      pcVar4[0x26] = '\0';
      pcVar4[0x27] = '\0';
      pcVar4[0x28] = '\0';
      pcVar4[0x29] = '\0';
      pcVar4[0x2a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x20] = '\0';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x33] = '\0';
      pcVar4[0x34] = '\0';
      pcVar4[0x35] = '\0';
      pcVar4[0x36] = '\0';
      pcVar4[0x37] = '\0';
      pcVar4[0x38] = '\0';
      pcVar4[0x39] = '\0';
      pcVar4[0x3a] = '\0';
      pcVar4[0x2b] = '\0';
      pcVar4[0x2c] = '\0';
      pcVar4[0x2d] = '\0';
      pcVar4[0x2e] = '\0';
      pcVar4[0x2f] = '\0';
      pcVar4[0x30] = '\0';
      pcVar4[0x31] = '\0';
      pcVar4[0x32] = '\0';
      pcVar4[0x43] = '\0';
      pcVar4[0x44] = '\0';
      pcVar4[0x45] = '\0';
      pcVar4[0x46] = '\0';
      pcVar4[0x47] = '\0';
      pcVar4[0x48] = '\0';
      pcVar4[0x49] = '\0';
      pcVar4[0x4a] = '\0';
      pcVar4[0x3b] = '\0';
      pcVar4[0x3c] = '\0';
      pcVar4[0x3d] = '\0';
      pcVar4[0x3e] = '\0';
      pcVar4[0x3f] = '\0';
      pcVar4[0x40] = '\0';
      pcVar4[0x41] = '\0';
      pcVar4[0x42] = '\0';
      pcVar4[0x53] = '\0';
      pcVar4[0x54] = '\0';
      pcVar4[0x55] = '\0';
      pcVar4[0x56] = '\0';
      pcVar4[0x57] = '\0';
      pcVar4[0x58] = '\0';
      pcVar4[0x59] = '\0';
      pcVar4[0x5a] = '\0';
      pcVar4[0x4b] = '\0';
      pcVar4[0x4c] = '\0';
      pcVar4[0x4d] = '\0';
      pcVar4[0x4e] = '\0';
      pcVar4[0x4f] = '\0';
      pcVar4[0x50] = '\0';
      pcVar4[0x51] = '\0';
      pcVar4[0x52] = '\0';
      pcVar4[99] = '\0';
      pcVar4[100] = '\0';
      pcVar4[0x65] = '\0';
      pcVar4[0x66] = '\0';
      pcVar4[0x67] = '\0';
      pcVar4[0x68] = '\0';
      pcVar4[0x69] = '\0';
      pcVar4[0x6a] = '\0';
      pcVar4[0x5b] = '\0';
      pcVar4[0x5c] = '\0';
      pcVar4[0x5d] = '\0';
      pcVar4[0x5e] = '\0';
      pcVar4[0x5f] = '\0';
      pcVar4[0x60] = '\0';
      pcVar4[0x61] = '\0';
      pcVar4[0x62] = '\0';
      pcVar4[0x73] = '\0';
      pcVar4[0x74] = '\0';
      pcVar4[0x75] = '\0';
      pcVar4[0x76] = '\0';
      pcVar4[0x77] = '\0';
      pcVar4[0x78] = '\0';
      pcVar4[0x79] = '\0';
      pcVar4[0x7a] = '\0';
      pcVar4[0x6b] = '\0';
      pcVar4[0x6c] = '\0';
      pcVar4[0x6d] = '\0';
      pcVar4[0x6e] = '\0';
      pcVar4[0x6f] = '\0';
      pcVar4[0x70] = '\0';
      pcVar4[0x71] = '\0';
      pcVar4[0x72] = '\0';
      pcVar4[0x78] = '\0';
      pcVar4[0x79] = '\0';
      pcVar4[0x7a] = '\0';
      pcVar4[0x7b] = '\0';
      pcVar4[0x7c] = '\0';
      pcVar4[0x7d] = '\0';
      pcVar4[0x7e] = '\0';
      pcVar4[0x7f] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      pcVar4[0x18] = '\0';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      *(undefined8 *)(pcVar4 + 0xb) = 0;
      pcVar4[7] = '-';
      pcVar4[8] = 'j';
      pcVar4[9] = 's';
      pcVar4[10] = ':';
      pcVar4[0] = 'w';
      pcVar4[1] = 'a';
      pcVar4[2] = 's';
      pcVar4[3] = 'm';
      pcVar4[4] = '-';
      pcVar4[5] = 't';
      pcVar4[6] = 'o';
      pcVar4[7] = '-';
      iVar2 = PrintSignature((wasm *)(pcVar4 + 0xb),0x75,
                             *(undefined8 *)
                              (*(long *)(*(long *)(*(long *)(this + 0x30) + 200) + 0x88) +
                              (ulong)*(uint *)(this + 0x38) * 0x20));
      lVar10 = (long)(iVar2 + 0xb);
      pcVar9 = pcVar4;
    }
    else if (auVar13._8_8_ == 0) {
      pcVar4 = "<wasm-unnamed>";
      lVar10 = __strlen_chk("<wasm-unnamed>",0xf);
      pcVar9 = (char *)0x0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x95a0);
      lVar11 = *(long *)(param_1 + 0x95a8);
      lStack_80 = (long)auVar13._8_4_;
      *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
      local_88 = auVar13._0_8_;
      puVar8 = (undefined8 *)Factory::NewStringFromUtf8((Factory *)param_1,&local_88,0);
      if (puVar8 == (undefined8 *)0x0) {
        pcVar4 = "<name too long>";
        lVar10 = __strlen_chk("<name too long>",0x10);
        pcVar9 = (char *)0x0;
      }
      else {
        local_8c = 0;
        local_98 = *puVar8;
        String::ToCString(&local_88,&local_98,1,0,&local_8c);
        lVar10 = (long)local_8c;
        pcVar4 = local_88;
        pcVar9 = local_88;
      }
      *(undefined8 *)(param_1 + 0x95a0) = uVar3;
      *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
      if (*(long *)(param_1 + 0x95a8) != lVar11) {
        *(long *)(param_1 + 0x95a8) = lVar11;
        HandleScope::DeleteExtensions(param_1);
      }
    }
    lVar11 = *(long *)(param_1 + 0xb6d8);
    this_00 = (Mutex *)(lVar11 + 0x28);
    base::Mutex::Lock(this_00);
    for (plVar12 = *(long **)(lVar11 + 0x10); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      (**(code **)(*(long *)plVar12[2] + 0x30))((long *)plVar12[2],0xb,this,pcVar4,lVar10);
    }
    base::Mutex::Unlock(this_00);
    if (*(long *)(this + 0x28) != 0) {
      plVar12 = *(long **)(param_1 + 0x9558);
      uVar5 = (**(code **)(*plVar12 + 0x88))(plVar12);
      if ((uVar5 & 1) != 0) {
        Logger::CodeLinePosInfoRecordEvent
                  (plVar12,*(undefined8 *)this,*(undefined8 *)(this + 0x20),
                   *(undefined8 *)(this + 0x28));
      }
    }
    if (pcVar9 != (char *)0x0) {
      operator_delete__(pcVar9);
    }
  }
  return;
}

