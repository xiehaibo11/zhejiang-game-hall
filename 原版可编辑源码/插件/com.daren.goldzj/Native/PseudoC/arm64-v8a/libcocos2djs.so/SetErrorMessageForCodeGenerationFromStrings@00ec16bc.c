
/* v8::Context::SetErrorMessageForCodeGenerationFromStrings(v8::Local<v8::String>) */

void __thiscall
v8::Context::SetErrorMessageForCodeGenerationFromStrings(Context *this,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)this;
  uVar2 = *param_2;
  *(int *)(uVar3 + 0xb3) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar1 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar3,uVar3 + 0xb3,uVar2);
      uVar1 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar1 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0xb3,uVar2);
      return;
    }
  }
  return;
}

