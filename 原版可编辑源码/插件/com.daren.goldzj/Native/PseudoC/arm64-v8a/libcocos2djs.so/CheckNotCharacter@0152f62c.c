
/* v8::internal::RegExpBytecodeGenerator::CheckNotCharacter(unsigned int, v8::internal::Label*) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::CheckNotCharacter
          (RegExpBytecodeGenerator *this,uint param_1,Label *param_2)

{
  RegExpBytecodeGenerator *pRVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_34;
  
  if (param_1 < 0x800000) {
    iVar4 = *(int *)(this + 0x38);
    if (*(int *)(this + 0x30) <= iVar4 + 3) {
      Expand(this);
      iVar4 = *(int *)(this + 0x38);
    }
    *(uint *)(*(long *)(this + 0x28) + (long)iVar4) = param_1 << 8 | 0x1a;
  }
  else {
    iVar4 = *(int *)(this + 0x38);
    if (*(int *)(this + 0x30) <= iVar4 + 3) {
      Expand(this);
      iVar4 = *(int *)(this + 0x38);
    }
    *(undefined4 *)(*(long *)(this + 0x28) + (long)iVar4) = 0x19;
    iVar2 = *(int *)(this + 0x38);
    iVar4 = iVar2 + 4;
    *(int *)(this + 0x38) = iVar4;
    if (*(int *)(this + 0x30) <= iVar2 + 7) {
      Expand(this);
      iVar4 = *(int *)(this + 0x38);
    }
    *(uint *)(*(long *)(this + 0x28) + (long)iVar4) = param_1;
  }
  iVar4 = *(int *)(this + 0x38);
  pRVar1 = this + 0x3c;
  if (param_2 != (Label *)0x0) {
    pRVar1 = (RegExpBytecodeGenerator *)param_2;
  }
  *(int *)(this + 0x38) = iVar4 + 4;
  local_34 = 0;
  uVar3 = *(uint *)pRVar1;
  if ((int)uVar3 < 0) {
    local_34 = ~uVar3;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
    ::__emplace_unique_key_args<int,int&,int&>
              ((__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
                *)(this + 0x50),(int *)(this + 0x38),(int *)(this + 0x38),(int *)&local_34);
  }
  else {
    if (uVar3 != 0) {
      local_34 = uVar3 - 1;
    }
    *(uint *)pRVar1 = iVar4 + 5;
  }
  uVar3 = local_34;
  iVar4 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x30) <= iVar4 + 3) {
    Expand(this);
    iVar4 = *(int *)(this + 0x38);
  }
  *(uint *)(*(long *)(this + 0x28) + (long)iVar4) = uVar3;
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 4;
  return;
}

