
/* dragonBones::JSONDataParser::_parseSlot(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, int) */

SlotData * dragonBones::JSONDataParser::_parseSlot(GenericValue *param_1,int param_2)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>>>
  *this;
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  SlotData *pSVar7;
  long lVar8;
  vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>> *pvVar9;
  __tree_node_base **pp_Var10;
  size_t __n;
  GenericValue *this_00;
  __tree_node_base *p_Var11;
  undefined4 in_w2;
  basic_string *in_x3;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  basic_string *pbVar16;
  int *piVar17;
  int *piVar18;
  __tree_node_base *p_Var19;
  ulong uVar20;
  char *pcVar21;
  void *__dest;
  int *piVar22;
  int *piVar23;
  ulong local_98 [2];
  void *local_88;
  __tree_end_node *local_80;
  size_t sStack_78;
  void *local_70;
  long local_68;
  
  this_00 = (GenericValue *)(ulong)(uint)param_2;
                    /* try { // try from 00d901e4 to 00e901f3 has its CatchHandler @ 00d9161c */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00d901f8 to 00e90207 has its CatchHandler @ 00d916c8 */
  pSVar7 = BaseObject::borrowObject<dragonBones::SlotData>();
  uVar5 = _getNumber(this_00,DataParser::DISPLAY_INDEX,0);
  *(undefined4 *)(pSVar7 + 0x14) = uVar5;
  *(undefined4 *)(pSVar7 + 0x18) = in_w2;
  local_98[1] = 0;
  local_88 = (void *)0x0;
  local_98[0] = 0;
  _getString((JSONDataParser *)this_00,(GenericValue *)DataParser::NAME,(char *)local_98,in_x3);
  pbVar16 = (basic_string *)(pSVar7 + 0x20);
  if (((byte)*pbVar16 & 1) == 0) {
    *(undefined2 *)pbVar16 = 0;
  }
  else {
    **(undefined1 **)(pSVar7 + 0x30) = 0;
    *(undefined8 *)(pSVar7 + 0x28) = 0;
    if (((byte)pSVar7[0x20] & 1) != 0) {
      operator_delete(*(void **)(pSVar7 + 0x30));
      *(undefined8 *)(pSVar7 + 0x20) = 0;
    }
  }
  *(void **)(pSVar7 + 0x30) = local_70;
  *(size_t *)(pSVar7 + 0x28) = sStack_78;
  *(__tree_end_node **)pbVar16 = local_80;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  local_80 = (__tree_end_node *)0x0;
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  lVar14 = *(long *)(param_1 + 0x30);
  local_98[1] = 0;
  local_88 = (void *)0x0;
  local_98[0] = 0;
  _getString((JSONDataParser *)this_00,(GenericValue *)DataParser::PARENT,(char *)local_98,in_x3);
  lVar8 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                      *)(lVar14 + 0xc0),(basic_string *)&local_80);
  if (lVar14 + 200 == lVar8) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(lVar8 + 0x38);
  }
  *(undefined8 *)(pSVar7 + 0x48) = uVar12;
                    /* try { // try from 00d902f8 to 00e90303 has its CatchHandler @ 00d91474 */
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  puVar4 = DataParser::BLEND_MODE;
  pcVar21 = DataParser::BLEND_MODE + -1;
  pcVar13 = pcVar21;
  do {
    pcVar13 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  piVar22 = *(int **)(this_00 + 8);
  uVar2 = *(uint *)this_00;
  uVar20 = (ulong)uVar2;
  piVar17 = piVar22 + uVar20 * 0xc;
  piVar23 = piVar22;
  if (uVar2 != 0) {
    uVar15 = (long)pcVar13 - (long)DataParser::BLEND_MODE;
    lVar8 = uVar20 * 0x30;
    piVar18 = piVar22;
    do {
                    /* try { // try from 00d9038c to 00e9039b has its CatchHandler @ 00d91618 */
      iVar6 = *piVar18;
      if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar18 + 0x15);
      }
      if (iVar6 == (int)uVar15) {
        piVar1 = *(int **)(piVar18 + 2);
        if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar18;
        }
        piVar23 = piVar18;
        if ((piVar1 == (int *)puVar4) ||
           (iVar6 = memcmp(puVar4,piVar1,uVar15 & 0xffffffff), iVar6 == 0)) break;
      }
      lVar8 = lVar8 + -0x30;
      piVar18 = piVar18 + 0xc;
      piVar23 = piVar17;
    } while (lVar8 != 0);
  }
  piVar18 = (int *)&rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::
                    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                    ::buffer;
  pcVar13 = pcVar21;
  if (piVar17 == piVar23) {
LAB_00d904f8:
    uVar5 = _getNumber(this_00,puVar4,0);
    *(undefined4 *)(pSVar7 + 0x10) = uVar5;
  }
  else {
    do {
      pcVar13 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    if (uVar2 != 0) {
      lVar8 = uVar20 * 0x30;
                    /* try { // try from 00d90404 to 00e90417 has its CatchHandler @ 00d91514 */
      do {
                    /* try { // try from 00d90418 to 00e90423 has its CatchHandler @ 00d91510 */
        iVar6 = *piVar22;
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar22 + 0x15);
        }
        if (iVar6 == (int)((long)pcVar13 - (long)puVar4)) {
                    /* try { // try from 00d90438 to 00e90453 has its CatchHandler @ 00d916e0 */
          piVar23 = *(int **)(piVar22 + 2);
          if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
            piVar23 = piVar22;
          }
                    /* try { // try from 00d90458 to 00e90467 has its CatchHandler @ 00d916e4 */
          if ((piVar23 == (int *)puVar4) ||
             (iVar6 = memcmp(puVar4,piVar23,(long)pcVar13 - (long)puVar4 & 0xffffffff), iVar6 == 0))
          goto LAB_00d9045c;
        }
        lVar8 = lVar8 + -0x30;
        piVar22 = piVar22 + 0xc;
      } while (lVar8 != 0);
