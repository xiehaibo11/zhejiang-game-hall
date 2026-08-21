
/* v8::internal::JSFunction::abstract_code() */

ulong __thiscall v8::internal::JSFunction::abstract_code(JSFunction *this)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)this;
  uVar1 = uVar3 & 0xffffffff00000000;
  if (*(int *)((uVar1 | *(uint *)(uVar3 + 0x17)) + 0x27) != 0x42) {
    uVar2 = *(uint *)((uVar1 | *(uint *)(uVar3 + 0xb)) + 3);
    if ((uVar2 != 0x84) &&
       (((uVar2 & 1) == 0 ||
        (1 < *(ushort *)((uVar1 | 7) + (ulong)*(uint *)((uVar1 | uVar2) - 1)) - 0x95)))) {
      uVar3 = *(ulong *)this;
      uVar1 = uVar3 & 0xffffffff00000000;
      uVar2 = *(int *)((uVar1 | *(uint *)(uVar3 + 0x17)) + 0x27) - 0x38;
      if ((8 < uVar2) || ((1 << (ulong)(uVar2 & 0x1f) & 0x181U) == 0)) {
        if (((*(byte *)((uVar1 | *(uint *)(uVar3 + 0x17)) + 0x17) & 0x3e) != 0) ||
           ((*(uint *)((uVar1 | *(uint *)((uVar1 | *(uint *)(uVar3 + 0x17)) + 0xf)) + 7) & 1) == 0))
        goto LAB_00f45b90;
        uVar3 = *(ulong *)this;
        uVar1 = uVar3 & 0xffffffff00000000;
      }
      uVar3 = uVar1 | *(uint *)(uVar3 + 0xb);
      uVar5 = uVar1 | *(uint *)(uVar3 + 0xf);
      uVar4 = uVar1 | 7;
      if ((*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x5b) &&
         (*(short *)(uVar4 + *(uint *)((uVar1 | *(uint *)(uVar5 + 0x13)) - 1)) == 0x86)) {
        uVar2 = *(uint *)(uVar5 + 0xf);
      }
      else {
        uVar2 = *(uint *)(uVar3 + 3);
        if (((uVar2 & 1) == 0) || (*(short *)(uVar4 + *(uint *)((uVar1 | uVar2) - 1)) != 0x86)) {
          uVar2 = *(uint *)((uVar1 | *(uint *)(uVar3 + 3)) + 3);
        }
        else {
          uVar2 = *(uint *)(uVar3 + 3);
        }
      }
      goto LAB_00f45b9c;
    }
  }
LAB_00f45b90:
  uVar2 = *(uint *)(*(ulong *)this + 0x17);
  uVar1 = *(ulong *)this & 0xffffffff00000000;
LAB_00f45b9c:
  return uVar1 | uVar2;
}

