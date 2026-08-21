
/* cocos2d::ui::Slider::initRenderer() */

void __thiscall cocos2d::ui::Slider::initRenderer(Slider *this)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = Scale9Sprite::create();
  *(undefined8 *)(this + 0x4f0) = uVar2;
                    /* try { // try from 00dcbd5c to 00ecbd77 has its CatchHandler @ 00dccc2c */
  uVar2 = Scale9Sprite::create();
  *(undefined8 *)(this + 0x4f8) = uVar2;
  Scale9Sprite::setScale9Enabled(*(Scale9Sprite **)(this + 0x4f0),false);
                    /* try { // try from 00dcbd7c to 00ecbd8b has its CatchHandler @ 00dccc30 */
  Scale9Sprite::setScale9Enabled(*(Scale9Sprite **)(this + 0x4f8),false);
  local_30 = 0x3f00000000000000;
  (**(code **)(**(long **)(this + 0x4f8) + 0x148))(*(long **)(this + 0x4f8),&local_30);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x4f0),0xfffffffe,0xffffffff);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x4f8),0xfffffffe,0xffffffff);
  uVar2 = Sprite::create();
  *(undefined8 *)(this + 0x530) = uVar2;
  plVar3 = (long *)Sprite::create();
  *(long **)(this + 0x538) = plVar3;
  (**(code **)(*plVar3 + 0x170))(plVar3,0);
  plVar3 = (long *)Sprite::create();
  *(long **)(this + 0x540) = plVar3;
  (**(code **)(*plVar3 + 0x170))(plVar3,0);
  plVar3 = (long *)Node::create();
  *(long **)(this + 0x548) = plVar3;
  (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(this + 0x530));
  (**(code **)(**(long **)(this + 0x548) + 0x208))
            (*(long **)(this + 0x548),*(undefined8 *)(this + 0x538));
                    /* try { // try from 00dcbe44 to 00ecbecf has its CatchHandler @ 00dccbcc */
  (**(code **)(**(long **)(this + 0x548) + 0x208))
            (*(long **)(this + 0x548),*(undefined8 *)(this + 0x540));
  (**(code **)(**(long **)(this + 0x548) + 0x4d8))(*(long **)(this + 0x548),1);
  (**(code **)(**(long **)(this + 0x548) + 0x4a8))(*(long **)(this + 0x548),1);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x548),0xffffffff,0xffffffff);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

