
/* v8::internal::RegExpBytecodeGenerator::CheckBitInTable(v8::internal::Handle<v8::internal::ByteArray>,
   v8::internal::Label*) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::CheckBitInTable
          (RegExpBytecodeGenerator *this,long *param_2,RegExpBytecodeGenerator *param_3)

{
  char *pcVar1;
  RegExpBytecodeGenerator *pRVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  RegExpBytecodeGenerator *pRVar14;
  long lVar15;
  uint local_34;
  
  pRVar14 = this + 0x38;
  iVar12 = *(int *)pRVar14;
  if (*(int *)(this + 0x30) <= iVar12 + 3) {
    Expand(this);
    iVar12 = *(int *)(this + 0x38);
  }
  *(undefined4 *)(*(long *)(this + 0x28) + (long)iVar12) = 0x22;
  iVar12 = *(int *)(this + 0x38);
  pRVar2 = this + 0x3c;
  if (param_3 != (RegExpBytecodeGenerator *)0x0) {
    pRVar2 = param_3;
  }
  *(int *)(this + 0x38) = iVar12 + 4;
  local_34 = 0;
  uVar3 = *(uint *)pRVar2;
  if ((int)uVar3 < 0) {
    local_34 = ~uVar3;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
    ::__emplace_unique_key_args<int,int&,int&>
              ((__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
                *)(this + 0x50),(int *)pRVar14,(int *)pRVar14,(int *)&local_34);
  }
  else {
    if (uVar3 != 0) {
      local_34 = uVar3 - 1;
    }
    *(uint *)pRVar2 = iVar12 + 5;
  }
  uVar3 = local_34;
  iVar12 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x30) <= iVar12 + 3) {
    Expand(this);
    iVar12 = *(int *)(this + 0x38);
  }
  *(uint *)(*(long *)(this + 0x28) + (long)iVar12) = uVar3;
  lVar15 = 0xe;
  iVar12 = *(int *)(this + 0x38) + 4;
  *(int *)(this + 0x38) = iVar12;
  do {
    pcVar1 = (char *)(lVar15 + *param_2);
    cVar5 = pcVar1[-7];
    cVar6 = pcVar1[-6];
    cVar7 = pcVar1[-5];
    cVar8 = pcVar1[-4];
    cVar9 = pcVar1[-3];
    cVar10 = pcVar1[-2];
    cVar11 = pcVar1[-1];
    cVar4 = *pcVar1;
    if (iVar12 == *(int *)(this + 0x30)) {
      Expand(this);
      iVar12 = *(int *)(this + 0x38);
    }
    *(char *)(*(long *)(this + 0x28) + (long)iVar12) =
         cVar5 != '\0' | (cVar6 != '\0') << 1 | (cVar7 != '\0') << 2 | (cVar8 != '\0') << 3 |
         (cVar9 != '\0') << 4 | (cVar10 != '\0') << 5 | (cVar11 != '\0') << 6 | (cVar4 != '\0') << 7
    ;
    uVar13 = lVar15 - 6;
    lVar15 = lVar15 + 8;
    iVar12 = *(int *)(this + 0x38) + 1;
    *(int *)(this + 0x38) = iVar12;
  } while (uVar13 < 0x80);
  return;
}

