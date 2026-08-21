
/* std::__ndk1::__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,
   cocos2d::Image::PixelFormatInfo const>,
   std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,
   std::__ndk1::__value_type<cocos2d::Image::PixelFormat, cocos2d::Image::PixelFormatInfo const>,
   std::__ndk1::less<cocos2d::Image::PixelFormat>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,
   cocos2d::Image::PixelFormatInfo const> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,
   cocos2d::Image::PixelFormatInfo const>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
::destroy(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
                    /* try { // try from 00999248 to 00a99253 has its CatchHandler @ 0099956c */
    destroy(this,*(__tree_node **)param_1);
                    /* try { // try from 00999254 to 00a9925f has its CatchHandler @ 00999568 */
    destroy(this,*(__tree_node **)(param_1 + 8));
                    /* try { // try from 00999260 to 00a99277 has its CatchHandler @ 00999580 */
    operator_delete(param_1);
    return;
  }
  return;
}