LAB_00d904f0:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      goto LAB_00d904f8;
    }
LAB_00d9045c:
    if (piVar22 == piVar17) goto LAB_00d904f0;
    if ((*(byte *)((long)piVar22 + 0x2f) >> 2 & 1) == 0) goto LAB_00d904f8;
    do {
      pcVar21 = pcVar21 + 1;
    } while (*pcVar21 != '\0');
    uVar2 = *(uint *)this_00;
    piVar23 = *(int **)(this_00 + 8);
    piVar22 = piVar23;
    if (uVar2 == 0) {
LAB_00d908f8:
      if (piVar22 == piVar23 + (ulong)uVar2 * 0xc) goto LAB_00d90918;
                    /* try { // try from 00d90908 to 00e90917 has its CatchHandler @ 00d916f8 */
      piVar18 = piVar22 + 6;
      if ((*(byte *)((long)piVar22 + 0x2f) >> 4 & 1) == 0) goto LAB_00d90924;
    }
    else {
      lVar8 = (ulong)uVar2 * 0x30;
      do {
        iVar6 = *piVar22;
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar22 + 0x15);
        }
        if (iVar6 == (int)((long)pcVar21 - (long)puVar4)) {
          piVar17 = *(int **)(piVar22 + 2);
          if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
            piVar17 = piVar22;
          }
          if ((piVar17 == (int *)puVar4) ||
             (iVar6 = memcmp(puVar4,piVar17,(long)pcVar21 - (long)puVar4 & 0xffffffff), iVar6 == 0))
          goto LAB_00d908f8;
        }
        lVar8 = lVar8 + -0x30;
        piVar22 = piVar22 + 0xc;
      } while (lVar8 != 0);
LAB_00d90918:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00d90924:
      piVar18 = *(int **)(piVar18 + 2);
    }
    sStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = (__tree_end_node *)0x0;
    __n = strlen((char *)piVar18);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_80 | 1);
      local_80 = (__tree_end_node *)CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00d9098c;
    }
    else {
      uVar20 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar20);
      local_80 = (__tree_end_node *)(uVar20 | 1);
      sStack_78 = __n;
      local_70 = __dest;
