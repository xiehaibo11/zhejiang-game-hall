
/* cocos2d::renderer::AssemblerSprite::setLocalData(se::Object*) */

void __thiscall
cocos2d::renderer::AssemblerSprite::setLocalData(AssemblerSprite *this,Object *param_1)

{
  Object *this_00;
  
  if ((param_1 != (Object *)0x0) && (this_00 = *(Object **)(this + 0x90), this_00 != param_1)) {
    if (this_00 != (Object *)0x0) {
      se::Object::unroot(this_00);
      se::RefCounter::decRef(*(RefCounter **)(this + 0x90));
    }
    *(Object **)(this + 0x90) = param_1;
    se::Object::root(param_1);
    se::RefCounter::incRef(*(RefCounter **)(this + 0x90));
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    se::Object::getTypedArrayData
              (*(Object **)(this + 0x90),(uchar **)(this + 0x98),(ulong *)(this + 0xa0));
    return;
  }
  return;
}

