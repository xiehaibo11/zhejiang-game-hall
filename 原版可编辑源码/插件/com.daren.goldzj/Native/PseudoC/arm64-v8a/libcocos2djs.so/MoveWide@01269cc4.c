
/* v8::internal::Assembler::MoveWide(v8::internal::Register const&, unsigned long, int,
   v8::internal::MoveWideImmediateOp) */

void __thiscall
v8::internal::Assembler::MoveWide
          (Assembler *this,ulong *param_1,ulong param_2,uint param_3,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2 & 0xffffffff;
  if (*(int *)((long)param_1 + 4) != 0x20) {
    uVar1 = param_2;
  }
  uVar2 = uVar1;
  if ((int)param_3 < 0) {
    if (uVar1 < 0x10000) {
      param_3 = 0;
    }
    else if ((uVar1 & 0xffffffff0000ffff) == 0) {
      param_3 = 1;
      uVar2 = uVar1 >> 0x10;
    }
    else if ((uVar1 & 0xffff0000ffffffff) == 0) {
      param_3 = 2;
      uVar2 = uVar1 >> 0x20;
    }
    else {
      param_3 = 3;
      uVar2 = uVar1 >> 0x30;
      if ((uVar1 & 0xffffffffffff) != 0) {
        param_3 = 0;
        uVar2 = uVar1;
      }
    }
  }
  else {
    param_3 = param_3 >> 4;
  }
  Emit(this,param_5 | param_3 << 0x15 | (uint)*param_1 | (int)uVar2 << 5 |
            (uint)(*param_1 >> 0x20 == 0x40) << 0x1f | 0x12800000);
  return;
}

