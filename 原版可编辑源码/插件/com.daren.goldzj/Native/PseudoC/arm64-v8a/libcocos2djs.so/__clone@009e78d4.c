
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,
   cocos2d::network::HttpResponse*), cocos2d::network::SIOClientImpl*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,
   cocos2d::network::HttpResponse*), cocos2d::network::SIOClientImpl*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&> >, void
   (cocos2d::network::HttpClient*,
   cocos2d::network::HttpResponse*)>::__clone(std::__ndk1::__function::__base<void
   (cocos2d::network::HttpClient*, cocos2d::network::HttpResponse*)>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 009e78dc to 00ae78e3 has its CatchHandler @ 009e7af8 */
  *(undefined ***)param_1 = &PTR_FUN_01c6bf80;
                    /* try { // try from 009e78e4 to 00ae78f3 has its CatchHandler @ 009e7acc */
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

