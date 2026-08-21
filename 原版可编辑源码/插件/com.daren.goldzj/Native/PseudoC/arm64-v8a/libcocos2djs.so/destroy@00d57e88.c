
/* std::__ndk1::__tree<std::__ndk1::__value_type<dragonBones::Bone*, cocos2d::renderer::NodeProxy*>,
   std::__ndk1::__map_value_compare<dragonBones::Bone*,
   std::__ndk1::__value_type<dragonBones::Bone*, cocos2d::renderer::NodeProxy*>,
   std::__ndk1::less<dragonBones::Bone*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<dragonBones::Bone*,
   cocos2d::renderer::NodeProxy*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<dragonBones::Bone*,
   cocos2d::renderer::NodeProxy*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>,std::__ndk1::__map_value_compare<dragonBones::Bone*,std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>,std::__ndk1::less<dragonBones::Bone*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>>>
::destroy(__tree<std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>,std::__ndk1::__map_value_compare<dragonBones::Bone*,std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>,std::__ndk1::less<dragonBones::Bone*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<dragonBones::Bone*,cocos2d::renderer::NodeProxy*>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

