
/* cocos2d::extension::ControlSlider::initWithSprites(cocos2d::Sprite*, cocos2d::Sprite*,
   cocos2d::Sprite*, cocos2d::Sprite*) */

void __thiscall
cocos2d::extension::ControlSlider::initWithSprites
          (ControlSlider *this,Sprite *param_1,Sprite *param_2,Sprite *param_3,Sprite *param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  Sprite *pSVar6;
  long *plVar7;
  float fVar8;
  undefined1 auStack_88 [16];
  undefined8 local_78 [3];
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pSVar6 = param_2;
  uVar3 = Control::init((Control *)this);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    (**(code **)(*(long *)this + 0x1f0))(this,0);
    (**(code **)(*(long *)this + 0x750))(this,param_1);
    (**(code **)(*(long *)this + 0x740))(this,param_2);
    (**(code **)(*(long *)this + 0x720))(this,param_3);
    (**(code **)(*(long *)this + 0x730))(this,param_4);
    (**(code **)(*(long *)param_1 + 0x370))(local_78,param_1);
    (**(code **)(*(long *)param_3 + 0x370))(auStack_88,param_3);
    ControlUtils::RectUnion((ControlUtils *)local_78,auStack_88,pSVar6);
    Size::Size((Size *)local_78,local_60,fStack_5c);
    (**(code **)(*(long *)this + 0x160))(this,local_78);
    local_78[0] = 0x3f0000003f000000;
    (**(code **)(**(long **)(this + 0x388) + 0x148))(*(long **)(this + 0x388),local_78);
    plVar7 = *(long **)(this + 0x388);
    pfVar4 = (float *)(**(code **)(*(long *)this + 0x168))(this);
    fVar8 = *pfVar4;
    lVar5 = (**(code **)(*(long *)this + 0x168))(this);
    (**(code **)(*plVar7 + 200))(fVar8 * 0.5,*(float *)(lVar5 + 4) * 0.5,plVar7);
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x388));
    local_78[0] = 0x3f00000000000000;
    (**(code **)(**(long **)(this + 0x380) + 0x148))(*(long **)(this + 0x380),local_78);
    plVar7 = *(long **)(this + 0x380);
    lVar5 = (**(code **)(*(long *)this + 0x168))(this);
    (**(code **)(*plVar7 + 200))(0,*(float *)(lVar5 + 4) * 0.5,plVar7);
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x380));
    plVar7 = *(long **)(this + 0x370);
    lVar5 = (**(code **)(*(long *)this + 0x168))(this);
    (**(code **)(*plVar7 + 200))(0,*(float *)(lVar5 + 4) * 0.5,plVar7);
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x370));
    plVar7 = *(long **)(this + 0x378);
                    /* try { // try from 00e1114c to 00f11157 has its CatchHandler @ 00e11320 */
    lVar5 = (**(code **)(*(long *)this + 0x168))(this);
                    /* try { // try from 00e11158 to 00f11193 has its CatchHandler @ 00e10e3c */
    (**(code **)(*plVar7 + 200))(0,*(float *)(lVar5 + 4) * 0.5,plVar7);
    (**(code **)(**(long **)(this + 0x378) + 0x170))(*(long **)(this + 0x378),0);
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x378));
                    /* try { // try from 00e11194 to 00f111a3 has its CatchHandler @ 00e11328 */
    *(undefined8 *)(this + 0x35c) = 0x3f80000000000000;
    (**(code **)(*(long *)this + 0x6d0))(0,this);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

