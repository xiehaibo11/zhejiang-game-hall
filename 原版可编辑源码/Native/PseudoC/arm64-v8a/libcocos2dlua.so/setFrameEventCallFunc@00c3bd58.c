
/* cocostudio::ArmatureAnimation::setFrameEventCallFunc(cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocostudio::Bone*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, int)) */

void cocostudio::ArmatureAnimation::setFrameEventCallFunc
               (Ref *param_1,_func_void_Bone_ptr_basic_string_ptr_int_int *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  *(_func_void_Bone_ptr_basic_string_ptr_int_int **)(param_1 + 0x170) = param_2;
  *(undefined8 *)(param_1 + 0x158) = in_x2;
  *(undefined8 *)(param_1 + 0x160) = in_x3;
  return;
}

