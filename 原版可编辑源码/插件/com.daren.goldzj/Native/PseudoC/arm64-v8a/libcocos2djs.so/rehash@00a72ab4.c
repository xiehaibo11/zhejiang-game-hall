
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, std::__ndk1::function<void (int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> >, std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::function<void (int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&)> >, std::__ndk1::hash<int>, true>,
   std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::function<void (int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&)> >, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, std::__ndk1::function<void (int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> > > >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
                    /* try { // try from 00a72acc to 00b72ae3 has its CatchHandler @ 00a72e68 */
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else if ((param_1 - 1 & param_1) != 0) {
    param_1 = __next_prime(param_1);
                    /* try { // try from 00a72aec to 00b72af7 has its CatchHandler @ 00a72e64 */
  }
  uVar2 = *(ulong *)(this + 8);
  uVar1 = param_1;
                    /* try { // try from 00a72af8 to 00b72b03 has its CatchHandler @ 00a72e60 */
  if (uVar2 < param_1) {
LAB_00a72b04:
                    /* try { // try from 00a72b04 to 00b72b0b has its CatchHandler @ 00a72e78 */
    __rehash(this,uVar1);
    return;
  }
  if (param_1 < uVar2) {
                    /* try { // try from 00a72b34 to 00b72b3b has its CatchHandler @ 00a72e28 */
                    /* try { // try from 00a72b40 to 00b72b57 has its CatchHandler @ 00a72e24 */
    uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
    if (uVar2 < 3 || (uVar2 - 1 & uVar2) != 0) {
      uVar1 = __next_prime(uVar1);
    }
    else if (1 < uVar1) {
                    /* try { // try from 00a72b5c to 00b72b63 has its CatchHandler @ 00a72e04 */
                    /* try { // try from 00a72b64 to 00b72b6f has its CatchHandler @ 00a72e0c */
      uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
    }
                    /* try { // try from 00a72b70 to 00b72b7f has its CatchHandler @ 00a72e00 */
    if (uVar1 <= param_1) {
      uVar1 = param_1;
    }
    if (uVar1 < uVar2) goto LAB_00a72b04;
  }
                    /* try { // try from 00a72b90 to 00b72b9f has its CatchHandler @ 00a72de0 */
  return;
}

