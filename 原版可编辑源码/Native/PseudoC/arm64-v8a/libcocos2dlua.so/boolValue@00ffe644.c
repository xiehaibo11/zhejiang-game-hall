
/* cocos2d::__String::boolValue() const */

bool __thiscall cocos2d::__String::boolValue(__String *this)

{
  __String _Var1;
  int iVar2;
  __String *p_Var3;
  
  _Var1 = this[0x30];
  if (((byte)_Var1 & 1) == 0) {
    if ((byte)_Var1 >> 1 == 0) {
      return false;
    }
  }
  else if ((int)*(undefined8 *)(this + 0x38) == 0) {
    return false;
  }
  if (((byte)_Var1 & 1) == 0) {
    p_Var3 = this + 0x31;
  }
  else {
    p_Var3 = *(__String **)(this + 0x40);
  }
  iVar2 = strcmp((char *)p_Var3,"0");
  if (iVar2 == 0) {
    return false;
  }
  if (((byte)_Var1 & 1) == 0) {
    p_Var3 = this + 0x31;
  }
  else {
    p_Var3 = *(__String **)(this + 0x40);
  }
  iVar2 = strcmp((char *)p_Var3,"false");
  return iVar2 != 0;
}

