
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
  undefined8 *__dest;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ArmatureData *pAVar6;
  long lVar7;
  undefined8 *puVar8;
  ArmatureData *pAVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  __tree_node **local_90;
  __tree_node *local_88;
  undefined8 uStack_80;
  piecewise_construct_t *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar11 = *(long *)(param_2 + 0x138);
  if (lVar11 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_3) {
      Animation::setAnimations(*(Animation **)(param_1 + 0xa8),(map *)(param_2 + 0x120));
    }
    else {
      lVar7 = *(long *)(param_1 + 0xa8);
      local_88 = (__tree_node *)0x0;
      uStack_80 = 0;
      plVar12 = *(long **)(lVar7 + 0x50);
      local_90 = &local_88;
      while (plVar12 != (long *)(lVar7 + 0x58)) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
        ::
        __emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,dragonBones::AnimationData*>const&>
                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                    *)&local_90,&local_88,plVar12 + 4,plVar12 + 4);
        plVar5 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar5 = plVar12 + 2;
          bVar2 = *(long **)*plVar5 != plVar12;
          plVar12 = (long *)*plVar5;
          if (bVar2) {
            do {
              lVar3 = *plVar5;
              plVar5 = (long *)(lVar3 + 0x10);
              plVar12 = (long *)*plVar5;
            } while (*plVar12 != lVar3);
          }
        }
        else {
          do {
            plVar12 = plVar5;
            plVar5 = (long *)*plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
        }
      }
      pAVar9 = *(ArmatureData **)(param_2 + 0x120);
joined_r0x00d31894:
      if (pAVar9 != param_2 + 0x128) {
        do {
          uVar4 = *(undefined8 *)(pAVar9 + 0x38);
          local_70 = (piecewise_construct_t *)(pAVar9 + 0x20);
          lVar7 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                            ((basic_string *)&local_90,local_70,(tuple *)&DAT_0194872d,
                             (tuple *)&local_70);
          *(undefined8 *)(lVar7 + 0x38) = uVar4;
          pAVar6 = *(ArmatureData **)(pAVar9 + 8);
          if (*(ArmatureData **)(pAVar9 + 8) == (ArmatureData *)0x0) {
            pAVar6 = pAVar9 + 0x10;
            bVar2 = *(ArmatureData **)*(ArmatureData **)pAVar6 == pAVar9;
            pAVar9 = *(ArmatureData **)pAVar6;
            if (bVar2) goto joined_r0x00d31894;
            do {
              lVar7 = *(long *)pAVar6;
              pAVar6 = (ArmatureData *)(lVar7 + 0x10);
              pAVar9 = *(ArmatureData **)pAVar6;
            } while (*(long *)pAVar9 != lVar7);
          }
          else {
            do {
              pAVar9 = pAVar6;
              pAVar6 = *(ArmatureData **)pAVar9;
            } while (*(ArmatureData **)pAVar9 != (ArmatureData *)0x0);
          }
          if (pAVar9 == param_2 + 0x128) break;
        } while( true );
      }
      Animation::setAnimations(*(Animation **)(param_1 + 0xa8),(map *)&local_90);
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                 *)&local_90,local_88);
    }
    plVar12 = *(long **)(param_1 + 0x78);
    plVar5 = *(long **)(param_1 + 0x80);
    if (plVar12 != plVar5) {
      do {
        lVar7 = *plVar12;
        __src = *(void **)(lVar7 + 0x140);
        __n = *(long *)(lVar7 + 0x148) - (long)__src;
        if (__n == 0) {
          __dest = (undefined8 *)0x0;
        }
        else {
          if ((ulong)((long)__n >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          __dest = operator_new(__n);
          puVar8 = __dest;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
            puVar8 = (undefined8 *)((long)__dest + __n);
          }
          if (__dest != puVar8) {
            uVar10 = 0;
            puVar13 = __dest;
            do {
              if (*(int *)(puVar13 + 1) == 1) {
                lVar3 = std::__ndk1::
                        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                        ::
                        find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                                    *)(lVar11 + 0x28),
                                   (basic_string *)(*(long *)(lVar7 + 200) + 0x20));
                if (lVar11 + 0x30 != lVar3) {
                  if (((((ulong)uVar10 <
                         (ulong)(*(long *)(lVar3 + 0x40) - *(long *)(lVar3 + 0x38) >> 3)) &&
                       (lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + (ulong)uVar10 * 8), lVar3 != 0))
                      && (*(int *)(lVar3 + 0x10) == 1)) &&
                     (lVar3 = (**(code **)(*(long *)this + 0x90))
                                        (this,lVar3 + 0x30,
                                         *(long *)(*(long *)(*(long *)(lVar3 + 0x60) + 0x40) + 0x158
                                                  ) + 0x30), lVar3 != 0)) {
                    (**(code **)(*(long *)this + 200))(this,*puVar13,lVar3,param_3);
                  }
                }
              }
              puVar13 = puVar13 + 2;
              uVar10 = uVar10 + 1;
            } while (puVar8 != puVar13);
          }
        }
        if (__dest != (undefined8 *)0x0) {
          operator_delete(__dest);
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar5);
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

