
/* cocos2d::__Array::getRandomObject() */

undefined8 __thiscall cocos2d::__Array::getRandomObject(__Array *this)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (**(long **)(this + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = rand();
    fVar3 = 0.0;
    if ((float)iVar1 * 4.656613e-10 != 1.0) {
      fVar3 = (float)iVar1 * 4.656613e-10;
    }
    uVar2 = *(undefined8 *)
             ((*(long **)(this + 0x30))[2] +
             (long)(int)(fVar3 * (float)**(long **)(this + 0x30)) * 8);
  }
  return uVar2;
}

