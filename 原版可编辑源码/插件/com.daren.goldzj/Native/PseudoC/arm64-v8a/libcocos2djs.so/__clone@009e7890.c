
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,
   cocos2d::network::HttpResponse*), cocos2d::network::SIOClientImpl*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,
   cocos2d::network::HttpResponse*), cocos2d::network::SIOClientImpl*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&> >, void
   (cocos2d::network::HttpClient*, cocos2d::network::HttpResponse*)>::__clone() const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 009e7894 to 00ae78bb has its CatchHandler @ 009e7af8 */
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_01c6bf80;
                    /* try { // try from 009e78bc to 00ae78cb has its CatchHandler @ 009e7ad0 */
  uVar3 = *(undefined8 *)(this + 0x10);
  uVar2 = *(undefined8 *)(this + 8);
  puVar1[3] = *(undefined8 *)(this + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}

