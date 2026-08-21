
/* v8::internal::compiler::AllocationSiteData::AllocationSiteData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::AllocationSite>) */

void __thiscall
v8::internal::compiler::AllocationSiteData::AllocationSiteData
          (AllocationSiteData *this,undefined8 *param_1,undefined8 param_3,ulong *param_4)

{
  AllocationSiteData AVar1;
  byte bVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  ulong local_38;
  undefined4 local_14;
  
  HeapObjectData::HeapObjectData();
  this[0x18] = (AllocationSiteData)(*(byte *)(*param_4 + 3) & 1);
  local_38 = *param_4;
  AVar1 = (AllocationSiteData)AllocationSite::GetAllocationType((AllocationSite *)&local_38);
  this[0x19] = AVar1;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (AllocationSiteData)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x3a] = (AllocationSiteData)0x0;
  *(undefined2 *)(this + 0x38) = 0x1c;
  uVar5 = *param_4;
  if (this[0x18] == (AllocationSiteData)0x0) {
    this[0x38] = (AllocationSiteData)(*(byte *)(uVar5 + 3) >> 1 & 0x1f);
    this[0x39] = (AllocationSiteData)((*(byte *)(*param_4 + 3) >> 6 ^ 0xff) & 1);
  }
  else {
    pIVar4 = (Isolate *)*param_1;
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 3);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
    }
    local_14 = 0xfc;
    bVar2 = FUN_0173a914(puVar3,3,&local_14);
    this[0x28] = (AllocationSiteData)(bVar2 & 1);
  }
  return;
}

