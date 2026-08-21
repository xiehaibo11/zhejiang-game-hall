
void FUN_017d9098(LiftoffAssembler *param_1,undefined4 param_2)

{
  SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *this;
  ulong uVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  ulong uVar4;
  int iVar5;
  
  uVar2 = v8::internal::wasm::LiftoffAssembler::PopToRegister(param_1,0);
  if ((*(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000) == 0x7ffefffe0000000) {
    uVar4 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(param_1,0x7ffefffe0000000,0);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x240) & 0x7ffefffe0000000 ^ 0x7ffefffe0000000;
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar4 & 0xffff0000ffff0000) >> 0x10;
    uVar4 = LZCOUNT((uVar1 | (uVar4 & 0xffff0000ffff) << 0x10) >> 0x20 | uVar1 << 0x20);
  }
  v8::internal::wasm::LiftoffAssembler::emit_type_conversion(param_1,param_2,uVar4 & 0xff,uVar2,0);
  this = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x1c8);
  *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | 1L << (uVar4 & 0x3f);
  *(int *)(this + (uVar4 & 0xff) * 4 + 0x80) = *(int *)(this + (uVar4 & 0xff) * 4 + 0x80) + 1;
  puVar3 = *(undefined2 **)(param_1 + 0x1d0);
  if (puVar3 == *(undefined2 **)(param_1 + 0x1c8)) {
    iVar5 = 8;
  }
  else {
    iVar5 = *(int *)(puVar3 + -2) + 8;
  }
  if (puVar3 == *(undefined2 **)(param_1 + 0x1d8)) {
    puVar3 = (undefined2 *)
             v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow(this);
  }
  *(char *)(puVar3 + 2) = (char)uVar4;
  *(int *)(puVar3 + 4) = iVar5;
  *puVar3 = 0x301;
  *(undefined2 **)(param_1 + 0x1d0) = puVar3 + 6;
  return;
}

