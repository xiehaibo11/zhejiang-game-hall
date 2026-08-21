
/* std::__ndk1::function<void ()>& std::__ndk1::function<void
   ()>::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::__bind<void
   (cocos2d::RenderTexture::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool), cocos2d::RenderTexture*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   bool&>&&) */

function * __thiscall
std::__ndk1::function<void()>::operator=(function<void()> *this,__bind *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  __bind _Var4;
  __bind _Var5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 local_99;
  undefined7 uStack_98;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar2 = *(long *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x19);
  lVar1 = *(long *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  _Var4 = param_1[0x18];
  uStack_98 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x20) >> 8);
  local_99 = (undefined1)((ulong)uVar8 >> 0x38);
  _Var5 = param_1[0x30];
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_70 = (long *)0x0;
  local_70 = operator_new(0x40);
  local_70[2] = lVar3;
  local_70[3] = lVar9;
  *(__bind *)(local_70 + 4) = _Var4;
  *(__bind *)(local_70 + 7) = _Var5;
  *local_70 = (long)&PTR____func_0170fd78;
  local_70[1] = lVar1;
  local_70[5] = CONCAT71(uStack_98,local_99);
  local_70[6] = lVar2;
  *(undefined8 *)((long)local_70 + 0x21) = uVar8;
  FUN_008820fc(alStack_90,this);
                    /* try { // try from 00f3bab8 to 0103babf has its CatchHandler @ 00f3bc50 */
  if (alStack_90 == local_70) {
    pcVar7 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00f3badc;
    pcVar7 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar7)();
LAB_00f3badc:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

