
void FUN_015e5e48(Isolate *param_1,Isolate *param_2)

{
  __shared_weak_count *p_Var1;
  byte bVar2;
  char cVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  Isolate *this;
  Isolate *pIVar6;
  long lVar7;
  Isolate *pIVar8;
  ulong uVar9;
  Isolate *pIVar10;
  ulong uVar11;
  Isolate *pIVar12;
  uint uVar13;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 uVar14;
  Isolate *pIVar15;
  __shared_weak_count *this_00;
  Isolate *pIVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  undefined1 auVar21 [16];
  Isolate *local_c8;
  undefined1 local_c0;
  Isolate *local_b8;
  Isolate *pIStack_b0;
  undefined8 local_a8;
  Isolate *pIStack_a0;
  Isolate *local_98;
  Isolate *pIStack_90;
  Isolate *local_88;
  Isolate *pIStack_80;
  undefined8 local_78;
  undefined2 local_6c [2];
  int local_68 [2];
  
  pIVar15 = *(Isolate **)(param_2 + 0x100);
  if (v8::internal::FLAG_wasm_lazy_compilation == '\0') {
    if (v8::internal::FLAG_asm_wasm_lazy_compilation == '\0') {
      pIVar16 = (Isolate *)0x0;
    }
    else {
      pIVar16 = (Isolate *)(ulong)((*(WasmModule **)(param_2 + 200))[0x178] != (WasmModule)0x0);
    }
  }
  else {
    pIVar16 = (Isolate *)0x1;
  }
  auVar4._8_8_ = pIVar16;
  auVar4._0_8_ = pIVar15;
  local_c8 = param_2;
  auVar21 = v8::internal::wasm::WasmCompilationUnit::GetDefaultExecutionTier
                      (*(WasmModule **)(param_2 + 200));
  local_c0 = auVar21[0];
  local_78 = 0;
  pIStack_a0 = (Isolate *)0x0;
  local_a8 = 0;
  pIStack_b0 = (Isolate *)0x0;
  local_b8 = (Isolate *)0x0;
  pIStack_80 = (Isolate *)0x0;
  local_88 = (Isolate *)0x0;
  pIStack_90 = (Isolate *)0x0;
  local_98 = (Isolate *)0x0;
  lVar19 = *(long *)(param_2 + 200);
  uVar13 = *(uint *)(lVar19 + 0x3c);
  uVar18 = (ulong)uVar13;
  iVar20 = *(int *)(lVar19 + 0x44);
  if (uVar13 < iVar20 + uVar13) {
    uVar14 = extraout_x11;
    if ((int)pIVar16 != 0) goto switchD_015e5f9c_caseD_1;
    while( true ) {
      pIVar6 = auVar21._8_8_;
      this = auVar21._0_8_;
      uVar13 = (uint)uVar14;
      if ((((byte)*(NativeModule *)(param_2 + 0xc0) >> 4 & 1) != 0) &&
         (lVar7 = *(long *)(lVar19 + 0x130), lVar7 != 0)) break;
switchD_015e5f9c_caseD_0:
      auVar21 = FUN_015e50e4(&local_c8,uVar18);
      uVar14 = extraout_x11_01;
switchD_015e5f9c_caseD_5:
      while( true ) {
        iVar20 = iVar20 + -1;
        uVar18 = (ulong)((int)uVar18 + 1);
        if (iVar20 == 0) goto switchD_015e5f9c_caseD_d1;
        if ((int)pIVar16 == 0) break;
switchD_015e5f9c_caseD_1:
        auVar21 = v8::internal::wasm::NativeModule::UseLazyStub
                            ((NativeModule *)param_2,(uint)uVar18);
        uVar14 = extraout_x11_00;
      }
    }
    iVar17 = (int)uVar18;
    uVar9 = (ulong)(uint)(iVar17 - *(int *)(lVar19 + 0x3c));
    uVar11 = (*(long *)(lVar19 + 0x138) - lVar7) * -0x5555555555555555;
    bVar5 = uVar11 - uVar9 == 0;
    if (uVar11 < uVar9 || bVar5) goto switchD_015e5f9c_caseD_0;
    bVar2 = *(byte *)(lVar7 + uVar9 * 3);
    pIVar8 = (Isolate *)(ulong)bVar2;
    pIVar12 = (Isolate *)(ulong)(byte)pIVar8[0x1a54374];
    pIVar10 = (Isolate *)((long)pIVar12 * 4 + 0x15e5f30);
    switch(bVar2) {
    case 0:
    case 2:
      goto switchD_015e5f9c_caseD_0;
    case 1:
    case 4:
    case 6:
    case 0x39:
    case 0x50:
    case 100:
    case 0x83:
    case 0x99:
    case 0xcb:
    case 0xd8:
    case 0xde:
      goto switchD_015e5f9c_caseD_1;
    case 3:
      pIVar10 = *(Isolate **)(local_c8 + 0x100);
      pIVar8 = local_c8;
      local_68[0] = iVar17;
    case 0x17:
    case 0x1f:
    case 0x54:
    case 0xe8:
    case 0xf1:
    case 0xf5:
    case 0xfd:
      auVar21[8] = pIVar10[0x18];
      auVar21._0_8_ = *(undefined8 *)(pIVar8 + 200);
      auVar21._9_7_ = 0;
switchD_015e5f9c_caseD_f2:
      this = (Isolate *)FUN_015e17e0(auVar21._0_8_,auVar21._8_8_);
      pIVar8 = local_98;
      pIVar10 = pIStack_90;
switchD_015e5f9c_caseD_da:
      local_6c[0] = SUB82(this,0);
      if (pIVar10 <= pIVar8) {
        std::__ndk1::
        vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
        ::__emplace_back_slow_path<int&,v8::internal::wasm::ExecutionTier&>
                  ((vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
                    *)&pIStack_a0,local_68,(ExecutionTier *)((ulong)local_6c | 1));
        goto switchD_015e5f9c_caseD_1;
      }
switchD_015e5f9c_caseD_15:
      pIVar10 = (Isolate *)((ulong)this >> 8 & 0xffffff);
switchD_015e5f9c_caseD_16:
      *(int *)pIVar8 = iVar17;
      pIVar8[4] = SUB81(pIVar10,0);
      pIVar8 = local_98 + 8;
switchD_015e5f9c_caseD_d9:
      local_98 = pIVar8;
switchD_015e5f9c_caseD_e:
      goto switchD_015e5f9c_caseD_1;
    case 5:
    case 7:
      goto switchD_015e5f9c_caseD_5;
    case 8:
    case 0x41:
    case 0x91:
    case 0xb2:
      goto switchD_015e5f9c_caseD_8;
    default:
      goto switchD_015e5f9c_caseD_9;
    case 10:
    case 0x1e:
    case 0x27:
    case 0x43:
    case 0x56:
    case 0x66:
    case 0x7a:
    case 0xa7:
    case 0xad:
    case 0xce:
    case 0xd5:
    case 0xff:
      goto switchD_015e5f9c_caseD_a;
    case 0xb:
    case 0x44:
    case 0x87:
    case 0xa8:
    case 0xc3:
    case 0xea:
      goto switchD_015e5f9c_caseD_b;
    case 0xc:
    case 0x12:
    case 0x1b:
    case 0x2a:
    case 0x31:
    case 0x45:
    case 0x4b:
    case 0x5f:
    case 0x6f:
    case 0x81:
    case 0x97:
    case 0x9f:
    case 0xa9:
    case 0xaf:
    case 0xbc:
    case 0xe4:
    case 0xf9:
      goto switchD_015e5f9c_caseD_c;
    case 0xd:
    case 0x35:
    case 0x46:
    case 0x8f:
    case 0xa1:
    case 0xaa:
    case 0xbe:
    case 0xed:
      goto switchD_015e5f9c_caseD_d;
    case 0xe:
    case 0x47:
      goto switchD_015e5f9c_caseD_e;
    case 0xf:
    case 0x48:
    case 0x8e:
    case 0xe9:
    case 0xf6:
      goto switchD_015e5f9c_caseD_f;
    case 0x10:
    case 0x26:
    case 0x2b:
    case 0x30:
    case 0x34:
    case 0x49:
    case 0xa0:
    case 0xbd:
    case 0xcd:
    case 0xd4:
    case 0xf7:
      goto switchD_015e5f9c_caseD_10;
    case 0x11:
    case 0x18:
    case 0x1c:
    case 0x32:
    case 0x36:
    case 0x4a:
    case 0x5e:
    case 0x6e:
    case 0x77:
    case 0x79:
    case 0x80:
    case 0x96:
    case 0x9e:
    case 0xa2:
    case 0xbb:
    case 0xbf:
    case 0xe3:
    case 0xe5:
    case 0xee:
    case 0xf8:
      goto switchD_015e5f9c_caseD_11;
    case 0x14:
    case 0x33:
    case 0x3a:
    case 0x3e:
    case 0x4d:
    case 200:
    case 0xca:
    case 0xf4:
    case 0xfb:
      goto switchD_015e5f9c_caseD_14;
    case 0x15:
    case 0x4e:
      goto switchD_015e5f9c_caseD_15;
    case 0x16:
    case 0x4f:
      goto switchD_015e5f9c_caseD_16;
    case 0x19:
    case 0x28:
    case 0x5c:
    case 0x6c:
    case 0x7e:
    case 0x94:
    case 0x9c:
    case 0xb9:
    case 0xcf:
    case 0xd6:
    case 0xe1:
      goto switchD_015e5f9c_caseD_19;
    case 0x1a:
    case 0x5d:
    case 0x6d:
    case 0x7f:
    case 0x95:
    case 0x9d:
    case 0xba:
    case 0xe2:
      goto switchD_015e5f9c_caseD_1a;
    case 0x20:
    case 0x76:
      goto switchD_015e5f9c_caseD_20;
    case 0x21:
      goto switchD_015e5f9c_caseD_21;
    case 0x22:
    case 0x55:
    case 0x65:
    case 0x8d:
      goto switchD_015e5f9c_caseD_22;
    case 0x23:
      goto switchD_015e5f9c_caseD_23;
    case 0x24:
    case 0x29:
    case 0x2e:
    case 0x40:
      goto switchD_015e5f9c_caseD_24;
    case 0x25:
    case 0x53:
    case 0xcc:
    case 0xd3:
      goto switchD_015e5f9c_caseD_25;
    case 0x2c:
      goto switchD_015e5f9c_caseD_2c;
    case 0x2d:
    case 0x57:
    case 0x67:
      goto switchD_015e5f9c_caseD_2d;
    case 0x2f:
    case 0xb0:
      goto switchD_015e5f9c_caseD_2f;
    case 0x37:
    case 0x3d:
    case 0x5b:
    case 0x62:
    case 0x6b:
    case 0x72:
    case 0x7d:
    case 0x93:
    case 0x9b:
    case 0xa3:
    case 0xae:
    case 0xb8:
    case 0xc0:
    case 0xe0:
    case 0xef:
      goto switchD_015e5f9c_caseD_37;
    case 0x38:
    case 0x51:
    case 0x58:
    case 0x68:
    case 0x78:
    case 0x8c:
    case 0xa4:
    case 0xb6:
    case 0xc1:
    case 0xe6:
    case 0xeb:
    case 0xf0:
      goto switchD_015e5f9c_caseD_38;
    case 0x3c:
    case 0x59:
    case 0x69:
    case 0xc4:
    case 0xc5:
    case 0xec:
      goto switchD_015e5f9c_caseD_3c;
    case 0x5a:
    case 0x6a:
    case 0x7c:
    case 0x92:
    case 0x9a:
    case 0xb7:
    case 0xdf:
      goto switchD_015e5f9c_caseD_5a;
    case 0x61:
    case 0x71:
      goto switchD_015e5f9c_caseD_61;
    case 99:
    case 0x73:
    case 0x86:
      goto switchD_015e5f9c_caseD_63;
    case 0x74:
    case 0x75:
    case 0x89:
    case 0x8a:
    case 0xb3:
    case 0xb4:
    case 0xd0:
    case 0xfc:
      goto switchD_015e5f9c_caseD_74;
    case 0x7b:
      goto switchD_015e5f9c_caseD_7b;
    case 0x84:
      goto switchD_015e5f9c_caseD_84;
    case 0x88:
    case 0xe7:
      goto switchD_015e5f9c_caseD_88;
    case 0x8b:
    case 0xb5:
      goto switchD_015e5f9c_caseD_8b;
    case 0xa5:
    case 0xab:
      goto switchD_015e5f9c_caseD_a5;
    case 0xc2:
      goto switchD_015e5f9c_caseD_c2;
    case 0xd1:
    case 0xd2:
    case 0xd7:
      break;
    case 0xd9:
      goto switchD_015e5f9c_caseD_d9;
    case 0xda:
    case 0xf3:
    case 0xfe:
      goto switchD_015e5f9c_caseD_da;
    case 0xdb:
      goto switchD_015e5f9c_caseD_db;
    case 0xdc:
      goto switchD_015e5f9c_caseD_dc;
    case 0xdd:
      goto switchD_015e5f9c_caseD_dd;
    case 0xf2:
      goto switchD_015e5f9c_caseD_f2;
    }
  }
switchD_015e5f9c_caseD_d1:
  pIVar6 = (Isolate *)&local_c8;
switchD_015e5f9c_caseD_db:
  FUN_015e47fc(param_2,pIVar6);
  uVar18 = *(ulong *)(param_1 + 0xc770);
  local_68[0] = v8::internal::wasm::WasmFeatures::FromIsolate(param_1);
switchD_015e5f9c_caseD_dc:
switchD_015e5f9c_caseD_74:
  FUN_015e493c(param_1,uVar18,param_2);
  auVar21 = auVar4;
switchD_015e5f9c_caseD_22:
  FUN_015e4b34(auVar21._0_8_,auVar21._8_8_);
  pIVar6 = local_b8;
  pIVar8 = pIStack_b0;
switchD_015e5f9c_caseD_5a:
  bVar5 = pIVar6 == pIVar8;
switchD_015e5f9c_caseD_84:
  if (bVar5) {
switchD_015e5f9c_caseD_23:
    pIVar12 = local_c8;
    if (pIStack_a0 == local_98) goto switchD_015e5f9c_caseD_61;
  }
  else {
switchD_015e5f9c_caseD_20:
    pIVar12 = local_c8;
  }
  goto switchD_015e5f9c_caseD_8b;
switchD_015e5f9c_caseD_dd:
  goto LAB_015e6160;
switchD_015e5f9c_caseD_61:
  bVar5 = local_88 == pIStack_80;
  param_2 = local_88;
switchD_015e5f9c_caseD_21:
  pIVar12 = local_c8;
  param_1 = param_2;
  if (!bVar5) {
switchD_015e5f9c_caseD_8b:
    this = *(Isolate **)(pIVar12 + 0x100);
switchD_015e5f9c_caseD_a5:
switchD_015e5f9c_caseD_c2:
    FUN_015e9c50(this);
    pIStack_b0 = local_b8;
    local_98 = pIStack_a0;
    param_2 = local_88;
    param_1 = local_88;
    pIVar16 = pIStack_80;
    if (pIStack_80 == local_88) {
switchD_015e5f9c_caseD_24:
    }
    else {
switchD_015e5f9c_caseD_63:
      do {
        pIVar15 = *(Isolate **)(pIVar16 + -8);
switchD_015e5f9c_caseD_3c:
        pIVar16 = pIVar16 + -0x10;
switchD_015e5f9c_caseD_14:
        if (pIVar15 != (Isolate *)0x0) {
switchD_015e5f9c_caseD_9:
          pIVar8 = pIVar15 + 8;
switchD_015e5f9c_caseD_f:
          do {
            pIVar10 = *(Isolate **)pIVar8;
switchD_015e5f9c_caseD_88:
            pIVar12 = pIVar10 + -1;
switchD_015e5f9c_caseD_7b:
            bVar2 = 1;
            bVar5 = (bool)ExclusiveMonitorPass(pIVar8,0x10);
            if (bVar5) {
              *(Isolate **)pIVar8 = pIVar12;
              bVar2 = ExclusiveMonitorsStatus();
            }
            uVar13 = (uint)bVar2;
switchD_015e5f9c_caseD_11:
          } while (uVar13 != 0);
          if (pIVar10 == (Isolate *)0x0) {
            pIVar8 = *(Isolate **)pIVar15;
switchD_015e5f9c_caseD_c:
            this = pIVar15;
            pIVar15 = this;
switchD_015e5f9c_caseD_19:
            pIVar8 = *(Isolate **)(pIVar8 + 0x10);
switchD_015e5f9c_caseD_38:
            (*(code *)pIVar8)(this);
switchD_015e5f9c_caseD_37:
            this = pIVar15;
switchD_015e5f9c_caseD_1a:
            std::__ndk1::__shared_weak_count::__release_weak((__shared_weak_count *)this);
          }
        }
        bVar5 = pIVar16 == param_2;
switchD_015e5f9c_caseD_10:
      } while (!bVar5);
switchD_015e5f9c_caseD_8:
      param_1 = local_88;
    }
switchD_015e5f9c_caseD_a:
    pIStack_80 = param_2;
switchD_015e5f9c_caseD_d:
  }
  if (param_1 == (Isolate *)0x0) goto LAB_015e6168;
switchD_015e5f9c_caseD_b:
  bVar5 = param_2 == param_1;
switchD_015e5f9c_caseD_2f:
  if (bVar5) {
switchD_015e5f9c_caseD_25:
    this = param_1;
    param_1 = this;
    goto switchD_015e5f9c_caseD_dd;
  }
  do {
    this_00 = *(__shared_weak_count **)(param_2 + -8);
    param_2 = param_2 + -0x10;
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar19 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
switchD_015e5f9c_caseD_2d:
    bVar5 = param_2 == param_1;
switchD_015e5f9c_caseD_2c:
    this = local_88;
  } while (!bVar5);
LAB_015e6160:
  pIStack_80 = param_1;
  operator_delete(this);
LAB_015e6168:
  if (pIStack_a0 != (Isolate *)0x0) {
    local_98 = pIStack_a0;
    operator_delete(pIStack_a0);
  }
  if (local_b8 != (Isolate *)0x0) {
    pIStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  return;
}

