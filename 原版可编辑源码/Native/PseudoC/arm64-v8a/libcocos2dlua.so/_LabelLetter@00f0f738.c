
/* cocos2d::LabelLetter::~LabelLetter() */

void __thiscall cocos2d::LabelLetter::~LabelLetter(LabelLetter *this)

{
  Sprite::~Sprite((Sprite *)this);
  operator_delete(this);
  return;
}

