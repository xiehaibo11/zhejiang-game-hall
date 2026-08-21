
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,
   cocos2d::network::HttpResponse*), cocos2d::network::SIOClientImpl*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,
   cocos2d::network::HttpResponse*), cocos2d::network::SIOClientImpl*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&> >, void
   (cocos2d::network::HttpClient*,
   cocos2d::network::HttpResponse*)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::network::HttpClient*&&,
   cocos2d::network::HttpResponse*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::SIOClientImpl::*)(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*),cocos2d::network::SIOClientImpl*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)>
             *this,HttpClient **param_1,HttpResponse **param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 009e7904 to 00ae790b has its CatchHandler @ 009e7af8 */
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
                    /* try { // try from 009e790c to 00ae791b has its CatchHandler @ 009e7ac8 */
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x009e7920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_1,*param_2);
  return;
}

