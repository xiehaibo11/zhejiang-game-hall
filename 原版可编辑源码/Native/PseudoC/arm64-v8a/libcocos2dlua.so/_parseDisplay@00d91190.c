
/* dragonBones::JSONDataParser::_parseDisplay(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

undefined8 dragonBones::JSONDataParser::_parseDisplay(GenericValue *param_1)

{
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
  ulong uVar7;
  char *pcVar8;
  void *__dest;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  ulong local_b0;
  size_t local_a8;
  void *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  byte local_80;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  _getString(in_x1,(GenericValue *)DataParser::NAME,(char *)&local_98,in_x3);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  _getString(in_x1,(GenericValue *)DataParser::PATH,(char *)&local_b0,in_x3);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  __s1 = DataParser::TYPE;
  pcVar8 = DataParser::TYPE + -1;
  pcVar5 = pcVar8;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar9 = *(int **)(in_x1 + 8);
  uVar3 = *(uint *)in_x1;
  uVar7 = (ulong)uVar3;
  piVar10 = piVar9 + uVar7 * 0xc;
  piVar11 = piVar9;
  if (uVar3 != 0) {
    uVar12 = (long)pcVar5 - (long)DataParser::TYPE;
    lVar6 = uVar7 * 0x30;
    piVar13 = piVar9;
    do {
      piVar11 = piVar13;
      iVar2 = *piVar11;
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        iVar2 = 0x15 - *(char *)((long)piVar11 + 0x15);
      }
      if (iVar2 == (int)uVar12) {
        piVar13 = *(int **)(piVar11 + 2);
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          piVar13 = piVar11;
        }
        if ((piVar13 == (int *)__s1) ||
           (iVar2 = memcmp(__s1,piVar13,uVar12 & 0xffffffff), iVar2 == 0)) break;
      }
      lVar6 = lVar6 + -0x30;
      piVar13 = piVar11 + 0xc;
      piVar11 = piVar10;
    } while (lVar6 != 0);
  }
  piVar13 = (int *)&rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::
                    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                    ::buffer;
  pcVar5 = pcVar8;
  if (piVar10 == piVar11) {
LAB_00d91408:
                    /* try { // try from 00d91418 to 00e9141f has its CatchHandler @ 00d91454 */
    uVar7 = _getNumber((GenericValue *)in_x1,__s1,0);
    uVar7 = uVar7 & 0xffffffff;
  }
  else {
    do {
      pcVar5 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    if (uVar3 != 0) {
      lVar6 = uVar7 * 0x30;
      do {
        iVar2 = *piVar9;
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          iVar2 = 0x15 - *(char *)((long)piVar9 + 0x15);
        }
        if (iVar2 == (int)((long)pcVar5 - (long)__s1)) {
          piVar11 = *(int **)(piVar9 + 2);
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            piVar11 = piVar9;
          }
          if ((piVar11 == (int *)__s1) ||
             (iVar2 = memcmp(__s1,piVar11,(long)pcVar5 - (long)__s1 & 0xffffffff), iVar2 == 0))
          goto LAB_00d91368;
        }
        lVar6 = lVar6 + -0x30;
        piVar9 = piVar9 + 0xc;
      } while (lVar6 != 0);
LAB_00d91400:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      goto LAB_00d91408;
    }
LAB_00d91368:
    if (piVar9 == piVar10) goto LAB_00d91400;
    if ((*(byte *)((long)piVar9 + 0x2f) >> 2 & 1) == 0) goto LAB_00d91408;
    do {
      pcVar8 = pcVar8 + 1;
    } while (*pcVar8 != '\0');
    uVar3 = *(uint *)in_x1;
    piVar11 = *(int **)(in_x1 + 8);
    piVar9 = piVar11;
    if (uVar3 == 0) {
LAB_00d919a4:
      if (piVar9 == piVar11 + (ulong)uVar3 * 0xc) goto LAB_00d919c4;
      piVar13 = piVar9 + 6;
      if ((*(byte *)((long)piVar9 + 0x2f) >> 4 & 1) == 0) goto LAB_00d919d0;
    }
    else {
      lVar6 = (ulong)uVar3 * 0x30;
      do {
        iVar2 = *piVar9;
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          iVar2 = 0x15 - *(char *)((long)piVar9 + 0x15);
        }
        if (iVar2 == (int)((long)pcVar8 - (long)__s1)) {
          piVar10 = *(int **)(piVar9 + 2);
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar9;
          }
          if ((piVar10 == (int *)__s1) ||
             (iVar2 = memcmp(__s1,piVar10,(long)pcVar8 - (long)__s1 & 0xffffffff), iVar2 == 0))
          goto LAB_00d919a4;
        }
        lVar6 = lVar6 + -0x30;
        piVar9 = piVar9 + 0xc;
      } while (lVar6 != 0);
LAB_00d919c4:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00d919d0:
      piVar13 = *(int **)(piVar13 + 2);
    }
    local_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = 0;
    __n = strlen((char *)piVar13);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_b0 | 1);
      local_b0 = CONCAT71(local_b0._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00d91a30;
    }
    else {
      uVar7 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar7);
      local_b0 = uVar7 | 1;
      local_a8 = __n;
      local_a0 = __dest;
LAB_00d91a30:
      memcpy(__dest,piVar13,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    uVar3 = DataParser::_getDisplayType((basic_string *)&local_b0);
    uVar7 = (ulong)uVar3;
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
      goto joined_r0x00d91a64;
    }
  }
                    /* try { // try from 00d91420 to 00e91427 has its CatchHandler @ 00d91450 */
  uVar3 = (uint)uVar7;
joined_r0x00d91a64:
  if (uVar3 < 4) {
                    /* try { // try from 00d91428 to 00e9142f has its CatchHandler @ 00d9144c */
                    /* try { // try from 00d91430 to 00e91437 has its CatchHandler @ 00d91448 */
                    /* try { // try from 00d91438 to 00e9143f has its CatchHandler @ 00d91444 */
                    /* WARNING: Could not recover jumptable at 0x00d91440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00d91440 to 00e91787 has its CatchHandler @ 00d900ac */
    uVar4 = (*(code *)(&LAB_00d91444 + (ulong)(byte)(&DAT_0141bb42)[uVar7] * 4))();
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

