
/* cocos2d::Properties::Properties(cocos2d::Data*, long*) */

void __thiscall cocos2d::Properties::Properties(Properties *this,Data *param_1,long *param_2)

{
                    /* try { // try from 00fad518 to 010ad633 has its CatchHandler @ 00fad518
                       catch() { ... } // from try @ 00fad518 with catch @ 00fad518
                       catch() { ... } // from try @ 00fad63c with catch @ 00fad518 */
  *(long **)this = param_2;
  *(Data **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  readProperties(this);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x80);
  return;
}

