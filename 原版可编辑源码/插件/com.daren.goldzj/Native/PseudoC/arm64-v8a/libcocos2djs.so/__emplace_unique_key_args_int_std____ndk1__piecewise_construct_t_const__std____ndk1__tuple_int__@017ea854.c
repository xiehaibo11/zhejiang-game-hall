
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int,
   v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<int,
   v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>,
   std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int,
   v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>, std::__ndk1::less<int>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,
   v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*> >
   >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<int&&>, std::__ndk1::tuple<> >(int const&, std::__ndk1::piecewise_construct_t
   const&, std::__ndk1::tuple<int&&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>>
::
__emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
          (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined4 uVar1;
  Zone *this;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
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
          goto joined_r0x017ea8c8;
        }
      }
      if (*(int *)param_2 <= piVar7[8]) break;
      piVar5 = piVar7 + 2;
      piVar6 = *(int **)piVar5;
    } while (*(int **)piVar5 != (int *)0x0);
  }
  p_Var4 = *(__tree_node_base **)piVar5;
  piVar7 = piVar5;
joined_r0x017ea8c8:
  if (p_Var4 == (__tree_node_base *)0x0) {
    this = *(Zone **)(param_1 + 4);
    p_Var4 = *(__tree_node_base **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)p_Var4) < 0x30) {
      p_Var4 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x30);
    }
    else {
      *(__tree_node_base **)(this + 0x10) = p_Var4 + 0x30;
    }
    uVar1 = **(undefined4 **)param_4;
    *(undefined8 *)(p_Var4 + 0x28) = 0;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(int **)(p_Var4 + 0x10) = piVar8;
    *(undefined4 *)(p_Var4 + 0x20) = uVar1;
    *(__tree_node_base **)piVar7 = p_Var4;
    p_Var2 = p_Var4;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      p_Var2 = *(__tree_node_base **)piVar7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 2),p_Var2);
    uVar3 = 1;
    *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = p_Var4;
  return auVar9;
}

