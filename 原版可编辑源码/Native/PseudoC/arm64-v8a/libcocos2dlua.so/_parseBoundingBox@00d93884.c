
/* dragonBones::JSONDataParser::_parseBoundingBox(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

RectangleBoundingBoxData * __thiscall
dragonBones::JSONDataParser::_parseBoundingBox(JSONDataParser *this,GenericValue *param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined *__s1;
  int iVar4;
  undefined4 uVar5;
  size_t __n;
  RectangleBoundingBoxData *pRVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  void *__dest;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  __s1 = DataParser::SUB_TYPE;
                    /* try { // try from 00d93890 to 00e93897 has its CatchHandler @ 00d938d0 */
                    /* try { // try from 00d93898 to 00e938eb has its CatchHandler @ 00d93860 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar10 = DataParser::SUB_TYPE + -1;
  pcVar7 = pcVar10;
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
                    /* catch() { ... } // from try @ 00d93890 with catch @ 00d938d0 */
  piVar9 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar13 = (ulong)uVar2;
  piVar8 = piVar9 + uVar13 * 0xc;
  piVar12 = piVar9;
  if (uVar2 != 0) {
    uVar14 = (long)pcVar7 - (long)DataParser::SUB_TYPE;
    lVar11 = uVar13 * 0x30;
    piVar1 = piVar9;
    do {
      piVar12 = piVar1;
      iVar4 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar4 == (int)uVar14) {
        piVar1 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar12;
        }
        if ((piVar1 == (int *)__s1) || (iVar4 = memcmp(__s1,piVar1,uVar14 & 0xffffffff), iVar4 == 0)
           ) break;
      }
      lVar11 = lVar11 + -0x30;
      piVar1 = piVar12 + 0xc;
      piVar12 = piVar8;
    } while (lVar11 != 0);
  }
  pcVar7 = pcVar10;
  if (piVar8 == piVar12) {
LAB_00d93a94:
    iVar4 = _getNumber(param_1,__s1,0);
LAB_00d93aa8:
                    /* try { // try from 00d93aa8 to 00e93abf has its CatchHandler @ 00d953e4 */
    if (iVar4 == 2) goto LAB_00d93bb0;
LAB_00d93ab0:
    if (iVar4 == 1) {
      pRVar6 = (RectangleBoundingBoxData *)
               BaseObject::borrowObject<dragonBones::EllipseBoundingBoxData>();
    }
    else {
      if (iVar4 != 0) {
        pRVar6 = (RectangleBoundingBoxData *)0x0;
        goto LAB_00d93c2c;
      }
      pRVar6 = BaseObject::borrowObject<dragonBones::RectangleBoundingBoxData>();
                    /* try { // try from 00d93ac0 to 00e93ad7 has its CatchHandler @ 00d953c4 */
    }
  }
  else {
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    if (uVar2 != 0) {
      lVar11 = uVar13 * 0x30;
      do {
        iVar4 = *piVar9;
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar7 - (long)__s1)) {
          piVar12 = *(int **)(piVar9 + 2);
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            piVar12 = piVar9;
          }
          if ((piVar12 == (int *)__s1) ||
             (iVar4 = memcmp(__s1,piVar12,(long)pcVar7 - (long)__s1 & 0xffffffff), iVar4 == 0))
          goto LAB_00d939ec;
        }
        lVar11 = lVar11 + -0x30;
        piVar9 = piVar9 + 0xc;
      } while (lVar11 != 0);
LAB_00d93a84:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
                    /* try { // try from 00d93a90 to 00e93a97 has its CatchHandler @ 00d9538c */
      DAT_01785a60 = 0;
      goto LAB_00d93a94;
    }
LAB_00d939ec:
                    /* try { // try from 00d939ec to 00e93a8f has its CatchHandler @ 00d939ec
                       catch() { ... } // from try @ 00d939ec with catch @ 00d939ec
                       catch() { ... } // from try @ 00d946c8 with catch @ 00d939ec
                       catch() { ... } // from try @ 00d95248 with catch @ 00d939ec */
    if (piVar9 == piVar8) goto LAB_00d93a84;
    if ((*(byte *)((long)piVar9 + 0x2f) >> 2 & 1) == 0) goto LAB_00d93a94;
    do {
      pcVar10 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    uVar2 = *(uint *)param_1;
    piVar12 = *(int **)(param_1 + 8);
    piVar9 = piVar12;
    if (uVar2 == 0) {
LAB_00d93ae8:
      if (piVar9 == piVar12 + (ulong)uVar2 * 0xc) goto LAB_00d93b08;
      piVar12 = piVar9 + 6;
      if ((*(byte *)((long)piVar9 + 0x2f) >> 4 & 1) == 0) goto LAB_00d93b18;
    }
    else {
      lVar11 = (ulong)uVar2 * 0x30;
      do {
        iVar4 = *piVar9;
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar10 - (long)__s1)) {
          piVar8 = *(int **)(piVar9 + 2);
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            piVar8 = piVar9;
          }
          if ((piVar8 == (int *)__s1) ||
             (iVar4 = memcmp(__s1,piVar8,(long)pcVar10 - (long)__s1 & 0xffffffff), iVar4 == 0))
          goto LAB_00d93ae8;
        }
        lVar11 = lVar11 + -0x30;
        piVar9 = piVar9 + 0xc;
      } while (lVar11 != 0);
LAB_00d93b08:
      piVar12 = (int *)&rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::
                        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                        ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00d93b18:
      piVar12 = *(int **)(piVar12 + 2);
    }
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    __n = strlen((char *)piVar12);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_80 | 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00d93b78;
    }
    else {
      uVar13 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar13);
      local_80 = uVar13 | 1;
      local_78 = __n;
      local_70 = __dest;
LAB_00d93b78:
      memcpy(__dest,piVar12,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    iVar4 = DataParser::_getBoundingBoxType((basic_string *)&local_80);
    if ((local_80 & 1) == 0) goto LAB_00d93aa8;
    operator_delete(local_70);
    if (iVar4 != 2) goto LAB_00d93ab0;
LAB_00d93bb0:
    pRVar6 = (RectangleBoundingBoxData *)(**(code **)(*(long *)this + 0x68))(this,param_1);
  }
  if (pRVar6 != (RectangleBoundingBoxData *)0x0) {
    uVar5 = _getNumber(param_1,DataParser::COLOR,0);
    *(undefined4 *)(pRVar6 + 0x14) = uVar5;
    if (*(uint *)(pRVar6 + 0x10) < 2) {
      uVar5 = _getNumber(param_1,DataParser::WIDTH,0.0);
      *(undefined4 *)(pRVar6 + 0x18) = uVar5;
      uVar5 = _getNumber(param_1,DataParser::HEIGHT,0.0);
      *(undefined4 *)(pRVar6 + 0x1c) = uVar5;
    }
  }
LAB_00d93c2c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pRVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

