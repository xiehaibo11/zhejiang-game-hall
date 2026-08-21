
/* cocos2d::network::SIOClientImpl::~SIOClientImpl() */

void __thiscall cocos2d::network::SIOClientImpl::~SIOClientImpl(SIOClientImpl *this)

{
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
  *this_00;
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* try { // try from 009e2188 to 00ae21c3 has its CatchHandler @ 009e22d8 */
  *(undefined ***)this = &PTR__SIOClientImpl_01c6be38;
  *(undefined ***)(this + 0x10) = &PTR__SIOClientImpl_01c6be78;
  if (*(Ref **)(this + 0x170) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x170));
  }
  this_00 = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
             *)(this + 0x178);
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
  ::clear(this_00);
  puVar1 = *(void **)(this + 0x188);
  while (puVar1 != (void *)0x0) {
                    /* try { // try from 009e21c4 to 00ae232f has its CatchHandler @ 009e1e38 */
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this_00;
  *(undefined8 *)this_00 = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (((byte)this[0x150] & 1) != 0) {
    operator_delete(*(void **)(this + 0x160));
  }
  Uri::~Uri((Uri *)(this + 0x38));
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  Ref::~Ref((Ref *)this);
  return;
}

