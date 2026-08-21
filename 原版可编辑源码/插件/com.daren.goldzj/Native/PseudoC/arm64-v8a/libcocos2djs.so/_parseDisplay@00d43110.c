
/* dragonBones::JSONDataParser::_parseDisplay(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

undefined8 dragonBones::JSONDataParser::_parseDisplay(GenericValue *param_1)

{
  int *__s2;
  long lVar1;
  undefined *__s1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  size_t __n;
  JSONDataParser *in_x1;
  basic_string *in_x3;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  void *__dest;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_b0;
  size_t local_a8;
  void *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  byte local_80;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (void *)0x0;
  _getString(in_x1,(GenericValue *)DataParser::NAME,(char *)&local_98,in_x3);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  _getString(in_x1,(GenericValue *)DataParser::PATH,(char *)&local_b0,in_x3);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  __s1 = DataParser::TYPE;
  pcVar7 = DataParser::TYPE + -1;
  pcVar5 = pcVar7;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar8 = *(int **)(in_x1 + 8);
  uVar3 = *(uint *)in_x1;
  uVar12 = (ulong)uVar3;
  piVar10 = piVar8 + uVar12 * 0xc;
  piVar11 = piVar8;
  if (uVar3 != 0) {
    uVar13 = (long)pcVar5 - (long)DataParser::TYPE;
    lVar6 = uVar12 * 0x30;
    piVar9 = piVar8;
    do {
      iVar2 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar2 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar2 == (int)uVar13) {
        __s2 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          __s2 = piVar9;
        }
        piVar11 = piVar9;
        if ((__s2 == (int *)__s1) || (iVar2 = memcmp(__s1,__s2,uVar13 & 0xffffffff), iVar2 == 0))
        break;
      }
      lVar6 = lVar6 + -0x30;
      piVar9 = piVar9 + 0xc;
      piVar11 = piVar10;
    } while (lVar6 != 0);
  }
  pcVar5 = pcVar7;
  if (piVar10 == piVar11) {
LAB_00d43380:
    uVar12 = _getNumber((GenericValue *)in_x1,__s1,0);
    uVar12 = uVar12 & 0xffffffff;
  }
  else {
    do {
      pcVar5 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    if (uVar3 != 0) {
      lVar6 = uVar12 * 0x30;
      do {
        iVar2 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar2 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar2 == (int)((long)pcVar5 - (long)__s1)) {
          piVar11 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar11 = piVar8;
          }
          if ((piVar11 == (int *)__s1) ||
             (iVar2 = memcmp(__s1,piVar11,(long)pcVar5 - (long)__s1 & 0xffffffff), iVar2 == 0))
          goto LAB_00d432dc;
        }
        lVar6 = lVar6 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar6 != 0);
LAB_00d43370:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
      goto LAB_00d43380;
    }
LAB_00d432dc:
    if (piVar8 == piVar10) goto LAB_00d43370;
    if ((*(byte *)((long)piVar8 + 0x2f) >> 2 & 1) == 0) goto LAB_00d43380;
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    uVar3 = *(uint *)in_x1;
    piVar11 = *(int **)(in_x1 + 8);
    piVar8 = piVar11;
    if (uVar3 == 0) {
LAB_00d438e0:
      if (piVar8 == piVar11 + (ulong)uVar3 * 0xc) goto LAB_00d43900;
      piVar11 = piVar8 + 6;
      if ((*(byte *)((long)piVar8 + 0x2f) >> 4 & 1) == 0) goto LAB_00d43910;
    }
    else {
      lVar6 = (ulong)uVar3 * 0x30;
      do {
        iVar2 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar2 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar2 == (int)((long)pcVar7 - (long)__s1)) {
          piVar10 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar8;
          }
          if ((piVar10 == (int *)__s1) ||
             (iVar2 = memcmp(__s1,piVar10,(long)pcVar7 - (long)__s1 & 0xffffffff), iVar2 == 0))
          goto LAB_00d438e0;
        }
        lVar6 = lVar6 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar6 != 0);
LAB_00d43900:
      piVar11 = (int *)&rapidjson::
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
LAB_00d43910:
      piVar11 = *(int **)(piVar11 + 2);
    }
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = (void *)0x0;
    __n = strlen((char *)piVar11);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_b0 | 1);
      local_b0 = CONCAT71(local_b0._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00d43970;
    }
    else {
      uVar12 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar12);
      local_b0 = uVar12 | 1;
      local_a8 = __n;
      local_a0 = __dest;
LAB_00d43970:
      memcpy(__dest,piVar11,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    uVar3 = DataParser::_getDisplayType((basic_string *)&local_b0);
    uVar12 = (ulong)uVar3;
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
      goto joined_r0x00d439a4;
    }
  }
  uVar3 = (uint)uVar12;
joined_r0x00d439a4:
  if (uVar3 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00d433b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&UNK_00d433bc + (ulong)(byte)(&DAT_01948bb4)[uVar12] * 4))();
    return uVar4;
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

