
/* cocos2d::network::SocketIO::~SocketIO() */

void __thiscall cocos2d::network::SocketIO::~SocketIO(SocketIO *this)

{
  undefined8 *puVar1;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>
  *this_00;
  void *pvVar2;
  
  this_00 = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>
             *)(this + 8);
  *(undefined ***)this = &PTR__SocketIO_01c6bed8;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>
  ::clear(this_00);
  puVar1 = *(void **)(this + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this_00;
  *(undefined8 *)this_00 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

