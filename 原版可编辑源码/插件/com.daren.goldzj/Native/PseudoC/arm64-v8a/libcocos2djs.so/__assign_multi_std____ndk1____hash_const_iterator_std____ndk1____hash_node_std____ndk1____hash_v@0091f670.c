
/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::Technique::Parameter>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Technique::Parameter>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Technique::Parameter>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::Technique::Parameter> >
   >::__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::Technique::Parameter>, void*>*>
   >(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::Technique::Parameter>, void*>*>,
   std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::Technique::Parameter>, void*>*>) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
::
__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,void*>*>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
           *this,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*(long *)this + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    while (plVar3 != (long *)0x0) {
      if (param_2 == param_3) goto LAB_0091f6f8;
      plVar3[2] = param_2[2];
      cocos2d::renderer::Technique::Parameter::operator=
                ((Parameter *)(plVar3 + 3),(Parameter *)(param_2 + 3));
      lVar1 = *plVar3;
      FUN_0091f780(this,plVar3);
      param_2 = (long *)*param_2;
      plVar3 = (long *)lVar1;
    }
  }
LAB_0091f728:
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    __emplace_multi<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::Technique::Parameter>const&>
              (this,(pair *)(param_2 + 2));
  }
  return;
LAB_0091f6f8:
  do {
    pvVar4 = (void *)*plVar3;
    cocos2d::renderer::Technique::Parameter::~Parameter((Parameter *)(plVar3 + 3));
    operator_delete(plVar3);
    plVar3 = pvVar4;
  } while (pvVar4 != (void *)0x0);
  goto LAB_0091f728;
}

