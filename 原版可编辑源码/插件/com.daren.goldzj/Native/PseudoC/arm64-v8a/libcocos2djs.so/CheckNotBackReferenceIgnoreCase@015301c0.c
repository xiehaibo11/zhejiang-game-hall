
/* v8::internal::RegExpBytecodeGenerator::CheckNotBackReferenceIgnoreCase(int, bool, bool,
   v8::internal::Label*) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::CheckNotBackReferenceIgnoreCase
          (RegExpBytecodeGenerator *this,int param_1,bool param_2,bool param_3,Label *param_4)

{
  RegExpBytecodeGenerator *pRVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  RegExpBytecodeGenerator *pRVar5;
  uint local_34;
  
  pRVar5 = this + 0x38;
  iVar2 = *(int *)pRVar5;
  uVar3 = 0x29;
  if (param_3) {
    uVar3 = 0x2a;
  }
  uVar4 = 0x26;
  if (param_3) {
    uVar4 = 0x27;
  }
  if (!param_2) {
    uVar3 = uVar4;
  }
  if (*(int *)(this + 0x30) <= iVar2 + 3) {
    Expand(this);
    iVar2 = *(int *)(this + 0x38);
  }
  *(uint *)(*(long *)(this + 0x28) + (long)iVar2) = uVar3 | param_1 << 8;
  iVar2 = *(int *)(this + 0x38);
  pRVar1 = this + 0x3c;
  if (param_4 != (Label *)0x0) {
    pRVar1 = (RegExpBytecodeGenerator *)param_4;
  }
  *(int *)(this + 0x38) = iVar2 + 4;
  local_34 = 0;
  uVar3 = *(uint *)pRVar1;
  if ((int)uVar3 < 0) {
    local_34 = ~uVar3;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
    ::__emplace_unique_key_args<int,int&,int&>
              ((__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
                *)(this + 0x50),(int *)pRVar5,(int *)pRVar5,(int *)&local_34);
  }
  else {
    if (uVar3 != 0) {
      local_34 = uVar3 - 1;
    }
    *(uint *)pRVar1 = iVar2 + 5;
  }
  uVar3 = local_34;
  iVar2 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x30) <= iVar2 + 3) {
    Expand(this);
    iVar2 = *(int *)(this + 0x38);
  }
  *(uint *)(*(long *)(this + 0x28) + (long)iVar2) = uVar3;
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 4;
  return;
}

