
/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<char32_t,
   cocos2d::FontLetterDefinition>, std::__ndk1::__unordered_map_hasher<char32_t,
   std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition>,
   std::__ndk1::hash<char32_t>, true>, std::__ndk1::__unordered_map_equal<char32_t,
   std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition>,
   std::__ndk1::equal_to<char32_t>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition> >
   >::__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<char32_t,
   cocos2d::FontLetterDefinition>, void*>*>
   >(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<char32_t,
   cocos2d::FontLetterDefinition>, void*>*>,
   std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<char32_t,
   cocos2d::FontLetterDefinition>, void*>*>) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
::
__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,void*>*>>
          (__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
           *this,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(*(long *)this + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    plVar5 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    while (plVar5 != (long *)0x0) {
      if (param_2 == param_3) goto LAB_00f14794;
      lVar2 = *plVar5;
      *(undefined4 *)(plVar5 + 2) = *(undefined4 *)(param_2 + 2);
      uVar7 = *(undefined8 *)((long)param_2 + 0x2c);
      uVar3 = *(undefined8 *)((long)param_2 + 0x24);
      uVar9 = *(undefined8 *)((long)param_2 + 0x1c);
      uVar8 = *(undefined8 *)((long)param_2 + 0x14);
      *(undefined4 *)((long)plVar5 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
      *(undefined8 *)((long)plVar5 + 0x2c) = uVar7;
      *(undefined8 *)((long)plVar5 + 0x24) = uVar3;
      *(undefined8 *)((long)plVar5 + 0x1c) = uVar9;
      *(undefined8 *)((long)plVar5 + 0x14) = uVar8;
      FUN_00f1483c(this,plVar5);
      param_2 = (long *)*param_2;
      plVar5 = (long *)lVar2;
    }
  }
LAB_00f147e0:
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    puVar1 = operator_new(0x38);
    uVar7 = param_2[2];
    uVar9 = param_2[5];
    uVar8 = param_2[4];
    uVar3 = param_2[6];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar7;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[6] = uVar3;
    *puVar1 = 0;
    puVar1[1] = (ulong)*(uint *)(puVar1 + 2);
    FUN_00f1483c(this,puVar1);
  }
  return;
LAB_00f14794:
  do {
    pvVar6 = (void *)*plVar5;
    operator_delete(plVar5);
    plVar5 = pvVar6;
  } while (pvVar6 != (void *)0x0);
  goto LAB_00f147e0;
}

