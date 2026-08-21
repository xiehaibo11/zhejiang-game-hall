
/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::UniformValue>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::UniformValue>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::UniformValue> >
   >::__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, void*>*>
   >(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, void*>*>,
   std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, void*>*>) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
::
__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,void*>*>>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
           *this,__hash_node_base *param_2,__hash_node_base *param_3)

{
  long lVar1;
  long lVar2;
  __hash_node_base *p_Var3;
  __hash_node_base *p_Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*(long *)this + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    p_Var3 = *(__hash_node_base **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    for (; (p_Var3 != (__hash_node_base *)0x0 && (param_2 != param_3));
        param_2 = *(__hash_node_base **)param_2) {
      *(undefined4 *)(p_Var3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      if (param_2 != p_Var3) {
        lVar1 = *(long *)(param_2 + 0x18);
        *(undefined8 *)(p_Var3 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(long *)(p_Var3 + 0x18) = lVar1;
        *(undefined4 *)(p_Var3 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        uVar5 = *(undefined8 *)(param_2 + 0x50);
        uVar7 = *(undefined8 *)(param_2 + 0x68);
        uVar6 = *(undefined8 *)(param_2 + 0x60);
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        uVar8 = *(undefined8 *)(param_2 + 0x30);
        uVar11 = *(undefined8 *)(param_2 + 0x48);
        uVar10 = *(undefined8 *)(param_2 + 0x40);
        *(undefined8 *)(p_Var3 + 0x58) = *(undefined8 *)(param_2 + 0x58);
        *(undefined8 *)(p_Var3 + 0x50) = uVar5;
        *(undefined8 *)(p_Var3 + 0x68) = uVar7;
        *(undefined8 *)(p_Var3 + 0x60) = uVar6;
        *(undefined8 *)(p_Var3 + 0x38) = uVar9;
        *(undefined8 *)(p_Var3 + 0x30) = uVar8;
        *(undefined8 *)(p_Var3 + 0x48) = uVar11;
        *(undefined8 *)(p_Var3 + 0x40) = uVar10;
        if ((*(int *)(lVar1 + 8) == 0x8b5e) && (*(Ref **)(p_Var3 + 0x38) != (Ref *)0x0)) {
          cocos2d::Ref::retain(*(Ref **)(p_Var3 + 0x38));
        }
      }
      p_Var4 = *(__hash_node_base **)p_Var3;
      FUN_00fdbbcc(this,p_Var3);
      p_Var3 = p_Var4;
    }
    __deallocate_node(this,p_Var3);
  }
  for (; param_2 != param_3; param_2 = *(__hash_node_base **)param_2) {
    __emplace_multi<std::__ndk1::pair<int_const,cocos2d::UniformValue>const&>(this,param_2 + 0x10);
  }
  return;
}

