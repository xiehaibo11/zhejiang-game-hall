
/* cocos2d::renderer::AssemblerSprite::~AssemblerSprite() */

void __thiscall cocos2d::renderer::AssemblerSprite::~AssemblerSprite(AssemblerSprite *this)

{
  AssemblerSprite *pAVar1;
  
  *(undefined ***)this = &PTR__AssemblerSprite_01c6b788;
  pAVar1 = this + 0x90;
  if (*(Object **)pAVar1 != (Object *)0x0) {
    se::Object::unroot(*(Object **)pAVar1);
    se::RefCounter::decRef(*(RefCounter **)pAVar1);
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
  }
  Assembler::~Assembler((Assembler *)this);
  operator_delete(this);
  return;
}

