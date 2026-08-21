
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int,
   cocos2d::Vector<cocostudio::timeline::Timeline*> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   cocos2d::Vector<cocostudio::timeline::Timeline*> >, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<int,
   cocos2d::Vector<cocostudio::timeline::Timeline*> >, std::__ndk1::__map_value_compare<int,
   std::__ndk1::__value_type<int, cocos2d::Vector<cocostudio::timeline::Timeline*> >,
   std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int,
   cocos2d::Vector<cocostudio::timeline::Timeline*> > > >::__emplace_unique_key_args<int,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<>
   >(int const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&,
   std::__ndk1::tuple<>&&) */

__tree_node_base *
std::__ndk1::
__tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
::
__emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
          (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  __tree_node_base *local_60;
  int *piStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  piVar5 = param_1 + 2;
  piVar6 = *(int **)piVar5;
  piVar8 = piVar5;
  if (piVar6 != (int *)0x0) {
    piVar5 = param_1 + 2;
    do {
      while (piVar7 = piVar6, piVar8 = piVar7, *(int *)param_2 < piVar7[8]) {
        piVar5 = piVar7;
        piVar6 = *(int **)piVar7;
        if (*(int **)piVar7 == (int *)0x0) {
          p_Var4 = *(__tree_node_base **)piVar7;
          goto joined_r0x00cac2b4;
        }
      }
      if (*(int *)param_2 <= piVar7[8]) break;
      piVar5 = piVar7 + 2;
      piVar6 = *(int **)piVar5;
    } while (*(int **)piVar5 != (int *)0x0);
  }
  p_Var4 = *(__tree_node_base **)piVar5;
  piVar7 = piVar5;
joined_r0x00cac2b4:
  if (p_Var4 == (__tree_node_base *)0x0) {
    local_60 = operator_new(0x40);
    uVar1 = **(undefined4 **)param_4;
    *(undefined8 *)(local_60 + 0x30) = 0;
    *(undefined8 *)(local_60 + 0x38) = 0;
    *(undefined8 *)(local_60 + 0x28) = 0;
    local_50 = 1;
    *(undefined8 *)local_60 = 0;
    *(undefined8 *)(local_60 + 8) = 0;
    *(int **)(local_60 + 0x10) = piVar8;
    *(undefined4 *)(local_60 + 0x20) = uVar1;
    *(__tree_node_base **)piVar7 = local_60;
    p_Var4 = local_60;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      p_Var4 = *(__tree_node_base **)piVar7;
    }
    piStack_58 = param_1 + 2;
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 2),p_Var4);
    p_Var4 = local_60;
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
    local_60 = (__tree_node_base *)0x0;
    param_1 = (int *)FUN_00cac378(&local_60);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return p_Var4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,uVar3);
}

