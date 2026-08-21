
void FUN_017d8dc0(LiftoffAssembler *param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *this;
  uint uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 local_f8;
  undefined1 local_f7;
  long local_f0;
  long lStack_e8;
  undefined2 *local_e0;
  undefined2 local_cc [2];
  byte local_c8 [8];
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
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar4 = v8::internal::wasm::LiftoffAssembler::PopToRegister(param_1,0);
  local_c8[0] = bVar4;
  if ((*(ulong *)(param_1 + 0x240) & 0x13f8ffff) == 0x13f8ffff) {
    uVar9 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(param_1,0x13f8ffff,0);
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x240) & 0x13f8ffff ^ 0x13f8ffff;
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = LZCOUNT((uVar9 >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10) << 0x20);
  }
  uVar12 = uVar9 & 0xff;
  uVar5 = FUN_017da05c(param_1,param_4,6,0);
  uVar6 = v8::internal::wasm::LiftoffAssembler::emit_type_conversion
                    (param_1,param_2,uVar12,bVar4,uVar5);
  if ((uVar6 & 1) != 0) {
    uVar13 = 1L << (uVar9 & 0x3f);
    goto LAB_017d8fec;
  }
  uVar7 = (*param_3)();
  local_e0 = local_cc;
  local_cc[0] = 0x401;
  lStack_e8 = 1;
  local_f0 = 1;
  uVar13 = 1L << (uVar9 & 0x3f);
  uVar6 = (ulong)~(uint)uVar13 & 0x13f8ffff & (*(ulong *)(param_1 + 0x240) ^ 0xffffffffffffffff);
  if (uVar6 == 0) {
    uVar6 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(param_1,0x13f8ffff,uVar13);
  }
  else {
    uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = LZCOUNT((uVar6 >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10) << 0x20);
  }
  puVar8 = local_e0;
  lVar14 = lStack_e8;
  lVar3 = local_f0;
  local_f8 = (undefined1)uVar6;
  local_f7 = (char)uVar9;
  v8::internal::wasm::LiftoffAssembler::SpillAllRegisters(param_1);
  if (lVar14 == 0) {
LAB_017d8f60:
    iVar11 = 8;
  }
  else {
    iVar11 = 0;
    pbVar10 = (byte *)((long)puVar8 + lVar3);
    do {
      uVar1 = *pbVar10 - 1;
      if ((8 < uVar1) || ((0x17fU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar14 = lVar14 + -1;
      pbVar10 = pbVar10 + 1;
      iVar11 = (1 << (ulong)(*(uint *)(&DAT_01a63e18 + (long)(char)uVar1 * 4) & 0x1f)) + iVar11;
    } while (lVar14 != 0);
    if (iVar11 < 8) goto LAB_017d8f60;
  }
  v8::internal::wasm::LiftoffAssembler::CallC(param_1,&local_f0,local_c8,&local_f8,2,iVar11,uVar7);
  local_c0 = uVar6 & 0xff | 0x2000000000;
  local_b8 = 0;
  local_b0[0] = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0x13;
  local_80 = 0x200000001f;
  uStack_70 = 0xffffffff;
  local_78 = 0;
  v8::internal::TurboAssembler::AddSubMacro
            ((TurboAssembler *)param_1,&DAT_01a63d34,&local_c0,local_b0,1,0x40000000);
  v8::internal::TurboAssembler::B((TurboAssembler *)param_1,uVar5,0);
LAB_017d8fec:
  this = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
  *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | uVar13;
  *(int *)(this + uVar12 * 4 + 0x80) = *(int *)(this + uVar12 * 4 + 0x80) + 1;
  puVar8 = *(undefined2 **)(param_1 + 0x1d0);
  if (puVar8 == *(undefined2 **)(param_1 + 0x1c8)) {
    iVar11 = 8;
  }
  else {
    iVar11 = *(int *)(puVar8 + -2) + 8;
  }
  if (puVar8 == *(undefined2 **)(param_1 + 0x1d8)) {
    puVar8 = (undefined2 *)
             v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow(this);
  }
  *(char *)(puVar8 + 2) = (char)uVar9;
  *(int *)(puVar8 + 4) = iVar11;
  *puVar8 = 0x201;
  *(undefined2 **)(param_1 + 0x1d0) = puVar8 + 6;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

