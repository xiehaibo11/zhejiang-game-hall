
/* cocos2d::network::SIOClient::SIOClient(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::network::SIOClientImpl*, cocos2d::network::SocketIO::SIODelegate&) */

void __thiscall
cocos2d::network::SIOClient::SIOClient
          (SIOClient *this,basic_string *param_1,SIOClientImpl *param_2,SIODelegate *param_3)

{
  int iVar1;
  SIOClient *pSVar2;
  SIOClient *__dest;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 009e6804 to 00ae681b has its CatchHandler @ 009e699c */
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__SIOClient_01c6beb8;
  pSVar2 = this + 0x10;
  *(undefined8 *)pSVar2 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 009e6838 to 00ae68cb has its CatchHandler @ 009e69e0 */
    *(undefined8 *)(this + 0x18) = uVar5;
    *(undefined8 *)pSVar2 = uVar4;
    goto LAB_009e689c;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
    __dest = this + 0x11;
    *pSVar2 = SUB41((int)__n << 1,0);
    if (__n != 0) goto LAB_009e6888;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    *(ulong *)(this + 0x18) = __n;
    *(SIOClient **)(this + 0x20) = __dest;
    *(ulong *)(this + 0x10) = uVar3 | 1;
LAB_009e6888:
    memcpy(__dest,__src,__n);
  }
  __dest[__n] = (SIOClient)0x0;
LAB_009e689c:
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x40] = (SIOClient)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  *(SIOClientImpl **)(this + 0x48) = param_2;
  *(SIODelegate **)(this + 0x50) = param_3;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  iVar1 = DAT_01d387c0 + 1;
  *(int *)(this + 0x80) = DAT_01d387c0;
  DAT_01d387c0 = iVar1;
  return;
}

