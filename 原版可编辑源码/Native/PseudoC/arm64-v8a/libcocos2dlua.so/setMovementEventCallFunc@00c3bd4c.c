
/* cocostudio::ArmatureAnimation::setMovementEventCallFunc(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocostudio::Armature*, cocostudio::MovementEventType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)) */

void cocostudio::ArmatureAnimation::setMovementEventCallFunc
               (Ref *param_1,_func_void_Armature_ptr_MovementEventType_basic_string_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  *(_func_void_Armature_ptr_MovementEventType_basic_string_ptr **)(param_1 + 0x168) = param_2;
  *(undefined8 *)(param_1 + 0x148) = in_x2;
  *(undefined8 *)(param_1 + 0x150) = in_x3;
  return;
}

