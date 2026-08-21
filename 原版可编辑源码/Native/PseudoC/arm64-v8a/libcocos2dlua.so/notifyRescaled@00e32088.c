
/* cocos2d::PUEmitter::notifyRescaled(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUEmitter::notifyRescaled(PUEmitter *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00e32144 with catch @ 00e32088 */
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x68) = uVar1;
  return;
}

