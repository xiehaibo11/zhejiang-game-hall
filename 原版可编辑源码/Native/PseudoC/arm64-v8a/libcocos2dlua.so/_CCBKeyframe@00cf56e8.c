
/* cocosbuilder::CCBKeyframe::~CCBKeyframe() */

void __thiscall cocosbuilder::CCBKeyframe::~CCBKeyframe(CCBKeyframe *this)

{
  *(undefined ***)this = &PTR__CCBKeyframe_016cf678;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x38));
  }
  cocos2d::Value::~Value((Value *)(this + 0x28));
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

