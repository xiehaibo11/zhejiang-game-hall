
/* cocostudio::ArmatureMovementDispatcher::addAnimationEventCallBack(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocostudio::Armature*, cocostudio::MovementEventType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)) */

void cocostudio::ArmatureMovementDispatcher::addAnimationEventCallBack
               (Ref *param_1,_func_void_Armature_ptr_MovementEventType_basic_string_ptr *param_2)

{
  long lVar1;
  undefined1 local_40 [16];
  Ref *pRStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pRStack_30 = (Ref *)param_2;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::__unordered_map_hasher<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::hash<cocos2d::Ref*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::equal_to<cocos2d::Ref*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>
  ::
  __emplace_unique_key_args<cocos2d::Ref*,cocos2d::Ref*&,void(cocos2d::Ref::*&)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>
            (*(__hash_table<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::__unordered_map_hasher<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::hash<cocos2d::Ref*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Ref*,std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>,std::__ndk1::equal_to<cocos2d::Ref*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Ref*,void(cocos2d::Ref::*)(cocostudio::Armature*,cocostudio::MovementEventType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>
               **)(param_1 + 0x28),&pRStack_30,&pRStack_30,
             (_func_void_Armature_ptr_MovementEventType_basic_string_ptr *)local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

