
undefined4
FUN_017e1d50(Assembler *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,uint param_6,
            undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  Label *pLVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_e8;
  undefined4 local_e0;
  ulong local_d8;
  uint local_d0;
  undefined1 local_c8;
  ulong local_c7;
  undefined8 local_bf;
  ulong local_b0;
  uint local_a8;
  undefined8 local_90;
  undefined1 local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  param_3 = param_3 & 0xffffffff;
  lVar7 = *(long *)(param_1 + 0x360);
  if ((*(ulong *)(lVar7 + 0x18) < param_3) ||
     (*(ulong *)(lVar7 + 0x18) - param_3 < (param_4 & 0xffffffff))) {
    if (*(char *)(lVar7 + 8) == '\0') {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10);
    }
    uVar10 = 1;
    pLVar5 = (Label *)FUN_017da05c(param_1,*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8),1,iVar6)
    ;
    v8::internal::Assembler::b(param_1,pLVar5);
    v8::internal::Assembler::CheckVeneerPool(param_1,false,false,0x400);
    pcVar9 = (char *)(*(long *)(param_2 + 0x4e0) + -0x1d0);
    if (*pcVar9 == '\0') {
      *pcVar9 = '\x01';
    }
  }
  else {
    if ((v8::internal::FLAG_wasm_no_bounds_checks == '\0') && (*(char *)(lVar7 + 8) == '\0')) {
      uVar3 = FUN_017da05c(param_1,*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8),1,0);
      uVar12 = (param_3 + (param_4 & 0xffffffff)) - 1;
      uVar8 = ~*(ulong *)(param_1 + 0x240);
      uVar1 = (uint)uVar8 & ((uint)param_7 ^ 0xffffffff);
      if ((uVar1 & 0x13f8ffff) == 0) {
        uVar4 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                          ((LiftoffAssembler *)param_1,0x13f8ffff,param_7);
        uVar8 = ~*(ulong *)(param_1 + 0x240);
      }
      else {
        uVar4 = ((ulong)uVar1 & 0x2a8aaaa) >> 1 | ((ulong)uVar1 & 0x11505555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = LZCOUNT((uVar4 >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar8 = (ulong)~((uint)(1L << (uVar4 & 0x3f)) | (uint)param_7) & 0x13f8ffff & uVar8;
      if (uVar8 == 0) {
        uVar8 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                          ((LiftoffAssembler *)param_1,0x13f8ffff);
      }
      else {
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = LZCOUNT((uVar8 >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar11 = uVar8 & 0xff | 0x4000000000;
      v8::internal::wasm::LiftoffAssembler::LoadFromInstance(param_1,uVar11,0,0x13,8);
      local_bf = 0;
      local_c8 = 2;
      local_c7 = uVar12;
      v8::internal::wasm::LiftoffAssembler::LoadConstant
                ((LiftoffAssembler *)param_1,uVar4 & 0xff,&local_c8,0x13);
      uVar8 = uVar4 & 0xff | 0x4000000000;
      if (*(ulong *)(*(long *)(param_1 + 0x360) + 0x10) <= uVar12) {
        v8::internal::wasm::LiftoffAssembler::emit_cond_jump(param_1,2,uVar3,2,uVar8,0,uVar11,0);
      }
      local_d0 = 0;
      local_e0 = 0;
      local_b0 = local_b0 & 0xffffffffffffff00;
      local_a8 = local_a8 & 0xffffff00;
      local_90 = 0;
      local_88 = 0x13;
      uStack_70 = 0xffffffff;
      local_78 = 0;
      local_e8 = uVar11;
      local_d8 = uVar8;
      local_80 = uVar8;
      v8::internal::TurboAssembler::AddSubMacro
                ((TurboAssembler *)param_1,&local_d8,&local_e8,&local_b0,0,0x40000000);
      local_d8 = param_5;
      local_d0 = param_6;
      local_b0 = param_5;
      local_a8 = param_6;
      v8::internal::Assembler::sbfm(param_1,(Register *)&local_b0,(Register *)&local_d8,0,0x1f);
      v8::internal::wasm::LiftoffAssembler::emit_cond_jump
                (param_1,2,uVar3,2,param_5,param_6,uVar8,0);
    }
    uVar10 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

