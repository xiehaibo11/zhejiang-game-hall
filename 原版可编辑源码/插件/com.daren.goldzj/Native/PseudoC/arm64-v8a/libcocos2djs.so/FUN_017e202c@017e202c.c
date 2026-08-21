
undefined1  [16]
FUN_017e202c(LiftoffAssembler *param_1,ulong param_2,int param_3,int *param_4,ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  ulong local_120;
  undefined4 local_118;
  ulong local_110;
  undefined4 local_108;
  ulong local_100;
  uint local_f8;
  long local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [8];
  undefined1 local_b0;
  long local_98;
  undefined1 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar9 = param_2 >> 0x20;
  if ((v8::internal::FLAG_untrusted_code_mitigations == '\0') ||
     (*(char *)(*(long *)(param_1 + 0x360) + 8) != '\0')) {
    uVar8 = param_2 & 0xffffffff;
    goto LAB_017e22f4;
  }
  uVar8 = 1L << (param_2 & 0x3f);
  if ((*(ulong *)(param_1 + 0x240) & uVar8) == 0) {
    uVar8 = param_2 & 0xffffffff;
  }
  else {
    uVar3 = *param_5 & (uVar8 ^ 0xffffffffffffffff);
    *param_5 = uVar3;
    uVar9 = (ulong)~(uint)uVar3 & 0x13f8ffff & (*(ulong *)(param_1 + 0x240) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      uVar9 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(param_1,0x13f8ffff);
      uVar3 = *param_5;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = LZCOUNT((uVar9 >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    uVar8 = uVar9 & 0xff;
    *param_5 = 1L << (uVar9 & 0x3f) | uVar3;
    if (((param_3 == 0) && ((param_2 & 0xffffffff00000000) == 0x4000000000)) &&
       ((int)uVar8 == (int)param_2)) {
      param_3 = 0;
      uVar9 = 0x40;
      uVar8 = param_2 & 0xffffffff;
    }
    else {
      local_100 = uVar8 | 0x2000000000;
      local_88 = 0x200000003f;
      if ((int)param_2 != 0x3f) {
        local_88 = param_2 & 0xffffffff | 0x2000000000;
      }
      local_f8 = 0;
      local_b8[0] = 0;
      local_b0 = 0;
      local_98 = 0;
      local_90 = 0x13;
      uStack_78 = 0xffffffff;
      local_80 = 0;
      v8::internal::TurboAssembler::Mov((TurboAssembler *)param_1,&local_100,local_b8,0);
      param_3 = 0;
      uVar9 = 0x40;
    }
  }
  uVar3 = (ulong)~(uint)*param_5 & 0x13f8ffff & (*(ulong *)(param_1 + 0x240) ^ 0xffffffffffffffff);
  if (uVar3 == 0) {
    uVar3 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(param_1,0x13f8ffff);
  }
  else {
    uVar3 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
    uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar3 = LZCOUNT((uVar3 >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10) << 0x20);
  }
  local_e0 = (long)*param_4;
  uVar3 = uVar3 & 0xff | 0x4000000000;
  uVar7 = (ulong)((uint)uVar8 & 0xff) | 0x4000000000;
  local_108 = 0;
  local_118 = 0;
  local_100 = local_100 & 0xffffffffffffff00;
  local_f8 = local_f8 & 0xffffff00;
  local_d8 = 0x13;
  local_d0 = 0xffffffff;
  local_c8 = 2;
  local_120 = uVar7;
  local_110 = uVar7;
  if (*param_4 < 0) {
    lVar6 = -local_e0;
    uVar2 = v8::internal::Assembler::IsImmAddSub(lVar6);
    if ((uVar2 & 1) == 0) goto LAB_017e2268;
    local_b8[0] = 0;
    local_b0 = 0;
    local_88 = 0xffffffff;
    local_90 = 0x13;
    local_80 = CONCAT44(local_80._4_4_,2);
    puVar4 = (ulong *)local_b8;
    uVar5 = 0x40000000;
    local_98 = lVar6;
  }
  else {
LAB_017e2268:
    puVar4 = &local_100;
    uVar5 = 0;
  }
  v8::internal::TurboAssembler::AddSubMacro
            ((TurboAssembler *)param_1,&local_110,&local_120,puVar4,0,uVar5);
  v8::internal::wasm::LiftoffAssembler::LoadFromInstance(param_1,uVar3,0,0x1b,8);
  local_90 = 0x13;
  local_f8 = 0;
  local_108 = 0;
  local_b8[0] = 0;
  local_b0 = 0;
  local_98 = 0;
  uStack_78 = 0xffffffff;
  local_80 = 0;
  local_110 = uVar7;
  local_100 = uVar7;
  local_88 = uVar3;
  v8::internal::TurboAssembler::LogicalMacro
            ((TurboAssembler *)param_1,&local_100,&local_110,local_b8,0);
  *param_4 = 0;
LAB_017e22f4:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    auVar10._8_4_ = param_3;
    auVar10._0_8_ = uVar8 | uVar9 << 0x20;
    auVar10._12_4_ = 0;
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

