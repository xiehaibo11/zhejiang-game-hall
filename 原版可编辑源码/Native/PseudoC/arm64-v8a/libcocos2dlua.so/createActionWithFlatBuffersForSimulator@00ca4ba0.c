
/* cocostudio::timeline::ActionTimelineCache::createActionWithFlatBuffersForSimulator(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long * __thiscall
cocostudio::timeline::ActionTimelineCache::createActionWithFlatBuffersForSimulator
          (ActionTimelineCache *this,basic_string *param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  FlatBuffersSerialize *this_00;
  long lVar5;
  long *plVar6;
  size_t sVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  __tree_node *p_Var14;
  __tree_node *p_Var15;
  int *piVar16;
  ulong uVar17;
  undefined4 uVar18;
  char *local_d0;
  Timeline *local_c8;
  __tree_node *local_c0;
  __tree_node *p_Stack_b8;
  void *local_b0;
  undefined8 local_a8;
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (FlatBuffersSerialize *)FlatBuffersSerialize::getInstance();
  this_00[0x30] = (FlatBuffersSerialize)0x1;
  lVar5 = FlatBuffersSerialize::createFlatBuffersWithXMLFileForSimulator(this_00,param_1);
  piVar1 = (int *)((long)*(uint **)(lVar5 + 0x18) + (ulong)**(uint **)(lVar5 + 0x18));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
     (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar9 == 0)) {
    piVar16 = (int *)0x0;
  }
  else {
    puVar10 = (uint *)((long)piVar1 + uVar9);
    piVar16 = (int *)((long)puVar10 + (ulong)*puVar10);
  }
  plVar6 = (long *)ActionTimeline::create();
  if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar9 == 0)) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined4 *)((long)piVar16 + uVar9);
  }
  (**(code **)(*plVar6 + 0xb0))(plVar6,uVar18);
  uVar18 = 0;
  if ((6 < *(ushort *)((long)piVar16 - (long)*piVar16)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3], uVar9 != 0)) {
    uVar18 = *(undefined4 *)((long)piVar16 + uVar9);
  }
  (**(code **)(*plVar6 + 0xa0))(uVar18,plVar6);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
    puVar10 = (uint *)0x0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
    puVar10 = (uint *)0x0;
    if (uVar9 != 0) {
      puVar10 = (uint *)((long)piVar1 + uVar9);
      puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    }
  }
  uVar9 = (ulong)*puVar10;
  if (0 < (int)*puVar10) {
    puVar10 = puVar10 + 3;
    do {
      uVar17 = (ulong)puVar10[-2];
      local_80 = (long *)0x0;
      p_Stack_b8 = (__tree_node *)0x0;
      local_c0 = (__tree_node *)0x0;
      local_a8 = 0;
      local_b0 = (void *)0x0;
      lVar11 = uVar17 - (long)*(int *)((long)puVar10 + (uVar17 - 8));
      lVar5 = 0;
      if (4 < *(ushort *)((long)puVar10 + lVar11 + -8)) {
        uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar11 + -4);
        lVar5 = 0;
        if (uVar12 != 0) {
          lVar5 = uVar17 + uVar12;
          lVar5 = (long)puVar10 + lVar5 + (ulong)*(uint *)((long)puVar10 + lVar5 + -8) + -8;
        }
      }
      sVar7 = strlen((char *)(lVar5 + 4));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_c0,(char *)(lVar5 + 4),sVar7);
      lVar5 = uVar17 - (long)*(int *)((long)puVar10 + (uVar17 - 8));
      if (*(ushort *)((long)puVar10 + lVar5 + -8) < 7) {
        uVar18 = 0;
      }
      else {
        uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar5 + -2);
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = *(undefined4 *)((long)puVar10 + uVar17 + uVar12 + -8);
        }
      }
      lVar5 = uVar17 - (long)*(int *)((long)puVar10 + (uVar17 - 8));
      if (*(ushort *)((long)puVar10 + lVar5 + -8) < 9) {
        uVar8 = 0;
      }
      else {
        uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar5);
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = *(undefined4 *)((long)puVar10 + uVar17 + uVar12 + -8);
        }
      }
      local_a8 = CONCAT44(uVar8,uVar18);
      (**(code **)(*plVar6 + 0xf8))(plVar6,&local_c0);
      if (alStack_a0 == local_80) {
        pcVar13 = *(code **)(*local_80 + 0x20);
LAB_00ca4e0c:
        (*pcVar13)();
      }
      else if (local_80 != (long *)0x0) {
        pcVar13 = *(code **)(*local_80 + 0x28);
        goto LAB_00ca4e0c;
      }
      if (((ulong)local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      uVar9 = uVar9 - 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 != 0);
  }
  uVar17 = (ulong)*(ushort *)((long)piVar16 + (8 - (long)*piVar16));
  puVar10 = (uint *)((long)piVar16 + uVar17);
  uVar12 = (ulong)*puVar10;
  uVar2 = *(uint *)((long)puVar10 + uVar12);
  uVar9 = (ulong)uVar2;
  p_Stack_b8 = (__tree_node *)0x0;
  local_b0 = (void *)0x0;
  local_c0 = (__tree_node *)&p_Stack_b8;
  if (0 < (int)uVar2) {
    puVar10 = (uint *)(uVar12 + uVar17 + (long)piVar16);
    do {
      puVar10 = puVar10 + 1;
      uVar17 = (ulong)*puVar10;
      local_c8 = (Timeline *)loadTimelineWithFlatBuffers(this,(TimeLine *)((long)puVar10 + uVar17));
      if (local_c8 != (Timeline *)0x0) {
        lVar5 = uVar17 - (long)*(int *)((long)puVar10 + uVar17);
        if (*(ushort *)((long)puVar10 + lVar5) < 5) {
          lVar5 = 0;
        }
        else {
          uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar5 + 4);
          lVar5 = 0;
          if (uVar12 != 0) {
            lVar5 = uVar17 + uVar12;
            lVar5 = (long)puVar10 + lVar5 + (ulong)*(uint *)((long)puVar10 + lVar5);
          }
        }
        local_d0 = (char *)(lVar5 + 4);
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>>>
        ::__emplace_multi<char_const*,cocostudio::timeline::Timeline*&>
                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>>>
                    *)&local_c0,&local_d0,&local_c8);
      }
      uVar9 = uVar9 - 1;
      p_Var15 = local_c0;
    } while (uVar9 != 0);
    while (p_Var15 != (__tree_node *)&p_Stack_b8) {
      (**(code **)(*plVar6 + 0xe0))(plVar6,*(__tree_node **)(p_Var15 + 0x38));
      p_Var14 = *(__tree_node **)(p_Var15 + 8);
      if (*(__tree_node **)(p_Var15 + 8) == (__tree_node *)0x0) {
        p_Var14 = p_Var15 + 0x10;
        bVar4 = (__tree_node *)*(__tree_node ***)*(__tree_node **)p_Var14 != p_Var15;
        p_Var15 = *(__tree_node **)p_Var14;
        if (bVar4) {
          do {
            lVar5 = *(long *)p_Var14;
            p_Var14 = (__tree_node *)(lVar5 + 0x10);
            p_Var15 = *(__tree_node **)p_Var14;
          } while (*(long *)p_Var15 != lVar5);
        }
      }
      else {
        do {
          p_Var15 = p_Var14;
          p_Var14 = *(__tree_node **)p_Var15;
        } while (*(__tree_node **)p_Var15 != (__tree_node *)0x0);
      }
    }
  }
  FlatBuffersSerialize::deleteFlatBufferBuilder(this_00);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::Timeline*>>>
             *)&local_c0,p_Stack_b8);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar6;
}

