
/* cocos2d::PhysicsBody::setDynamic(bool) */

void __thiscall cocos2d::PhysicsBody::setDynamic(PhysicsBody *this,bool param_1)

{
  long lVar1;
  float fVar2;
  
  if ((PhysicsBody)param_1 == this[0x90]) {
    return;
  }
  this[0x90] = (PhysicsBody)param_1;
                    /* catch() { ... } // from try @ 00fff978 with catch @ 00fff930 */
  if (param_1) {
    cpBodySetType(*(undefined8 *)(this + 0x88),0);
    lVar1 = *(long *)(this + 0x88);
    fVar2 = *(float *)(this + 0x98);
    cpBodyActivate(lVar1);
    *(float *)(lVar1 + 0x10) = fVar2;
    *(float *)(lVar1 + 0x14) = 1.0 / fVar2;
                    /* try { // try from 00fff95c to 010ff95f has its CatchHandler @ 00fff990 */
                    /* try { // try from 00fff96c to 010ff977 has its CatchHandler @ 00fff994 */
    cpBodySetMoment(*(undefined4 *)(this + 0xa4),*(undefined8 *)(this + 0x88));
    return;
  }
                    /* try { // try from 00fff978 to 010ff9e3 has its CatchHandler @ 00fff930 */
  cpBodySetType(*(undefined8 *)(this + 0x88),1);
  return;
}

