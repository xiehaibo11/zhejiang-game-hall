
/* v8::internal::Parser::HandleSourceURLComments(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>) */

void __thiscall
v8::internal::Parser::HandleSourceURLComments(Parser *this,Isolate *param_1,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)Scanner::SourceUrl((Scanner *)(this + 0x140),param_1);
  if (puVar1 != (ulong *)0x0) {
    uVar4 = *param_3;
    uVar3 = *puVar1;
    *(int *)(uVar4 + 0x33) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar2 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x33,uVar3);
        uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x33,uVar3);
      }
    }
  }
  puVar1 = (ulong *)Scanner::SourceMappingUrl((Scanner *)(this + 0x140),param_1);
  if (puVar1 != (ulong *)0x0) {
    uVar4 = *param_3;
    uVar3 = *puVar1;
    *(int *)(uVar4 + 0x37) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar2 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x37,uVar3);
        uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x37,uVar3);
        return;
      }
    }
  }
  return;
}

