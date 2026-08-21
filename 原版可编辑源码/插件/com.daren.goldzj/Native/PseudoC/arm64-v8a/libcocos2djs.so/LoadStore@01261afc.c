
/* v8::internal::Assembler::LoadStore(v8::internal::CPURegister const&, v8::internal::MemOperand
   const&, v8::internal::LoadStoreOp) */

void __thiscall
v8::internal::Assembler::LoadStore(Assembler *this,uint *param_1,uint *param_2,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1 | param_4 | (*param_2 & 0x1f) << 5;
  if (param_2[8] == 0) {
    if (param_2[3] == 0xffffffff) {
      if ((param_2[4] == 0) && (param_2[5] == 2)) {
        lVar3 = *(long *)(param_2 + 6);
        uVar2 = param_4 >> 0x15 & 4;
        if (((uint)(param_4 >> 0x1e == 0) & param_4 >> 0x1a) == 0) {
          uVar2 = param_4 >> 0x1e;
        }
        if ((0xfff < (ulong)(lVar3 >> uVar2)) || ((lVar3 >> uVar2) << uVar2 != lVar3)) {
          if (lVar3 + 0x100U < 0x200) {
            Emit(this,uVar1 | ((uint)lVar3 & 0x1ff) << 0xc | 0x38000000);
            return;
          }
          goto LAB_01261c38;
        }
        uVar1 = uVar1 | ((int)(uint)lVar3 >> uVar2) << 10;
        uVar2 = 0x39000000;
        goto LAB_01261c0c;
      }
      if ((param_2[4] == 0) && (param_2[5] == 2)) goto LAB_01261b20;
    }
    uVar2 = 0x6000;
    if (param_2[9] != 0) {
      uVar2 = param_2[10] << 0xd;
    }
    uVar1 = uVar1 | uVar2 | (uint)(param_2[0xb] != 0) << 0xc | param_2[3] << 0x10;
    uVar2 = 0x38200800;
  }
  else {
LAB_01261b20:
    if (0x1ff < *(long *)(param_2 + 6) + 0x100U) {
LAB_01261c38:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = ((uint)*(long *)(param_2 + 6) & 0x1ff) << 0xc | uVar1;
    uVar2 = 0x38000400;
    if (param_2[8] == 1) {
      Emit(this,uVar1 | 0x38000c00);
      return;
    }
  }
LAB_01261c0c:
  Emit(this,uVar1 | uVar2);
  return;
}

