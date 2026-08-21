
/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, void*>*> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, cocos2d::UniformValue>, std::__ndk1::hash<int>, true>,
   std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::UniformValue> >
   >::__emplace_multi<std::__ndk1::pair<int const, cocos2d::UniformValue>
   const&>(std::__ndk1::pair<int const, cocos2d::UniformValue> const&) */

undefined8 __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
::__emplace_multi<std::__ndk1::pair<int_const,cocos2d::UniformValue>const&>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
           *this,pair *param_1)

{
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
  *p_Var1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_50;
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
  *p_Stack_48;
  undefined1 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  p_Var1 = this + 0x10;
  local_50 = operator_new(0x70);
  local_40 = 0;
  *(undefined4 *)(local_50 + 2) = *(undefined4 *)param_1;
  local_50[7] = 0;
  local_50[6] = 0;
  local_50[0xb] = 0;
  local_50[10] = 0;
  local_50[0xd] = 0;
  local_50[0xc] = 0;
  local_50[9] = 0;
  local_50[8] = 0;
  p_Stack_48 = p_Var1;
  if (local_50 + 2 != (undefined8 *)param_1) {
    lVar4 = *(long *)(param_1 + 8);
    local_50[4] = *(undefined8 *)(param_1 + 0x10);
    local_50[3] = lVar4;
    *(undefined4 *)(local_50 + 5) = *(undefined4 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    local_50[0xb] = *(undefined8 *)(param_1 + 0x48);
    local_50[10] = uVar3;
    local_50[0xd] = uVar6;
    local_50[0xc] = uVar5;
    local_50[7] = uVar8;
    local_50[6] = uVar7;
    local_50[9] = uVar10;
    local_50[8] = uVar9;
    if ((*(int *)(lVar4 + 8) == 0x8b5e) && ((Ref *)local_50[7] != (Ref *)0x0)) {
      cocos2d::Ref::retain((Ref *)local_50[7]);
    }
  }
  local_40 = 1;
  *local_50 = 0;
  local_50[1] = (long)*(int *)(local_50 + 2);
  uVar3 = FUN_00fdbbcc(this,local_50);
  local_50 = (undefined8 *)0x0;
  FUN_00fdc1e8(&local_50);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

