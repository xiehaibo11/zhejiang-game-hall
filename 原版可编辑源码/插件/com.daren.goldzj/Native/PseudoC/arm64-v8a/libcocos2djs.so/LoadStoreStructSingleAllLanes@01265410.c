
/* v8::internal::Assembler::LoadStoreStructSingleAllLanes(v8::internal::VRegister const&,
   v8::internal::MemOperand const&, v8::internal::NEONLoadStoreSingleStructOp) */

void __thiscall
v8::internal::Assembler::LoadStoreStructSingleAllLanes
          (Assembler *this,ulong *param_1,uint *param_2,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar2 = (*param_2 & 0x1f) << 5;
  if (param_2[8] == 2) {
    if (*(long *)(param_2 + 6) == 0) {
      uVar2 = uVar2 | param_2[3] << 0x10 | 0x800000;
    }
    else {
      uVar2 = uVar2 | 0x9f0000;
    }
  }
  iVar1 = *(int *)((long)param_1 + 0xc);
  if (*param_1 >> 0x20 == 0x40) {
    uVar3 = iVar1 - 1;
    if ((7 < uVar3) || ((0x8bU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) {
LAB_012654c4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    puVar4 = &DAT_019f3928;
  }
  else {
    uVar3 = iVar1 - 2U >> 1 | iVar1 << 0x1f;
    if ((7 < uVar3) || ((0x8bU >> (ulong)(iVar1 - 2U >> 1 & 0x1f) & 1) == 0)) goto LAB_012654c4;
    puVar4 = &DAT_019f38c8;
  }
  Emit(this,uVar2 | param_4 | (uint)*param_1 | *(uint *)(puVar4 + (long)(int)uVar3 * 4));
  return;
}

