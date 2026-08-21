
/* cocos2d::extension::ControlSwitch::initWithMaskSprite(cocos2d::Sprite*, cocos2d::Sprite*,
   cocos2d::Sprite*, cocos2d::Sprite*, cocos2d::Label*, cocos2d::Label*) */

void __thiscall
cocos2d::extension::ControlSwitch::initWithMaskSprite
          (ControlSwitch *this,Sprite *param_1,Sprite *param_2,Sprite *param_3,Sprite *param_4,
          Label *param_5,Label *param_6)

{
  long lVar1;
  ulong uVar2;
  Sprite *this_00;
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar2 = Control::init((Control *)this);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    this[0x365] = (ControlSwitch)0x1;
    this_00 = operator_new(0x590,(nothrow_t *)&std::nothrow);
    if (this_00 != (Sprite *)0x0) {
      Sprite::Sprite(this_00);
      *(undefined8 *)(this_00 + 0x538) = 0;
      *(undefined ***)this_00 = &PTR__ControlSwitchSprite_016ebef0;
      *(undefined ***)(this_00 + 0x2f8) = &PTR__ControlSwitchSprite_016ec618;
      *(undefined4 *)(this_00 + 0x540) = 0;
      *(undefined ***)(this_00 + 0x530) = &PTR__ControlSwitchSprite_016ec658;
      *(undefined8 *)(this_00 + 0x550) = 0;
      *(undefined8 *)(this_00 + 0x548) = 0;
      *(undefined8 *)(this_00 + 0x560) = 0;
      *(undefined8 *)(this_00 + 0x558) = 0;
      *(undefined8 *)(this_00 + 0x570) = 0;
      *(undefined8 *)(this_00 + 0x568) = 0;
      *(undefined8 *)(this_00 + 0x580) = 0;
      *(undefined8 *)(this_00 + 0x578) = 0;
    }
    ControlSwitchSprite::initWithMaskSprite
              ((ControlSwitchSprite *)this_00,param_1,param_2,param_3,param_4,param_5,param_6);
    Ref::autorelease((Ref *)this_00);
    *(Sprite **)(this + 0x358) = this_00;
    Ref::retain((Ref *)this_00);
    plVar6 = *(long **)(this + 0x358);
    pfVar3 = (float *)(**(code **)(*plVar6 + 0x168))(plVar6);
    fVar7 = *pfVar3;
    lVar4 = (**(code **)(**(long **)(this + 0x358) + 0x168))(*(long **)(this + 0x358));
    (**(code **)(*plVar6 + 200))(fVar7 * 0.5,*(float *)(lVar4 + 4) * 0.5,plVar6);
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x358));
    (**(code **)(*(long *)this + 0x1f0))(this,0);
    local_80 = 0x3f0000003f000000;
    (**(code **)(*(long *)this + 0x148))(this,&local_80);
    uVar5 = (**(code **)(**(long **)(this + 0x358) + 0x168))();
    (**(code **)(*(long *)this + 0x160))(this,uVar5);
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

