
/* std::__ndk1::__function::__func<void (*)(char const*, char const*, char const*),
   std::__ndk1::allocator<void (*)(char const*, char const*, char const*)>, void (char const*, char
   const*, char const*)>::__clone() const */

void __thiscall
std::__ndk1::__function::
__func<void(*)(char_const*,char_const*,char_const*),std::__ndk1::allocator<void(*)(char_const*,char_const*,char_const*)>,void(char_const*,char_const*,char_const*)>
::__clone(__func<void(*)(char_const*,char_const*,char_const*),std::__ndk1::allocator<void(*)(char_const*,char_const*,char_const*)>,void(char_const*,char_const*,char_const*)>
          *this)

{
  undefined8 *puVar1;
  
                    /* try { // try from 009d5140 to 00ad523b has its CatchHandler @ 009d5028 */
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_01c6bc10;
  puVar1[1] = *(undefined8 *)(this + 8);
  return;
}

