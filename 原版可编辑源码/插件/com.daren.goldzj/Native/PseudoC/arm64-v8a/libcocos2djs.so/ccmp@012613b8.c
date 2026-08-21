
/* v8::internal::Assembler::ccmp(v8::internal::Register const&, v8::internal::Operand const&,
   v8::internal::StatusFlags, v8::internal::Condition) */

void __thiscall
v8::internal::Assembler::ccmp(Assembler *this,ulong *param_1,char *param_2,uint param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  
  if ((((*(int *)(param_2 + 0x30) == -1) && (*(int *)(param_2 + 0x34) == 0)) &&
      (*(int *)(param_2 + 0x38) == 2)) && (*param_2 == '\0')) {
    piVar2 = (int *)(param_2 + 0x20);
    uVar1 = 0x7a400800;
  }
  else {
    piVar2 = (int *)(param_2 + 0x30);
    uVar1 = 0x7a400000;
  }
  Emit(this,param_4 >> 0x1c | param_5 << 0xc | uVar1 | *piVar2 << 0x10 | (int)*param_1 << 5 |
            (uint)(*param_1 >> 0x20 == 0x40) << 0x1f);
  return;
}

