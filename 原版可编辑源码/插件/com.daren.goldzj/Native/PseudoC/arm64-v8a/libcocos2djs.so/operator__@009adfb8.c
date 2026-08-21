
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::network::HttpClient::*)(),
   cocos2d::network::HttpClient*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::network::HttpClient::*)(), cocos2d::network::HttpClient*> >, void
   ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::network::HttpClient::*)(),cocos2d::network::HttpClient*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::HttpClient::*)(),cocos2d::network::HttpClient*>>,void()>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::network::HttpClient::*)(),cocos2d::network::HttpClient*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::HttpClient::*)(),cocos2d::network::HttpClient*>>,void()>
             *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x009adfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