LAB_00d9098c:
      memcpy(__dest,piVar18,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    uVar5 = DataParser::_getBlendMode((basic_string *)&local_80);
    *(undefined4 *)(pSVar7 + 0x10) = uVar5;
    if (((ulong)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  puVar4 = DataParser::COLOR;
  pcVar13 = DataParser::COLOR + -1;
  do {
                    /* try { // try from 00d90520 to 00e905ab has its CatchHandler @ 00d915bc */
    pcVar13 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  piVar22 = *(int **)(this_00 + 8);
  uVar2 = *(uint *)this_00;
  piVar23 = piVar22 + (ulong)uVar2 * 0xc;
  if (uVar2 == 0) {
LAB_00d905a4:
    if (piVar23 == piVar22) goto LAB_00d90654;
                    /* try { // try from 00d905ac to 00e905cf has its CatchHandler @ 00d900ac */
    uVar12 = SlotData::createColor();
    *(undefined8 *)(pSVar7 + 0x38) = uVar12;
    puVar4 = DataParser::COLOR;
    pcVar13 = DataParser::COLOR + -1;
    do {
      pcVar13 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    uVar2 = *(uint *)this_00;
                    /* try { // try from 00d905d0 to 00e905db has its CatchHandler @ 00d91524 */
    piVar23 = *(int **)(this_00 + 8);
    piVar22 = piVar23;
    if (uVar2 == 0) {
LAB_00d9066c:
                    /* try { // try from 00d9066c to 00e90677 has its CatchHandler @ 00d91550 */
                    /* try { // try from 00d90678 to 00e90683 has its CatchHandler @ 00d9154c */
      if (piVar22 == piVar23 + (ulong)uVar2 * 0xc) goto LAB_00d90684;
      piVar22 = piVar22 + 6;
    }
    else {
      uVar20 = (long)pcVar13 - (long)DataParser::COLOR;
      lVar8 = (ulong)uVar2 * 0x30;
      do {
        iVar6 = *piVar22;
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar22 + 0x15);
        }
        if (iVar6 == (int)uVar20) {
          piVar17 = *(int **)(piVar22 + 2);
          if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
            piVar17 = piVar22;
          }
          if ((piVar17 == (int *)puVar4) ||
             (iVar6 = memcmp(puVar4,piVar17,uVar20 & 0xffffffff), iVar6 == 0)) goto LAB_00d9066c;
        }
        lVar8 = lVar8 + -0x30;
        piVar22 = piVar22 + 0xc;
      } while (lVar8 != 0);
LAB_00d90684:
      piVar22 = (int *)&rapidjson::
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
    }
                    /* try { // try from 00d90698 to 00e906b3 has its CatchHandler @ 00d916f4 */
    (**(code **)(*(long *)param_1 + 0x100))(param_1,piVar22,uVar12);
  }
  else {
    uVar20 = (long)pcVar13 - (long)DataParser::COLOR;
    lVar8 = (ulong)uVar2 * 0x30;
    do {
      iVar6 = *piVar22;
      if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar22 + 0x15);
      }
      if (iVar6 == (int)uVar20) {
        piVar17 = *(int **)(piVar22 + 2);
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          piVar17 = piVar22;
        }
        if ((piVar17 == (int *)puVar4) ||
           (iVar6 = memcmp(puVar4,piVar17,uVar20 & 0xffffffff), iVar6 == 0)) goto LAB_00d905a4;
      }
      lVar8 = lVar8 + -0x30;
      piVar22 = piVar22 + 0xc;
    } while (lVar8 != 0);
