
void FUN_017d9298(LiftoffAssembler *param_1,undefined4 param_2,code *param_3)

{
  SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *this;
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  ulong uVar6;
  int iVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  byte *local_50;
  byte local_48 [8];
  byte local_28 [4];
  byte local_24 [4];
  
  bVar2 = v8::internal::wasm::LiftoffAssembler::PopToRegister(param_1,0);
  local_28[0] = bVar2;
  if ((*(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
    uVar6 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(param_1,0x7ffefffe0000000,0);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
    uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar6 & 0xffff0000ffff0000) >> 0x10;
    uVar6 = LZCOUNT((uVar3 | (uVar6 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar3 << 0x20);
  }
  local_48[0] = (byte)uVar6;
  uVar3 = v8::internal::wasm::LiftoffAssembler::emit_type_conversion
                    (param_1,param_2,uVar6 & 0xff,bVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar4 = (*param_3)();
    local_50 = local_24;
    local_24[0] = 2;
    uStack_58 = 1;
    local_60 = 0;
    v8::internal::wasm::LiftoffAssembler::SpillAllRegisters(param_1);
    uVar1 = local_24[0] - 1;
    if ((8 < uVar1) || ((0x17fU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar7 = 1 << (ulong)(*(uint *)(&DAT_01a63e18 + (long)(char)uVar1 * 4) & 0x1f);
    if (iVar7 < 9) {
      iVar7 = 8;
    }
    v8::internal::wasm::LiftoffAssembler::CallC(param_1,&local_60,local_28,local_48,4,iVar7,uVar4);
    uVar6 = (ulong)local_48[0];
  }
  this = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
  *(ulong *)(param_1 + 0x240) = 1L << (uVar6 & 0x3f) | *(ulong *)(param_1 + 0x240);
  *(int *)(this + (uVar6 & 0xff) * 4 + 0x80) = *(int *)(this + (uVar6 & 0xff) * 4 + 0x80) + 1;
  puVar5 = *(undefined2 **)(param_1 + 0x1d0);
  if (puVar5 == *(undefined2 **)(param_1 + 0x1c8)) {
    iVar7 = 8;
  }
  else {
    iVar7 = *(int *)(puVar5 + -2) + 8;
  }
  if (puVar5 == *(undefined2 **)(param_1 + 0x1d8)) {
    puVar5 = (undefined2 *)
             v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow(this);
  }
  *(char *)(puVar5 + 2) = (char)uVar6;
  *(int *)(puVar5 + 4) = iVar7;
  *puVar5 = 0x401;
  *(undefined2 **)(param_1 + 0x1d0) = puVar5 + 6;
  return;
}

