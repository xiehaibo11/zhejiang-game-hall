
void FUN_00fa80f4(long param_1,long *param_2)

{
  piecewise_construct_t *ppVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_60;
  undefined4 local_54;
  piecewise_construct_t *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa80d8 with catch @ 00fa8118
                        */
  lVar7 = *param_2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa8008 with catch @ 00fa811c
                        */
  lVar8 = *(long *)(param_1 + 8);
  iVar2 = *(int *)(lVar7 + 0x38);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa806c with catch @ 00fa8124
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa8028 with catch @ 00fa8128
                        */
  if (iVar2 == 2) {
    plVar4 = *(long **)(lVar8 + 0x1b0);
    if (plVar4 != (long *)0x0) {
      local_50 = *(piecewise_construct_t **)(lVar7 + 0x40);
      local_54 = *(undefined4 *)(lVar7 + 0x48);
      local_60 = lVar7;
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_50,&local_54,&local_60);
    }
  }
  else if (iVar2 == 1) {
    ppVar1 = (piecewise_construct_t *)(lVar7 + 0x48);
                    /* try { // try from 00fa815c to 010a815f has its CatchHandler @ 00fa8168 */
                    /* try { // try from 00fa8160 to 010a816b has its CatchHandler @ 00fa7fb4 */
    local_50 = ppVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa815c with catch @ 00fa8168
                        */
                    /* try { // try from 00fa816c to 010a816f has its CatchHandler @ 00fa8178 */
                    /* try { // try from 00fa8170 to 010a817b has its CatchHandler @ 00fa7fb4 */
    lVar5 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Controller::_keyStatus>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Controller::_keyStatus>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Controller::_keyStatus>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Controller::_keyStatus>>>
            ::
            __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                      ((int *)(*(long *)(lVar7 + 0x40) + 8),ppVar1,(tuple *)&DAT_0144b30a,
                       (tuple *)&local_50);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa816c with catch @ 00fa8178
                        */
                    /* catch() { ... } // from try @ 00fa81d0 with catch @ 00fa817c
                       catch() { ... } // from try @ 00fa8230 with catch @ 00fa817c */
    local_50 = ppVar1;
    lVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Controller::_keyStatus>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Controller::_keyStatus>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Controller::_keyStatus>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Controller::_keyStatus>>>
            ::
            __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                      ((int *)(*(long *)(lVar7 + 0x40) + 0x30),ppVar1,(tuple *)&DAT_0144b30a,
                       (tuple *)&local_50);
    plVar4 = *(long **)(lVar8 + 0x120);
                    /* try { // try from 00fa81cc to 010a81cf has its CatchHandler @ 00fa8230 */
                    /* try { // try from 00fa81d0 to 010a8227 has its CatchHandler @ 00fa817c */
    if (((((plVar4 != (long *)0x0) && (*(char *)(lVar5 + 0x14) != '\0')) &&
         (*(char *)(lVar6 + 0x14) == '\0')) ||
        (((plVar4 = *(long **)(lVar8 + 0x150), plVar4 != (long *)0x0 &&
          (*(char *)(lVar5 + 0x14) == '\0')) && (*(char *)(lVar6 + 0x14) != '\0')))) ||
       (((plVar4 = *(long **)(lVar8 + 0x180), plVar4 != (long *)0x0 &&
         (*(char *)(lVar5 + 0x14) != '\0')) && (*(char *)(lVar6 + 0x14) != '\0')))) {
      local_50 = *(piecewise_construct_t **)(lVar7 + 0x40);
                    /* try { // try from 00fa8250 to 010a83ab has its CatchHandler @ 00fa8250
                       catch() { ... } // from try @ 00fa8250 with catch @ 00fa8250
                       catch() { ... } // from try @ 00fa83c8 with catch @ 00fa8250
                       catch() { ... } // from try @ 00fa84c8 with catch @ 00fa8250 */
      local_54 = *(undefined4 *)(lVar7 + 0x48);
      local_60 = lVar7;
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_50,&local_54,&local_60);
    }
  }
  else if (iVar2 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa8020 with catch @ 00fa8138
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa8060 with catch @ 00fa813c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa80ac with catch @ 00fa813c
                        */
    if (*(char *)(lVar7 + 0x4c) == '\0') {
      plVar4 = *(long **)(lVar8 + 0xf0);
    }
    else {
      plVar4 = *(long **)(lVar8 + 0xc0);
    }
    if (plVar4 != (long *)0x0) {
      local_50 = *(piecewise_construct_t **)(lVar7 + 0x40);
                    /* try { // try from 00fa8228 to 010a822f has its CatchHandler @ 00fa8230 */
                    /* catch() { ... } // from try @ 00fa81cc with catch @ 00fa8230
                       catch() { ... } // from try @ 00fa8228 with catch @ 00fa8230
                       try { // try from 00fa8230 to 010a824f has its CatchHandler @ 00fa817c */
      local_60 = lVar7;
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_50,&local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

