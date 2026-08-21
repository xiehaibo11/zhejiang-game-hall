
/* cocostudio::timeline::ActionTimeline::addAnimationInfo(cocostudio::timeline::AnimationInfo
   const&) */

void __thiscall
cocostudio::timeline::ActionTimeline::addAnimationInfo(ActionTimeline *this,AnimationInfo *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  ActionTimeline *pAVar4;
  long lVar5;
  AnimationInfo *pAVar6;
  code *pcVar7;
  long alStack_b0 [4];
  long *local_90;
  AnimationInfo *local_80 [4];
  AnimationInfo **local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pAVar4 = (ActionTimeline *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>>>
                       *)(this + 0x138),(basic_string *)param_1);
  if (this + 0x140 != pAVar4) goto LAB_00cab0f8;
  local_80[0] = param_1;
  lVar5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x138),(piecewise_construct_t *)param_1,
                     (tuple *)&DAT_01415c3c,(tuple *)local_80);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar5 + 0x40) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pAVar6 = *(AnimationInfo **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pAVar6 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar5 + 0x40),(char *)pAVar6,uVar1);
  }
  *(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)(param_1 + 0x18);
  pAVar6 = *(AnimationInfo **)(param_1 + 0x40);
  if (pAVar6 == (AnimationInfo *)0x0) {
    local_60 = (AnimationInfo **)0x0;
  }
  else if (param_1 + 0x20 == pAVar6) {
    local_60 = local_80;
    (**(code **)(*(long *)pAVar6 + 0x18))(pAVar6,local_80);
  }
  else {
    local_60 = (AnimationInfo **)(**(code **)(*(long *)pAVar6 + 0x10))();
  }
  FUN_008820fc(local_80,lVar5 + 0x60);
  if (local_80 == local_60) {
    pcVar7 = *(code **)(*local_60 + 0x20);
LAB_00cab060:
    (*pcVar7)();
  }
  else if (local_60 != (AnimationInfo **)0x0) {
    pcVar7 = *(code **)(*local_60 + 0x28);
    goto LAB_00cab060;
  }
  pAVar6 = *(AnimationInfo **)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  if (pAVar6 == (AnimationInfo *)0x0) {
    local_90 = (long *)0x0;
  }
  else if (param_1 + 0x20 == pAVar6) {
    local_90 = alStack_b0;
    (**(code **)(*(long *)pAVar6 + 0x18))(pAVar6,alStack_b0);
  }
  else {
    local_90 = (long *)(**(code **)(*(long *)pAVar6 + 0x10))();
  }
  (**(code **)(*(long *)this + 0x120))(this,uVar2,param_1,alStack_b0);
  if (alStack_b0 == local_90) {
    pcVar7 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_00cab0f8;
    pcVar7 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar7)();
LAB_00cab0f8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

