
long * FUN_00887654(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
                    *param_1,ulong param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar4 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    if (uVar4 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar4 - 1 & uVar4) != 0);
    }
    uVar5 = uVar5 | uVar4 << 1;
    uVar4 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
    ::rehash(param_1,uVar4);
    uVar4 = *(ulong *)(param_1 + 8);
  }
  uVar5 = uVar4 - 1;
  if ((uVar5 & uVar4) == 0) {
    uVar6 = uVar5 & param_2;
  }
  else {
    uVar6 = param_2;
    if (uVar4 <= param_2) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = param_2 / uVar4;
      }
      uVar6 = param_2 - uVar6 * uVar4;
    }
  }
  plVar7 = *(long **)(*(long *)param_1 + uVar6 * 8);
  if (plVar7 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    bVar2 = false;
    while (bVar1 = bVar2, plVar3 = plVar7, plVar7 = (long *)*plVar3, plVar7 != (long *)0x0) {
      uVar8 = plVar7[1];
      if ((uVar5 & uVar4) == 0) {
        uVar9 = uVar8 & uVar5;
      }
      else {
        uVar9 = uVar8;
        if (uVar4 <= uVar8) {
          uVar9 = 0;
          if (uVar4 != 0) {
            uVar9 = uVar8 / uVar4;
          }
          uVar9 = uVar8 - uVar9 * uVar4;
        }
      }
      if (uVar9 != uVar6) {
        return plVar3;
      }
      bVar2 = bVar1;
      if (((uVar8 != param_2) ||
          (bVar2 = (bool)(bVar1 | *(int *)(plVar7 + 2) == *param_3),
          *(int *)(plVar7 + 2) != *param_3)) && (bVar1)) {
        return plVar3;
      }
    }
  }
  return plVar3;
}

