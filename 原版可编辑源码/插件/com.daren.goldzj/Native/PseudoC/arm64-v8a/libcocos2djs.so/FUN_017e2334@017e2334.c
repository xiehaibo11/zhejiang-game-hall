
void FUN_017e2334(LiftoffAssembler *param_1,uint param_2,uint param_3,ulong param_4,
                 undefined8 param_5,undefined4 param_6,int param_7)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_120;
  undefined4 local_118;
  ulong local_110;
  undefined4 local_108;
  undefined1 local_100;
  uint local_ff;
  undefined8 local_fb;
  undefined4 local_f3;
  undefined1 local_e8;
  uint local_e7;
  undefined8 local_e3;
  undefined4 local_db;
  undefined1 local_d0;
  undefined4 local_cf;
  undefined8 local_cb;
  undefined4 local_c3;
  undefined1 local_b8 [8];
  undefined1 local_b0;
  undefined8 local_98;
  undefined1 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  v8::internal::wasm::LiftoffAssembler::SpillAllRegisters(param_1);
  uVar4 = 1L << (param_4 & 0x3f);
  uVar2 = ~(uint)uVar4 & (*(uint *)(param_1 + 0x240) ^ 0xffffffff);
  if ((uVar2 & 0x13f8ffff) == 0) {
    uVar5 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(param_1,0x13f8ffff,uVar4);
  }
  else {
    uVar5 = ((ulong)uVar2 & 0x2a8aaaa) >> 1 | ((ulong)uVar2 & 0x11505555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = LZCOUNT((uVar5 >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10) << 0x20);
  }
  uVar3 = uVar5 & 0xff;
  uVar4 = 1L << (uVar5 & 0x3f) | uVar4;
  local_cb = 0;
  local_c3 = 0;
  local_d0 = 1;
  local_cf = param_6;
  v8::internal::wasm::LiftoffAssembler::LoadConstant(param_1,uVar3,&local_d0,0x13);
  local_88 = 0x200000003f;
  if ((int)param_4 != 0x3f) {
    local_88 = param_4 & 0xffffffff | 0x2000000000;
  }
  local_120 = uVar5 & 0xff | 0x2000000000;
  local_108 = 0;
  local_118 = 0;
  local_b8[0] = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0x13;
  uStack_78 = 0xffffffff;
  local_80 = 0;
  local_110 = local_120;
  v8::internal::TurboAssembler::AddSubMacro
            ((TurboAssembler *)param_1,&local_110,&local_120,local_b8,0,0);
  uVar5 = (ulong)~(uint)uVar4 & 0x13f8ffff & (*(ulong *)(param_1 + 0x240) ^ 0xffffffffffffffff);
  if (uVar5 == 0) {
    uVar5 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(param_1,0x13f8ffff,uVar4);
  }
  else {
    uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = LZCOUNT((uVar5 >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10) << 0x20);
  }
  uVar2 = (uint)uVar5 & 0xff;
  local_98 = 0x10;
  uVar4 = 1L << (uVar5 & 0x3f) | uVar4;
  uVar5 = uVar5 & 0xff | 0x4000000000;
  local_108 = 0;
  local_b8[0] = 0;
  local_b0 = 0;
  local_90 = 0x13;
  local_88 = 0xffffffff;
  local_80 = CONCAT44(local_80._4_4_,2);
  local_110 = uVar5;
  v8::internal::TurboAssembler::AddSubMacro
            ((TurboAssembler *)param_1,&DAT_01a63d04,&DAT_01a63d04,local_b8,0,0x40000000);
  local_b8[0] = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0x13;
  local_88 = 0x400000003f;
  uStack_78 = 0xffffffff;
  local_80 = 0;
  v8::internal::TurboAssembler::Mov((TurboAssembler *)param_1,&local_110,local_b8,0);
  v8::internal::wasm::LiftoffAssembler::Store(param_1,uVar5,0,0xffffffff,2,0,uVar3,0,uVar4,0,0);
  local_e7 = param_2 & 1;
  local_e8 = 1;
  local_e3 = 0;
  local_db = 0;
  v8::internal::wasm::LiftoffAssembler::LoadConstant(param_1,uVar3,&local_e8,0x13);
  v8::internal::wasm::LiftoffAssembler::Store(param_1,uVar5,0,0xffffffff,2,4,uVar3,1,uVar4,0,0);
  local_ff = param_3 & 0xff;
  local_100 = 1;
  local_fb = 0;
  local_f3 = 0;
  v8::internal::wasm::LiftoffAssembler::LoadConstant(param_1,uVar3,&local_100,0x13);
  v8::internal::wasm::LiftoffAssembler::Store(param_1,uVar5,0,0xffffffff,2,5,uVar3,1,uVar4,0,0);
  uVar4 = *(ulong *)v8::internal::CallDescriptors::call_descriptor_data_._5224_8_;
  if (((*(int *)(v8::internal::CallDescriptors::call_descriptor_data_._5224_8_ + 8) != 0) ||
      ((uVar4 & 0xffffffff00000000) != 0x4000000000)) || (uVar2 != (uint)uVar4)) {
    local_90 = 0x13;
    local_110 = 0x400000003f;
    if ((uint)uVar4 != 0x3f) {
      local_110 = uVar4 & 0xffffffff | 0x4000000000;
    }
    local_88 = 0x400000003f;
    if (uVar2 != 0x3f) {
      local_88 = uVar5;
    }
    local_108 = 0;
    local_b8[0] = 0;
    local_b0 = 0;
    local_98 = 0;
    uStack_78 = 0xffffffff;
    local_80 = 0;
    v8::internal::TurboAssembler::Mov((TurboAssembler *)param_1,&local_110,local_b8,0);
  }
  v8::internal::SourcePositionTableBuilder::AddPosition
            ((SourcePositionTableBuilder *)(param_1 + 0x390),
             (long)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10)),
             (-(ulong)(param_7 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_7 + 1U) << 1) &
             0xffff80007fffffff,0);
  v8::internal::TurboAssembler::Call((TurboAssembler *)param_1,0x17,5);
  v8::internal::SafepointTableBuilder::DefineSafepoint(param_1 + 1000,param_1,0);
  local_b8[0] = 0;
  local_b0 = 0;
  local_88 = 0xffffffff;
  local_98 = 0x10;
  local_90 = 0x13;
  local_80 = CONCAT44(local_80._4_4_,2);
  v8::internal::TurboAssembler::AddSubMacro
            ((TurboAssembler *)param_1,&DAT_01a63d04,&DAT_01a63d04,local_b8,0,0);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

