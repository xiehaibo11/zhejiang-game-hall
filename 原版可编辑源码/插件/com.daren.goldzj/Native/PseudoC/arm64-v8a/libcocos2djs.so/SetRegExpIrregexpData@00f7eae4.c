
/* v8::internal::Factory::SetRegExpIrregexpData(v8::internal::Handle<v8::internal::JSRegExp>,
   v8::internal::JSRegExp::Type, v8::internal::Handle<v8::internal::String>,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>, int, unsigned int) */

void __thiscall
v8::internal::Factory::SetRegExpIrregexpData
          (Factory *this,ulong *param_2,int param_3,ulong *param_4,int param_5,int param_6,
          int param_7)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)(this + 0x8938);
  uVar11 = *(undefined8 *)(this + 0xa0);
  lVar2 = *(long *)(lVar7 + 0x68);
  if ((((ulong)(*(long *)(lVar7 + 0x70) - lVar2) < 0x38) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x38,0,1,0);
  }
  else {
    uVar5 = lVar2 + 1;
    *(long *)(lVar7 + 0x68) = lVar2 + 0x38;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,0x38,1,1);
  }
  *(undefined4 *)(uVar5 - 1) = *(undefined4 *)(this + 0xe0);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
    uVar5 = *puVar6;
  }
  *(undefined4 *)(uVar5 + 3) = 0x18;
  uVar5 = *puVar6;
  uVar10 = (undefined4)uVar11;
  *(ulong *)(uVar5 + 0xf) = CONCAT44(uVar10,uVar10);
  *(ulong *)(uVar5 + 7) = CONCAT44(uVar10,uVar10);
  *(ulong *)(uVar5 + 0x1f) = CONCAT44(uVar10,uVar10);
  *(ulong *)(uVar5 + 0x17) = CONCAT44(uVar10,uVar10);
  *(ulong *)(uVar5 + 0x2f) = CONCAT44(uVar10,uVar10);
  *(ulong *)(uVar5 + 0x27) = CONCAT44(uVar10,uVar10);
  iVar4 = FLAG_regexp_tier_up_ticks;
  cVar3 = FLAG_regexp_tier_up;
  *(int *)(*puVar6 + 7) = param_3 << 1;
  uVar9 = *puVar6;
  uVar5 = *param_4;
  *(int *)(uVar9 + 0xb) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar8 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar5);
      uVar8 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar5);
    }
  }
  *(int *)(*puVar6 + 0xf) = param_5 << 1;
  *(undefined4 *)(*puVar6 + 0x13) = 0xfffffffe;
  *(undefined4 *)(*puVar6 + 0x17) = 0xfffffffe;
  *(undefined4 *)(*puVar6 + 0x1b) = 0xfffffffe;
  *(undefined4 *)(*puVar6 + 0x1f) = 0xfffffffe;
  *(undefined4 *)(*puVar6 + 0x23) = 0;
  *(int *)(*puVar6 + 0x27) = param_6 << 1;
  *(undefined4 *)(*puVar6 + 0x2b) = 0xfffffffe;
  iVar1 = -2;
  if (cVar3 != '\0') {
    iVar1 = iVar4 << 1;
  }
  *(int *)(*puVar6 + 0x2f) = iVar1;
  *(int *)(*puVar6 + 0x33) = param_7 << 1;
  uVar5 = *puVar6;
  uVar9 = *param_2;
  *(int *)(uVar9 + 0xb) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar8 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar5);
      uVar8 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar5);
      return;
    }
  }
  return;
}

