
/* dragonBones::JSONDataParser::_parseSlotTimeline(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void dragonBones::JSONDataParser::_parseSlotTimeline(GenericValue *param_1)

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
  char *pcVar8;
  code *pcVar9;
  long lVar10;
  SlotData *pSVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  TimelineData *local_c8;
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
  lVar10 = *(long *)(param_1 + 0x30);
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_b8 = 0;
  _getString(in_x1,(GenericValue *)DataParser::NAME,(char *)&local_b8,in_x3);
  lVar6 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                      *)(lVar10 + 0xd8),(basic_string *)&local_a0);
  if (lVar10 + 0xe0 == lVar6) {
    pSVar11 = (SlotData *)0x0;
  }
  else {
    pSVar11 = *(SlotData **)(lVar6 + 0x38);
  }
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(pvStack_90);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (pSVar11 == (SlotData *)0x0) goto LAB_00d96494;
  *(SlotData **)(param_1 + 0x40) = pSVar11;
  puVar4 = DataParser::DISPLAY_FRAME;
  pcVar8 = DataParser::DISPLAY_FRAME + -1;
  do {
    pcVar8 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  piVar12 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  piVar14 = piVar12 + (ulong)uVar2 * 0xc;
  piVar13 = piVar12;
  if (uVar2 != 0) {
    uVar15 = (long)pcVar8 - (long)DataParser::DISPLAY_FRAME;
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      iVar5 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar5 == (int)uVar15) {
        piVar1 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar12;
        }
        piVar13 = piVar12;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar15 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar6 = lVar6 + -0x30;
      piVar12 = piVar12 + 0xc;
      piVar13 = piVar14;
    } while (lVar6 != 0);
  }
  local_a0 = &PTR_FUN_016d6ef8;
  local_88 = param_1;
  if (piVar14 == piVar13) {
    pvStack_90 = (void *)0x1;
    local_98 = 0xd0;
    local_80 = &local_a0;
    local_c8 = (TimelineData *)(**(code **)(*(long *)param_1 + 0x78))(param_1);
    if (&local_a0 != local_80) goto LAB_00d962a4;
LAB_00d96300:
    pcVar9 = (code *)(*local_80)[4];
LAB_00d96308:
    (*pcVar9)(local_80);
  }
  else {
    pvStack_90 = (void *)0x1;
    local_98 = 0xd0;
    local_80 = &local_a0;
    local_c8 = (TimelineData *)(**(code **)(*(long *)param_1 + 0x78))(param_1);
    if (&local_a0 == local_80) goto LAB_00d96300;
LAB_00d962a4:
    if (local_80 != (undefined ***)0x0) {
      pcVar9 = (code *)(*local_80)[5];
      goto LAB_00d96308;
    }
  }
  puVar4 = DataParser::COLOR_FRAME;
  pcVar8 = DataParser::COLOR_FRAME + -1;
  do {
    pcVar8 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  piVar12 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  piVar14 = piVar12 + (ulong)uVar2 * 0xc;
  piVar13 = piVar12;
  if (uVar2 != 0) {
    uVar15 = (long)pcVar8 - (long)DataParser::COLOR_FRAME;
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      iVar5 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar5 == (int)uVar15) {
        piVar1 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar12;
        }
        piVar13 = piVar12;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar15 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar6 = lVar6 + -0x30;
      piVar12 = piVar12 + 0xc;
      piVar13 = piVar14;
    } while (lVar6 != 0);
  }
  local_a0 = &PTR_FUN_016d6ef8;
  if (piVar14 == piVar13) {
    pcVar9 = *(code **)(*(long *)param_1 + 0x78);
                    /* try { // try from 00d96428 to 00e96473 has its CatchHandler @ 00d96428
                       catch() { ... } // from try @ 00d96428 with catch @ 00d96428
                       catch() { ... } // from try @ 00d96510 with catch @ 00d96428
                       catch() { ... } // from try @ 00d9665c with catch @ 00d96428
                       catch() { ... } // from try @ 00d966dc with catch @ 00d96428 */
  }
  else {
    pcVar9 = *(code **)(*(long *)param_1 + 0x78);
  }
  pvStack_90 = (void *)0x1;
  local_98 = 0xd8;
  local_88 = param_1;
  local_80 = &local_a0;
  pTVar7 = (TimelineData *)(*pcVar9)(param_1);
  if (&local_a0 == local_80) {
    (*(code *)(*local_80)[4])(local_80);
  }
  else if (local_80 != (undefined ***)0x0) {
    (*(code *)(*local_80)[5])(local_80);
  }
  if (local_c8 != (TimelineData *)0x0) {
                    /* try { // try from 00d96474 to 00e96487 has its CatchHandler @ 00d96794 */
    AnimationData::addSlotTimeline(*(AnimationData **)(param_1 + 0x58),pSVar11,local_c8);
  }
  if (pTVar7 != (TimelineData *)0x0) {
                    /* try { // try from 00d9648c to 00e964a7 has its CatchHandler @ 00d96798 */
    AnimationData::addSlotTimeline(*(AnimationData **)(param_1 + 0x58),pSVar11,pTVar7);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
LAB_00d96494:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

