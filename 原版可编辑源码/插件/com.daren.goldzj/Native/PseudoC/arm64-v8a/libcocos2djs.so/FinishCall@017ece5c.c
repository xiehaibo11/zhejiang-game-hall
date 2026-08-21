
/* v8::internal::wasm::LiftoffAssembler::FinishCall(v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::compiler::CallDescriptor*) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::FinishCall
          (LiftoffAssembler *this,Signature *param_1,CallDescriptor *param_2)

{
  SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *this_00;
  byte bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(long *)param_1 != 0) {
    bVar1 = **(byte **)(param_1 + 0x10);
    if (bVar1 - 3 < 2) {
      uVar3 = (ulong)(uint)(**(int **)(*(long *)(param_2 + 0x10) + 0x10) >> 1) + 0x1d;
    }
    else {
      if (1 < bVar1 - 1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar3 = (ulong)(uint)(**(int **)(*(long *)(param_2 + 0x10) + 0x10) >> 1);
    }
    this_00 = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(this + 0x1c8);
    *(ulong *)(this + 0x240) = 1L << (uVar3 & 0x3f) | *(ulong *)(this + 0x240);
    *(int *)(this_00 + (uVar3 & 0xff) * 4 + 0x80) =
         *(int *)(this_00 + (uVar3 & 0xff) * 4 + 0x80) + 1;
    puVar2 = *(undefined1 **)(this + 0x1d0);
    if (puVar2 == *(undefined1 **)(this + 0x1c8)) {
      iVar4 = 8;
    }
    else {
      iVar4 = *(int *)(puVar2 + -4) + 8;
    }
    if (puVar2 == *(undefined1 **)(this + 0x1d8)) {
      puVar2 = (undefined1 *)
               base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow(this_00);
    }
    puVar2[1] = bVar1;
    puVar2[4] = (char)uVar3;
    *(int *)(puVar2 + 8) = iVar4;
    *puVar2 = 1;
    *(undefined1 **)(this + 0x1d0) = puVar2 + 0xc;
  }
  return;
}

