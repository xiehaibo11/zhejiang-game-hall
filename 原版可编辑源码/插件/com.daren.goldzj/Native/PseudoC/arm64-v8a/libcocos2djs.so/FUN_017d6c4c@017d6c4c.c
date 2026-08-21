
void FUN_017d6c4c(Assembler *param_1,long param_2,int param_3)

{
  long lVar1;
  SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *pSVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  undefined *puVar9;
  code *pcVar10;
  ulong uVar11;
  undefined2 uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  byte local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 *local_c0;
  undefined2 local_b0;
  undefined1 local_a8 [8];
  ulong local_a0;
  undefined4 local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 local_70;
  undefined1 local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  switch(param_3) {
  case 0x45:
    if ((1 < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) &&
       (*(char *)(*(long *)(param_2 + 0x10) + 1) == '\r')) {
      *(undefined4 *)(param_1 + 0x350) = 0x45;
      goto LAB_017d8830;
    }
    uVar14 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar7 = 1L << (uVar14 & 0x3f);
    uVar11 = uVar14 & 0xff;
    if ((uVar7 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar7 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_d0 = uVar14 & 0xff | 0x2000000000;
    local_60 = 0x200000001f;
    puVar9 = &DAT_01a63d34;
    goto LAB_017d8780;
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
switchD_017d6c9c_caseD_46:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x50:
    uVar14 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar7 = 1L << (uVar14 & 0x3f);
    uVar11 = uVar14 & 0xff;
    if ((uVar7 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar7 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_d0 = uVar14 & 0xff | 0x4000000000;
    local_60 = 0x400000001f;
    puVar9 = &DAT_01a63d28;
LAB_017d8780:
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    local_90 = local_90 & 0xffffffffffffff00;
    uStack_88 = uStack_88 & 0xffffffffffffff00;
    local_70 = 0;
    local_68 = 0x13;
    uStack_50 = 0xffffffff;
    local_58 = 0;
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)param_1,puVar9,&local_d0,&local_90,1,0x40000000);
    local_90 = uVar11 | 0x2000000000;
    uStack_88 = uStack_88 & 0xffffffff00000000;
    v8::internal::Assembler::cset(param_1,&local_90,0);
    uVar7 = *(ulong *)(param_1 + 0x240) | uVar7;
LAB_017d87e0:
    *(ulong *)(param_1 + 0x240) = uVar7;
    *(int *)(param_1 + uVar11 * 4 + 0x1c8 + 0x80) =
         *(int *)(param_1 + uVar11 * 4 + 0x1c8 + 0x80) + 1;
LAB_017d87f0:
    puVar8 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar8 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar13 = 8;
    }
    else {
      iVar13 = *(int *)(puVar8 + -2) + 8;
    }
    if (puVar8 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar8 = (undefined2 *)
               v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                         ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                          (param_1 + 0x1c8));
    }
    uVar12 = 0x101;
    goto LAB_017d881c;
  case 0x67:
    uVar14 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar7 = 1L << (uVar14 & 0x3f);
    uVar11 = uVar14 & 0xff;
    if ((uVar7 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar7 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = uVar11 | 0x2000000000;
    local_d0 = uVar14 & 0xff | 0x2000000000;
    goto LAB_017d8044;
  case 0x68:
    uVar14 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar7 = 1L << (uVar14 & 0x3f);
    uVar11 = uVar14 & 0xff;
    if ((uVar7 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar7 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    uVar15 = uVar11 | 0x2000000000;
    local_d0 = uVar14 & 0xff | 0x2000000000;
    uStack_88._0_4_ = 0;
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    local_90 = uVar15;
    v8::internal::Assembler::rbit(param_1,(Register *)&local_90,(Register *)&local_d0);
    local_d0 = uVar15;
    local_90 = uVar15;
LAB_017d8044:
    uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    v8::internal::Assembler::clz(param_1,(Register *)&local_90,(Register *)&local_d0);
LAB_017d84fc:
    uVar7 = *(ulong *)(param_1 + 0x240) | uVar7;
    goto LAB_017d87e0;
  case 0x69:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar11 = uVar7 & 0xff;
    if ((*(ulong *)(param_1 + 0x240) >> (uVar7 & 0x3f) & 1) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar11 = uVar11 & 0xff;
    }
    local_a0 = CONCAT71(local_a0._1_7_,(char)uVar11);
    local_b0 = CONCAT11(local_b0._1_1_,(char)uVar7);
    uVar7 = v8::internal::wasm::LiftoffAssembler::emit_i32_popcnt
                      (param_1,uVar11 | 0x4000000000,0,uVar7 & 0xff | 0x4000000000,0);
    if ((uVar7 & 1) == 0) {
      local_80 = &local_d0;
      local_d0 = CONCAT62(local_d0._2_6_,0x101);
      uStack_88 = 1;
      local_90 = 1;
      uVar6 = v8::internal::ExternalReference::wasm_word32_popcnt();
      v8::internal::wasm::LiftoffAssembler::SpillAllRegisters((LiftoffAssembler *)param_1);
      uVar5 = local_d0._1_1_ - 1;
      if ((8 < uVar5) || ((0x17fU >> (ulong)(uVar5 & 0x1f) & 1) == 0))
      goto switchD_017d6c9c_caseD_46;
      v8::internal::wasm::LiftoffAssembler::CallC
                ((LiftoffAssembler *)param_1,&local_90,&local_b0,&local_a0,0,
                 1 << (ulong)(*(uint *)(&DAT_01a63e18 + (long)(char)uVar5 * 4) & 0x1f),uVar6);
    }
    pSVar2 = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | 1L << (uVar11 & 0x3f);
    *(int *)(pSVar2 + uVar11 * 4 + 0x80) = *(int *)(pSVar2 + uVar11 * 4 + 0x80) + 1;
    puVar8 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar8 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar13 = 8;
    }
    else {
      iVar13 = *(int *)(puVar8 + -2) + 8;
    }
    if (puVar8 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar8 = (undefined2 *)
               v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                         (pSVar2);
    }
    uVar12 = 0x101;
    goto LAB_017d85c4;
  case 0x79:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = uVar11 | 0x4000000000;
    local_d0 = uVar7 & 0xff | 0x4000000000;
    goto LAB_017d80ac;
  case 0x7a:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    uVar15 = uVar11 | 0x4000000000;
    local_d0 = uVar7 & 0xff | 0x4000000000;
    uStack_88._0_4_ = 0;
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    local_90 = uVar15;
    v8::internal::Assembler::rbit(param_1,(Register *)&local_90,(Register *)&local_d0);
    local_d0 = uVar15;
    local_90 = uVar15;
LAB_017d80ac:
    uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    v8::internal::Assembler::clz(param_1,(Register *)&local_90,(Register *)&local_d0);
    goto LAB_017d86f0;
  case 0x7b:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar11 = uVar7 & 0xff;
    if ((*(ulong *)(param_1 + 0x240) >> (uVar7 & 0x3f) & 1) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar11 = uVar11 & 0xff;
    }
    local_a8[0] = (undefined1)uVar7;
    uVar7 = v8::internal::wasm::LiftoffAssembler::emit_i64_popcnt
                      ((LiftoffAssembler *)param_1,uVar11,uVar7 & 0xff);
    if ((uVar7 & 1) == 0) {
      local_c0 = &local_b0;
      local_b0 = 0x201;
      uStack_c8 = 1;
      local_d0 = 1;
      local_d8[0] = (byte)uVar11;
      uVar6 = v8::internal::ExternalReference::wasm_word64_popcnt();
      v8::internal::wasm::LiftoffAssembler::SpillAllRegisters((LiftoffAssembler *)param_1);
      uVar5 = local_b0._1_1_ - 1;
      if ((8 < uVar5) || ((0x17fU >> (ulong)(uVar5 & 0x1f) & 1) == 0))
      goto switchD_017d6c9c_caseD_46;
      v8::internal::wasm::LiftoffAssembler::CallC
                ((LiftoffAssembler *)param_1,&local_d0,local_a8,local_d8,0,
                 1 << (ulong)(*(uint *)(&DAT_01a63e18 + (long)(char)uVar5 * 4) & 0x1f),uVar6);
      local_a0 = uVar11 | 0x2000000000;
      local_60 = (ulong)local_d8[0] | 0x2000000000;
      local_98 = 0;
      local_90 = local_90 & 0xffffffffffffff00;
      uStack_88 = uStack_88 & 0xffffffffffffff00;
      local_70 = 0;
      local_68 = 0x13;
      uStack_50 = 0xffffffff;
      local_58 = 0;
      v8::internal::TurboAssembler::Mov((TurboAssembler *)param_1,&local_a0,&local_90,0);
    }
    uVar14 = *(ulong *)(param_1 + 0x240) | 1L << (uVar11 & 0x3f);
    uVar7 = uVar11;
    goto LAB_017d81c8;
  case 0x8b:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x2000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x2000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::fabs(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    break;
  case 0x8c:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x2000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x2000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::fneg(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    break;
  case 0x8d:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x2000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x2000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::frintp(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    break;
  case 0x8e:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x2000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x2000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::frintm(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    break;
  case 0x8f:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x2000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x2000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::frintz(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    break;
  case 0x90:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x2000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x2000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::frintn(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    break;
  case 0x91:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x2000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x2000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::fsqrt(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    break;
  case 0x99:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x4000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x4000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::fabs(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    goto LAB_017d8620;
  case 0x9a:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x4000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x4000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::fneg(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    goto LAB_017d8620;
  case 0x9b:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x4000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x4000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::frintp(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    goto LAB_017d8620;
  case 0x9c:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x4000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x4000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::frintm(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    goto LAB_017d8620;
  case 0x9d:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x4000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x4000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::frintz(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    goto LAB_017d8620;
  case 0x9e:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x4000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x4000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::frintn(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    goto LAB_017d8620;
  case 0x9f:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x4000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x4000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::fsqrt(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    goto LAB_017d8620;
  case 0xa7:
    uVar14 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar7 = 1L << (uVar14 & 0x3f);
    uVar11 = uVar14 & 0xff;
    if ((uVar7 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar7 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    v8::internal::wasm::LiftoffAssembler::emit_type_conversion
              ((LiftoffAssembler *)param_1,0xa7,uVar11,uVar14 & 0xff,0);
    goto LAB_017d84fc;
  case 0xa8:
    iVar3 = *(int *)(param_2 + 0x10);
    iVar13 = *(int *)(param_2 + 8);
    uVar6 = 0xa8;
    goto LAB_017d75e0;
  case 0xa9:
    iVar3 = *(int *)(param_2 + 0x10);
    iVar13 = *(int *)(param_2 + 8);
    uVar6 = 0xa9;
LAB_017d75e0:
    FUN_017d88b0(param_1,uVar6,iVar3 - iVar13);
    goto LAB_017d8830;
  case 0xaa:
    iVar3 = *(int *)(param_2 + 0x10);
    iVar13 = *(int *)(param_2 + 8);
    uVar6 = 0xaa;
    goto LAB_017d7718;
  case 0xab:
    iVar3 = *(int *)(param_2 + 0x10);
    iVar13 = *(int *)(param_2 + 8);
    uVar6 = 0xab;
LAB_017d7718:
    FUN_017d89cc(param_1,uVar6,iVar3 - iVar13);
    goto LAB_017d8830;
  case 0xac:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
    }
    uVar11 = uVar11 & 0xff;
    local_90 = uVar11 | 0x4000000000;
    local_d0 = uVar7 & 0xff | 0x2000000000;
    uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    v8::internal::Assembler::sbfm(param_1,(Register *)&local_90,(Register *)&local_d0,0,0x1f);
    goto LAB_017d8578;
  case 0xad:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
    }
    uVar11 = uVar11 & 0xff;
    local_d0 = uVar11 | 0x2000000000;
    local_60 = uVar7 & 0xff | 0x2000000000;
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    local_90 = local_90 & 0xffffffffffffff00;
    uStack_88 = uStack_88 & 0xffffffffffffff00;
    local_70 = 0;
    local_68 = 0x13;
    uStack_50 = 0xffffffff;
    local_58 = 0;
    v8::internal::TurboAssembler::Mov((TurboAssembler *)param_1,&local_d0,&local_90,0);
LAB_017d8578:
    pSVar2 = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar14;
    *(int *)(pSVar2 + uVar11 * 4 + 0x80) = *(int *)(pSVar2 + uVar11 * 4 + 0x80) + 1;
    puVar8 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar8 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar13 = 8;
    }
    else {
      iVar13 = *(int *)(puVar8 + -2) + 8;
    }
    if (puVar8 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar8 = (undefined2 *)
               v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                         (pSVar2);
    }
    uVar12 = 0x201;
LAB_017d85c4:
    *(char *)(puVar8 + 2) = (char)uVar11;
    *(int *)(puVar8 + 4) = iVar13;
    goto LAB_017d8824;
  case 0xae:
    iVar3 = *(int *)(param_2 + 0x10);
    iVar13 = *(int *)(param_2 + 8);
    pcVar10 = v8::internal::ExternalReference::wasm_float32_to_int64;
    uVar6 = 0xae;
    goto LAB_017d7660;
  case 0xaf:
    iVar3 = *(int *)(param_2 + 0x10);
    iVar13 = *(int *)(param_2 + 8);
    pcVar10 = v8::internal::ExternalReference::wasm_float32_to_uint64;
    uVar6 = 0xaf;
LAB_017d7660:
    FUN_017d8ae8(param_1,uVar6,pcVar10,iVar3 - iVar13);
    goto LAB_017d8830;
  case 0xb0:
    iVar3 = *(int *)(param_2 + 0x10);
    iVar13 = *(int *)(param_2 + 8);
    pcVar10 = v8::internal::ExternalReference::wasm_float64_to_int64;
    uVar6 = 0xb0;
    goto LAB_017d7684;
  case 0xb1:
    iVar3 = *(int *)(param_2 + 0x10);
    iVar13 = *(int *)(param_2 + 8);
    pcVar10 = v8::internal::ExternalReference::wasm_float64_to_uint64;
    uVar6 = 0xb1;
LAB_017d7684:
    FUN_017d8dc0(param_1,uVar6,pcVar10,iVar3 - iVar13);
    goto LAB_017d8830;
  case 0xb2:
    uVar6 = 0xb2;
    goto LAB_017d7700;
  case 0xb3:
    uVar6 = 0xb3;
    goto LAB_017d7700;
  case 0xb4:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    if ((*(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
      uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
    }
    else {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
      uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
    }
    local_d0 = uVar7 & 0xff | 0x4000000000;
    local_90 = (ulong)(((uint)uVar11 & 0xff) - 0x1d) | 0x2000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    v8::internal::Assembler::scvtf(param_1,(VRegister *)&local_90,(Register *)&local_d0,0);
    goto LAB_017d78c4;
  case 0xb5:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    if ((*(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
      uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
    }
    else {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
      uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
    }
    local_d0 = uVar7 & 0xff | 0x4000000000;
    local_90 = (ulong)(((uint)uVar11 & 0xff) - 0x1d) | 0x2000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    v8::internal::Assembler::ucvtf(param_1,(VRegister *)&local_90,(Register *)&local_d0,0);
LAB_017d78c4:
    lVar1 = (uVar11 & 0xff) * 4;
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | 1L << (uVar11 & 0x3f);
    *(int *)(param_1 + lVar1 + 0x248) = *(int *)(param_1 + lVar1 + 0x248) + 1;
    goto LAB_017d82f4;
  case 0xb6:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x2000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x4000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::fcvt(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
    break;
  case 0xb7:
    uVar6 = 0xb7;
    goto LAB_017d772c;
  case 0xb8:
    uVar6 = 0xb8;
LAB_017d772c:
    FUN_017d9198(param_1,uVar6);
    goto LAB_017d8830;
  case 0xb9:
    pcVar10 = v8::internal::ExternalReference::wasm_int64_to_float64;
    uVar6 = 0xb9;
    goto LAB_017d76a8;
  case 0xba:
    pcVar10 = v8::internal::ExternalReference::wasm_uint64_to_float64;
    uVar6 = 0xba;
LAB_017d76a8:
    FUN_017d9298(param_1,uVar6,pcVar10);
    goto LAB_017d8830;
  case 0xbb:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000;
      if (uVar11 == 0x7ffefffe0000000) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x7ffefffe0000000,0);
      }
      else {
        uVar11 = uVar11 ^ 0x7ffefffe0000000;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar11 & 0xffff0000ffff0000) >> 0x10;
        uVar11 = LZCOUNT((uVar14 | (uVar11 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar14 << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = (ulong)((int)uVar11 - 0x1d) | 0x4000000000;
    local_d0 = (ulong)((int)(uVar7 & 0xff) - 0x1d) | 0x2000000000;
    uStack_88 = 0x100000001;
    uStack_c8 = 0x100000001;
    v8::internal::Assembler::fcvt(param_1,(VRegister *)&local_90,(VRegister *)&local_d0);
LAB_017d8620:
    pSVar2 = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar14;
    *(int *)(pSVar2 + uVar11 * 4 + 0x80) = *(int *)(pSVar2 + uVar11 * 4 + 0x80) + 1;
    puVar8 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar8 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar13 = 8;
    }
    else {
      iVar13 = *(int *)(puVar8 + -2) + 8;
    }
    if (puVar8 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar8 = (undefined2 *)
               v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                         (pSVar2);
    }
    uVar12 = 0x401;
    goto LAB_017d881c;
  case 0xbc:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    local_d0 = uVar11 & 0xff | 0x2000000000;
    local_90 = (ulong)((uVar5 & 0xff) - 0x1d) | 0x2000000000;
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    uStack_88 = 0x100000001;
    v8::internal::Assembler::fmov(param_1,(Register *)&local_d0,(VRegister *)&local_90);
    lVar1 = (uVar11 & 0xff) * 4;
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | 1L << (uVar11 & 0x3f);
    *(int *)(param_1 + lVar1 + 0x248) = *(int *)(param_1 + lVar1 + 0x248) + 1;
    goto LAB_017d87f0;
  case 0xbd:
    uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
      uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                         ((LiftoffAssembler *)param_1,0x13f8ffff,0);
    }
    else {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    local_d0 = uVar11 & 0xff | 0x4000000000;
    local_90 = (ulong)((uVar5 & 0xff) - 0x1d) | 0x4000000000;
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    uStack_88 = 0x100000001;
    v8::internal::Assembler::fmov(param_1,(Register *)&local_d0,(VRegister *)&local_90);
    uVar14 = *(ulong *)(param_1 + 0x240) | 1L << (uVar11 & 0x3f);
    uVar7 = uVar11 & 0xff;
LAB_017d81c8:
    *(ulong *)(param_1 + 0x240) = uVar14;
    *(int *)(param_1 + uVar7 * 4 + 0x1c8 + 0x80) = *(int *)(param_1 + uVar7 * 4 + 0x1c8 + 0x80) + 1;
    goto LAB_017d8710;
  case 0xbe:
    uVar6 = 0xbe;
LAB_017d7700:
    FUN_017d9098(param_1,uVar6);
    goto LAB_017d8830;
  case 0xbf:
    FUN_017d9298(param_1,0xbf,0);
    goto LAB_017d8830;
  case 0xc0:
    local_d0 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar7 = 1L << (local_d0 & 0x3f);
    local_d0 = local_d0 & 0xff;
    uVar11 = local_d0;
    if ((uVar7 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar7 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    iVar13 = 7;
    goto LAB_017d7e7c;
  case 0xc1:
    local_d0 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar7 = 1L << (local_d0 & 0x3f);
    local_d0 = local_d0 & 0xff;
    uVar11 = local_d0;
    if ((uVar7 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar7 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    iVar13 = 0xf;
LAB_017d7e7c:
    local_d0 = local_d0 | 0x4000000000;
    local_90 = uVar11 | 0x4000000000;
    uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    v8::internal::Assembler::sbfm(param_1,(Register *)&local_90,(Register *)&local_d0,0,iVar13);
    goto LAB_017d84fc;
  case 0xc2:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = uVar11 | 0x4000000000;
    local_d0 = uVar7 & 0xff | 0x4000000000;
    iVar13 = 7;
    goto LAB_017d86d4;
  case 0xc3:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = uVar11 | 0x4000000000;
    local_d0 = uVar7 & 0xff | 0x4000000000;
    iVar13 = 0xf;
    goto LAB_017d86d4;
  case 0xc4:
    uVar7 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
    uVar14 = 1L << (uVar7 & 0x3f);
    uVar11 = uVar7 & 0xff;
    if ((uVar14 & *(ulong *)(param_1 + 0x240)) != 0) {
      uVar11 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff;
      if (uVar11 == 0x13f8ffff) {
        uVar11 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                           ((LiftoffAssembler *)param_1,0x13f8ffff,0);
      }
      else {
        uVar11 = uVar11 ^ 0x13f8ffff;
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = LZCOUNT((uVar11 >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10) << 0x20);
      }
      uVar14 = 1L << (uVar11 & 0x3f);
      uVar11 = uVar11 & 0xff;
    }
    local_90 = uVar11 | 0x4000000000;
    local_d0 = uVar7 & 0xff | 0x4000000000;
    iVar13 = 0x1f;
LAB_017d86d4:
    uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    v8::internal::Assembler::sbfm(param_1,(Register *)&local_90,(Register *)&local_d0,0,iVar13);
LAB_017d86f0:
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar14;
    *(int *)(param_1 + uVar11 * 4 + 0x248) = *(int *)(param_1 + uVar11 * 4 + 0x248) + 1;
LAB_017d8710:
    puVar8 = *(undefined2 **)(param_1 + 0x1d0);
    if (puVar8 == *(undefined2 **)(param_1 + 0x1c8)) {
      iVar13 = 8;
    }
    else {
      iVar13 = *(int *)(puVar8 + -2) + 8;
    }
    if (puVar8 == *(undefined2 **)(param_1 + 0x1d8)) {
      puVar8 = (undefined2 *)
               v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                         ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                          (param_1 + 0x1c8));
    }
    uVar12 = 0x201;
    goto LAB_017d881c;
  default:
    if (7 < param_3 - 0xfc00U) goto switchD_017d6c9c_caseD_46;
    uVar6 = v8::internal::wasm::WasmOpcodes::OpcodeName(param_3);
    if (param_1[0x370] == (Assembler)0x0) {
      param_1[0x370] = (Assembler)0xc;
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n",uVar6);
      }
      v8::internal::wasm::Decoder::errorf
                ((uint)param_2,
                 (char *)(ulong)(uint)(*(int *)(param_2 + 0x20) +
                                      (*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8))),
                 "unsupported liftoff operation: %s",uVar6);
    }
    goto LAB_017d8830;
  }
  *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar14;
  *(int *)(param_1 + uVar11 * 4 + 0x248) = *(int *)(param_1 + uVar11 * 4 + 0x248) + 1;
LAB_017d82f4:
  puVar8 = *(undefined2 **)(param_1 + 0x1d0);
  if (puVar8 == *(undefined2 **)(param_1 + 0x1c8)) {
    iVar13 = 8;
  }
  else {
    iVar13 = *(int *)(puVar8 + -2) + 8;
  }
  if (puVar8 == *(undefined2 **)(param_1 + 0x1d8)) {
    puVar8 = (undefined2 *)
             v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                       ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)
                        (param_1 + 0x1c8));
  }
  uVar12 = 0x301;
LAB_017d881c:
  *(char *)(puVar8 + 2) = (char)uVar11;
  *(int *)(puVar8 + 4) = iVar13;
LAB_017d8824:
  *puVar8 = uVar12;
  *(undefined2 **)(param_1 + 0x1d0) = puVar8 + 6;
LAB_017d8830:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

