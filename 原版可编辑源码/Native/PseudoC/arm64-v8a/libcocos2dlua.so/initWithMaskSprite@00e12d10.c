
/* cocos2d::extension::ControlSwitchSprite::initWithMaskSprite(cocos2d::Sprite*, cocos2d::Sprite*,
   cocos2d::Sprite*, cocos2d::Sprite*, cocos2d::Label*, cocos2d::Label*) */

void __thiscall
cocos2d::extension::ControlSwitchSprite::initWithMaskSprite
          (ControlSwitchSprite *this,Sprite *param_1,Sprite *param_2,Sprite *param_3,Sprite *param_4
          ,Label *param_5,Label *param_6)

{
  long lVar1;
  Texture2D *pTVar2;
  ulong uVar3;
  float *pfVar4;
  ClippingNode *this_00;
  Ref *this_01;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e12d54 to 00f12d63 has its CatchHandler @ 00e12dcc */
                    /* try { // try from 00e12d64 to 00f12def has its CatchHandler @ 00e12978 */
  pTVar2 = (Texture2D *)(**(code **)(*(long *)param_1 + 0x550))(param_1);
  uVar3 = Sprite::initWithTexture((Sprite *)this,pTVar2);
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(this + 0x53c) = 0;
    pfVar4 = (float *)(**(code **)(*(long *)param_2 + 0x168))(param_2);
    fVar6 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*(long *)param_4 + 0x168))(param_4);
                    /* catch() { ... } // from try @ 00e12a0c with catch @ 00e12da8 */
    *(float *)(this + 0x540) = *pfVar4 * 0.5 - fVar6;
    *(undefined4 *)(this + 0x538) = *(undefined4 *)(this + 0x53c);
                    /* catch() { ... } // from try @ 00e12a50 with catch @ 00e12dc4 */
                    /* catch() { ... } // from try @ 00e129cc with catch @ 00e12dc8 */
                    /* catch() { ... } // from try @ 00e12d54 with catch @ 00e12dcc */
    (**(code **)(*(long *)this + 0x6d0))(this,param_2);
    (**(code **)(*(long *)this + 0x6e0))(this,param_3);
    (**(code **)(*(long *)this + 0x6f0))(this,param_4);
    (**(code **)(*(long *)this + 0x700))(this,param_5);
    (**(code **)(*(long *)this + 0x710))(this,param_6);
    this_00 = (ClippingNode *)ClippingNode::create();
    pTVar2 = (Texture2D *)(**(code **)(*(long *)param_1 + 0x550))(param_1);
    this_01 = (Ref *)Sprite::createWithTexture(pTVar2);
    *(Ref **)(this + 0x580) = this_01;
    Ref::retain(this_01);
    ClippingNode::setAlphaThreshold(this_00,0.1);
    ClippingNode::setStencil(this_00,*(Node **)(this + 0x580));
    (**(code **)(*(long *)this_00 + 0x208))(this_00,param_2);
    (**(code **)(*(long *)this_00 + 0x208))(this_00,param_3);
    if (param_5 != (Label *)0x0) {
      (**(code **)(*(long *)this_00 + 0x208))(this_00,param_5);
    }
    if (param_6 != (Label *)0x0) {
      (**(code **)(*(long *)this_00 + 0x208))(this_00,param_6);
    }
    (**(code **)(*(long *)this_00 + 0x208))(this_00,param_4);
    (**(code **)(*(long *)this + 0x208))(this,this_00);
    uVar5 = (**(code **)(*(long *)param_1 + 0x550))(param_1);
    (**(code **)(*(long *)this + 0x6a0))(this,uVar5);
    Texture2D::getContentSize();
    (**(code **)(*(long *)this + 0x160))(this,auStack_70);
    needsLayout(this);
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

