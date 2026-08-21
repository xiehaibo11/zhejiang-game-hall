
/* v8::internal::RegExpBytecodeGenerator::LoadCurrentCharacterImpl(int, v8::internal::Label*, bool,
   int, int) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::LoadCurrentCharacterImpl
          (RegExpBytecodeGenerator *this,int param_1,Label *param_2,bool param_3,int param_4,
          int param_5)

{
  RegExpBytecodeGenerator *pRVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  RegExpBytecodeGenerator *pRVar5;
  uint local_48;
  uint local_44;
  
  if ((param_4 < param_5) && (param_3)) {
    pRVar5 = this + 0x38;
    iVar3 = *(int *)pRVar5;
    if (*(int *)(this + 0x30) <= iVar3 + 3) {
      Expand(this);
      iVar3 = *(int *)(this + 0x38);
    }
    *(uint *)(*(long *)(this + 0x28) + (long)iVar3) = (param_5 + param_1) * 0x100 | 0x34;
    iVar3 = *(int *)(this + 0x38);
    pRVar1 = this + 0x3c;
    if (param_2 != (Label *)0x0) {
      pRVar1 = (RegExpBytecodeGenerator *)param_2;
    }
    *(int *)(this + 0x38) = iVar3 + 4;
    local_48 = 0;
    uVar4 = *(uint *)pRVar1;
    if ((int)uVar4 < 0) {
      local_48 = ~uVar4;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
      ::__emplace_unique_key_args<int,int&,int&>
                ((__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
                  *)(this + 0x50),(int *)pRVar5,(int *)pRVar5,(int *)&local_48);
    }
    else {
      if (uVar4 != 0) {
        local_48 = uVar4 - 1;
      }
      *(uint *)pRVar1 = iVar3 + 5;
    }
    uVar4 = local_48;
    iVar3 = *(int *)(this + 0x38);
    if (*(int *)(this + 0x30) <= iVar3 + 3) {
      Expand(this);
      iVar3 = *(int *)(this + 0x38);
    }
    *(uint *)(*(long *)(this + 0x28) + (long)iVar3) = uVar4;
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + 4;
  }
  else if (param_3) {
    if (param_4 == 4) {
      uVar4 = 0x15;
    }
    else {
      uVar4 = 0x13;
      if (param_4 != 2) {
        uVar4 = 0x11;
      }
    }
    bVar2 = true;
    goto LAB_0152efec;
  }
  if (param_4 == 4) {
    bVar2 = false;
    uVar4 = 0x16;
  }
  else {
    bVar2 = false;
    uVar4 = 0x14;
    if (param_4 != 2) {
      uVar4 = 0x12;
    }
  }
LAB_0152efec:
  pRVar5 = this + 0x38;
  iVar3 = *(int *)pRVar5;
  if (*(int *)(this + 0x30) <= iVar3 + 3) {
    Expand(this);
    iVar3 = *(int *)(this + 0x38);
  }
  *(uint *)(*(long *)(this + 0x28) + (long)iVar3) = uVar4 | param_1 << 8;
  iVar3 = *(int *)(this + 0x38);
  *(int *)(this + 0x38) = iVar3 + 4;
  if (bVar2) {
    pRVar1 = this + 0x3c;
    if (param_2 != (Label *)0x0) {
      pRVar1 = (RegExpBytecodeGenerator *)param_2;
    }
    local_44 = 0;
    uVar4 = *(uint *)pRVar1;
    if ((int)uVar4 < 0) {
      local_44 = ~uVar4;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
      ::__emplace_unique_key_args<int,int&,int&>
                ((__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
                  *)(this + 0x50),(int *)pRVar5,(int *)pRVar5,(int *)&local_44);
    }
    else {
      if (uVar4 != 0) {
        local_44 = uVar4 - 1;
      }
      *(uint *)pRVar1 = iVar3 + 5;
    }
    uVar4 = local_44;
    iVar3 = *(int *)(this + 0x38);
    if (*(int *)(this + 0x30) <= iVar3 + 3) {
      Expand(this);
      iVar3 = *(int *)(this + 0x38);
    }
    *(uint *)(*(long *)(this + 0x28) + (long)iVar3) = uVar4;
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + 4;
  }
  return;
}

