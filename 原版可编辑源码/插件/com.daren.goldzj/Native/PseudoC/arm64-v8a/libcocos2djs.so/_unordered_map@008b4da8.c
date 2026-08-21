
/* std::__ndk1::unordered_map<unsigned int, se::Value, std::__ndk1::hash<unsigned int>,
   std::__ndk1::equal_to<unsigned int>, std::__ndk1::allocator<std::__ndk1::pair<unsigned int const,
   se::Value> > >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<unsigned_int,se::Value,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int_const,se::Value>>>
::~unordered_map(unordered_map<unsigned_int,se::Value,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int_const,se::Value>>>
                 *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    se::Value::~Value((Value *)(puVar1 + 3));
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

