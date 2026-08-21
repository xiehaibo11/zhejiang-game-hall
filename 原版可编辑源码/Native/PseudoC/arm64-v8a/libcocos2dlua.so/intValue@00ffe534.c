
/* cocos2d::__String::intValue() const */

int __thiscall cocos2d::__String::intValue(__String *this)

{
  __String _Var1;
  int iVar2;
  
  _Var1 = this[0x30];
  if (((byte)_Var1 & 1) == 0) {
    if ((byte)_Var1 >> 1 == 0) {
      return 0;
    }
  }
  else if ((int)*(undefined8 *)(this + 0x38) == 0) {
    return 0;
  }
  if (((byte)_Var1 & 1) != 0) {
    iVar2 = atoi(*(char **)(this + 0x40));
    return iVar2;
  }
  iVar2 = atoi((char *)(this + 0x31));
  return iVar2;
}

