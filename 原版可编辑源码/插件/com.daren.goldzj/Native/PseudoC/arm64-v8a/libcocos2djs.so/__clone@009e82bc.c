
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::network::SIOClientImpl::*)(float), cocos2d::network::SIOClientImpl*,
   std::__ndk1::placeholders::__ph<1> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::network::SIOClientImpl::*)(float), cocos2d::network::SIOClientImpl*,
   std::__ndk1::placeholders::__ph<1> const&> >, void
   (float)>::__clone(std::__ndk1::__function::__base<void (float)>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(float),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(float),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&>>,void(float)>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(float),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(float),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&>>,void(float)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_01c6c018;
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
                    /* try { // try from 009e82d8 to 00ae8333 has its CatchHandler @ 009e82d8
                       catch() { ... } // from try @ 009e82d8 with catch @ 009e82d8
                       catch() { ... } // from try @ 009e85a0 with catch @ 009e82d8 */
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

