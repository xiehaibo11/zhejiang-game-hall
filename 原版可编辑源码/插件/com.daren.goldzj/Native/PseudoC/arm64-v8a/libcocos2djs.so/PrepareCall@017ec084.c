
/* v8::internal::wasm::LiftoffAssembler::PrepareCall(v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::compiler::CallDescriptor*, v8::internal::Register*, v8::internal::Register*) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::PrepareCall
          (LiftoffAssembler *this,Signature *param_1,CallDescriptor *param_2,Register *param_3,
          Register *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Register RVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  LiftoffAssembler *pLVar12;
  CallDescriptor *pCVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4bc;
  undefined4 local_4b4;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  ulong local_498;
  undefined4 local_490;
  ushort auStack_488 [296];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  ulong local_148;
  undefined8 uStack_140;
  LiftoffAssembler *local_138;
  LiftoffAssembler **local_130;
  LiftoffAssembler **local_128;
  LiftoffAssembler **local_120;
  LiftoffAssembler *local_118 [20];
  LiftoffAssembler *local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  lVar9 = *(long *)(this + 0x1c8);
  uVar21 = *(ulong *)(param_1 + 8);
  iVar20 = (int)uVar21;
  uVar6 = (int)((ulong)(*(long *)(this + 0x1d0) - lVar9) >> 2) * -0x55555555 - iVar20;
  if (uVar6 != 0) {
    lVar14 = 0;
    while( true ) {
      if (*(char *)(lVar9 + lVar14) == '\x01') {
        puVar1 = (undefined1 *)(lVar9 + lVar14);
        Spill(this,*(undefined4 *)(puVar1 + 8),puVar1[4],puVar1[1]);
        *puVar1 = 0;
      }
      if ((ulong)uVar6 * 0xc + -0xc == lVar14) break;
      lVar9 = *(long *)(this + 0x1c8);
      lVar14 = lVar14 + 0xc;
    }
  }
  uStack_170 = 0;
  local_178 = 0;
  uStack_180 = 0;
  local_188 = 0;
  uStack_190 = 0;
  local_198 = 0;
  uStack_1a0 = 0;
  local_1a8 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  uStack_1c0 = 0;
  local_1c8 = 0;
  uStack_1d0 = 0;
  local_1d8 = 0;
  uStack_1e0 = 0;
  local_1e8 = 0;
  uStack_1f0 = 0;
  local_1f8 = 0;
  uStack_200 = 0;
  local_208 = 0;
  uStack_210 = 0;
  local_218 = 0;
  uStack_220 = 0;
  local_228 = 0;
  local_120 = &local_78;
  uStack_230 = 0;
  local_238 = 0;
  uStack_154 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uStack_160 = 0;
  local_15c = 0;
  uStack_168 = 0;
  local_130 = local_118;
  local_128 = local_118;
  local_78 = this;
  local_138 = this;
  plVar10 = *(long **)(param_2 + 0x10);
  uVar6 = (int)*(undefined8 *)(plVar10[2] + *plVar10 * 8) >> 1;
  uVar16 = 1L << ((ulong)uVar6 & 0x3f);
  if ((param_4 != (Register *)0x0) &&
     (((*(uint *)param_4 != uVar6 || (*(int *)(param_4 + 4) != 0x40)) ||
      (*(int *)(param_4 + 8) != 0)))) {
    RVar5 = *param_4;
    local_148 = uVar16;
    lVar9 = (ulong)(byte)RVar5 * 4;
    *(int *)((long)&local_238 + lVar9) = *(int *)((long)&local_238 + lVar9) + 1;
    auStack_488[uVar6 & 0xff] = (byte)RVar5 | 0x200;
  }
  if (iVar20 != 0) {
    lVar9 = *(long *)(this + 0x1c8);
    uVar19 = *(uint *)(plVar10 + 1);
    uVar15 = (ulong)(iVar20 - 1);
    uVar17 = (int)((ulong)(*(long *)(this + 0x1d0) - lVar9) >> 2) * -0x55555555;
    while( true ) {
      uVar17 = uVar17 - 1;
      puVar18 = (undefined8 *)(lVar9 + (ulong)uVar17 * 0xc);
      uVar3 = *(undefined4 *)(puVar18 + 1);
      pCVar13 = param_2 + 8;
      if (uVar19 != 0) {
        pCVar13 = (CallDescriptor *)
                  ((*(long **)(param_2 + 0x10))[2] +
                   (**(long **)(param_2 + 0x10) + (ulong)uVar19) * 8 + -8);
      }
      if ((*(uint *)pCVar13 & 1) == 0) {
        uVar8 = (uint)*(byte *)(*(long *)(param_1 + 0x10) + *(long *)param_1 + uVar15);
        uVar2 = (int)*(uint *)pCVar13 >> 1;
        if (uVar8 - 3 < 2) {
          uVar11 = (ulong)uVar2 + 0x1d;
        }
        else {
          if (1 < uVar8 - 1) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar11 = (ulong)uVar2;
        }
        uVar16 = 1L << (uVar11 & 0x3f) | uVar16;
        FUN_017ec5ac(auStack_488,uVar11 & 0xff,puVar18,uVar3);
      }
      else {
        if (local_128 == local_120) {
          local_128 = (LiftoffAssembler **)
                      base::SmallVector<v8::internal::wasm::LiftoffStackSlots::Slot,8ul>::Grow
                                ((SmallVector<v8::internal::wasm::LiftoffStackSlots::Slot,8ul> *)
                                 &local_130);
        }
        pLVar12 = (LiftoffAssembler *)*puVar18;
        uVar4 = *(undefined4 *)(puVar18 + 1);
        *(undefined1 *)(local_128 + 2) = 0;
        *local_128 = pLVar12;
        *(undefined4 *)(local_128 + 1) = uVar4;
        *(undefined4 *)((long)local_128 + 0xc) = uVar3;
        local_128 = (LiftoffAssembler **)((long)local_128 + 0x14);
      }
      if ((int)uVar15 == 0) break;
      lVar9 = *(long *)(this + 0x1c8);
      uVar15 = uVar15 - 1;
      uVar19 = uVar19 - 1;
    }
  }
  if (param_3 != (Register *)0x0) {
    RVar5 = *param_3;
    if ((uVar16 >> ((ulong)(byte)RVar5 & 0x3f) & 1) != 0) {
      if ((uVar16 & 0x13f8ffff) == 0x13f8ffff) {
        if (local_128 == local_120) {
          local_128 = (LiftoffAssembler **)
                      base::SmallVector<v8::internal::wasm::LiftoffStackSlots::Slot,8ul>::Grow
                                ((SmallVector<v8::internal::wasm::LiftoffStackSlots::Slot,8ul> *)
                                 &local_130);
        }
        *(Register *)((long)local_128 + 4) = RVar5;
        *(undefined2 *)local_128 = 0x201;
        local_128[1] = (LiftoffAssembler *)0x0;
        *(undefined1 *)((long)local_128 + 7) = local_4c8._2_1_;
        *(undefined2 *)((long)local_128 + 5) = (undefined2)local_4c8;
        *(undefined1 *)(local_128 + 2) = 0;
        *(undefined8 *)param_3 = 0xffffffff;
        *(undefined4 *)(param_3 + 8) = 2;
        local_128 = (LiftoffAssembler **)((long)local_128 + 0x14);
      }
      else {
        uVar16 = uVar16 & 0x13f8ffff ^ 0x13f8ffff;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = LZCOUNT((uVar16 >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10) << 0x20);
        uVar15 = 1L << (uVar16 & 0x3f);
        if ((local_148 & uVar15) == 0) {
          local_148 = local_148 | uVar15;
          lVar9 = (ulong)(byte)RVar5 * 4;
          *(int *)((long)&local_238 + lVar9) = *(int *)((long)&local_238 + lVar9) + 1;
          auStack_488[uVar16] = (byte)RVar5 | 0x200;
        }
        *(ulong *)param_3 = uVar16 | 0x4000000000;
        *(undefined4 *)(param_3 + 8) = 0;
      }
    }
  }
  LiftoffStackSlots::Construct((LiftoffStackSlots *)&local_130);
  FUN_017ecb7c(auStack_488);
  *(undefined8 *)(this + 0x240) = 0;
  *(ulong *)(this + 0x1d0) = *(long *)(this + 0x1d0) + (uVar21 & 0xffffffff) * -0xc;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x32c) = 0;
  *(undefined8 *)(this + 0x324) = 0;
  if (param_4 == (Register *)0x0) {
    local_498 = (ulong)uVar6 | 0x4000000000;
    local_4c8 = 0x400000001d;
    local_4b0 = 0xfffffffffffffff0;
    local_490 = 0;
    local_4c0 = 0;
    local_4bc = 0xffffffff;
    local_4b4 = 2;
    local_4a8 = 0xffffffff00000000;
    uStack_4a0 = 0xffffffff;
    TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_498,&local_4c8,0xc0400000);
  }
  FUN_017ecb7c(auStack_488);
  if (local_130 != local_118) {
    free(local_130);
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

