
/* ListenerComponent::create(cocos2d::Node*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)>) */

Ref * ListenerComponent::create(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  Ref *this;
  long *plVar2;
  code *pcVar3;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    plVar2 = (long *)param_3[4];
                    /* try { // try from 00dd76dc to 00ed76eb has its CatchHandler @ 00dd7ccc */
    if (plVar2 == (long *)0x0) {
      local_60 = (long *)0x0;
    }
    else if (param_3 == plVar2) {
      local_60 = alStack_80;
      (**(code **)(*plVar2 + 0x18))(plVar2,alStack_80);
    }
    else {
      local_60 = (long *)(**(code **)(*plVar2 + 0x10))();
    }
                    /* try { // try from 00dd7724 to 00ed774f has its CatchHandler @ 00dd7ca0 */
    ListenerComponent((ListenerComponent *)this,param_1,param_2,alStack_80);
    if (alStack_80 == local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00dd775c;
      pcVar3 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar3)();
  }
LAB_00dd775c:
                    /* try { // try from 00dd775c to 00ed7763 has its CatchHandler @ 00dd7c90 */
  cocos2d::Ref::autorelease(this);
                    /* try { // try from 00dd7764 to 00ed7787 has its CatchHandler @ 00dd7cdc */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

