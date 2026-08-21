
/* std::__ndk1::function<void ()>& std::__ndk1::function<void
   ()>::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::__bind<void (&)(std::__ndk1::function<void (bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), std::__ndk1::function<void (bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>&&) */

function * __thiscall
std::__ndk1::function<void()>::operator=(function<void()> *this,__bind *param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  __bind *p_Var6;
  code *pcVar7;
  __bind a_Stack_c0 [32];
  __bind *local_a0;
  ulong local_90;
  long lStack_88;
  void *local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)param_1;
  p_Var6 = *(__bind **)(param_1 + 0x30);
  if (p_Var6 == (__bind *)0x0) {
    local_a0 = (__bind *)0x0;
  }
  else if (param_1 + 0x10 == p_Var6) {
    local_a0 = a_Stack_c0;
    (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_a0 = p_Var6;
  }
  local_80 = *(void **)(param_1 + 0x50);
  lStack_88 = *(long *)(param_1 + 0x48);
  local_90 = *(ulong *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  local_50 = (long *)0x0;
  plVar4 = operator_new(0x70);
  plVar4[2] = lVar5;
  *plVar4 = (long)&PTR____func_01723bc0;
  if (local_a0 == (__bind *)0x0) {
    plVar4[8] = 0;
  }
  else if (a_Stack_c0 == local_a0) {
    plVar4[8] = (long)(plVar4 + 4);
    (**(code **)(*(long *)local_a0 + 0x18))();
  }
  else {
    plVar4[8] = (long)local_a0;
    local_a0 = (__bind *)0x0;
  }
  pvVar3 = local_80;
  lVar5 = lStack_88;
  uVar2 = local_90;
  lStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  plVar4[0xc] = (long)pvVar3;
  plVar4[0xb] = lVar5;
  plVar4[10] = uVar2;
  local_50 = plVar4;
  FUN_008820fc(alStack_70,this);
  if (alStack_70 == local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
LAB_00fc91d4:
    (*pcVar7)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar7 = *(code **)(*local_50 + 0x28);
    goto LAB_00fc91d4;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (a_Stack_c0 == local_a0) {
    pcVar7 = *(code **)(*(long *)local_a0 + 0x20);
  }
  else {
    if (local_a0 == (__bind *)0x0) goto LAB_00fc9218;
    pcVar7 = *(code **)(*(long *)local_a0 + 0x28);
  }
  (*pcVar7)();
LAB_00fc9218:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

