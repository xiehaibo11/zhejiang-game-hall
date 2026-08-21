
/* cocos2d::GroupCommandManager::getGroupID() */

void __thiscall cocos2d::GroupCommandManager::getGroupID(GroupCommandManager *this)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 local_4c [3];
  undefined4 *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00fdd9fc with catch @ 00fdd9a4
                       catch() { ... } // from try @ 00fddac4 with catch @ 00fdd9a4
                       catch() { ... } // from try @ 00fddb04 with catch @ 00fdd9a4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x50) == *(long *)(this + 0x58)) {
    lVar2 = Director::getInstance();
    local_4c[0] = Renderer::createRenderQueue(*(Renderer **)(lVar2 + 0x1b0));
  }
  else {
    puVar3 = (undefined4 *)(*(long *)(this + 0x58) + -4);
    local_4c[0] = *puVar3;
    *(undefined4 **)(this + 0x58) = puVar3;
  }
  local_40 = local_4c;
                    /* try { // try from 00fdd9f8 to 010dd9fb has its CatchHandler @ 00fddb94 */
                    /* try { // try from 00fdd9fc to 010ddabb has its CatchHandler @ 00fdd9a4 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,bool>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x28),(piecewise_construct_t *)local_4c,(tuple *)&DAT_0144cf3e,
                     (tuple *)&local_40);
  *(undefined1 *)(lVar2 + 0x14) = 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_4c[0]);
}

