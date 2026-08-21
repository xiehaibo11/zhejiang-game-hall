
/* dragonBones::BinaryDataParser::_parseArray(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
dragonBones::BinaryDataParser::_parseArray(BinaryDataParser *this,GenericValue *param_1)

{
  int *__s2;
  uint uVar1;
  undefined *__s1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  
  __s1 = DataParser::OFFSET;
  pcVar3 = DataParser::OFFSET + -1;
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  uVar1 = *(uint *)param_1;
  piVar7 = *(int **)(param_1 + 8);
  piVar4 = piVar7;
  if (uVar1 == 0) {
LAB_00d3cc58:
    if (piVar4 != piVar7 + (ulong)uVar1 * 0xc) {
      piVar4 = piVar4 + 6;
      goto LAB_00d3cc80;
    }
  }
  else {
    uVar8 = (long)pcVar3 - (long)DataParser::OFFSET;
    lVar9 = (ulong)uVar1 * 0x30;
    do {
      iVar2 = *piVar4;
      if ((*(ushort *)((long)piVar4 + 0x16) & 0x1000) != 0) {
        iVar2 = 0x15 - *(char *)((long)piVar4 + 0x15);
      }
      if (iVar2 == (int)uVar8) {
        __s2 = *(int **)(piVar4 + 2);
        if ((*(ushort *)((long)piVar4 + 0x16) & 0x1000) != 0) {
          __s2 = piVar4;
        }
        if ((__s2 == (int *)__s1) || (iVar2 = memcmp(__s1,__s2,uVar8 & 0xffffffff), iVar2 == 0))
        goto LAB_00d3cc58;
      }
      lVar9 = lVar9 + -0x30;
      piVar4 = piVar4 + 0xc;
    } while (lVar9 != 0);
  }
  piVar4 = (int *)&rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::
                   operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                   ::buffer;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01d38c18 = 0;
  DAT_01d38c20 = 0;
LAB_00d3cc80:
  lVar5 = *(long *)(this + 0x248);
  lVar6 = *(long *)(this + 0x28);
  *(long *)(lVar6 + 0xa8) = lVar5;
  uVar1 = **(uint **)(piVar4 + 2);
  lVar5 = lVar5 + (ulong)*(uint *)(this + 0x240);
  *(ulong *)(this + 0x250) = lVar5 + (ulong)uVar1;
  *(ulong *)(lVar6 + 0xb0) = lVar5 + (ulong)uVar1;
  lVar9 = lVar5 + (ulong)*(uint *)(*(long *)(piVar4 + 2) + 0x30);
  *(long *)(this + 600) = lVar9;
  *(long *)(lVar6 + 0xb8) = lVar9;
  lVar9 = lVar5 + (ulong)*(uint *)(*(long *)(piVar4 + 2) + 0x60);
  *(long *)(this + 0x260) = lVar9;
  *(long *)(lVar6 + 0xc0) = lVar9;
  lVar9 = lVar5 + (ulong)*(uint *)(*(long *)(piVar4 + 2) + 0x90);
  *(long *)(this + 0x268) = lVar9;
  *(long *)(lVar6 + 200) = lVar9;
  lVar9 = lVar5 + (ulong)*(uint *)(*(long *)(piVar4 + 2) + 0xc0);
  *(long *)(this + 0x270) = lVar9;
  *(long *)(lVar6 + 0xd0) = lVar9;
  lVar5 = lVar5 + (ulong)*(uint *)(*(long *)(piVar4 + 2) + 0xf0);
  *(long *)(this + 0x278) = lVar5;
  *(long *)(lVar6 + 0xd8) = lVar5;
  return;
}

