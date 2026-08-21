
/* ClipperLib::Int128Mul(long long, long long) */

void __thiscall ClipperLib::Int128Mul(ClipperLib *this,longlong param_1,longlong param_2)

{
  ulong uVar1;
  long lVar2;
  ClipperLib *pCVar3;
  long *in_x8;
  ulong uVar4;
  ulong uVar5;
  
  pCVar3 = (ClipperLib *)-(long)this;
  if (-1 < (long)this) {
    pCVar3 = this;
  }
  uVar1 = -param_1;
  if (-1 < param_1) {
    uVar1 = param_1;
  }
  uVar5 = (uVar1 & 0xffffffff) * ((ulong)pCVar3 & 0xffffffff);
  uVar4 = (uVar1 >> 0x20) * ((ulong)pCVar3 & 0xffffffff) +
          (uVar1 & 0xffffffff) * ((ulong)pCVar3 >> 0x20);
  uVar1 = (uVar1 >> 0x20) * ((ulong)pCVar3 >> 0x20) + (uVar4 >> 0x20);
  uVar4 = uVar4 << 0x20;
  lVar2 = uVar5 + uVar4;
  *in_x8 = lVar2;
  in_x8[1] = uVar1;
  if (CARRY8(uVar5,uVar4)) {
    uVar1 = uVar1 + 1;
    in_x8[1] = uVar1;
  }
  if (-(int)((long)this >> 0x3f) != -(int)(param_1 >> 0x3f)) {
    uVar4 = -uVar1;
    if (lVar2 != 0) {
      uVar4 = ~uVar1;
    }
    *in_x8 = -lVar2;
    in_x8[1] = uVar4;
    return;
  }
  return;
}

