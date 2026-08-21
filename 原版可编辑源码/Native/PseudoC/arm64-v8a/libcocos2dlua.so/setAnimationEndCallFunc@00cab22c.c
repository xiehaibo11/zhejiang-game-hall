
/* cocostudio::timeline::ActionTimeline::setAnimationEndCallFunc(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::function<void ()>)
    */

void __thiscall
cocostudio::timeline::ActionTimeline::setAnimationEndCallFunc
          (ActionTimeline *this,basic_string *param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  ActionTimeline *pAVar3;
  long *plVar4;
  code *pcVar5;
  long alStack_b0 [4];
  long *local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pAVar3 = (ActionTimeline *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::AnimationInfo>>>
                       *)(this + 0x138),param_2);
  if (this + 0x140 == pAVar3) goto LAB_00cab380;
  plVar4 = (long *)param_3[4];
  if (plVar4 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (param_3 == plVar4) {
    local_60 = alStack_80;
    (**(code **)(*plVar4 + 0x18))(plVar4,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar4 + 0x10))();
  }
  FUN_008820fc(alStack_80,pAVar3 + 0x60);
  if (alStack_80 == local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00cab2ec:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00cab2ec;
  }
  plVar4 = (long *)param_3[4];
  uVar1 = *(undefined4 *)(pAVar3 + 0x5c);
  if (plVar4 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if (param_3 == plVar4) {
    local_90 = alStack_b0;
    (**(code **)(*plVar4 + 0x18))(plVar4,alStack_b0);
  }
  else {
    local_90 = (long *)(**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(*(long *)this + 0x120))(this,uVar1,param_2,alStack_b0);
  if (alStack_b0 == local_90) {
    pcVar5 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_00cab380;
    pcVar5 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar5)();
LAB_00cab380:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

