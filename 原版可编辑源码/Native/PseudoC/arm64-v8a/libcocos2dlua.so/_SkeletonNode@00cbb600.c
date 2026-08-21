
/* cocostudio::timeline::SkeletonNode::~SkeletonNode() */

void __thiscall cocostudio::timeline::SkeletonNode::~SkeletonNode(SkeletonNode *this)

{
  void *pvVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar2 = *(long **)(this + 0x450);
  *(undefined ***)this = &PTR__SkeletonNode_016cd5c0;
  *(undefined ***)(this + 0x2f8) = &PTR__SkeletonNode_016cdbf8;
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    BoneNode::setRootSkeleton((BoneNode *)this,(BoneNode *)plVar2[5],(SkeletonNode *)0x0);
  }
  cocos2d::CustomCommand::~CustomCommand((CustomCommand *)(this + 0x600));
  pvVar1 = *(void **)(this + 0x5d8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x5e0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x5c0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x5c8) = pvVar1;
    operator_delete(pvVar1);
  }
  puVar3 = *(undefined8 **)(this + 0x5a0);
  puVar4 = *(undefined8 **)(this + 0x5a8);
  if (puVar3 != puVar4) {
    do {
      cocos2d::Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x5a0);
  }
  *(undefined8 **)(this + 0x5a8) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x5a8) = puVar3;
    operator_delete(puVar3);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__...st,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::_____st,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>>
             *)(this + 0x588),*(__tree_node **)(this + 0x590));
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>
  ::~Map((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>
          *)(this + 0x440));
  BoneNode::~BoneNode((BoneNode *)this);
  return;
}

