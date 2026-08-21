
/* cocos2d::__String::floatValue() const */

float __thiscall cocos2d::__String::floatValue(__String *this)

{
  __String _Var1;
  double dVar2;
  __String *p_Var3;
  
  _Var1 = this[0x30];
  if (((byte)_Var1 & 1) == 0) {
    if ((byte)_Var1 >> 1 == 0) {
      return 0.0;
    }
  }
  else if ((int)*(undefined8 *)(this + 0x38) == 0) {
    return 0.0;
  }
  if (((byte)_Var1 & 1) == 0) {
    p_Var3 = this + 0x31;
  }
  else {
    p_Var3 = *(__String **)(this + 0x40);
  }
  dVar2 = (double)utils::atof((char *)p_Var3);
  return (float)dVar2;
}

