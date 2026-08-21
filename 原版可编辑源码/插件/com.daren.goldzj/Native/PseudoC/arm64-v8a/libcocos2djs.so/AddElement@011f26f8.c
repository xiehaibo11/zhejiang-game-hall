
/* v8::internal::ReplacementStringBuilder::AddElement(v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::ReplacementStringBuilder::AddElement(ReplacementStringBuilder *this,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_28;
  
  iVar5 = *(int *)(this + 0x10);
  uVar6 = **(ulong **)(this + 8);
  iVar3 = *(int *)(uVar6 + 3) >> 1;
  if (iVar3 <= iVar5) {
    do {
      iVar3 = iVar3 * 2;
    } while (iVar3 <= iVar5);
    puVar2 = (ulong *)Factory::NewFixedArrayWithHoles((Factory *)(*(long *)this + -0x8850),iVar3,0);
    local_28 = **(undefined8 **)(this + 8);
    FixedArray::CopyTo((FixedArray *)&local_28,0,*puVar2,0,*(undefined4 *)(this + 0x10));
    *(ulong **)(this + 8) = puVar2;
    uVar6 = *puVar2;
    iVar5 = *(int *)(this + 0x10);
  }
  uVar7 = *param_2;
  lVar1 = uVar6 + (long)(iVar5 << 2);
  *(int *)(lVar1 + 7) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar4 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar1,uVar7);
      uVar4 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar7);
    }
  }
  this[0x14] = (ReplacementStringBuilder)0x1;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}

