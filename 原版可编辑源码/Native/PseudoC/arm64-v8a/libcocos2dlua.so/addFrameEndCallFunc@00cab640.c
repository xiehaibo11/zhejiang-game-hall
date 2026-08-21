
/* cocostudio::timeline::ActionTimeline::addFrameEndCallFunc(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   ()>) */

void __thiscall
cocostudio::timeline::ActionTimeline::addFrameEndCallFunc
          (ActionTimeline *this,int param_1,piecewise_construct_t *param_2,long *param_4)

{
  long lVar1;
  long lVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  code *pcVar5;
  __tree_node_base *p_Var6;
  ActionTimeline *pAVar7;
  ActionTimeline *pAVar8;
  ActionTimeline *pAVar9;
  piecewise_construct_t *local_90 [4];
  piecewise_construct_t **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_4[4] != 0) {
    pAVar7 = this + 0x128;
    pAVar8 = *(ActionTimeline **)(this + 0x128);
    pAVar9 = pAVar7;
    while (pAVar8 != (ActionTimeline *)0x0) {
      while (pAVar9 = pAVar8, param_1 < *(int *)(pAVar9 + 0x20)) {
        pAVar7 = pAVar9;
        pAVar8 = *(ActionTimeline **)pAVar9;
        if (*(ActionTimeline **)pAVar9 == (ActionTimeline *)0x0) {
          p_Var6 = *(__tree_node_base **)pAVar9;
          goto joined_r0x00cab71c;
        }
      }
      if (param_1 <= *(int *)(pAVar9 + 0x20)) break;
      pAVar7 = pAVar9 + 8;
      pAVar8 = *(ActionTimeline **)pAVar7;
    }
    p_Var6 = *(__tree_node_base **)pAVar7;
joined_r0x00cab71c:
    if (p_Var6 == (__tree_node_base *)0x0) {
      p_Var6 = operator_new(0x40);
      *(int *)(p_Var6 + 0x20) = param_1;
      *(undefined8 *)(p_Var6 + 0x30) = 0;
      *(undefined8 *)(p_Var6 + 0x38) = 0;
      *(undefined8 *)p_Var6 = 0;
      *(undefined8 *)(p_Var6 + 8) = 0;
      *(ActionTimeline **)(p_Var6 + 0x10) = pAVar9;
      *(__tree_node_base **)(p_Var6 + 0x28) = p_Var6 + 0x30;
      *(__tree_node_base **)pAVar7 = p_Var6;
      p_Var3 = p_Var6;
      if (**(long **)(this + 0x120) != 0) {
        *(long *)(this + 0x120) = **(long **)(this + 0x120);
        p_Var3 = *(__tree_node_base **)pAVar7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x128),p_Var3);
      *(long *)(this + 0x130) = *(long *)(this + 0x130) + 1;
    }
    local_90[0] = param_2;
    lVar2 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(p_Var6 + 0x28),param_2,(tuple *)&DAT_01415c3c,
                       (tuple *)local_90);
    plVar4 = (long *)param_4[4];
    if (plVar4 == (long *)0x0) {
      local_70 = (piecewise_construct_t **)0x0;
    }
    else if (param_4 == plVar4) {
      local_70 = local_90;
      (**(code **)(*plVar4 + 0x18))(plVar4,local_90);
    }
    else {
      local_70 = (piecewise_construct_t **)(**(code **)(*plVar4 + 0x10))(plVar4);
    }
    FUN_008820fc(local_90,lVar2 + 0x40);
    if (local_90 == local_70) {
      pcVar5 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (piecewise_construct_t **)0x0) goto LAB_00cab7e4;
      pcVar5 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar5)();
  }
LAB_00cab7e4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

