
/* std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, cocos2d::Value>::pair<true,
   false>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Value const&) */

void __thiscall
std::__ndk1::
pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>
::pair<true,false>(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>
                   *this,basic_string *param_1,Value *param_2)

{
  ulong __n;
  void *__src;
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>
  *__dest;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 009c7588 to 00ac75df has its CatchHandler @ 009c7588
                       catch() { ... } // from try @ 009c7588 with catch @ 009c7588
                       catch() { ... } // from try @ 009c788c with catch @ 009c7588 */
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar3;
    *(undefined8 *)this = uVar2;
    goto LAB_009c7624;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
                    /* try { // try from 009c75e0 to 00ac75f7 has its CatchHandler @ 009c78c0 */
    __dest = this + 1;
    *this = SUB41((int)__n << 1,0);
    if (__n != 0) goto LAB_009c7610;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
                    /* try { // try from 009c7600 to 00ac760b has its CatchHandler @ 009c78a4 */
    *(ulong *)(this + 8) = __n;
    *(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>
      **)(this + 0x10) = __dest;
                    /* try { // try from 009c760c to 00ac7617 has its CatchHandler @ 009c78a0 */
    *(ulong *)this = uVar1 | 1;
LAB_009c7610:
                    /* try { // try from 009c7618 to 00ac7657 has its CatchHandler @ 009c78d0 */
    memcpy(__dest,__src,__n);
  }
  __dest[__n] = (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>
                 )0x0;
LAB_009c7624:
  cocos2d::Value::Value((Value *)(this + 0x18),param_2);
  return;
}

