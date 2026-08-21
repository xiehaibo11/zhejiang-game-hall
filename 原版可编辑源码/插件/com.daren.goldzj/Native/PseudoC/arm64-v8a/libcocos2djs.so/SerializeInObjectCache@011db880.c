
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011db938 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::RootsSerializer::SerializeInObjectCache(v8::internal::HeapObject) */

int __thiscall
v8::internal::RootsSerializer::SerializeInObjectCache(RootsSerializer *this,ulong param_2)

{
  int iVar1;
  TemplateHashMapEntry *pTVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong local_38;
  undefined1 auStack_18 [8];
  
  lVar3 = *(long *)(this + 0x218);
  uVar4 = (ulong)(*(int *)(this + 0x220) - 1U & (uint)param_2);
  lVar5 = lVar3 + uVar4 * 0x18;
  if ((*(char *)(lVar5 + 0x10) != '\0') && (*(ulong *)(lVar3 + uVar4 * 0x18) != param_2)) {
    do {
      uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 0x220) - 1U);
      if (*(char *)(lVar3 + uVar4 * 0x18 + 0x10) == '\0') break;
    } while (*(ulong *)(lVar3 + uVar4 * 0x18) != param_2);
    lVar5 = lVar3 + uVar4 * 0x18;
  }
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x10) == '\0')) {
    iVar1 = *(int *)(this + 0x230);
    *(int *)(this + 0x230) = iVar1 + 1;
    local_38 = param_2;
    pTVar2 = base::
             TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
             ::
             LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned_long_const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                       (this,&local_38,param_2 & 0xffffffff,auStack_18);
    *(int *)(pTVar2 + 8) = iVar1;
    (**(code **)(*(long *)this + 0x28))(this,param_2);
  }
  else {
    iVar1 = *(int *)(lVar5 + 8);
  }
  return iVar1;
}

