
/* cocos2d::TTFLabelAtals::TTFLabelAtals(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float,
   cocos2d::LabelLayoutInfo*) */

void __thiscall
cocos2d::TTFLabelAtals::TTFLabelAtals
          (TTFLabelAtals *this,basic_string *param_1,float param_2,LabelLayoutInfo *param_3)

{
  ulong __n;
  void *__src;
  TTFLabelAtals *__dest;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar3;
    *(undefined8 *)this = uVar2;
    goto LAB_009b20ac;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 009b1edc with catch @ 009b205c */
  if (__n < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)__n << 1,0);
    if (__n != 0) goto LAB_009b2098;
  }
  else {
                    /* catch() { ... } // from try @ 009b1f2c with catch @ 009b207c */
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    *(ulong *)(this + 8) = __n;
    *(TTFLabelAtals **)(this + 0x10) = __dest;
                    /* catch() { ... } // from try @ 009b1eb8 with catch @ 009b2094 */
    *(ulong *)this = uVar1 | 1;
LAB_009b2098:
                    /* catch() { ... } // from try @ 009b1ee8 with catch @ 009b2098 */
    memcpy(__dest,__src,__n);
  }
  __dest[__n] = (TTFLabelAtals)0x0;
LAB_009b20ac:
                    /* catch() { ... } // from try @ 009b1fa8 with catch @ 009b20b0 */
  *(float *)(this + 0x18) = param_2;
                    /* catch() { ... } // from try @ 009b1e7c with catch @ 009b20b4 */
  *(LabelLayoutInfo **)(this + 0x20) = param_3;
                    /* catch() { ... } // from try @ 009b1fb0 with catch @ 009b20b8 */
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  init(this);
                    /* catch() { ... } // from try @ 009b1e68 with catch @ 009b20c8 */
                    /* catch() { ... } // from try @ 009b1e3c with catch @ 009b20cc */
                    /* catch() { ... } // from try @ 009b1e8c with catch @ 009b20dc
                       catch() { ... } // from try @ 009b1f34 with catch @ 009b20dc */
  return;
}

