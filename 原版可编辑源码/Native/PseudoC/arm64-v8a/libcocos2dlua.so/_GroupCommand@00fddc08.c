
/* cocos2d::GroupCommand::~GroupCommand() */

void __thiscall cocos2d::GroupCommand::~GroupCommand(GroupCommand *this)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int local_4c [3];
  int *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined ***)this = &PTR__GroupCommand_01723fe8;
  lVar3 = Director::getInstance();
  local_4c[0] = *(int *)(this + 0x18);
                    /* catch() { ... } // from try @ 00fddbe0 with catch @ 00fddc50 */
  lVar4 = *(long *)((long)&__DT_SYMTAB[0xa30].st_size + *(long *)(lVar3 + 0x1b0));
  local_40 = local_4c;
                    /* catch() { ... } // from try @ 00fddc9c with catch @ 00fddc6c */
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,bool>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)(lVar4 + 0x28),(piecewise_construct_t *)local_4c,(tuple *)&DAT_0144cf3e,
                     (tuple *)&local_40);
  *(undefined1 *)(lVar3 + 0x14) = 0;
  piVar1 = *(int **)(lVar4 + 0x58);
  if (piVar1 == *(int **)(lVar4 + 0x60)) {
                    /* try { // try from 00fddc9c to 010ddd17 has its CatchHandler @ 00fddc6c */
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
              ((vector<int,std::__ndk1::allocator<int>> *)(lVar4 + 0x50),local_4c);
  }
  else {
    *piVar1 = local_4c[0];
                    /* try { // try from 00fddc94 to 010ddc9b has its CatchHandler @ 00fddcfc */
    *(int **)(lVar4 + 0x58) = piVar1 + 1;
  }
  RenderCommand::~RenderCommand((RenderCommand *)this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

