
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::Value>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int, cocos2d::Value>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::Value>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::Value> >
   >::__move_assign(std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::Value>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int, cocos2d::Value>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::Value>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::Value> > >&,
   std::__ndk1::integral_constant<bool, true>) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
     ::__move_assign(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  
  if (param_1[3] != 0) {
    puVar2 = (void *)param_1[2];
    while (puVar2 != (void *)0x0) {
      pvVar7 = (void *)*puVar2;
      cocos2d::Value::clear((Value *)(puVar2 + 3));
      operator_delete(puVar2);
      puVar2 = pvVar7;
    }
    lVar3 = param_1[1];
    param_1[2] = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    param_1[3] = 0;
  }
  lVar3 = *param_2;
  *param_2 = 0;
  pvVar7 = (void *)*param_1;
  *param_1 = lVar3;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  param_1[1] = param_2[1];
  lVar4 = param_2[3];
  param_2[1] = 0;
  param_1[3] = lVar4;
  *(int *)(param_1 + 4) = (int)param_2[4];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar4 != 0) {
    uVar6 = param_1[1];
    uVar5 = *(ulong *)(lVar3 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}

