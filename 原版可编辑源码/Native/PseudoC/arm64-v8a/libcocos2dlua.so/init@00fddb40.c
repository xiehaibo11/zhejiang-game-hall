
/* cocos2d::GroupCommand::init(float) */

void __thiscall cocos2d::GroupCommand::init(GroupCommand *this,float param_1)

{
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  GroupCommandManager *this_00;
  int local_4c [3];
  int *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(float *)(this + 0xc) = param_1;
  lVar4 = Director::getInstance();
                    /* catch() { ... } // from try @ 00fddb00 with catch @ 00fddb6c */
  local_4c[0] = *(int *)(this + 0x18);
  this_00 = *(GroupCommandManager **)((long)&__DT_SYMTAB[0xa30].st_size + *(long *)(lVar4 + 0x1b0));
                    /* catch() { ... } // from try @ 00fddabc with catch @ 00fddb80 */
  local_40 = local_4c;
                    /* catch() { ... } // from try @ 00fdd9f8 with catch @ 00fddb94 */
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,bool>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)(this_00 + 0x28),(piecewise_construct_t *)local_4c,
                     (tuple *)&DAT_0144cf3e,(tuple *)&local_40);
  *(undefined1 *)(lVar4 + 0x14) = 0;
  piVar1 = *(int **)(this_00 + 0x58);
                    /* catch() { ... } // from try @ 00fddbe8 with catch @ 00fddbb0 */
  if (piVar1 == *(int **)(this_00 + 0x60)) {
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
              ((vector<int,std::__ndk1::allocator<int>> *)(this_00 + 0x50),local_4c);
  }
  else {
    *piVar1 = local_4c[0];
    *(int **)(this_00 + 0x58) = piVar1 + 1;
  }
  uVar3 = GroupCommandManager::getGroupID(this_00);
  *(undefined4 *)(this + 0x18) = uVar3;
                    /* try { // try from 00fddbe0 to 010ddbe7 has its CatchHandler @ 00fddc50 */
                    /* try { // try from 00fddbe8 to 010ddc6b has its CatchHandler @ 00fddbb0 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

