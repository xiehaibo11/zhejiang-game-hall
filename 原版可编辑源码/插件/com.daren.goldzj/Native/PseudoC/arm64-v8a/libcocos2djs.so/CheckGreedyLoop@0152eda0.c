
/* v8::internal::RegExpBytecodeGenerator::CheckGreedyLoop(v8::internal::Label*) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::CheckGreedyLoop(RegExpBytecodeGenerator *this,Label *param_1)

{
  RegExpBytecodeGenerator *pRVar1;
  uint uVar2;
  int iVar3;
  RegExpBytecodeGenerator *pRVar4;
  uint local_14;
  
  pRVar4 = this + 0x38;
  iVar3 = *(int *)pRVar4;
  if (*(int *)(this + 0x30) <= iVar3 + 3) {
    Expand(this);
    iVar3 = *(int *)(this + 0x38);
  }
  *(undefined4 *)(*(long *)(this + 0x28) + (long)iVar3) = 0x31;
  iVar3 = *(int *)(this + 0x38);
  pRVar1 = this + 0x3c;
  if (param_1 != (Label *)0x0) {
    pRVar1 = (RegExpBytecodeGenerator *)param_1;
  }
  *(int *)(this + 0x38) = iVar3 + 4;
  local_14 = 0;
  uVar2 = *(uint *)pRVar1;
  if ((int)uVar2 < 0) {
    local_14 = ~uVar2;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
    ::__emplace_unique_key_args<int,int&,int&>
              ((__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
                *)(this + 0x50),(int *)pRVar4,(int *)pRVar4,(int *)&local_14);
  }
  else {
    if (uVar2 != 0) {
      local_14 = uVar2 - 1;
    }
    *(uint *)pRVar1 = iVar3 + 5;
  }
  uVar2 = local_14;
  iVar3 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x30) <= iVar3 + 3) {
    Expand(this);
    iVar3 = *(int *)(this + 0x38);
  }
  *(uint *)(*(long *)(this + 0x28) + (long)iVar3) = uVar2;
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 4;
  return;
}

