
/* cocostudio::timeline::ActionTimeline::~ActionTimeline() */

void __thiscall cocostudio::timeline::ActionTimeline::~ActionTimeline(ActionTimeline *this)

{
  ActionTimeline *pAVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(undefined ***)this = &PTR__ActionTimeline_016cc4d0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016cc648;
  *(undefined ***)(this + 0x50) = &PTR__ActionTimeline_016cc670;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>>>
             *)(this + 0x138),*(__tree_node **)(this + 0x140));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void()>>>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void()>>>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void()>>>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void()>>>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void()>>>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void()>>>>>>>
             *)(this + 0x120),*(__tree_node **)(this + 0x128));
  pAVar1 = *(ActionTimeline **)(this + 0x110);
  if (this + 0xf0 == pAVar1) {
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x20);
LAB_00caa1d0:
    (*pcVar2)();
  }
  else if (pAVar1 != (ActionTimeline *)0x0) {
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x28);
    goto LAB_00caa1d0;
  }
  pAVar1 = *(ActionTimeline **)(this + 0xe0);
  if (this + 0xc0 == pAVar1) {
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x20);
  }
  else {
    if (pAVar1 == (ActionTimeline *)0x0) goto LAB_00caa200;
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00caa200:
  puVar3 = *(undefined8 **)(this + 0x70);
  puVar4 = *(undefined8 **)(this + 0x78);
  if (puVar3 != puVar4) {
    do {
      cocos2d::Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x70);
  }
  *(undefined8 **)(this + 0x78) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x78) = puVar3;
    operator_delete(puVar3);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
             *)(this + 0x58),*(__tree_node **)(this + 0x60));
  cocos2d::Action::~Action((Action *)this);
  return;
}

