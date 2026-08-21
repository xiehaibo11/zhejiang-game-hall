
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<se::Value,
   std::__ndk1::allocator<se::Value> > >,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<se::Value, std::__ndk1::allocator<se::Value>
   > >, std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<se::Value, std::__ndk1::allocator<se::Value>
   > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<se::Value,
   std::__ndk1::allocator<se::Value> > > > >::~__hash_table() */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>>>
::~__hash_table(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>>>
                *this)

{
  undefined8 *puVar1;
  Value *pVVar2;
  Value *this_00;
  void *pvVar3;
  Value *pVVar4;
  
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pVVar4 = (Value *)puVar1[5];
    pvVar3 = (void *)*puVar1;
    if (pVVar4 != (Value *)0x0) {
      this_00 = (Value *)puVar1[6];
      pVVar2 = pVVar4;
      if (this_00 != pVVar4) {
        do {
          this_00 = this_00 + -0x10;
          se::Value::~Value(this_00);
        } while (pVVar4 != this_00);
        pVVar2 = (Value *)puVar1[5];
      }
      puVar1[6] = pVVar4;
      operator_delete(pVVar2);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
                    /* catch() { ... } // from try @ 00992f84 with catch @ 00993008 */
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar3 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
    return;
  }
                    /* try { // try from 00993038 to 00a9308b has its CatchHandler @ 00993038
                       catch() { ... } // from try @ 00993038 with catch @ 00993038
                       catch() { ... } // from try @ 009932ac with catch @ 00993038 */
  return;
}

