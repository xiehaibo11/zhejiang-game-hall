
/* v8::internal::CPURegList::PopLowestIndex() */

undefined1  [16] __thiscall v8::internal::CPURegList::PopLowestIndex(CPURegList *this)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar2 = *(ulong *)this;
  if (uVar2 != 0) {
    uVar1 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    uVar1 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
    *(ulong *)this = uVar2 & (1L << (uVar1 & 0x3f) ^ 0xffffffffffffffffU);
    auVar3._8_4_ = *(undefined4 *)(this + 0xc);
    auVar3._0_8_ = uVar1 | (ulong)*(uint *)(this + 8) << 0x20;
    auVar3._12_4_ = 0;
    return auVar3;
  }
  auVar4._8_8_ = 2;
  auVar4._0_8_ = 0xffffffff;
  return auVar4;
}

