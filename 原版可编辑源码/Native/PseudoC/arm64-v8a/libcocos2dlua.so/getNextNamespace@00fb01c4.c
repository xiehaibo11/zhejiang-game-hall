
/* cocos2d::Properties::getNextNamespace() */

undefined8 __thiscall cocos2d::Properties::getNextNamespace(Properties *this)

{
  undefined8 *puVar1;
  
  if (*(undefined8 **)(this + 0x90) == *(undefined8 **)(this + 0x80)) {
    puVar1 = *(undefined8 **)(this + 0x78);
  }
  else {
    puVar1 = *(undefined8 **)(this + 0x90) + 1;
  }
  *(undefined8 **)(this + 0x90) = puVar1;
  if (puVar1 != *(undefined8 **)(this + 0x80)) {
    return *puVar1;
  }
  return 0;
}

