
/* cocos2d::renderer::Technique::Parameter::freeValue() */

void __thiscall cocos2d::renderer::Technique::Parameter::freeValue(Parameter *this)

{
  Parameter PVar1;
  Ref *this_00;
  ulong uVar2;
  
  this_00 = *(Ref **)(this + 0x38);
  if (this_00 != (Ref *)0x0) {
    if ((((byte)this[0x31] | 2) == 0x1f) && (PVar1 = this[0x30], PVar1 != (Parameter)0x0)) {
      if (PVar1 == (Parameter)0x1) {
        Ref::release(this_00);
        *(undefined8 *)(this + 0x38) = 0;
        return;
      }
      uVar2 = 0;
      do {
        if (*(Ref **)(this_00 + uVar2 * 8) != (Ref *)0x0) {
          Ref::release(*(Ref **)(this_00 + uVar2 * 8));
          PVar1 = this[0x30];
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (byte)PVar1);
      this_00 = *(Ref **)(this + 0x38);
    }
    free(this_00);
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (*(Object **)(this + 8) != (Object *)0x0) {
    se::Object::unroot(*(Object **)(this + 8));
    se::RefCounter::decRef(*(RefCounter **)(this + 8));
    *(undefined2 *)(this + 0x40) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}

