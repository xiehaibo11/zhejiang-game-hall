
/* cocos2d::PUSlaveEmitter::PUSlaveEmitter() */

void __thiscall cocos2d::PUSlaveEmitter::PUSlaveEmitter(PUSlaveEmitter *this)

{
  PUEmitter::PUEmitter((PUEmitter *)this);
                    /* try { // try from 00e38908 to 00f3890f has its CatchHandler @ 00e395f4 */
                    /* try { // try from 00e38910 to 00f38947 has its CatchHandler @ 00e37bc0 */
  PUListener::PUListener((PUListener *)(this + 0x200));
  *(undefined ***)this = &PTR__PUSlaveEmitter_016f0d68;
  *(undefined ***)(this + 0x200) = &PTR__PUSlaveEmitter_016f0e58;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x240));
                    /* try { // try from 00e38948 to 00f3894f has its CatchHandler @ 00e39634 */
  Vec3::Vec3((Vec3 *)(this + 0x24c));
  this[600] = (PUSlaveEmitter)0x0;
  return;
}

