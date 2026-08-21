
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (universe::Translated::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), universe::Translated*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::__bind<void
   (universe::Translated::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), universe::Translated*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >, void ()>::__clone() const */

undefined8 * __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,void()>
::__clone(__func<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::__bind<void(universe::Translated::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),universe::Translated*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,void()>
          *this)

{
  undefined8 *puVar1;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = operator_new(0x38);
                    /* try { // try from 009fea28 to 00afea2f has its CatchHandler @ 009fea60 */
  *puVar1 = &PTR____func_01c6c6d0;
                    /* try { // try from 009fea38 to 00afea3b has its CatchHandler @ 009fea50 */
  uVar3 = *(undefined8 *)(this + 8);
                    /* try { // try from 009fea3c to 00afea73 has its CatchHandler @ 009fe9ec */
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = *(undefined8 *)(this + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
                    /* catch() { ... } // from try @ 009fea38 with catch @ 009fea50 */
  if (((byte)this[0x20] & 1) == 0) {
                    /* catch() { ... } // from try @ 009fea28 with catch @ 009fea60 */
    uVar4 = *(undefined8 *)(this + 0x28);
    uVar3 = *(undefined8 *)(this + 0x20);
    puVar1[6] = *(undefined8 *)(this + 0x30);
    puVar1[5] = uVar4;
    puVar1[4] = uVar3;
    return puVar1;
  }
  __n = *(ulong *)(this + 0x28);
                    /* try { // try from 009fea74 to 00afeab7 has its CatchHandler @ 009fea74
                       catch() { ... } // from try @ 009fea74 with catch @ 009fea74
                       catch() { ... } // from try @ 009feabc with catch @ 009fea74 */
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(this + 0x30);
  if (__n < 0x17) {
    __dest = (void *)((long)puVar1 + 0x21);
    *(char *)(puVar1 + 4) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009feacc;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    puVar1[5] = __n;
    puVar1[6] = __dest;
                    /* try { // try from 009feab8 to 00afeabb has its CatchHandler @ 009feacc */
    puVar1[4] = uVar2 | 1;
  }
                    /* try { // try from 009feabc to 00afeadf has its CatchHandler @ 009fea74 */
  memcpy(__dest,__src,__n);
LAB_009feacc:
                    /* catch() { ... } // from try @ 009feab8 with catch @ 009feacc */
  *(undefined1 *)((long)__dest + __n) = 0;
  return puVar1;
}

