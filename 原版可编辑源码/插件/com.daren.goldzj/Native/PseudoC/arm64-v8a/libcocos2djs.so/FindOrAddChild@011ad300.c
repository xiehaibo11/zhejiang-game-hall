
/* v8::internal::ProfileNode::FindOrAddChild(v8::internal::CodeEntry*, int) */

ProfileNode * __thiscall
v8::internal::ProfileNode::FindOrAddChild(ProfileNode *this,CodeEntry *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ProfileNode *pPVar3;
  vector<v8::internal::ProfileNode_const*,std::__ndk1::allocator<v8::internal::ProfileNode_const*>>
  *this_00;
  ProfileNode *local_60;
  CodeEntry *local_58;
  int local_50;
  CodeEntry **local_28;
  
  local_58 = param_1;
  local_50 = param_2;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
          ::find<v8::internal::CodeEntryAndLineNumber>
                    ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
                      *)(this + 0x18),(CodeEntryAndLineNumber *)&local_58);
  if (lVar2 == 0) {
    pPVar3 = operator_new(0xb0);
    lVar2 = *(long *)this;
    *(undefined4 *)(pPVar3 + 0x10) = 0;
    *(int *)(pPVar3 + 0x40) = param_2;
    *(long *)(pPVar3 + 0x48) = 0;
    *(long *)(pPVar3 + 0x50) = 0;
    *(long *)(pPVar3 + 0x58) = 0;
    *(ProfileNode **)(pPVar3 + 0x60) = this;
    *(long *)(pPVar3 + 0x30) = 0;
    *(long *)(pPVar3 + 0x28) = 0;
    *(long *)(pPVar3 + 0x20) = 0;
    *(long *)(pPVar3 + 0x18) = 0;
    *(undefined4 *)(pPVar3 + 0x38) = 0x3f800000;
    *(long *)pPVar3 = lVar2;
    *(CodeEntry **)(pPVar3 + 8) = param_1;
    iVar1 = *(int *)(lVar2 + 0x18);
    *(int *)(lVar2 + 0x18) = iVar1 + 1;
    *(int *)(pPVar3 + 0x68) = iVar1;
    *(long *)(pPVar3 + 0x78) = 0;
    *(long *)(pPVar3 + 0x70) = 0;
    *(long *)(pPVar3 + 0x88) = 0;
    *(long *)(pPVar3 + 0x80) = 0;
    *(undefined4 *)(pPVar3 + 0x90) = 0x3f800000;
    *(long *)(pPVar3 + 0xa8) = 0;
    this_00 = *(vector<v8::internal::ProfileNode_const*,std::__ndk1::allocator<v8::internal::ProfileNode_const*>>
                **)pPVar3;
    *(long *)(pPVar3 + 0x98) = 0;
    *(long *)(pPVar3 + 0xa0) = 0;
    if (*(undefined8 **)(this_00 + 8) == *(undefined8 **)(this_00 + 0x10)) {
      local_58 = (CodeEntry *)pPVar3;
      std::__ndk1::
      vector<v8::internal::ProfileNode_const*,std::__ndk1::allocator<v8::internal::ProfileNode_const*>>
      ::__push_back_slow_path<v8::internal::ProfileNode_const*const&>
                (this_00,(ProfileNode **)&local_58);
    }
    else {
      **(undefined8 **)(this_00 + 8) = pPVar3;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
    }
    local_28 = &local_58;
    local_60 = pPVar3;
    local_58 = param_1;
    local_50 = param_2;
    lVar2 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
            ::
            __emplace_unique_key_args<v8::internal::CodeEntryAndLineNumber,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::CodeEntryAndLineNumber&&>,std::__ndk1::tuple<>>
                      ((CodeEntryAndLineNumber *)(this + 0x18),(piecewise_construct_t *)&local_58,
                       (tuple *)&DAT_019ddce0,(tuple *)&local_28);
    *(ProfileNode **)(lVar2 + 0x20) = pPVar3;
    if (*(undefined8 **)(this + 0x50) == *(undefined8 **)(this + 0x58)) {
      std::__ndk1::
      vector<v8::internal::ProfileNode*,std::__ndk1::allocator<v8::internal::ProfileNode*>>::
      __push_back_slow_path<v8::internal::ProfileNode*const&>
                ((vector<v8::internal::ProfileNode*,std::__ndk1::allocator<v8::internal::ProfileNode*>>
                  *)(this + 0x48),&local_60);
    }
    else {
      **(undefined8 **)(this + 0x50) = pPVar3;
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
    }
  }
  else {
    local_60 = *(ProfileNode **)(lVar2 + 0x20);
  }
  return local_60;
}

