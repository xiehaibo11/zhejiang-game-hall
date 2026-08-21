
/* cocos2d::experimental::ui::VideoPlayer::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall
cocos2d::experimental::ui::VideoPlayer::copySpecialProperties(VideoPlayer *this,Widget *param_1)

{
  ulong uVar1;
  long lVar2;
  VideoPlayer *pVVar3;
  VideoPlayer *pVVar4;
  code *pcVar5;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_1 == (Widget *)0x0) ||
     (pVVar3 = (VideoPlayer *)__dynamic_cast(param_1,&cocos2d::ui::Widget::typeinfo,&typeinfo,0),
     pVVar3 == (VideoPlayer *)0x0)) goto LAB_00de0cac;
                    /* try { // try from 00de0bb8 to 00ee0bd3 has its CatchHandler @ 00de11ec */
  this[0x4f0] = pVVar3[0x4f0];
  this[0x4f1] = pVVar3[0x4f1];
  this[0x4f2] = pVVar3[0x4f2];
  *(undefined4 *)(this + 0x4f8) = *(undefined4 *)(pVVar3 + 0x4f8);
                    /* try { // try from 00de0bd8 to 00ee0be7 has its CatchHandler @ 00de11e8 */
  this[0x4f4] = pVVar3[0x4f4];
  this[0x4f3] = pVVar3[0x4f3];
  if (this != pVVar3) {
    uVar1 = (ulong)((byte)pVVar3[0x500] >> 1);
    pVVar4 = pVVar3 + 0x501;
    if (((byte)pVVar3[0x500] & 1) != 0) {
      uVar1 = *(ulong *)(pVVar3 + 0x508);
      pVVar4 = *(VideoPlayer **)(pVVar3 + 0x510);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x500),(char *)pVVar4,uVar1);
  }
  this[0x4f5] = pVVar3[0x4f5];
  *(undefined8 *)(this + 0x518) = *(undefined8 *)(pVVar3 + 0x518);
  pVVar4 = *(VideoPlayer **)(pVVar3 + 0x540);
  if (pVVar4 == (VideoPlayer *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (pVVar3 + 0x520 == pVVar4) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pVVar4 + 0x18))(pVVar4,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pVVar4 + 0x10))();
  }
  FUN_00de1e88(alStack_70,this + 0x520);
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00de0ca0:
                    /* try { // try from 00de0ca0 to 00ee0cbb has its CatchHandler @ 00de11e4 */
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00de0ca0;
  }
  *(undefined8 *)(this + 0x550) = *(undefined8 *)(pVVar3 + 0x550);
LAB_00de0cac:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00de0cc0 to 00ee0ccf has its CatchHandler @ 00de11e0 */
  return;
}

