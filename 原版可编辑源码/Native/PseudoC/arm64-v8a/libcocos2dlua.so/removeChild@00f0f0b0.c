
/* cocos2d::Label::removeChild(cocos2d::Node*, bool) */

void __thiscall cocos2d::Label::removeChild(Label *this,Node *param_1,bool param_2)

{
  long *plVar1;
  
  Node::removeChild((Node *)this,param_1,param_2);
  plVar1 = *(long **)(this + 0x650);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if ((Node *)plVar1[3] == param_1) break;
    plVar1 = (long *)*plVar1;
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>>>
  ::__erase_unique<int>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>>>
              *)(this + 0x640),(int *)(plVar1 + 2));
  return;
}

