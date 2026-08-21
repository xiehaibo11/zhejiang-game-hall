
/* dragonBones::JSONDataParser::_parseBoundingBox(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

RectangleBoundingBoxData * __thiscall
dragonBones::JSONDataParser::_parseBoundingBox(JSONDataParser *this,GenericValue *param_1)

{
  int *__s2;
  uint uVar1;
  long lVar2;
  undefined *__s1;
  int iVar3;
  undefined4 uVar4;
  RectangleBoundingBoxData *pRVar5;
  size_t __n;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  void *__dest;
  int *piVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  __s1 = DataParser::SUB_TYPE;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pcVar9 = DataParser::SUB_TYPE + -1;
  pcVar6 = pcVar9;
  do {
    pcVar6 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  piVar8 = *(int **)(param_1 + 8);
  uVar1 = *(uint *)param_1;
  uVar13 = (ulong)uVar1;
  piVar7 = piVar8 + uVar13 * 0xc;
  piVar12 = piVar8;
  if (uVar1 != 0) {
    uVar14 = (long)pcVar6 - (long)DataParser::SUB_TYPE;
    lVar11 = uVar13 * 0x30;
    piVar10 = piVar8;
    do {
      iVar3 = *piVar10;
      if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - *(char *)((long)piVar10 + 0x15);
      }
      if (iVar3 == (int)uVar14) {
        __s2 = *(int **)(piVar10 + 2);
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          __s2 = piVar10;
        }
        piVar12 = piVar10;
        if ((__s2 == (int *)__s1) || (iVar3 = memcmp(__s1,__s2,uVar14 & 0xffffffff), iVar3 == 0))
        break;
      }
      lVar11 = lVar11 + -0x30;
      piVar10 = piVar10 + 0xc;
      piVar12 = piVar7;
    } while (lVar11 != 0);
  }
  pcVar6 = pcVar9;
  if (piVar7 == piVar12) {
LAB_00d456ac:
    iVar3 = _getNumber(param_1,__s1,0);
LAB_00d456c0:
    if (iVar3 != 2) goto LAB_00d456c8;
LAB_00d457c8:
    pRVar5 = (RectangleBoundingBoxData *)(**(code **)(*(long *)this + 0x68))(this,param_1);
  }
  else {
    do {
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    if (uVar1 != 0) {
      lVar11 = uVar13 * 0x30;
      do {
        iVar3 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar3 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar3 == (int)((long)pcVar6 - (long)__s1)) {
          piVar12 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar12 = piVar8;
          }
          if ((piVar12 == (int *)__s1) ||
             (iVar3 = memcmp(__s1,piVar12,(long)pcVar6 - (long)__s1 & 0xffffffff), iVar3 == 0))
          goto LAB_00d45608;
        }
        lVar11 = lVar11 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar11 != 0);
LAB_00d4569c:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
      goto LAB_00d456ac;
    }
LAB_00d45608:
    if (piVar8 == piVar7) goto LAB_00d4569c;
    if ((*(byte *)((long)piVar8 + 0x2f) >> 2 & 1) == 0) goto LAB_00d456ac;
    do {
      pcVar9 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    uVar1 = *(uint *)param_1;
    piVar12 = *(int **)(param_1 + 8);
    piVar8 = piVar12;
    if (uVar1 == 0) {
LAB_00d45700:
      if (piVar8 == piVar12 + (ulong)uVar1 * 0xc) goto LAB_00d45720;
      piVar12 = piVar8 + 6;
      if ((*(byte *)((long)piVar8 + 0x2f) >> 4 & 1) == 0) goto LAB_00d45730;
    }
    else {
      lVar11 = (ulong)uVar1 * 0x30;
      do {
        iVar3 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar3 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar3 == (int)((long)pcVar9 - (long)__s1)) {
          piVar7 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar7 = piVar8;
          }
          if ((piVar7 == (int *)__s1) ||
             (iVar3 = memcmp(__s1,piVar7,(long)pcVar9 - (long)__s1 & 0xffffffff), iVar3 == 0))
          goto LAB_00d45700;
        }
        lVar11 = lVar11 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar11 != 0);
LAB_00d45720:
      piVar12 = (int *)&rapidjson::
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
LAB_00d45730:
      piVar12 = *(int **)(piVar12 + 2);
    }
    local_80 = 0;
    local_78 = 0;
    local_70 = (void *)0x0;
    __n = strlen((char *)piVar12);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_80 | 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00d45790;
    }
    else {
      uVar13 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar13);
      local_80 = uVar13 | 1;
      local_78 = __n;
      local_70 = __dest;
LAB_00d45790:
      memcpy(__dest,piVar12,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    iVar3 = DataParser::_getBoundingBoxType((basic_string *)&local_80);
    if ((local_80 & 1) == 0) goto LAB_00d456c0;
    operator_delete(local_70);
    if (iVar3 == 2) goto LAB_00d457c8;
LAB_00d456c8:
    if (iVar3 == 1) {
      pRVar5 = (RectangleBoundingBoxData *)
               BaseObject::borrowObject<dragonBones::EllipseBoundingBoxData>();
    }
    else {
      if (iVar3 != 0) {
        pRVar5 = (RectangleBoundingBoxData *)0x0;
        goto LAB_00d45844;
      }
      pRVar5 = BaseObject::borrowObject<dragonBones::RectangleBoundingBoxData>();
    }
  }
  if (pRVar5 != (RectangleBoundingBoxData *)0x0) {
    uVar4 = _getNumber(param_1,DataParser::COLOR,0);
    *(undefined4 *)(pRVar5 + 0x14) = uVar4;
    if (*(uint *)(pRVar5 + 0x10) < 2) {
      uVar4 = _getNumber(param_1,DataParser::WIDTH,0.0);
      *(undefined4 *)(pRVar5 + 0x18) = uVar4;
      uVar4 = _getNumber(param_1,DataParser::HEIGHT,0.0);
      *(undefined4 *)(pRVar5 + 0x1c) = uVar4;
    }
  }
LAB_00d45844:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return pRVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

