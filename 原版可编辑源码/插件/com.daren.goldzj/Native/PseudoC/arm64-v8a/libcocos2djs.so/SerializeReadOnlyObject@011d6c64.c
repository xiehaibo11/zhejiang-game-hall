
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011d6cf0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::CodeSerializer::SerializeReadOnlyObject(v8::internal::HeapObject) */

undefined8 __thiscall
v8::internal::CodeSerializer::SerializeReadOnlyObject(CodeSerializer *this,ulong param_2)

{
  ulong uVar1;
  TemplateHashMapEntry *pTVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong local_38;
  undefined1 auStack_18 [8];
  
  uVar1 = ReadOnlyHeap::Contains(param_2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = *(ulong *)(*(long *)(*(long *)(this + 0x68) + 0x8970) + 0x20);
    uVar4 = param_2 - 1 & 0xfffffffffffc0000;
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      iVar6 = 0;
      do {
        if (uVar5 == uVar4) break;
        iVar6 = iVar6 + 1;
        uVar5 = *(ulong *)(uVar5 + 0xe0);
      } while (uVar5 != 0);
      uVar5 = (ulong)(uint)(iVar6 << 4);
    }
    local_38 = param_2;
    pTVar2 = base::
             TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
             ::
             LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned_long_const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                       (uVar1,&local_38,param_2 & 0xffffffff,auStack_18);
    *(ulong *)(pTVar2 + 8) = uVar5 | (ulong)(uint)((int)(param_2 - 1) - (int)uVar4) << 0x20;
    uVar1 = Serializer::SerializeBackReference((Serializer *)this,param_2);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","SerializeBackReference(obj)");
    }
    uVar3 = 1;
  }
  return uVar3;
}

