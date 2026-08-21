
/* v8::internal::CPURegList::PopHighestIndex() */

undefined1  [16] __thiscall v8::internal::CPURegList::PopHighestIndex(CPURegList *this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (*(ulong *)this == 0) {
    uVar3 = 2;
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = CountLeadingZeros(*(ulong *)this,0x40);
    uVar3 = (ulong)*(uint *)(this + 0xc);
    uVar2 = CONCAT44(*(undefined4 *)(this + 8),0x3fU - iVar1);
    *(ulong *)this = *(ulong *)this & (1L << ((ulong)(0x3fU - iVar1) & 0x3f) ^ 0xffffffffffffffffU);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}

