
/* std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::list<int, std::__ndk1::allocator<int> >,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, std::__ndk1::list<int,
   std::__ndk1::allocator<int> > > > >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
::~unordered_map(unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
                 *this)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  
                    /* try { // try from 00a6cc1c to 00b6cc23 has its CatchHandler @ 00a6cf74 */
  puVar3 = *(void **)(this + 0x10);
  while (puVar3 != (void *)0x0) {
                    /* try { // try from 00a6cc28 to 00b6cc3f has its CatchHandler @ 00a6cf58 */
    pvVar5 = (void *)*puVar3;
    if (puVar3[7] != 0) {
      lVar1 = puVar3[5];
      plVar2 = (long *)puVar3[6];
      lVar4 = *plVar2;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar1 + 8);
                    /* try { // try from 00a6cc4c to 00b6cc6b has its CatchHandler @ 00a6cf5c */
      **(long **)(lVar1 + 8) = lVar4;
      puVar3[7] = 0;
                    /* try { // try from 00a6cc44 to 00b6cc4b has its CatchHandler @ 00a6cf50 */
      while (plVar2 != puVar3 + 5) {
        plVar6 = (long *)plVar2[1];
        operator_delete(plVar2);
                    /* try { // try from 00a6cc6c to 00b6cc7b has its CatchHandler @ 00a6cf4c */
        plVar2 = plVar6;
      }
    }
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
                    /* try { // try from 00a6cc80 to 00b6cc8b has its CatchHandler @ 00a6cf44 */
    operator_delete(puVar3);
                    /* try { // try from 00a6cc8c to 00b6cc9b has its CatchHandler @ 00a6cf2c */
    puVar3 = pvVar5;
  }
  pvVar5 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar5 == (void *)0x0) {
                    /* try { // try from 00a6ccb0 to 00b6ccb7 has its CatchHandler @ 00a6cf0c */
    return;
  }
                    /* try { // try from 00a6cca0 to 00b6ccab has its CatchHandler @ 00a6cf1c */
  operator_delete(pvVar5);
  return;
}

