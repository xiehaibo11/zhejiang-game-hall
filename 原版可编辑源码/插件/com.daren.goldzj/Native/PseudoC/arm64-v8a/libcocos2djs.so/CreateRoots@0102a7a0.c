
/* v8::internal::Genesis::CreateRoots() */

void __thiscall v8::internal::Genesis::CreateRoots(Genesis *this)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = (ulong *)Factory::NewNativeContext(*(Factory **)this);
  lVar4 = *(long *)this;
  *(ulong **)(this + 0x10) = puVar2;
  uVar6 = *puVar2;
  uVar3 = *(ulong *)(lVar4 + 0x8e38);
  *(int *)(uVar6 + 0x41f) = (int)uVar3;
  if ((((uVar3 & 1) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
     ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    Heap_GenerationalBarrierSlow(uVar6);
  }
  *(ulong *)(lVar4 + 0x8e38) = uVar6;
  *(undefined8 *)(*(long *)this + 0x2bc8) = **(undefined8 **)(this + 0x10);
  puVar2 = (ulong *)TemplateList::New(*(Isolate **)this,1);
  uVar3 = *puVar2;
  uVar6 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar6 + 0x1e7);
  *puVar1 = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,puVar1,uVar3);
      uVar5 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,puVar1,uVar3);
      return;
    }
  }
  return;
}

