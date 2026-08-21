
/* cocos2d::ui::Scale9Sprite::copyTo(cocos2d::ui::Scale9Sprite*) const */

void __thiscall cocos2d::ui::Scale9Sprite::copyTo(Scale9Sprite *this,Scale9Sprite *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Rect aRStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(*(long *)this + 0x5b0))();
  Rect::Rect(aRStack_58,*(float *)(this + 0x530),*(float *)(this + 0x538),
             (*(float *)(this + 0x438) - *(float *)(this + 0x530)) - *(float *)(this + 0x534),
             (*(float *)(this + 0x43c) - *(float *)(this + 0x538)) - *(float *)(this + 0x53c));
  (**(code **)(*(long *)param_1 + 0x680))(param_1,uVar4,aRStack_58);
  setRenderingType(param_1,*(undefined4 *)(this + 0x544));
  if (*(int *)(param_1 + 0x42c) != 1) {
    iVar1 = *(int *)(this + 0x544);
                    /* try { // try from 00de3a74 to 00ee3a8f has its CatchHandler @ 00de4aa8 */
    setRenderingType(param_1,iVar1 == 1);
    Sprite::setStretchEnabled((Sprite *)param_1,iVar1 == 1);
  }
  param_1[0x52d] = this[0x52d];
                    /* try { // try from 00de3a94 to 00ee3aa3 has its CatchHandler @ 00de4aa4 */
  *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(this + 0x540);
  uVar4 = (**(code **)(*(long *)this + 0x168))(this);
  (**(code **)(*(long *)param_1 + 0x160))(param_1,uVar4);
  uVar4 = (**(code **)(*(long *)this + 0xb0))(this);
  (**(code **)(*(long *)param_1 + 0x98))(param_1,uVar4);
  uVar4 = (**(code **)(*(long *)this + 0x58))(this);
  uVar5 = (**(code **)(*(long *)this + 0x68))(this);
  (**(code **)(*(long *)param_1 + 0x90))(uVar4,uVar5,param_1);
  (**(code **)(*(long *)this + 0x188))(this);
  (**(code **)(*(long *)param_1 + 0x180))(param_1);
  (**(code **)(*(long *)this + 0x1c0))(this);
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1);
                    /* try { // try from 00de3b5c to 00ee3bc7 has its CatchHandler @ 00de49a8 */
  (**(code **)(*(long *)this + 0x1e0))(this);
  (**(code **)(*(long *)param_1 + 0x1d0))(param_1);
  uVar4 = (**(code **)(*(long *)this + 0x4b0))(this);
  (**(code **)(*(long *)param_1 + 0x4c0))(param_1,uVar4);
  uVar3 = (**(code **)(*(long *)this + 0x480))(this);
  (**(code **)(*(long *)param_1 + 0x490))(param_1,uVar3);
                    /* try { // try from 00de3bc8 to 00ee3beb has its CatchHandler @ 00de2ff0 */
  Size::operator=((Size *)(param_1 + 0x438),(Size *)(this + 0x438));
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00de3bec to 00ee3bf7 has its CatchHandler @ 00de4894 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

