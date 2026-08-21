
/* v8::internal::RegExpBytecodeGenerator::CheckCharacterNotInRange(unsigned short, unsigned short,
   v8::internal::Label*) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::CheckCharacterNotInRange
          (RegExpBytecodeGenerator *this,ushort param_1,ushort param_2,Label *param_3)

{
  RegExpBytecodeGenerator *pRVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  RegExpBytecodeGenerator *pRVar5;
  uint local_24;
  
  pRVar5 = this + 0x38;
  iVar4 = *(int *)pRVar5;
  if (*(int *)(this + 0x30) <= iVar4 + 3) {
    Expand(this);
    iVar4 = *(int *)(this + 0x38);
  }
  *(undefined4 *)(*(long *)(this + 0x28) + (long)iVar4) = 0x21;
  iVar2 = *(int *)(this + 0x38);
  iVar4 = iVar2 + 4;
  *(int *)(this + 0x38) = iVar4;
  if (*(int *)(this + 0x30) <= iVar2 + 5) {
    Expand(this);
    iVar4 = *(int *)(this + 0x38);
  }
  *(ushort *)(*(long *)(this + 0x28) + (long)iVar4) = param_1;
  iVar2 = *(int *)(this + 0x38);
  iVar4 = iVar2 + 2;
  *(int *)(this + 0x38) = iVar4;
  if (*(int *)(this + 0x30) <= iVar2 + 3) {
    Expand(this);
    iVar4 = *(int *)(this + 0x38);
  }
  *(ushort *)(*(long *)(this + 0x28) + (long)iVar4) = param_2;
  iVar4 = *(int *)(this + 0x38);
  pRVar1 = this + 0x3c;
  if (param_3 != (Label *)0x0) {
    pRVar1 = (RegExpBytecodeGenerator *)param_3;
  }
  *(int *)(this + 0x38) = iVar4 + 2;
  local_24 = 0;
  uVar3 = *(uint *)pRVar1;
  if ((int)uVar3 < 0) {
    local_24 = ~uVar3;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
    ::__emplace_unique_key_args<int,int&,int&>
              ((__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
                *)(this + 0x50),(int *)pRVar5,(int *)pRVar5,(int *)&local_24);
  }
  else {
    if (uVar3 != 0) {
      local_24 = uVar3 - 1;
    }
    *(uint *)pRVar1 = iVar4 + 3;
  }
  uVar3 = local_24;
  iVar4 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x30) <= iVar4 + 3) {
    Expand(this);
    iVar4 = *(int *)(this + 0x38);
  }
  *(uint *)(*(long *)(this + 0x28) + (long)iVar4) = uVar3;
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 4;
  return;
}

