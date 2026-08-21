
/* v8::internal::CodeEntry::SetInlineStacks(std::__ndk1::unordered_set<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >, v8::internal::CodeEntry::Hasher,
   v8::internal::CodeEntry::Equals,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> > > >, std::__ndk1::unordered_map<int,
   std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber> >, std::__ndk1::hash<int>,
   std::__ndk1::equal_to<int>, std::__ndk1::allocator<std::__ndk1::pair<int const,
   std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber> > > > >) */

void __thiscall
v8::internal::CodeEntry::SetInlineStacks(CodeEntry *this,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x80);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *puVar1 = &DAT_0189703a;
    puVar1[1] = &DAT_0189703a;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 7) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined8 **)(this + 0x38) = puVar1;
  }
  std::__ndk1::
  __hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
  ::__move_assign(puVar1 + 8,param_2);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::vector<v8::internal::CodeEntryAndLineNumber,std::__ndk1::allocator<v8::internal::CodeEntryAndLineNumber>>>>>
  ::__move_assign(*(long *)(this + 0x38) + 0x18,param_3);
  return;
}

