
/* std::__ndk1::__tree<std::__ndk1::__value_type<cocos2d::NTextureData::Usage, cocos2d::Texture2D*>,
   std::__ndk1::__map_value_compare<cocos2d::NTextureData::Usage,
   std::__ndk1::__value_type<cocos2d::NTextureData::Usage, cocos2d::Texture2D*>,
   std::__ndk1::less<cocos2d::NTextureData::Usage>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,
   cocos2d::Texture2D*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,
   cocos2d::Texture2D*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::__map_value_compare<cocos2d::NTextureData::Usage,std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::less<cocos2d::NTextureData::Usage>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>>>
::destroy(__tree<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::__map_value_compare<cocos2d::NTextureData::Usage,std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>,std::__ndk1::less<cocos2d::NTextureData::Usage>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::NTextureData::Usage,cocos2d::Texture2D*>>>
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

