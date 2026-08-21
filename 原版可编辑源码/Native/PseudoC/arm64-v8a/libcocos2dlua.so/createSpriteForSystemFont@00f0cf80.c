
/* cocos2d::Label::createSpriteForSystemFont(cocos2d::FontDefinition const&) */

void __thiscall cocos2d::Label::createSpriteForSystemFont(Label *this,FontDefinition *param_1)

{
  Texture2D *this_00;
  long *plVar1;
  undefined8 uVar2;
  Label *pLVar3;
  
  *(undefined4 *)(this + 0x308) = 3;
  this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this_00 != (Texture2D *)0x0) {
    Texture2D::Texture2D(this_00);
  }
  if (((byte)this[0x328] & 1) == 0) {
    pLVar3 = this + 0x329;
  }
  else {
    pLVar3 = *(Label **)(this + 0x338);
  }
  Texture2D::initWithString(this_00,(char *)pLVar3,param_1);
  plVar1 = (long *)Sprite::createWithTexture(this_00);
  *(long **)(this + 0x3c0) = plVar1;
  (**(code **)(*plVar1 + 0x4f0))(plVar1,*(undefined2 *)(this + 0x222),1);
  plVar1 = *(long **)(this + 0x3c0);
  (**(code **)(*(long *)this + 0x48))(this);
  (**(code **)(*plVar1 + 0x40))(plVar1);
  (**(code **)(**(long **)(this + 0x3c0) + 0x148))
            (*(long **)(this + 0x3c0),&Vec2::ANCHOR_BOTTOM_LEFT);
  uVar2 = (**(code **)(**(long **)(this + 0x3c0) + 0x168))();
  (**(code **)(*(long *)this + 0x160))(this,uVar2);
  Ref::release((Ref *)this_00);
  if (this[0x631] != (Label)0x0) {
    (**(code **)(**(long **)(this + 0x3c0) + 0x5e0))(*(long **)(this + 0x3c0),this + 0x634);
  }
  Ref::retain(*(Ref **)(this + 0x3c0));
  (**(code **)(**(long **)(this + 0x3c0) + 0x4c8))(*(long **)(this + 0x3c0),this + 0x21a);
                    /* WARNING: Could not recover jumptable at 0x00f0d0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x3c0) + 0x498))(*(long **)(this + 0x3c0),this[0x218]);
  return;
}

