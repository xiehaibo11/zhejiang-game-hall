
/* std_vector_EffectDefine_to_seval(std::__ndk1::vector<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >,
   std::__ndk1::allocator<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > > >
   const&, se::Value*) */

undefined8 std_vector_EffectDefine_to_seval(vector *param_1,Value *param_2)

{
  unordered_map *puVar1;
  long lVar2;
  Object *pOVar3;
  unordered_map *puVar4;
  uint uVar5;
  Object *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pOVar3 = (Object *)
           se::Object::createArrayObject
                     ((*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x3333333333333333);
  se::HandleObject::HandleObject((HandleObject *)&local_60,pOVar3);
  se::Value::setObject(param_2,(HandleObject *)&local_60,false);
  puVar4 = *(unordered_map **)param_1;
  puVar1 = *(unordered_map **)(param_1 + 8);
  if (puVar4 != puVar1) {
    uVar5 = 0;
    do {
      se::Value::Value(aVStack_58,(Value *)&se::Value::Null);
      ccvaluemap_to_seval(puVar4,aVStack_58);
      se::Object::setArrayElement(local_60,uVar5,aVStack_58);
      uVar5 = uVar5 + 1;
      se::Value::~Value(aVStack_58);
      puVar4 = puVar4 + 0x28;
    } while (puVar1 != puVar4);
  }
  se::HandleObject::~HandleObject((HandleObject *)&local_60);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

