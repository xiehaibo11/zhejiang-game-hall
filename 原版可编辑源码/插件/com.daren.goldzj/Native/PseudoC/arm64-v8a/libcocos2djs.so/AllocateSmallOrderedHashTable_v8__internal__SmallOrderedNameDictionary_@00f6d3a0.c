
/* v8::internal::Handle<v8::internal::SmallOrderedNameDictionary>
   v8::internal::Factory::AllocateSmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>(v8::internal::Handle<v8::internal::Map>,
   int, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::AllocateSmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>
          (Factory *this,undefined8 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong local_48;
  
  if ((int)param_3 < 5) {
    param_3 = 4;
  }
  iVar4 = base::bits::RoundUpToPowerOfTwo32(param_3);
  uVar9 = *param_2;
  if (0xfd < iVar4) {
    iVar4 = 0xfe;
  }
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = iVar4 + 1;
  }
  uVar1 = iVar4 * 0xd + (iVar2 >> 1) + 0xfU & 0xfffffffc;
  uVar7 = (ulong)uVar1;
  if (((param_4 & 0xff) == 0) && ((int)uVar1 < 0x20001)) {
    lVar8 = *(long *)(this + 0x8938);
    lVar3 = *(long *)(lVar8 + 0x68);
    if ((uVar7 <= (ulong)(*(long *)(lVar8 + 0x70) - lVar3)) &&
       ((FLAG_inline_new != '\0' && (FLAG_gc_interval == 0)))) {
      uVar5 = lVar3 + 1;
      *(long *)(lVar8 + 0x68) = lVar3 + (int)uVar1;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar3,uVar7,1,1);
      goto LAB_00f6d48c;
    }
  }
  uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar7,param_4,1,0);
LAB_00f6d48c:
  *(int *)(uVar5 - 1) = (int)uVar9;
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
  local_48 = uVar5;
  SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Initialize
            ((SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary> *)&local_48,
             (Isolate *)this,iVar4);
  return puVar6;
}

