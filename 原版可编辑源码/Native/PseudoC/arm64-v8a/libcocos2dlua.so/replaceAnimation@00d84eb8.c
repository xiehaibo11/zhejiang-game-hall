
/* dragonBones::BaseFactory::replaceAnimation(dragonBones::Armature*, dragonBones::ArmatureData*,
   bool) const */

void __thiscall
dragonBones::BaseFactory::replaceAnimation
          (BaseFactory *this,Armature *param_1,ArmatureData *param_2,bool param_3)

{
  void *__src;
  ulong __n;
  long lVar1;
  bool bVar2;
  __tree_node_base **pp_Var3;
  undefined8 *__dest;
  long lVar4;
  undefined8 uVar5;
  __tree_node_base *p_Var6;
  long *plVar7;
  ArmatureData *pAVar8;
  __tree_node_base *p_Var9;
  undefined8 *puVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ArmatureData *pAVar15;
  __tree_node_base *local_88;
  __tree_node_base *local_80;
  long local_78;
  __tree_end_node *local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 00d845c0 with catch @ 00d84eb8
                       catch() { ... } // from try @ 00d84bdc with catch @ 00d84eb8 */
                    /* catch() { ... } // from try @ 00d84290 with catch @ 00d84ebc */
                    /* catch() { ... } // from try @ 00d83dd0 with catch @ 00d84ec0 */
                    /* catch() { ... } // from try @ 00d83dc8 with catch @ 00d84ec4 */
                    /* catch() { ... } // from try @ 00d83dc0 with catch @ 00d84ec8 */
                    /* catch() { ... } // from try @ 00d83db8 with catch @ 00d84ecc */
                    /* catch() { ... } // from try @ 00d83db0 with catch @ 00d84ed0 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00d83da8 with catch @ 00d84ee0 */
  lVar14 = *(long *)(param_2 + 0x138);
  if (lVar14 == 0) {
    uVar5 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00d83f6c with catch @ 00d84ef0 */
                    /* catch() { ... } // from try @ 00d84788 with catch @ 00d84f00 */
    if (param_3) {
      Animation::setAnimations(*(Animation **)(param_1 + 0xa8),(map *)(param_2 + 0x120));
    }
    else {
      lVar13 = *(long *)(param_1 + 0xa8);
                    /* catch() { ... } // from try @ 00d846d8 with catch @ 00d84f20 */
      local_80 = (__tree_node_base *)0x0;
      local_78 = 0;
      local_88 = (__tree_node_base *)&local_80;
      plVar12 = *(long **)(lVar13 + 0x50);
      while (plVar12 != (long *)(lVar13 + 0x58)) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
        ::
        __emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,dragonBones::AnimationData*>const&>
                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                    *)&local_88,(__tree_node_base *)&local_80,plVar12 + 4,plVar12 + 4);
        plVar7 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar7 = plVar12 + 2;
          bVar2 = *(long **)*plVar7 != plVar12;
          plVar12 = (long *)*plVar7;
          if (bVar2) {
            do {
              lVar4 = *plVar7;
              plVar7 = (long *)(lVar4 + 0x10);
              plVar12 = (long *)*plVar7;
            } while (*plVar12 != lVar4);
          }
        }
        else {
          do {
            plVar12 = plVar7;
            plVar7 = (long *)*plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
        }
      }
      pAVar15 = *(ArmatureData **)(param_2 + 0x120);
      while (pAVar15 != param_2 + 0x128) {
                    /* catch() { ... } // from try @ 00d8482c with catch @ 00d84fcc */
        uVar5 = *(undefined8 *)(pAVar15 + 0x38);
                    /* catch() { ... } // from try @ 00d842f4 with catch @ 00d84fd0 */
                    /* catch() { ... } // from try @ 00d83e6c with catch @ 00d84fd4 */
        pp_Var3 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                  ::
                  __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                              *)&local_88,&local_70,(basic_string *)(pAVar15 + 0x20));
                    /* catch() { ... } // from try @ 00d83e80 with catch @ 00d84fe4 */
        p_Var9 = *pp_Var3;
                    /* catch() { ... } // from try @ 00d84a10 with catch @ 00d84fe8 */
        if (p_Var9 == (__tree_node_base *)0x0) {
                    /* catch() { ... } // from try @ 00d84b20 with catch @ 00d84fec */
                    /* catch() { ... } // from try @ 00d84914 with catch @ 00d84ff0 */
                    /* catch() { ... } // from try @ 00d84488 with catch @ 00d84ff4 */
          p_Var9 = operator_new(0x40);
                    /* catch() { ... } // from try @ 00d84a30 with catch @ 00d84ff8 */
                    /* catch() { ... } // from try @ 00d84b00 with catch @ 00d84ffc */
                    /* catch() { ... } // from try @ 00d84468 with catch @ 00d85000 */
                    /* catch() { ... } // from try @ 00d84934 with catch @ 00d85004 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(p_Var9 + 0x20),(basic_string *)(pAVar15 + 0x20));
                    /* catch() { ... } // from try @ 00d84374 with catch @ 00d85008 */
                    /* catch() { ... } // from try @ 00d84394 with catch @ 00d8500c */
          *(undefined8 *)(p_Var9 + 0x38) = 0;
          *(undefined8 *)p_Var9 = 0;
          *(undefined8 *)(p_Var9 + 8) = 0;
          *(__tree_end_node **)(p_Var9 + 0x10) = local_70;
          *pp_Var3 = p_Var9;
          p_Var6 = p_Var9;
          if (*(__tree_node_base **)local_88 != (__tree_node_base *)0x0) {
            p_Var6 = *pp_Var3;
            local_88 = *(__tree_node_base **)local_88;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (local_80,p_Var6);
          local_78 = local_78 + 1;
        }
        *(undefined8 *)(p_Var9 + 0x38) = uVar5;
        pAVar8 = *(ArmatureData **)(pAVar15 + 8);
        if (*(ArmatureData **)(pAVar15 + 8) == (ArmatureData *)0x0) {
          pAVar8 = pAVar15 + 0x10;
          bVar2 = *(ArmatureData **)*(ArmatureData **)pAVar8 != pAVar15;
          pAVar15 = *(ArmatureData **)pAVar8;
          if (bVar2) {
            do {
              lVar13 = *(long *)pAVar8;
              pAVar8 = (ArmatureData *)(lVar13 + 0x10);
              pAVar15 = *(ArmatureData **)pAVar8;
            } while (*(long *)pAVar15 != lVar13);
          }
        }
        else {
          do {
            pAVar15 = pAVar8;
            pAVar8 = *(ArmatureData **)pAVar15;
          } while (*(ArmatureData **)pAVar15 != (ArmatureData *)0x0);
        }
      }
      Animation::setAnimations(*(Animation **)(param_1 + 0xa8),(map *)&local_88);
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                 *)&local_88,(__tree_node *)local_80);
    }
    plVar12 = *(long **)(param_1 + 0x78);
    plVar7 = *(long **)(param_1 + 0x80);
    if (plVar12 != plVar7) {
      do {
        lVar13 = *plVar12;
        __src = *(void **)(lVar13 + 0x140);
        __n = *(long *)(lVar13 + 0x148) - (long)__src;
        if (__n == 0) {
          __dest = (undefined8 *)0x0;
        }
        else {
          if ((ulong)((long)__n >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          __dest = operator_new(__n);
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
            if (__dest != (undefined8 *)((long)__dest + __n)) {
              uVar11 = 0;
              puVar10 = __dest;
              do {
                if (*(int *)(puVar10 + 1) == 1) {
                  lVar4 = std::__ndk1::
                          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                          ::
                          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                                      *)(lVar14 + 0x28),
                                     (basic_string *)(*(long *)(lVar13 + 200) + 0x20));
                  if (lVar14 + 0x30 != lVar4) {
                    if (((((ulong)uVar11 <
                           (ulong)(*(long *)(lVar4 + 0x40) - *(long *)(lVar4 + 0x38) >> 3)) &&
                         (lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + (ulong)uVar11 * 8), lVar4 != 0
                         )) && (*(int *)(lVar4 + 0x10) == 1)) &&
                       (lVar4 = (**(code **)(*(long *)this + 0x90))
                                          (this,lVar4 + 0x30,
                                           *(long *)(*(long *)(*(long *)(lVar4 + 0x60) + 0x40) +
                                                    0x158) + 0x30), lVar4 != 0)) {
                      (**(code **)(*(long *)this + 200))(this,*puVar10,lVar4,param_3);
                    }
                  }
                }
                puVar10 = puVar10 + 2;
                uVar11 = uVar11 + 1;
              } while ((undefined8 *)((long)__dest + __n) != puVar10);
            }
          }
        }
        if (__dest != (undefined8 *)0x0) {
          operator_delete(__dest);
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar7);
    }
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

