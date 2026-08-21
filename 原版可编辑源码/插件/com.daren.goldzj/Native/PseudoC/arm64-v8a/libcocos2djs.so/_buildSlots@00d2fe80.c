
/* dragonBones::BaseFactory::_buildSlots(dragonBones::BuildArmaturePackage const&,
   dragonBones::Armature*) const */

void __thiscall
dragonBones::BaseFactory::_buildSlots
          (BaseFactory *this,BuildArmaturePackage *param_1,Armature *param_2)

{
  piecewise_construct_t *ppVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  Slot *this_00;
  piecewise_construct_t *ppVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  vector *pvVar14;
  piecewise_construct_t *__src;
  size_t sVar15;
  undefined1 auVar16 [16];
  piecewise_construct_t *local_a0;
  piecewise_construct_t *local_98;
  piecewise_construct_t *local_90;
  __tree_node **local_88;
  __tree_node *local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar10 = *(long *)(param_1 + 0x40);
  if ((lVar10 != 0) && (lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x138), lVar11 != 0)) {
    local_88 = &local_80;
    local_80 = (__tree_node *)0x0;
    uStack_78 = 0;
    plVar12 = *(long **)(lVar11 + 0x28);
joined_r0x00d2feec:
    if (plVar12 != (long *)(lVar11 + 0x30)) {
      do {
        local_a0 = (piecewise_construct_t *)(plVar12 + 4);
        lVar6 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)&local_88,local_a0,(tuple *)&DAT_0194872d,
                           (tuple *)&local_a0);
        *(long **)(lVar6 + 0x38) = plVar12 + 7;
        plVar8 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar8 = plVar12 + 2;
          bVar5 = *(long **)*plVar8 == plVar12;
          plVar12 = (long *)*plVar8;
          if (bVar5) goto joined_r0x00d2feec;
          do {
            lVar6 = *plVar8;
            plVar8 = (long *)(lVar6 + 0x10);
            plVar12 = (long *)*plVar8;
          } while (*plVar12 != lVar6);
        }
        else {
          do {
            plVar12 = plVar8;
            plVar8 = (long *)*plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
        }
        if (plVar12 == (long *)(lVar11 + 0x30)) break;
      } while( true );
    }
    if (lVar10 != lVar11) {
      plVar12 = *(long **)(lVar10 + 0x28);
joined_r0x00d2ff90:
      if (plVar12 != (long *)(lVar10 + 0x30)) {
        do {
          local_a0 = (piecewise_construct_t *)(plVar12 + 4);
          lVar11 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
                   ::
                   __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                             ((basic_string *)&local_88,local_a0,(tuple *)&DAT_0194872d,
                              (tuple *)&local_a0);
          *(long **)(lVar11 + 0x38) = plVar12 + 7;
          plVar8 = (long *)plVar12[1];
          if ((long *)plVar12[1] == (long *)0x0) {
            plVar8 = plVar12 + 2;
            bVar5 = *(long **)*plVar8 == plVar12;
            plVar12 = (long *)*plVar8;
            if (bVar5) goto joined_r0x00d2ff90;
            do {
              lVar11 = *plVar8;
              plVar8 = (long *)(lVar11 + 0x10);
              plVar12 = (long *)*plVar8;
            } while (*plVar12 != lVar11);
          }
          else {
            do {
              plVar12 = plVar8;
              plVar8 = (long *)*plVar12;
            } while ((long *)*plVar12 != (long *)0x0);
          }
          if (plVar12 == (long *)(lVar10 + 0x30)) break;
        } while( true );
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x38) + 0x80);
    for (plVar12 = *(long **)(*(long *)(param_1 + 0x38) + 0x78); plVar12 != plVar8;
        plVar12 = plVar12 + 1) {
      lVar11 = *plVar12;
      local_a0 = (piecewise_construct_t *)(lVar11 + 0x20);
      lVar10 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_88,local_a0,(tuple *)&DAT_0194872d,
                          (tuple *)&local_a0);
      pvVar14 = *(vector **)(lVar10 + 0x38);
      this_00 = (Slot *)(**(code **)(*(long *)this + 0x58))(this,param_1,lVar11,param_2);
      Slot::setRawDisplayDatas(this_00,pvVar14);
      if (pvVar14 != (vector *)0x0) {
        local_98 = (piecewise_construct_t *)0x0;
        local_90 = (piecewise_construct_t *)0x0;
        local_a0 = (piecewise_construct_t *)0x0;
        plVar3 = *(long **)(pvVar14 + 8);
        __src = local_a0;
        for (plVar2 = *(long **)pvVar14; local_a0 = __src, plVar2 != plVar3; plVar2 = plVar2 + 1) {
          if (*plVar2 == 0) {
            if (local_98 < local_90) {
              *(undefined8 *)local_98 = 0;
              *(undefined4 *)(local_98 + 8) = 0;
              goto LAB_00d30174;
            }
            sVar15 = (long)local_98 - (long)__src;
            uVar13 = ((long)sVar15 >> 4) + 1;
            if (uVar13 >> 0x3c != 0) goto LAB_00d302d4;
            if ((ulong)((long)local_90 - (long)__src >> 4) < 0x7ffffffffffffff) {
              uVar9 = (long)local_90 - (long)__src >> 3;
              if (uVar13 <= uVar9) {
                uVar13 = uVar9;
              }
              if (uVar13 != 0) {
                if (uVar13 >> 0x3c != 0) goto LAB_00d302d4;
                goto LAB_00d300c8;
              }
              ppVar7 = (piecewise_construct_t *)0x0;
            }
            else {
              uVar13 = 0xfffffffffffffff;
LAB_00d300c8:
              ppVar7 = operator_new(uVar13 << 4);
            }
            ppVar1 = ppVar7 + ((long)sVar15 >> 4) * 0x10;
            *(undefined8 *)ppVar1 = 0;
            *(undefined4 *)(ppVar1 + 8) = 0;
            if (0 < (long)sVar15) {
              memcpy(ppVar7,__src,sVar15);
            }
            local_a0 = ppVar7;
            local_98 = ppVar1 + 0x10;
            local_90 = ppVar7 + uVar13 * 0x10;
            if (__src == (piecewise_construct_t *)0x0) goto LAB_00d30264;
LAB_00d3025c:
            operator_delete(__src);
          }
          else {
            auVar16 = (**(code **)(*(long *)this + 0x40))(this,param_1,*plVar2,0,this_00);
            __src = local_a0;
            if (local_98 < local_90) {
              *(undefined1 (*) [16])local_98 = auVar16;
LAB_00d30174:
              local_98 = local_98 + 0x10;
            }
            else {
              sVar15 = (long)local_98 - (long)local_a0;
              uVar13 = ((long)sVar15 >> 4) + 1;
              if (uVar13 >> 0x3c != 0) {
LAB_00d302d4:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if ((ulong)((long)local_90 - (long)local_a0 >> 4) < 0x7ffffffffffffff) {
                uVar9 = (long)local_90 - (long)local_a0 >> 3;
                if (uVar13 <= uVar9) {
                  uVar13 = uVar9;
                }
                if (uVar13 != 0) {
                  if (uVar13 >> 0x3c != 0) goto LAB_00d302d4;
                  goto LAB_00d30214;
                }
                ppVar7 = (piecewise_construct_t *)0x0;
              }
              else {
                uVar13 = 0xfffffffffffffff;
LAB_00d30214:
                ppVar7 = operator_new(uVar13 << 4);
              }
              ppVar1 = ppVar7 + ((long)sVar15 >> 4) * 0x10;
              *(undefined1 (*) [16])ppVar1 = auVar16;
              if (0 < (long)sVar15) {
                memcpy(ppVar7,__src,sVar15);
              }
              local_a0 = ppVar7;
              local_98 = ppVar1 + 0x10;
              local_90 = ppVar7 + uVar13 * 0x10;
              if (__src != (piecewise_construct_t *)0x0) goto LAB_00d3025c;
            }
          }
LAB_00d30264:
          __src = local_a0;
        }
        Slot::_setDisplayList(this_00,(vector *)&local_a0);
        if (local_a0 != (piecewise_construct_t *)0x0) {
          local_98 = local_a0;
          operator_delete(local_a0);
        }
      }
      Slot::_setDisplayIndex(this_00,*(int *)(lVar11 + 0x14),true);
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
               *)&local_88,local_80);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

