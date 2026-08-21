
/* v8::internal::wasm::LiftoffAssembler::MergeStackWith(v8::internal::wasm::LiftoffAssembler::CacheState
   const&, unsigned int) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::MergeStackWith
          (LiftoffAssembler *this,CacheState *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_3c8 [592];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  LiftoffAssembler *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(this + 0x1c8);
  lVar2 = *(long *)(this + 0x1d0);
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_a0 = 0;
  local_9c = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_100 = 0;
  local_108 = 0;
  uStack_110 = 0;
  local_118 = 0;
  uStack_120 = 0;
  local_128 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uVar6 = (int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 2) * -0x55555555 - param_2;
  uStack_160 = 0;
  local_168 = 0;
  uStack_170 = 0;
  local_178 = 0;
  local_78 = this;
  if ((uVar6 != 0) && (FUN_017eb870(auStack_3c8,*(long *)param_1,lVar1), uVar6 != 1)) {
    lVar7 = (ulong)uVar6 - 1;
    lVar8 = 0xc;
    do {
      FUN_017eb870(auStack_3c8,*(long *)param_1 + lVar8,*(long *)(this + 0x1c8) + lVar8);
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + 0xc;
    } while (lVar7 != 0);
  }
  if (param_2 != 0) {
    uVar5 = (ulong)param_2;
    uVar4 = (int)((ulong)(lVar2 - lVar1) >> 2) * -0x55555555 - param_2;
    do {
      FUN_017eb870(auStack_3c8,*(long *)param_1 + (ulong)uVar6 * 0xc,
                   *(long *)(this + 0x1c8) + (ulong)uVar4 * 0xc);
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 - 1;
      uVar4 = uVar4 + 1;
    } while (uVar5 != 0);
  }
  FUN_017ecb7c(auStack_3c8);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

