
/* dragonBones::JSONDataParser::_parseBoneTimeline(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void dragonBones::JSONDataParser::_parseBoneTimeline(GenericValue *param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  TimelineData *pTVar7;
  JSONDataParser *in_x1;
  basic_string *in_x3;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  long lVar11;
  BoneData *pBVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  ulong uVar16;
  ulong local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined **local_a0;
  undefined8 local_98;
  void *pvStack_90;
  GenericValue *local_88;
  undefined ***local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar11 = *(long *)(param_1 + 0x30);
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_b8 = 0;
  _getString(in_x1,(GenericValue *)DataParser::NAME,(char *)&local_b8,in_x3);
  lVar6 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                      *)(lVar11 + 0xc0),(basic_string *)&local_a0);
  if (lVar11 + 200 == lVar6) {
    pBVar12 = (BoneData *)0x0;
  }
  else {
    pBVar12 = *(BoneData **)(lVar6 + 0x38);
  }
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(pvStack_90);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (pBVar12 == (BoneData *)0x0) goto LAB_00d960a8;
  *(BoneData **)(param_1 + 0x38) = pBVar12;
  lVar11 = *(long *)(param_1 + 0x30);
  lVar6 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                      *)(lVar11 + 0xd8),(basic_string *)(pBVar12 + 0x18));
  if (lVar11 + 0xe0 == lVar6) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar6 + 0x38);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  puVar4 = DataParser::TRANSLATE_FRAME;
  pcVar9 = DataParser::TRANSLATE_FRAME + -1;
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  piVar13 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  piVar15 = piVar13 + (ulong)uVar2 * 0xc;
  piVar14 = piVar13;
  if (uVar2 != 0) {
    uVar16 = (long)pcVar9 - (long)DataParser::TRANSLATE_FRAME;
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      iVar5 = *piVar13;
      if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar13 + 0x15);
      }
      if (iVar5 == (int)uVar16) {
        piVar1 = *(int **)(piVar13 + 2);
        if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar13;
        }
        piVar14 = piVar13;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar6 = lVar6 + -0x30;
      piVar13 = piVar13 + 0xc;
      piVar14 = piVar15;
    } while (lVar6 != 0);
  }
  if (piVar15 != piVar14) {
    pvStack_90 = (void *)0x1;
    local_98 = 0xb8;
    local_a0 = &PTR_FUN_016d6ef8;
    local_88 = param_1;
    local_80 = &local_a0;
    pTVar7 = (TimelineData *)(**(code **)(*(long *)param_1 + 0x78))(param_1);
    if (&local_a0 == local_80) {
      pcVar10 = (code *)(*local_80)[4];
LAB_00d95cdc:
      (*pcVar10)(local_80);
    }
    else if (local_80 != (undefined ***)0x0) {
      pcVar10 = (code *)(*local_80)[5];
      goto LAB_00d95cdc;
    }
    if (pTVar7 != (TimelineData *)0x0) {
      AnimationData::addBoneTimeline(*(AnimationData **)(param_1 + 0x58),pBVar12,pTVar7);
    }
  }
  puVar4 = DataParser::ROTATE_FRAME;
  pcVar9 = DataParser::ROTATE_FRAME + -1;
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  piVar13 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  piVar15 = piVar13 + (ulong)uVar2 * 0xc;
  piVar14 = piVar13;
  if (uVar2 != 0) {
    uVar16 = (long)pcVar9 - (long)DataParser::ROTATE_FRAME;
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      iVar5 = *piVar13;
      if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar13 + 0x15);
      }
      if (iVar5 == (int)uVar16) {
        piVar1 = *(int **)(piVar13 + 2);
        if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar13;
        }
        piVar14 = piVar13;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar6 = lVar6 + -0x30;
      piVar13 = piVar13 + 0xc;
      piVar14 = piVar15;
    } while (lVar6 != 0);
  }
  if (piVar15 != piVar14) {
    pvStack_90 = (void *)0x1;
    local_98 = 0xc0;
    local_a0 = &PTR_FUN_016d6ef8;
    local_88 = param_1;
    local_80 = &local_a0;
    pTVar7 = (TimelineData *)(**(code **)(*(long *)param_1 + 0x78))(param_1);
    if (&local_a0 == local_80) {
      pcVar10 = (code *)(*local_80)[4];
LAB_00d95e14:
      (*pcVar10)(local_80);
    }
    else if (local_80 != (undefined ***)0x0) {
      pcVar10 = (code *)(*local_80)[5];
      goto LAB_00d95e14;
    }
    if (pTVar7 != (TimelineData *)0x0) {
      AnimationData::addBoneTimeline(*(AnimationData **)(param_1 + 0x58),pBVar12,pTVar7);
    }
  }
  puVar4 = DataParser::SCALE_FRAME;
  pcVar9 = DataParser::SCALE_FRAME + -1;
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  piVar13 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  piVar15 = piVar13 + (ulong)uVar2 * 0xc;
  piVar14 = piVar13;
  if (uVar2 != 0) {
    uVar16 = (long)pcVar9 - (long)DataParser::SCALE_FRAME;
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      iVar5 = *piVar13;
      if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar13 + 0x15);
      }
      if (iVar5 == (int)uVar16) {
        piVar1 = *(int **)(piVar13 + 2);
        if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar13;
        }
        piVar14 = piVar13;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar6 = lVar6 + -0x30;
      piVar13 = piVar13 + 0xc;
      piVar14 = piVar15;
    } while (lVar6 != 0);
  }
  if (piVar15 != piVar14) {
    pvStack_90 = (void *)0x1;
    local_98 = 200;
    local_a0 = &PTR_FUN_016d6ef8;
    local_88 = param_1;
    local_80 = &local_a0;
    pTVar7 = (TimelineData *)(**(code **)(*(long *)param_1 + 0x78))(param_1);
    if (&local_a0 == local_80) {
      pcVar10 = (code *)(*local_80)[4];
LAB_00d95f4c:
      (*pcVar10)(local_80);
    }
    else if (local_80 != (undefined ***)0x0) {
      pcVar10 = (code *)(*local_80)[5];
      goto LAB_00d95f4c;
    }
    if (pTVar7 != (TimelineData *)0x0) {
      AnimationData::addBoneTimeline(*(AnimationData **)(param_1 + 0x58),pBVar12,pTVar7);
    }
  }
  puVar4 = DataParser::FRAME;
  pcVar9 = DataParser::FRAME + -1;
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  piVar13 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  piVar15 = piVar13 + (ulong)uVar2 * 0xc;
  piVar14 = piVar13;
  if (uVar2 != 0) {
    uVar16 = (long)pcVar9 - (long)DataParser::FRAME;
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      iVar5 = *piVar13;
      if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar13 + 0x15);
      }
      if (iVar5 == (int)uVar16) {
        piVar1 = *(int **)(piVar13 + 2);
        if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar13;
        }
        piVar14 = piVar13;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar6 = lVar6 + -0x30;
      piVar13 = piVar13 + 0xc;
      piVar14 = piVar15;
    } while (lVar6 != 0);
  }
  if (piVar15 != piVar14) {
    pvStack_90 = (void *)0x1;
    local_98 = 0xb0;
    local_a0 = &PTR_FUN_016d6ef8;
    local_88 = param_1;
    local_80 = &local_a0;
    pTVar7 = (TimelineData *)(**(code **)(*(long *)param_1 + 0x78))(param_1);
    if (&local_a0 == local_80) {
      pcVar10 = (code *)(*local_80)[4];
LAB_00d96084:
      (*pcVar10)(local_80);
    }
    else if (local_80 != (undefined ***)0x0) {
      pcVar10 = (code *)(*local_80)[5];
      goto LAB_00d96084;
    }
    if (pTVar7 != (TimelineData *)0x0) {
      AnimationData::addBoneTimeline(*(AnimationData **)(param_1 + 0x58),pBVar12,pTVar7);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
LAB_00d960a8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

