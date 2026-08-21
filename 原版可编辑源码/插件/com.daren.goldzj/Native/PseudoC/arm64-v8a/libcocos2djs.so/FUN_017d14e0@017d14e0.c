
void FUN_017d14e0(Assembler *param_1)

{
  SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *this;
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,0);
  uVar9 = 1L << (uVar4 & 0x3f);
  uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x1d0) + -0xb);
  uVar5 = v8::internal::wasm::LiftoffAssembler::PopToRegister((LiftoffAssembler *)param_1,uVar9);
  uVar9 = v8::internal::wasm::LiftoffAssembler::PopToRegister
                    ((LiftoffAssembler *)param_1,1L << (uVar5 & 0x3f) | uVar9);
  uVar8 = *(ulong *)(param_1 + 0x240);
  if ((uVar8 >> (uVar9 & 0x3f) & 1) == 0) {
    uVar6 = uVar9 & 0xff;
  }
  else {
    uVar6 = uVar5 & 0xff;
    if ((uVar8 >> (uVar5 & 0x3f) & 1) != 0) {
      puVar1 = &DAT_01a634d8;
      if (((uint)uVar9 & 0xff) < 0x1d) {
        puVar1 = &DAT_01a634d0;
      }
      uVar6 = *puVar1 & (uVar8 ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        uVar6 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                          ((LiftoffAssembler *)param_1,*puVar1,0);
        uVar8 = *(ulong *)(param_1 + 0x240);
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
      }
      uVar6 = uVar6 & 0xff;
    }
  }
  this = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
  *(ulong *)(param_1 + 0x240) = uVar8 | 1L << (uVar6 & 0x3f);
  *(int *)(this + uVar6 * 4 + 0x80) = *(int *)(this + uVar6 * 4 + 0x80) + 1;
  puVar7 = *(undefined1 **)(param_1 + 0x1d0);
  if (puVar7 == *(undefined1 **)(param_1 + 0x1c8)) {
    iVar10 = 8;
  }
  else {
    iVar10 = *(int *)(puVar7 + -4) + 8;
  }
  if (puVar7 == *(undefined1 **)(param_1 + 0x1d8)) {
    puVar7 = (undefined1 *)
             v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow(this);
  }
  puVar7[1] = uVar2;
  puVar7[4] = (char)uVar6;
  *(int *)(puVar7 + 8) = iVar10;
  *puVar7 = 1;
  *(undefined1 **)(param_1 + 0x1d0) = puVar7 + 0xc;
  local_d0 = 0;
  uStack_c8 = 0;
  local_88 = 0x13;
  local_c0 = uVar4 & 0xff | 0x2000000000;
  local_b8 = 0;
  local_b0[0] = 0;
  local_a8 = 0;
  local_90 = 0;
  local_80 = 0x200000001f;
  uStack_70 = 0xffffffff;
  local_78 = 0;
  v8::internal::TurboAssembler::AddSubMacro
            ((TurboAssembler *)param_1,&DAT_01a63d34,&local_c0,local_b0,1,0x40000000);
  v8::internal::TurboAssembler::B((TurboAssembler *)param_1,&local_d0,0);
  if ((uint)uVar6 != ((uint)uVar9 & 0xff)) {
    v8::internal::wasm::LiftoffAssembler::Move((LiftoffAssembler *)param_1,uVar6,uVar9 & 0xff,uVar2)
    ;
  }
  v8::internal::Assembler::b(param_1,(Label *)&uStack_c8);
  v8::internal::Assembler::CheckVeneerPool(param_1,false,false,0x400);
  v8::internal::Assembler::bind((Label *)param_1);
  if ((uint)uVar6 != ((uint)uVar5 & 0xff)) {
    v8::internal::wasm::LiftoffAssembler::Move((LiftoffAssembler *)param_1,uVar6,uVar5 & 0xff,uVar2)
    ;
  }
  v8::internal::Assembler::bind((Label *)param_1);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

