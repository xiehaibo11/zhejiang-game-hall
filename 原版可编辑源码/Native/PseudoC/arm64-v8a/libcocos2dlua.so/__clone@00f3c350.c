
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::RenderTexture::*)(),
   cocos2d::RenderTexture*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::RenderTexture::*)(), cocos2d::RenderTexture*> >, void
   ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::RenderTexture::*)(),cocos2d::RenderTexture*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::RenderTexture::*)(),cocos2d::RenderTexture*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::RenderTexture::*)(),cocos2d::RenderTexture*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::RenderTexture::*)(),cocos2d::RenderTexture*>>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_0170fcc8;
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
                    /* try { // try from 00f3c36c to 0103c373 has its CatchHandler @ 00f3c3a8 */
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

