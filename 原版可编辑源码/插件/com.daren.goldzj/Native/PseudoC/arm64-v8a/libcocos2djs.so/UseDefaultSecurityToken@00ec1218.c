
/* v8::Context::UseDefaultSecurityToken() */

void __thiscall v8::Context::UseDefaultSecurityToken(Context *this)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  
  uVar4 = *(ulong *)this;
  local_38 = uVar4;
  uVar2 = internal::Context::global_object((Context *)&local_38);
  puVar1 = (undefined4 *)(uVar4 + 0x27b);
  *puVar1 = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar3 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar4,puVar1,uVar2);
      uVar3 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar4,puVar1,uVar2);
    }
  }
  return;
}

