
/* dragonBones::AnimationState::_updateTimelines() */

void __thiscall dragonBones::AnimationState::_updateTimelines(AnimationState *this)

{
  basic_string *pbVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  __tree_node_base **pp_Var7;
  void *pvVar8;
  IKConstraintTimelineState *pIVar9;
  __tree_node_base *p_Var10;
  long lVar11;
  ulong uVar12;
  __tree_node_base *p_Var13;
  ulong uVar14;
  void *pvVar15;
  size_t sVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  __tree_node_base *local_90;
  __tree_node_base *local_88;
  long local_80;
  IKConstraintTimelineState *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_88 = (__tree_node_base *)0x0;
  local_80 = 0;
  plVar4 = *(long **)(this + 0xf0);
  local_90 = (__tree_node_base *)&local_88;
  for (plVar18 = *(long **)(this + 0xe8); plVar18 != plVar4; plVar18 = plVar18 + 1) {
    lVar19 = *plVar18;
    pbVar1 = (basic_string *)(*(long *)(*(long *)(lVar19 + 0xb8) + 0x10) + 0x18);
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
                          *)&local_90,(__tree_end_node **)&local_78,pbVar1);
    p_Var13 = *pp_Var7;
    if (p_Var13 == (__tree_node_base *)0x0) {
      p_Var13 = operator_new(0x50);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(p_Var13 + 0x20),pbVar1);
      *(undefined8 *)(p_Var13 + 0x38) = 0;
      *(undefined8 *)(p_Var13 + 0x40) = 0;
      *(undefined8 *)(p_Var13 + 0x48) = 0;
      *(undefined8 *)p_Var13 = 0;
      *(undefined8 *)(p_Var13 + 8) = 0;
      *(IKConstraintTimelineState **)(p_Var13 + 0x10) = local_78;
      *pp_Var7 = p_Var13;
      p_Var10 = p_Var13;
      if (*(__tree_node_base **)local_90 != (__tree_node_base *)0x0) {
        p_Var10 = *pp_Var7;
        local_90 = *(__tree_node_base **)local_90;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (local_88,p_Var10);
      local_80 = local_80 + 1;
    }
    plVar2 = *(long **)(p_Var13 + 0x40);
    if (plVar2 == *(long **)(p_Var13 + 0x48)) {
      pvVar15 = *(void **)(p_Var13 + 0x38);
      sVar16 = (long)plVar2 - (long)pvVar15;
      uVar14 = ((long)sVar16 >> 3) + 1;
      if (uVar14 >> 0x3d != 0) goto LAB_00d73ac0;
      lVar11 = (long)*(long **)(p_Var13 + 0x48) - (long)pvVar15;
      if ((ulong)(lVar11 >> 3) < 0xfffffffffffffff) {
        uVar12 = lVar11 >> 2;
        if (uVar14 <= uVar12) {
          uVar14 = uVar12;
        }
        if (uVar14 != 0) {
          if (uVar14 >> 0x3d == 0) goto LAB_00d737a8;
          goto LAB_00d73ac0;
        }
        pvVar8 = (void *)0x0;
      }
      else {
        uVar14 = 0x1fffffffffffffff;
LAB_00d737a8:
        pvVar8 = operator_new(uVar14 << 3);
      }
      plVar2 = (long *)((long)pvVar8 + ((long)sVar16 >> 3) * 8);
      *plVar2 = lVar19;
      if (0 < (long)sVar16) {
        memcpy(pvVar8,pvVar15,sVar16);
      }
      *(void **)(p_Var13 + 0x38) = pvVar8;
      *(long **)(p_Var13 + 0x40) = plVar2 + 1;
      *(void **)(p_Var13 + 0x48) = (void *)((long)pvVar8 + uVar14 * 8);
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
      }
    }
    else {
      *plVar2 = lVar19;
      *(long **)(p_Var13 + 0x40) = plVar2 + 1;
    }
  }
  plVar18 = *(long **)(*(long *)(this + 0x130) + 0x40);
  plVar4 = *(long **)(*(long *)(this + 0x130) + 0x48);
  if (plVar18 != plVar4) {
    do {
      lVar17 = *plVar18;
      lVar19 = *(long *)(this + 0x80);
      pbVar1 = (basic_string *)(*(long *)(lVar17 + 0x10) + 0x18);
      lVar11 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
                           *)(lVar19 + 0x98),pbVar1);
      lVar19 = lVar19 + 0xa0;
      plVar2 = (long *)0x0;
      if (lVar19 != lVar11) {
        plVar2 = (long *)(lVar11 + 0x38);
      }
      p_Var13 = (__tree_node_base *)
                std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
                            *)&local_90,pbVar1);
      if ((__tree_node_base *)&local_88 == p_Var13) {
        if (lVar19 == lVar11) {
          if (this[0x10] != (AnimationState)0x0) {
            pIVar9 = BaseObject::borrowObject<dragonBones::IKConstraintTimelineState>();
            *(long *)(pIVar9 + 0xb8) = lVar17;
            (**(code **)(*(long *)pIVar9 + 0x30))(pIVar9,*(undefined8 *)(this + 0x130),this,0);
            puVar3 = *(undefined8 **)(this + 0xf0);
            if (puVar3 < *(undefined8 **)(this + 0xf8)) {
              *puVar3 = pIVar9;
              *(undefined8 **)(this + 0xf0) = puVar3 + 1;
            }
            else {
              pvVar15 = *(void **)(this + 0xe8);
              sVar16 = (long)puVar3 - (long)pvVar15;
              uVar14 = ((long)sVar16 >> 3) + 1;
              if (uVar14 >> 0x3d != 0) {
LAB_00d73ac0:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar19 = (long)*(undefined8 **)(this + 0xf8) - (long)pvVar15;
              if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
                uVar12 = lVar19 >> 2;
                if (uVar14 <= uVar12) {
                  uVar14 = uVar12;
                }
                if (uVar14 != 0) {
                  if (uVar14 >> 0x3d == 0) goto LAB_00d73a18;
                  goto LAB_00d73ac0;
                }
                pvVar8 = (void *)0x0;
              }
              else {
                uVar14 = 0x1fffffffffffffff;
LAB_00d73a18:
                pvVar8 = operator_new(uVar14 << 3);
              }
              puVar3 = (undefined8 *)((long)pvVar8 + ((long)sVar16 >> 3) * 8);
              *puVar3 = pIVar9;
              if (0 < (long)sVar16) {
                memcpy(pvVar8,pvVar15,sVar16);
              }
              *(void **)(this + 0xe8) = pvVar8;
              *(undefined8 **)(this + 0xf0) = puVar3 + 1;
              *(void **)(this + 0xf8) = (void *)((long)pvVar8 + uVar14 * 8);
              if (pvVar15 != (void *)0x0) {
                operator_delete(pvVar15);
              }
            }
            local_70 = 2;
            local_78 = pIVar9;
            FUN_00d73be0(this + 0x100,&local_78);
          }
        }
        else {
          plVar5 = (long *)plVar2[1];
          for (plVar2 = (long *)*plVar2; plVar2 != plVar5; plVar2 = plVar2 + 1) {
            lVar19 = *plVar2;
            if (*(int *)(lVar19 + 0x10) == 0x1e) {
              pIVar9 = BaseObject::borrowObject<dragonBones::IKConstraintTimelineState>();
              *(long *)(pIVar9 + 0xb8) = lVar17;
              (**(code **)(*(long *)pIVar9 + 0x30))
                        (pIVar9,*(undefined8 *)(this + 0x130),this,lVar19);
              puVar3 = *(undefined8 **)(this + 0xf0);
              if (puVar3 < *(undefined8 **)(this + 0xf8)) {
                *puVar3 = pIVar9;
                *(undefined8 **)(this + 0xf0) = puVar3 + 1;
              }
              else {
                pvVar15 = *(void **)(this + 0xe8);
                sVar16 = (long)puVar3 - (long)pvVar15;
                uVar14 = ((long)sVar16 >> 3) + 1;
                if (uVar14 >> 0x3d != 0) goto LAB_00d73ac0;
                lVar19 = (long)*(undefined8 **)(this + 0xf8) - (long)pvVar15;
                if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
                  uVar12 = lVar19 >> 2;
                  if (uVar14 <= uVar12) {
                    uVar14 = uVar12;
                  }
                  if (uVar14 != 0) {
                    if (uVar14 >> 0x3d == 0) goto LAB_00d73938;
                    goto LAB_00d73ac0;
                  }
                  pvVar8 = (void *)0x0;
                }
                else {
                  uVar14 = 0x1fffffffffffffff;
LAB_00d73938:
                  pvVar8 = operator_new(uVar14 << 3);
                }
                puVar3 = (undefined8 *)((long)pvVar8 + ((long)sVar16 >> 3) * 8);
                *puVar3 = pIVar9;
                if (0 < (long)sVar16) {
                  memcpy(pvVar8,pvVar15,sVar16);
                }
                *(void **)(this + 0xe8) = pvVar8;
                *(undefined8 **)(this + 0xf0) = puVar3 + 1;
                *(void **)(this + 0xf8) = (void *)((long)pvVar8 + uVar14 * 8);
                if (pvVar15 != (void *)0x0) {
                  operator_delete(pvVar15);
                }
              }
            }
          }
        }
      }
      else {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
        ::erase((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
                 *)&local_90,p_Var13);
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar4);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ConstraintTimelineState*,std::__ndk1::allocator<dragonBones::ConstraintTimelineState*>>>>>
             *)&local_90,(__tree_node *)local_88);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

