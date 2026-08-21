
/* v8::internal::ProfileNode::FindChild(v8::internal::CodeEntry*, int) */

undefined8 __thiscall
v8::internal::ProfileNode::FindChild(ProfileNode *this,CodeEntry *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  CodeEntry *local_20;
  int local_18;
  
  local_20 = param_1;
  local_18 = param_2;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
          ::find<v8::internal::CodeEntryAndLineNumber>
                    ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
                      *)(this + 0x18),(CodeEntryAndLineNumber *)&local_20);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
  }
  return uVar2;
}