LAB_00d90654:
    *(undefined1 **)(pSVar7 + 0x38) = SlotData::DEFAULT_COLOR;
  }
  puVar4 = DataParser::ACTIONS;
  pcVar21 = DataParser::ACTIONS + -1;
                    /* try { // try from 00d906b8 to 00e906c7 has its CatchHandler @ 00d916f0 */
  pcVar13 = pcVar21;
  do {
    pcVar13 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  piVar22 = *(int **)(this_00 + 8);
  uVar2 = *(uint *)this_00;
  uVar20 = (ulong)uVar2;
  piVar17 = piVar22 + uVar20 * 0xc;
  piVar23 = piVar22;
  if (uVar2 != 0) {
    uVar15 = (long)pcVar13 - (long)DataParser::ACTIONS;
    lVar8 = uVar20 * 0x30;
    piVar18 = piVar22;
    do {
      iVar6 = *piVar18;
      if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar18 + 0x15);
      }
      if (iVar6 == (int)uVar15) {
        piVar1 = *(int **)(piVar18 + 2);
        if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar18;
        }
        piVar23 = piVar18;
        if ((piVar1 == (int *)puVar4) ||
           (iVar6 = memcmp(puVar4,piVar1,uVar15 & 0xffffffff), iVar6 == 0)) break;
      }
      lVar8 = lVar8 + -0x30;
      piVar18 = piVar18 + 0xc;
      piVar23 = piVar17;
    } while (lVar8 != 0);
  }
  if (piVar17 == piVar23) goto LAB_00d908bc;
  do {
    pcVar21 = pcVar21 + 1;
  } while (*pcVar21 != '\0');
  piVar23 = (int *)&rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::
                    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                    ::buffer;
  if (uVar2 == 0) {
    if (piVar22 == piVar17) goto LAB_00d907fc;
LAB_00d907e4:
    piVar23 = piVar22 + 6;
  }
  else {
                    /* try { // try from 00d90780 to 00e9080b has its CatchHandler @ 00d915e4 */
    lVar8 = uVar20 * 0x30;
    do {
      iVar6 = *piVar22;
      if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar22 + 0x15);
      }
      if (iVar6 == (int)((long)pcVar21 - (long)puVar4)) {
        piVar18 = *(int **)(piVar22 + 2);
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          piVar18 = piVar22;
        }
        if ((piVar18 == (int *)puVar4) ||
           (iVar6 = memcmp(puVar4,piVar18,(long)pcVar21 - (long)puVar4 & 0xffffffff), iVar6 == 0)) {
          if (piVar22 != piVar17) goto LAB_00d907e4;
          break;
        }
      }
      lVar8 = lVar8 + -0x30;
      piVar22 = piVar22 + 0xc;
    } while (lVar8 != 0);
LAB_00d907fc:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
                    /* try { // try from 00d9080c to 00e9082f has its CatchHandler @ 00d900ac */
  pvVar9 = (vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>> *)
           (**(code **)(*(long *)param_1 + 0xf0))(param_1,piVar23,0,0,0);
  this = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>>>
          *)(param_1 + 0x228);
                    /* try { // try from 00d90830 to 00e9083b has its CatchHandler @ 00d91598 */
  pp_Var10 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>>>
             ::
             __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       (this,&local_80,pbVar16);
  p_Var19 = *pp_Var10;
  if (p_Var19 == (__tree_node_base *)0x0) {
    p_Var19 = operator_new(0x50);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (p_Var19 + 0x20),pbVar16);
                    /* try { // try from 00d90864 to 00e90877 has its CatchHandler @ 00d9156c */
    *(undefined8 *)(p_Var19 + 0x38) = 0;
    *(undefined8 *)(p_Var19 + 0x40) = 0;
    *(undefined8 *)(p_Var19 + 0x48) = 0;
    *(undefined8 *)p_Var19 = 0;
    *(undefined8 *)(p_Var19 + 8) = 0;
    *(__tree_end_node **)(p_Var19 + 0x10) = local_80;
    *pp_Var10 = p_Var19;
                    /* try { // try from 00d90878 to 00e90883 has its CatchHandler @ 00d9155c */
    p_Var11 = p_Var19;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var11 = *pp_Var10;
    }
                    /* try { // try from 00d90894 to 00e90897 has its CatchHandler @ 00d91468 */
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x230),p_Var11);
    *(long *)(param_1 + 0x238) = *(long *)(param_1 + 0x238) + 1;
  }
  if ((vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>> *)
      (p_Var19 + 0x38) != pvVar9) {
                    /* try { // try from 00d908b8 to 00e908db has its CatchHandler @ 00d91520 */
    std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>::
    assign<dragonBones::ActionData**>
              ((vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>> *)
               (p_Var19 + 0x38),*(ActionData ***)pvVar9,*(ActionData ***)(pvVar9 + 8));
  }
LAB_00d908bc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00d908e8 to 00e90903 has its CatchHandler @ 00d916fc */
    return pSVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

