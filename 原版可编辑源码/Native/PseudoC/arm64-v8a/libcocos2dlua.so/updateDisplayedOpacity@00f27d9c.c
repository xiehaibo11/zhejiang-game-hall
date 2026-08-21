
/* cocos2d::__NodeRGBA::updateDisplayedOpacity(unsigned char) */

void __thiscall cocos2d::__NodeRGBA::updateDisplayedOpacity(__NodeRGBA *this,uchar param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this[0x218] = SUB41((int)((double)((uint)(byte)this[0x219] * (uint)param_1) / 255.0),0);
  (**(code **)(*(long *)this + 0x528))();
  if (this[0x221] != (__NodeRGBA)0x0) {
    puVar1 = *(undefined8 **)(this + 0x180);
    for (puVar2 = *(undefined8 **)(this + 0x178); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x498))((long *)*puVar2,this[0x218]);
    }
  }
  return;
}

