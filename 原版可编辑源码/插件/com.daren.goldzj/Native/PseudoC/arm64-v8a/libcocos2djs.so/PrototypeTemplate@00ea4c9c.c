
/* v8::FunctionTemplate::PrototypeTemplate() */

ulong * __thiscall v8::FunctionTemplate::PrototypeTemplate(FunctionTemplate *this)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)(this + 4);
  pIVar7 = (Isolate *)((ulong)uVar1 << 0x20);
  uVar2 = *(undefined4 *)(pIVar7 + 0x2c60);
  *(undefined4 *)(pIVar7 + 0x2c60) = 5;
  uVar5 = *(ulong *)this & 0xffffffff00000000;
  uVar3 = *(uint *)(*(ulong *)this + 0x23);
  uVar8 = *(ulong *)(uVar5 + 0xa0);
  if (uVar3 != (uint)uVar8) {
    uVar8 = uVar5 | *(uint *)((uVar5 | uVar3) + 3);
  }
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar4 = (ulong *)internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar8);
    uVar8 = *puVar4;
  }
  if (((uVar8 & 1) != 0) && ((int)uVar8 == *(int *)(pIVar7 + 0xa0))) {
    puVar4 = (ulong *)FUN_00ea4e0c(pIVar7,0,1);
    if (*(int *)(*(long *)this + 0x23) == *(int *)(pIVar7 + 0xa0)) {
      uVar8 = internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(pIVar7,this);
    }
    else {
      uVar8 = CONCAT44(uVar1,*(int *)(*(long *)this + 0x23));
    }
    uVar5 = *puVar4;
    *(int *)(uVar8 + 3) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 3,uVar5);
        uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 3,uVar5);
      }
    }
  }
  *(undefined4 *)(pIVar7 + 0x2c60) = uVar2;
  return puVar4;
}

