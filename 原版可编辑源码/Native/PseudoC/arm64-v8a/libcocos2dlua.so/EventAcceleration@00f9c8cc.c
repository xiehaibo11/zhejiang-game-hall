
/* cocos2d::EventAcceleration::EventAcceleration(cocos2d::Acceleration const&) */

void __thiscall
cocos2d::EventAcceleration::EventAcceleration(EventAcceleration *this,Acceleration *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 00f9c8d4 to 0109c903 has its CatchHandler @ 00f9c8d4
                       catch() { ... } // from try @ 00f9c8d4 with catch @ 00f9c8d4
                       catch() { ... } // from try @ 00f9c940 with catch @ 00f9c8d4 */
  Event::Event((Event *)this,2);
  *(undefined ***)this = &PTR__EventAcceleration_016982f0;
                    /* try { // try from 00f9c904 to 0109c90b has its CatchHandler @ 00f9c9d4 */
  *(undefined ***)(this + 0x38) = &PTR__Ref_017236f0;
  uVar2 = *(undefined8 *)(param_1 + 0x19);
  uVar1 = *(undefined8 *)(param_1 + 0x11);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00f9c91c to 0109c923 has its CatchHandler @ 00f9c9b4 */
  *(undefined ***)(this + 0x38) = &PTR__Ref_016982b8;
  *(undefined8 *)(this + 0x51) = uVar2;
  *(undefined8 *)(this + 0x49) = uVar1;
  *(undefined8 *)(this + 0x48) = uVar4;
  *(undefined8 *)(this + 0x40) = uVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 00f9c92c to 0109c933 has its CatchHandler @ 00f9c994 */
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x60) = uVar1;
  *(undefined8 *)(this + 0x78) = uVar3;
  *(undefined8 *)(this + 0x70) = uVar2;
                    /* try { // try from 00f9c93c to 0109c93f has its CatchHandler @ 00f9c954 */
  return;
}

