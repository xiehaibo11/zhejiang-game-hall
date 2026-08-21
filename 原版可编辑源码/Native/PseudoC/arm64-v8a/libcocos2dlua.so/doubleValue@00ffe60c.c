
/* cocos2d::__String::doubleValue() const */

undefined1  [16] __thiscall cocos2d::__String::doubleValue(__String *this)

{
  __String _Var1;
  undefined1 auVar2 [16];
  
  _Var1 = this[0x30];
  if (((byte)_Var1 & 1) == 0) {
    if ((byte)_Var1 >> 1 == 0) {
LAB_00ffe634:
      return ZEXT816(0);
    }
  }
  else if ((int)*(undefined8 *)(this + 0x38) == 0) goto LAB_00ffe634;
  if (((byte)_Var1 & 1) == 0) {
    auVar2 = utils::atof((char *)(this + 0x31));
    return auVar2;
  }
  auVar2 = utils::atof(*(char **)(this + 0x40));
  return auVar2;
}

