
/* cocos2d::PhysicsBody::init() */

bool __thiscall cocos2d::PhysicsBody::init(PhysicsBody *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = cpBodyNew(*(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0xa4));
  fVar2 = *(float *)(this + 0x98);
  *(long *)(this + 0x88) = lVar1;
  cpBodyActivate();
                    /* try { // try from 00fffc88 to 010ffceb has its CatchHandler @ 00fffc88
                       catch() { ... } // from try @ 00fffc88 with catch @ 00fffc88
                       catch() { ... } // from try @ 00fffdf4 with catch @ 00fffc88 */
  *(float *)(lVar1 + 0x10) = fVar2;
  *(float *)(lVar1 + 0x14) = 1.0 / fVar2;
  cpBodySetUserData(*(undefined8 *)(this + 0x88),this);
  cpBodySetVelocityUpdateFunc(*(undefined8 *)(this + 0x88),FUN_00fffcc8);
  return *(long *)(this + 0x88) != 0;
}

