
/* v8::Context::AllowCodeGenerationFromStrings(bool) */

void __thiscall v8::Context::AllowCodeGenerationFromStrings(Context *this,bool param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(this + 4);
  uVar4 = 0xb8;
  if (!param_1) {
    uVar4 = 0xc0;
  }
  lVar6 = (ulong)uVar1 << 0x20;
  uVar2 = *(undefined4 *)(lVar6 + 0x2c60);
  *(undefined4 *)(lVar6 + 0x2c60) = 5;
  uVar5 = *(ulong *)this;
  uVar4 = *(ulong *)(uVar4 | (ulong)uVar1 << 0x20);
  *(int *)(uVar5 + 0x1f) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x1f,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x1f,uVar4);
    }
  }
  *(undefined4 *)(lVar6 + 0x2c60) = uVar2;
  return;
}

