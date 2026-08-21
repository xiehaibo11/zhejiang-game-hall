
/* cocos2d::__String::compare(char const*) const */

int __thiscall cocos2d::__String::compare(__String *this,char *param_1)

{
  int iVar1;
  
  if (((byte)this[0x30] & 1) == 0) {
    iVar1 = strcmp((char *)(this + 0x31),param_1);
    return iVar1;
  }
  iVar1 = strcmp(*(char **)(this + 0x40),param_1);
  return iVar1;
}

