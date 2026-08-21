
/* v8::internal::wasm::LiftoffAssembler::MergeFullStackWith(v8::internal::wasm::LiftoffAssembler::CacheState
   const&, v8::internal::wasm::LiftoffAssembler::CacheState const&) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::MergeFullStackWith
          (LiftoffAssembler *this,CacheState *param_1,CacheState *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_3a0 [592];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  LiftoffAssembler *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uVar2 = (*(long *)(param_2 + 8) - *(long *)param_2 >> 2) * -0x5555555555555555;
  local_50 = this;
  if ((int)uVar2 != 0) {
    FUN_017eb870(auStack_3a0,*(undefined8 *)param_1);
    lVar3 = (uVar2 & 0xffffffff) - 1;
    if (lVar3 != 0) {
      lVar4 = 0xc;
      do {
        FUN_017eb870(auStack_3a0,*(long *)param_1 + lVar4,*(long *)param_2 + lVar4);
        lVar3 = lVar3 + -1;
        lVar4 = lVar4 + 0xc;
      } while (lVar3 != 0);
    }
  }
  FUN_017ecb7c(auStack_3a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

