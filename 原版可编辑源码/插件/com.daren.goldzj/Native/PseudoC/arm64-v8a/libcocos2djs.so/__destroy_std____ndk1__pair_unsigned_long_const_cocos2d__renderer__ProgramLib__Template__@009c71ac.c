
/* void 
   std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::ProgramLib::Template>, void*> > >::__destroy<std::__ndk1::pair<unsigned
   long const, cocos2d::renderer::ProgramLib::Template> >(std::__ndk1::integral_constant<bool,
   false>, std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::ProgramLib::Template>, void*> >&, std::__ndk1::pair<unsigned long const,
   cocos2d::renderer::ProgramLib::Template>*) */

void std::__ndk1::
     allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,void*>>>
     ::__destroy<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::ProgramLib::Template>>
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  Value *pVVar2;
  Value *this;
  Value *pVVar3;
  
  pVVar3 = *(Value **)(param_3 + 0x58);
  if (pVVar3 != (Value *)0x0) {
    this = *(Value **)(param_3 + 0x60);
    pVVar2 = pVVar3;
    if (this != pVVar3) {
      do {
        this = this + -0x10;
        cocos2d::Value::~Value(this);
      } while (pVVar3 != this);
      pVVar2 = *(Value **)(param_3 + 0x58);
    }
    *(Value **)(param_3 + 0x60) = pVVar3;
    operator_delete(pVVar2);
  }
                    /* try { // try from 009c7200 to 00ac7257 has its CatchHandler @ 009c7200
                       catch() { ... } // from try @ 009c7200 with catch @ 009c7200
                       catch() { ... } // from try @ 009c74ec with catch @ 009c7200 */
  if ((*(byte *)(param_3 + 0x40) & 1) == 0) {
    bVar1 = *(byte *)(param_3 + 0x28);
  }
  else {
    operator_delete(*(void **)(param_3 + 0x50));
    bVar1 = *(byte *)(param_3 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_3 + 0x10);
  }
  else {
    operator_delete(*(void **)(param_3 + 0x38));
    bVar1 = *(byte *)(param_3 + 0x10);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_3 + 0x20));
    return;
  }
  return;
}

