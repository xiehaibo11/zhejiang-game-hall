
/* void std::__ndk1::vector<std::__ndk1::stack<cocos2d::Mat4, std::__ndk1::deque<cocos2d::Mat4,
   std::__ndk1::allocator<cocos2d::Mat4> > >,
   std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4, std::__ndk1::deque<cocos2d::Mat4,
   std::__ndk1::allocator<cocos2d::Mat4> > > >
   >::__push_back_slow_path<std::__ndk1::stack<cocos2d::Mat4, std::__ndk1::deque<cocos2d::Mat4,
   std::__ndk1::allocator<cocos2d::Mat4> > > const&>(std::__ndk1::stack<cocos2d::Mat4,
   std::__ndk1::deque<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4> > > const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>,std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>>>
::
__push_back_slow_path<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>const&>
          (vector<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>,std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>>>
           *this,stack *param_1)

{
  ulong uVar1;
  deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *pdVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *local_70;
  deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *local_68;
  deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *local_60;
  void *local_58;
  vector<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>,std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>>>
  *pvStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00f9bdb4 to 0109bdc3 has its CatchHandler @ 00f9c178 */
  uVar9 = 0x555555555555555;
  lVar4 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 4;
  pvStack_50 = this + 0x10;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar7 = lVar5 * 0x5555555555555556;
    uVar9 = uVar1;
    if (uVar1 <= uVar7) {
      uVar9 = uVar7;
    }
    if (uVar9 == 0) {
      local_70 = (void *)0x0;
      goto LAB_00f9be40;
    }
  }
  local_58 = (void *)0x0;
  local_70 = operator_new(uVar9 * 0x30);
LAB_00f9be40:
  local_68 = (deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)
             ((long)local_70 + lVar4 * 0x10);
  local_58 = (void *)((long)local_70 + uVar9 * 0x30);
  local_60 = local_68;
  deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::deque(local_68,(deque *)param_1);
  pdVar2 = local_60 + 0x30;
  local_70 = *(undefined8 **)this;
  local_60 = *(deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 8);
  if (local_60 != (deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)local_70) {
    do {
      puVar6 = (undefined8 *)((long)local_60 + -0x30);
      *(undefined8 *)(local_68 + -0x30) = *puVar6;
      *(undefined8 *)(local_68 + -0x28) = *(undefined8 *)((long)local_60 + -0x28);
      *(undefined8 *)(local_68 + -0x20) = *(undefined8 *)((long)local_60 + -0x20);
      *(undefined8 *)(local_68 + -0x18) = *(undefined8 *)((long)local_60 + -0x18);
      *(undefined8 *)((long)local_60 + -0x28) = 0;
      *puVar6 = 0;
      *(undefined8 *)((long)local_60 + -0x18) = 0;
      *(undefined8 *)((long)local_60 + -0x20) = 0;
      *(undefined8 *)(local_68 + -0x10) = *(undefined8 *)((long)local_60 + -0x10);
                    /* try { // try from 00f9beb0 to 0109beb7 has its CatchHandler @ 00f9c1a8 */
      *(undefined8 *)(local_68 + -8) = *(undefined8 *)((long)local_60 + -8);
                    /* try { // try from 00f9beb8 to 0109bf2b has its CatchHandler @ 00f9c214 */
      *(undefined8 *)((long)local_60 + -0x10) = 0;
      *(undefined8 *)((long)local_60 + -8) = 0;
      local_68 = local_68 + -0x30;
      local_60 = (deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)puVar6;
    } while (local_70 != puVar6);
    local_70 = *(undefined8 **)this;
    local_60 = *(deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 8);
  }
  *(deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)this = local_68;
  *(deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 8) = pdVar2;
  uVar8 = *(undefined8 *)(this + 0x10);
  *(void **)(this + 0x10) = local_58;
  local_68 = (deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)local_70;
  local_58 = (void *)uVar8;
  __split_buffer<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>,std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>>&>
  ::~__split_buffer((__split_buffer<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>,std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>>&>
                     *)&local_70);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

