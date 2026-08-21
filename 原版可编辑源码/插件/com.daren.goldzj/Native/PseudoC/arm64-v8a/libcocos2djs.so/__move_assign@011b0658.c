
/* std::__ndk1::__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >, v8::internal::CodeEntry::Hasher,
   v8::internal::CodeEntry::Equals,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> > >
   >::__move_assign(std::__ndk1::__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >, v8::internal::CodeEntry::Hasher,
   v8::internal::CodeEntry::Equals,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> > > >&, std::__ndk1::integral_constant<bool,
   true>) */

void std::__ndk1::
     __hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
     ::__move_assign(__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
                     *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __deallocate_node(param_1,*(__hash_node_base **)(param_1 + 0x10));
    lVar3 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)param_1 + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  uVar4 = *param_2;
  *param_2 = 0;
  pvVar2 = *(void **)param_1;
  *(undefined8 *)param_1 = uVar4;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  *(undefined8 *)(param_1 + 8) = param_2[1];
  lVar5 = param_2[3];
  param_2[1] = 0;
  *(long *)(param_1 + 0x18) = lVar5;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 4);
  lVar3 = param_2[2];
  *(long *)(param_1 + 0x10) = lVar3;
  if (lVar5 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    uVar6 = *(ulong *)(lVar3 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar6 = uVar7 - 1 & uVar6;
    }
    else if (uVar7 <= uVar6) {
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar1 * uVar7;
    }
    *(__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
      **)(*(long *)param_1 + uVar6 * 8) = param_1 + 0x10;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}

