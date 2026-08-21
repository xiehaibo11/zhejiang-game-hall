
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (universe::Translated::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), universe::Translated*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (universe::Translated::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), universe::Translated*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >, void
   ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,void()>
::__clone(__func<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  __base *p_Var2;
  __base *__dest;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  
  *(undefined ***)param_1 = &PTR____func_01c6c6d0;
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x18);
  p_Var2 = param_1 + 0x20;
  *(undefined8 *)p_Var2 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if (((byte)this[0x20] & 1) == 0) {
    uVar4 = *(undefined8 *)(this + 0x28);
    uVar1 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)p_Var2 = uVar1;
    return;
  }
  __n = *(ulong *)(this + 0x28);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(this + 0x30);
  if (__n < 0x17) {
    __dest = param_1 + 0x21;
    *p_Var2 = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_009febbc;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
                    /* try { // try from 009feba4 to 00afebe3 has its CatchHandler @ 009feba4
                       catch() { ... } // from try @ 009feba4 with catch @ 009feba4
                       catch() { ... } // from try @ 009fec44 with catch @ 009feba4 */
    *(ulong *)(param_1 + 0x28) = __n;
    *(__base **)(param_1 + 0x30) = __dest;
    *(ulong *)(param_1 + 0x20) = uVar3 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_009febbc:
  __dest[__n] = (__base)0x0;
  return;
}

