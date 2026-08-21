
/* std::__ndk1::__tree<std::__ndk1::__value_type<cocos2d::Texture2D::PixelFormat,
   cocos2d::Texture2D::PixelFormatInfo const>,
   std::__ndk1::__map_value_compare<cocos2d::Texture2D::PixelFormat,
   std::__ndk1::__value_type<cocos2d::Texture2D::PixelFormat, cocos2d::Texture2D::PixelFormatInfo
   const>, std::__ndk1::less<cocos2d::Texture2D::PixelFormat>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Texture2D::PixelFormat,
   cocos2d::Texture2D::PixelFormatInfo const> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<cocos2d::Texture2D::PixelFormat,
   cocos2d::Texture2D::PixelFormatInfo const>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<cocos2d::Texture2D::PixelFormat,cocos2d::Texture2D::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Texture2D::PixelFormat,std::__ndk1::__value_type<cocos2d::Texture2D::PixelFormat,cocos2d::Texture2D::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Texture2D::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Texture2D::PixelFormat,cocos2d::Texture2D::PixelFormatInfo_const>>>
::destroy(__tree<std::__ndk1::__value_type<cocos2d::Texture2D::PixelFormat,cocos2d::Texture2D::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Texture2D::PixelFormat,std::__ndk1::__value_type<cocos2d::Texture2D::PixelFormat,cocos2d::Texture2D::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Texture2D::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Texture2D::PixelFormat,cocos2d::Texture2D::PixelFormatInfo_const>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
                    /* try { // try from 00fed468 to 010ed493 has its CatchHandler @ 00fed5c4 */
    operator_delete(param_1);
    return;
  }
  return;
}

