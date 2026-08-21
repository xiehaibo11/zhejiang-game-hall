
/* cocos2d::network::SIOClientImpl::SIOClientImpl(cocos2d::network::Uri const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::network::SIOClientImpl::SIOClientImpl
          (SIOClientImpl *this,Uri *param_1,basic_string *param_2)

{
  SIOClientImpl *__dest;
  ulong __n;
  void *__src;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 009e1eb4 to 00ae1ebf has its CatchHandler @ 009e22c4 */
                    /* try { // try from 009e1ec0 to 00ae1ecb has its CatchHandler @ 009e22c0 */
                    /* try { // try from 009e1ecc to 00ae1ed3 has its CatchHandler @ 009e22d8 */
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__SIOClientImpl_01c6be38;
  *(undefined ***)(this + 0x10) = &PTR__SIOClientImpl_01c6be78;
  *(undefined8 *)(this + 0x20) = 0;
  Uri::Uri((Uri *)(this + 0x38),param_1);
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  if (((byte)*param_2 & 1) == 0) {
                    /* try { // try from 009e1f28 to 00ae1f2b has its CatchHandler @ 009e2240 */
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(this + 0x160) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(this + 0x158) = uVar3;
    *(undefined8 *)(this + 0x150) = uVar2;
    goto LAB_009e1f94;
  }
  __n = *(ulong *)(param_2 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_2 + 0x10);
  if (__n < 0x17) {
    __dest = this + 0x151;
    this[0x150] = SUB41((int)__n << 1,0);
                    /* try { // try from 009e1f58 to 00ae1f5f has its CatchHandler @ 009e22a8 */
    if (__n != 0) goto LAB_009e1f80;
  }
  else {
                    /* try { // try from 009e1f64 to 00ae1f77 has its CatchHandler @ 009e226c */
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    *(ulong *)(this + 0x158) = __n;
    *(SIOClientImpl **)(this + 0x160) = __dest;
    *(ulong *)(this + 0x150) = uVar1 | 1;
LAB_009e1f80:
    memcpy(__dest,__src,__n);
  }
  __dest[__n] = (SIOClientImpl)0x0;
LAB_009e1f94:
  this[0x168] = (SIOClientImpl)0x0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x198) = 0x3f800000;
  return;
}

