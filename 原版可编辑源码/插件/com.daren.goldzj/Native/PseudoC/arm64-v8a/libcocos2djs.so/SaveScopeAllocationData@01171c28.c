
/* v8::internal::PreparseDataBuilder::SaveScopeAllocationData(v8::internal::DeclarationScope*,
   v8::internal::Parser*) */

void __thiscall
v8::internal::PreparseDataBuilder::SaveScopeAllocationData
          (PreparseDataBuilder *this,DeclarationScope *param_1,Parser *param_2)

{
  long lVar1;
  Zone *this_00;
  void *__dest;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 local_24 [4];
  
  if (((byte)this[0x4c] >> 1 & 1) != 0) {
    *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 8) =
         (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(param_2 + 0x490);
    lVar2 = *(long *)(this + 0x28);
    uVar4 = (*(long *)(param_2 + 0x498) - *(long *)(param_2 + 0x490)) - (long)*(int *)(this + 0x10);
    lVar1 = lVar2 * 0x15 - uVar4;
    if (uVar4 <= (ulong)(lVar2 * 0x15) && lVar1 != 0) {
      local_24[0] = 0;
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::insert
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(param_2 + 0x490),
                 *(long *)(param_2 + 0x498),lVar1,local_24);
      lVar2 = *(long *)(this + 0x28);
    }
    if (lVar2 != 0) {
      puVar5 = *(undefined8 **)(this + 0x20);
      lVar2 = lVar2 << 3;
      do {
        uVar4 = SaveDataForSkippableFunction(this,(PreparseDataBuilder *)*puVar5);
        if ((uVar4 & 1) != 0) {
          *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
        }
        lVar2 = lVar2 + -8;
        puVar5 = puVar5 + 1;
      } while (lVar2 != 0);
    }
    if ((((byte)this[0x4c] & 1) == 0) &&
       (uVar4 = ScopeNeedsData((Scope *)param_1), (uVar4 & 1) != 0)) {
      SaveDataForScope(this,(Scope *)param_1);
    }
    this_00 = *(Zone **)(param_2 + 0x68);
    __dest = *(void **)(this_00 + 0x10);
    uVar4 = (long)*(int *)(this + 0x10) + 7U & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar4) {
      __dest = (void *)Zone::NewExpand(this_00,uVar4);
    }
    else {
      *(ulong *)(this_00 + 0x10) = uVar4 + (long)__dest;
    }
    memcpy(__dest,(void *)**(undefined8 **)(this + 8),(long)*(int *)(this + 0x10));
    plVar3 = *(long **)(this + 8);
    if (plVar3[1] != *plVar3) {
      plVar3[1] = *plVar3;
    }
    *(void **)(this + 8) = __dest;
    *(long *)(this + 0x10) = (long)*(int *)(this + 0x10);
  }
  return;
}

