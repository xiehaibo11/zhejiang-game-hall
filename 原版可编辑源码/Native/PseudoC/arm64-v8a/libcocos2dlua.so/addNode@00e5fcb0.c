
/* cocos2d::PURibbonTrail::addNode(cocos2d::Node*) */

void __thiscall cocos2d::PURibbonTrail::addNode(PURibbonTrail *this,Node *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Node *pNVar3;
  long lVar4;
  Node *local_60;
  Node *local_58;
  Node *local_50 [2];
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58 = *(Node **)(*(long *)(this + 0x120) + -8);
  puVar1 = *(undefined8 **)(this + 0x108);
  *(undefined8 **)(this + 0x120) = (undefined8 *)(*(long *)(this + 0x120) + -8);
  local_50[0] = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x110)) {
    std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
    __push_back_slow_path<unsigned_long_const&>
              ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0x100),
               (ulong *)&local_58);
  }
  else {
    *puVar1 = local_58;
    *(undefined8 **)(this + 0x108) = puVar1 + 1;
  }
  pNVar3 = local_58;
  local_60 = local_50[0];
  local_40 = (undefined1 *)&local_60;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node_const*,unsigned_long>,std::__ndk1::__unordered_map_hasher<cocos2d::Node_const*,std::__ndk1::__hash_value_type<cocos2d::Node_const*,unsigned_long>,std::__ndk1::hash<cocos2d::Node_const*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node_const*,std::__ndk1::__hash_value_type<cocos2d::Node_const*,unsigned_long>,std::__ndk1::equal_to<cocos2d::Node_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node_const*,unsigned_long>>>
          ::
          __emplace_unique_key_args<cocos2d::Node_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node_const*&&>,std::__ndk1::tuple<>>
                    ((Node **)(this + 0x130),(piecewise_construct_t *)&local_60,
                     (tuple *)&DAT_014261e2,(tuple *)&local_40);
  *(Node **)(lVar4 + 0x18) = pNVar3;
  resetTrail((ulong)this,local_58);
  puVar1 = *(undefined8 **)(this + 0xf0);
  if (puVar1 == *(undefined8 **)(this + 0xf8)) {
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
    __push_back_slow_path<cocos2d::Node*const&>
              ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0xe8),
               local_50);
  }
  else {
    *puVar1 = local_50[0];
    *(undefined8 **)(this + 0xf0) = puVar1 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

