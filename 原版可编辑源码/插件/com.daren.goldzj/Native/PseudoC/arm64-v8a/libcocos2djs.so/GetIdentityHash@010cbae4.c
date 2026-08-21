
/* v8::internal::JSReceiver::GetIdentityHash() */

ulong __thiscall v8::internal::JSReceiver::GetIdentityHash(JSReceiver *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(ulong *)this + 3);
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  if ((uVar1 & 1) == 0) {
joined_r0x010cbb54:
    uVar1 = (int)uVar1 >> 1;
  }
  else {
    uVar3 = uVar2 | uVar1;
    uVar4 = uVar2 | 7;
    if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) != 0xa4) {
      if ((*(short *)(uVar4 + *(uint *)(uVar3 - 1)) != 0x7a) &&
         (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) != 0x79)) goto LAB_010cbb58;
      uVar1 = *(uint *)(uVar3 + 0x17);
      goto joined_r0x010cbb54;
    }
    uVar1 = *(uint *)(uVar3 + 3) >> 0xb & 0xfffff;
  }
  if (uVar1 != 0) {
    return -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  }
LAB_010cbb58:
  return *(ulong *)(uVar2 + 0xa0);
}

