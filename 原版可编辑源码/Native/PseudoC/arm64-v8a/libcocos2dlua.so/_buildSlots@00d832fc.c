
/* dragonBones::BaseFactory::_buildSlots(dragonBones::BuildArmaturePackage const&,
   dragonBones::Armature*) const */

void __thiscall
dragonBones::BaseFactory::_buildSlots
          (BaseFactory *this,BuildArmaturePackage *param_1,Armature *param_2)

{
  __tree_end_node *p_Var1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  __tree_node_base **pp_Var6;
  Slot *this_00;
  __tree_end_node *p_Var7;
  __tree_node_base *p_Var8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  __tree_node_base *p_Var16;
  vector *pvVar17;
  __tree_end_node *__src;
  size_t sVar18;
  undefined1 auVar19 [16];
  __tree_end_node *local_98;
  __tree_end_node *local_90;
  __tree_end_node *local_88;
  __tree_node *local_80;
  __tree_node *local_78;
  long local_70;
  long local_68;
  
                    /* try { // try from 00d83308 to 00e83337 has its CatchHandler @ 00d8355c */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)(param_1 + 0x40);
                    /* try { // try from 00d83348 to 00e8335b has its CatchHandler @ 00d834c4 */
  if ((lVar12 != 0) && (lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 0x138), lVar13 != 0)) {
    local_80 = (__tree_node *)&local_78;
    local_78 = (__tree_node *)0x0;
    local_70 = 0;
                    /* try { // try from 00d83360 to 00e83387 has its CatchHandler @ 00d834e4 */
    plVar14 = *(long **)(lVar13 + 0x28);
    while (plVar14 != (long *)(lVar13 + 0x30)) {
                    /* try { // try from 00d83398 to 00e833d7 has its CatchHandler @ 00d834fc */
      pp_Var6 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
                ::
                __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
                            *)&local_80,&local_98,(basic_string *)(plVar14 + 4));
      p_Var16 = *pp_Var6;
      if (p_Var16 == (__tree_node_base *)0x0) {
        p_Var16 = operator_new(0x40);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(p_Var16 + 0x20),(basic_string *)(plVar14 + 4));
        *(undefined8 *)(p_Var16 + 0x38) = 0;
        *(undefined8 *)p_Var16 = 0;
        *(undefined8 *)(p_Var16 + 8) = 0;
        *(__tree_end_node **)(p_Var16 + 0x10) = local_98;
        *pp_Var6 = p_Var16;
        p_Var8 = p_Var16;
        if (*(__tree_node **)local_80 != (__tree_node *)0x0) {
          p_Var8 = *pp_Var6;
          local_80 = *(__tree_node **)local_80;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_78,p_Var8);
        local_70 = local_70 + 1;
      }
      *(long **)(p_Var16 + 0x38) = plVar14 + 7;
      plVar9 = (long *)plVar14[1];
      if ((long *)plVar14[1] == (long *)0x0) {
        plVar9 = plVar14 + 2;
        bVar5 = *(long **)*plVar9 != plVar14;
        plVar14 = (long *)*plVar9;
        if (bVar5) {
          do {
                    /* try { // try from 00d83444 to 00e8344b has its CatchHandler @ 00d835f0 */
            lVar11 = *plVar9;
                    /* try { // try from 00d8344c to 00e8365f has its CatchHandler @ 00d82d10 */
            plVar9 = (long *)(lVar11 + 0x10);
            plVar14 = (long *)*plVar9;
          } while (*plVar14 != lVar11);
        }
      }
      else {
        do {
          plVar14 = plVar9;
          plVar9 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    }
    if (lVar12 != lVar13) {
      plVar14 = *(long **)(lVar12 + 0x28);
      while (plVar14 != (long *)(lVar12 + 0x30)) {
        pp_Var6 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
                  ::
                  __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
                              *)&local_80,&local_98,(basic_string *)(plVar14 + 4));
        p_Var16 = *pp_Var6;
        if (p_Var16 == (__tree_node_base *)0x0) {
          p_Var16 = operator_new(0x40);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(p_Var16 + 0x20),(basic_string *)(plVar14 + 4));
          *(undefined8 *)(p_Var16 + 0x38) = 0;
          *(undefined8 *)p_Var16 = 0;
          *(undefined8 *)(p_Var16 + 8) = 0;
          *(__tree_end_node **)(p_Var16 + 0x10) = local_98;
          *pp_Var6 = p_Var16;
                    /* catch() { ... } // from try @ 00d83348 with catch @ 00d834c4 */
          p_Var8 = p_Var16;
          if (*(__tree_node **)local_80 != (__tree_node *)0x0) {
            p_Var8 = *pp_Var6;
            local_80 = *(__tree_node **)local_80;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_78,p_Var8);
                    /* catch() { ... } // from try @ 00d83360 with catch @ 00d834e4 */
          local_70 = local_70 + 1;
        }
        *(long **)(p_Var16 + 0x38) = plVar14 + 7;
        plVar9 = (long *)plVar14[1];
        if ((long *)plVar14[1] == (long *)0x0) {
          plVar9 = plVar14 + 2;
          bVar5 = *(long **)*plVar9 != plVar14;
          plVar14 = (long *)*plVar9;
          if (bVar5) {
            do {
              lVar13 = *plVar9;
              plVar9 = (long *)(lVar13 + 0x10);
              plVar14 = (long *)*plVar9;
            } while (*plVar14 != lVar13);
          }
        }
        else {
          do {
                    /* catch() { ... } // from try @ 00d832d8 with catch @ 00d834f8 */
            plVar14 = plVar9;
                    /* catch() { ... } // from try @ 00d83398 with catch @ 00d834fc */
            plVar9 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x38) + 0x80);
    for (plVar14 = *(long **)(*(long *)(param_1 + 0x38) + 0x78); plVar14 != plVar9;
        plVar14 = plVar14 + 1) {
      lVar12 = *plVar14;
      pp_Var6 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
                ::
                __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
                            *)&local_80,&local_98,(basic_string *)(lVar12 + 0x20));
      p_Var16 = *pp_Var6;
      if (p_Var16 == (__tree_node_base *)0x0) {
        p_Var16 = operator_new(0x40);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(p_Var16 + 0x20),(basic_string *)(lVar12 + 0x20));
        *(undefined8 *)(p_Var16 + 0x38) = 0;
        *(undefined8 *)p_Var16 = 0;
        *(undefined8 *)(p_Var16 + 8) = 0;
        *(__tree_end_node **)(p_Var16 + 0x10) = local_98;
        *pp_Var6 = p_Var16;
        p_Var8 = p_Var16;
        if (*(__tree_node **)local_80 != (__tree_node *)0x0) {
          p_Var8 = *pp_Var6;
          local_80 = *(__tree_node **)local_80;
        }
                    /* catch() { ... } // from try @ 00d83070 with catch @ 00d835e8 */
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_78,p_Var8);
                    /* catch() { ... } // from try @ 00d83258 with catch @ 00d835ec */
                    /* catch() { ... } // from try @ 00d83078 with catch @ 00d835f0
                       catch() { ... } // from try @ 00d832c0 with catch @ 00d835f0
                       catch() { ... } // from try @ 00d83444 with catch @ 00d835f0 */
        local_70 = local_70 + 1;
      }
      pvVar17 = *(vector **)(p_Var16 + 0x38);
                    /* catch() { ... } // from try @ 00d83024 with catch @ 00d83610
                       catch() { ... } // from try @ 00d83098 with catch @ 00d83610 */
                    /* catch() { ... } // from try @ 00d83158 with catch @ 00d83614 */
      this_00 = (Slot *)(**(code **)(*(long *)this + 0x58))(this,param_1,lVar12,param_2);
                    /* catch() { ... } // from try @ 00d82fcc with catch @ 00d83618 */
      Slot::setRawDisplayDatas(this_00,pvVar17);
      if (pvVar17 != (vector *)0x0) {
                    /* catch() { ... } // from try @ 00d83218 with catch @ 00d83628 */
                    /* catch() { ... } // from try @ 00d831d8 with catch @ 00d8362c */
        local_90 = (__tree_end_node *)0x0;
        local_88 = (__tree_end_node *)0x0;
                    /* catch() { ... } // from try @ 00d8310c with catch @ 00d83630 */
        local_98 = (__tree_end_node *)0x0;
        plVar3 = *(long **)(pvVar17 + 8);
        __src = local_98;
                    /* catch() { ... } // from try @ 00d83160 with catch @ 00d83634
                       catch() { ... } // from try @ 00d83238 with catch @ 00d83634 */
        for (plVar2 = *(long **)pvVar17; local_98 = __src, plVar2 != plVar3; plVar2 = plVar2 + 1) {
          if (*plVar2 == 0) {
            if (local_90 < local_88) {
              *(undefined8 *)local_90 = 0;
              *(undefined4 *)(local_90 + 8) = 0;
              goto LAB_00d83648;
            }
            sVar18 = (long)local_90 - (long)__src;
            uVar15 = ((long)sVar18 >> 4) + 1;
            if (uVar15 >> 0x3c != 0) goto LAB_00d83844;
            if ((ulong)((long)local_88 - (long)__src >> 4) < 0x7ffffffffffffff) {
              uVar10 = (long)local_88 - (long)__src >> 3;
              if (uVar15 <= uVar10) {
                uVar15 = uVar10;
              }
              if (uVar15 != 0) {
                if (uVar15 >> 0x3c != 0) goto LAB_00d83844;
                goto LAB_00d83784;
              }
              p_Var7 = (__tree_end_node *)0x0;
            }
            else {
              uVar15 = 0xfffffffffffffff;
LAB_00d83784:
              p_Var7 = operator_new(uVar15 << 4);
            }
            p_Var1 = p_Var7 + ((long)sVar18 >> 4) * 0x10;
            *(undefined8 *)p_Var1 = 0;
            *(undefined4 *)(p_Var1 + 8) = 0;
            if (0 < (long)sVar18) {
              memcpy(p_Var7,__src,sVar18);
            }
            local_98 = p_Var7;
            local_90 = p_Var1 + 0x10;
            local_88 = p_Var7 + uVar15 * 0x10;
            if (__src == (__tree_end_node *)0x0) goto LAB_00d83650;
LAB_00d837c8:
            operator_delete(__src);
          }
          else {
            auVar19 = (**(code **)(*(long *)this + 0x40))(this,param_1,*plVar2,0,this_00);
            __src = local_98;
            if (local_90 < local_88) {
              *(undefined1 (*) [16])local_90 = auVar19;
LAB_00d83648:
              local_90 = local_90 + 0x10;
            }
            else {
              sVar18 = (long)local_90 - (long)local_98;
              uVar15 = ((long)sVar18 >> 4) + 1;
              if (uVar15 >> 0x3c != 0) {
LAB_00d83844:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if ((ulong)((long)local_88 - (long)local_98 >> 4) < 0x7ffffffffffffff) {
                uVar10 = (long)local_88 - (long)local_98 >> 3;
                if (uVar15 <= uVar10) {
                  uVar15 = uVar10;
                }
                if (uVar15 != 0) {
                  if (uVar15 >> 0x3c != 0) goto LAB_00d83844;
                  goto LAB_00d83738;
                }
                p_Var7 = (__tree_end_node *)0x0;
              }
              else {
                uVar15 = 0xfffffffffffffff;
LAB_00d83738:
                p_Var7 = operator_new(uVar15 << 4);
              }
              p_Var1 = p_Var7 + ((long)sVar18 >> 4) * 0x10;
              *(undefined1 (*) [16])p_Var1 = auVar19;
              if (0 < (long)sVar18) {
                memcpy(p_Var7,__src,sVar18);
              }
              local_98 = p_Var7;
              local_90 = p_Var1 + 0x10;
              local_88 = p_Var7 + uVar15 * 0x10;
              if (__src != (__tree_end_node *)0x0) goto LAB_00d837c8;
            }
          }
LAB_00d83650:
          __src = local_98;
        }
                    /* catch() { ... } // from try @ 00d83824 with catch @ 00d837ec */
        Slot::_setDisplayList(this_00,(vector *)&local_98);
        if (local_98 != (__tree_end_node *)0x0) {
          local_90 = local_98;
          operator_delete(local_98);
        }
      }
                    /* catch() { ... } // from try @ 00d83308 with catch @ 00d8355c */
      Slot::_setDisplayIndex(this_00,*(int *)(lVar12 + 0x14),true);
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>*>>>
               *)&local_80,local_78);
  }
                    /* try { // try from 00d8381c to 00e83823 has its CatchHandler @ 00d8385c */
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 00d83824 to 00e83877 has its CatchHandler @ 00d837ec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

