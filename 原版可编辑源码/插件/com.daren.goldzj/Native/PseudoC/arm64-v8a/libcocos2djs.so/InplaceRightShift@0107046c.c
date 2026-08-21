
/* v8::internal::MutableBigInt::InplaceRightShift(int) */

void __thiscall v8::internal::MutableBigInt::InplaceRightShift(MutableBigInt *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 != 0) {
    lVar2 = *(long *)this;
    uVar4 = *(ulong *)(lVar2 + 7) >> ((ulong)(uint)param_1 & 0x3f);
    uVar1 = (*(uint *)(lVar2 + 3) >> 1 & 0x3fffffff) - 1;
    uVar3 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        uVar6 = *(ulong *)(lVar2 + (uVar5 + 8 & 0xfffffff8 | 7));
        uVar3 = uVar3 - 1;
        *(ulong *)(lVar2 + (uVar5 & 0xfffffff8 | 7)) =
             uVar6 << ((ulong)(0x40 - param_1) & 0x3f) | uVar4;
        lVar2 = *(long *)this;
        uVar4 = uVar6 >> ((ulong)(uint)param_1 & 0x3f);
        uVar5 = uVar5 + 8;
      } while (uVar3 != 0);
    }
    *(ulong *)(lVar2 + ((long)(int)(uVar1 * 8) | 7U)) = uVar4;
  }
  return;
}

