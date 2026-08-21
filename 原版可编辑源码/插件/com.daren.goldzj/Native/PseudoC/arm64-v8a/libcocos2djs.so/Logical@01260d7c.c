
/* v8::internal::Assembler::Logical(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Operand const&, v8::internal::LogicalOp) */

void __thiscall
v8::internal::Assembler::Logical
          (Assembler *this,ulong *param_1,int *param_2,char *param_3,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  
  if ((((*(int *)(param_3 + 0x30) == -1) && (*(int *)(param_3 + 0x34) == 0)) &&
      (*(int *)(param_3 + 0x38) == 2)) && (*param_3 == '\0')) {
    uVar1 = *(ulong *)(param_3 + 0x20);
    uVar2 = uVar1;
    if ((param_5 >> 0x15 & 1) != 0) {
      uVar2 = ~uVar1 & 0xffffffff;
      param_5 = param_5 & 0xffdfffff;
      if (*(uint *)((long)param_1 + 4) == 0x40) {
        uVar2 = ~uVar1;
      }
    }
    uVar2 = IsImmLogical(uVar2,*(uint *)((long)param_1 + 4),&local_34,&uStack_38,&local_3c);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar4 = (uint)*param_1;
    if (param_5 != 0x60000000) {
      uVar4 = uVar4 & 0x1f;
    }
    uVar4 = param_5 | local_34 << 0x16 | uStack_38 << 10 | local_3c << 0x10 |
            (uint)(*param_1 >> 0x20 == 0x40) << 0x1f | uVar4 | *param_2 << 5;
    uVar3 = 0x12000000;
  }
  else {
    uVar4 = (uint)*param_1 | param_5 | *(int *)(param_3 + 0x3c) << 0x16 |
            (uint)(*param_1 >> 0x20 == 0x40) << 0x1f | *(int *)(param_3 + 0x44) << 10 |
            *(int *)(param_3 + 0x30) << 0x10 | *param_2 << 5;
    uVar3 = 0xa000000;
  }
  Emit(this,uVar4 | uVar3);
  return;
}

