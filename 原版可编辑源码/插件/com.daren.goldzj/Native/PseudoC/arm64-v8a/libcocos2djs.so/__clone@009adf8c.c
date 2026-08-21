
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::network::HttpClient::*)(),
   cocos2d::network::HttpClient*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::network::HttpClient::*)(), cocos2d::network::HttpClient*> >, void
   ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::network::HttpClient::*)(),cocos2d::network::HttpClient*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::HttpClient::*)(),cocos2d::network::HttpClient*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::network::HttpClient::*)(),cocos2d::network::HttpClient*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::network::HttpClient::*)(),cocos2d::network::HttpClient*>>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 009adf8c to 00aadfe3 has its CatchHandler @ 009adf8c
                       catch() { ... } // from try @ 009adf8c with catch @ 009adf8c
                       catch() { ... } // from try @ 009ae31c with catch @ 009adf8c
                       catch() { ... } // from try @ 009ae450 with catch @ 009adf8c */
  *(undefined ***)param_1 = &PTR_FUN_01c6aa68;
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

