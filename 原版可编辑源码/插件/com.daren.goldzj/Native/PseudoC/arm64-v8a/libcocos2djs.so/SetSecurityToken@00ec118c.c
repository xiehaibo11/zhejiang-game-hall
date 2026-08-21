
/* v8::Context::SetSecurityToken(v8::Local<v8::Value>) */

void __thiscall v8::Context::SetSecurityToken(Context *this,ulong *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)this;
  uVar3 = *param_2;
  puVar1 = (undefined4 *)(uVar4 + 0x27b);
  *puVar1 = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar4,puVar1,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar4,puVar1,uVar3);
      return;
    }
  }
  return;
}

