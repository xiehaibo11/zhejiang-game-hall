
/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::Value>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int, cocos2d::Value>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::Value>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::Value> >
   >::__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::Value>, void*>*>
   >(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::Value>, void*>*>,
   std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::Value>, void*>*>) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
::
__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,cocos2d::Value>,void*>*>>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
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
      if (param_2 == param_3) goto LAB_0088480c;
      *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(param_2 + 2);
      cocos2d::Value::operator=((Value *)(plVar3 + 3),(Value *)(param_2 + 3));
      lVar1 = *plVar3;
      FUN_00884894(this,plVar3);
      param_2 = (long *)*param_2;
      plVar3 = (long *)lVar1;
    }
  }
LAB_0088483c:
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    __emplace_multi<std::__ndk1::pair<int_const,cocos2d::Value>const&>(this,(pair *)(param_2 + 2));
  }
  return;
LAB_0088480c:
  do {
    pvVar4 = (void *)*plVar3;
    cocos2d::Value::~Value((Value *)(plVar3 + 3));
    operator_delete(plVar3);
    plVar3 = pvVar4;
  } while (pvVar4 != (void *)0x0);
  goto LAB_0088483c;
}

