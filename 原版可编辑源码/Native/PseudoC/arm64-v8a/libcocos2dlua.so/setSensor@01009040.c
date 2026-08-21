
/* cocos2d::PhysicsShape::setSensor(bool) */

void __thiscall cocos2d::PhysicsShape::setSensor(PhysicsShape *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 01009054 to 011090b3 has its CatchHandler @ 01009054
                       catch() { ... } // from try @ 01009054 with catch @ 01009054
                       catch() { ... } // from try @ 010090c4 with catch @ 01009054 */
  if ((PhysicsShape)param_1 != this[0x58]) {
    puVar1 = *(undefined8 **)(this + 0x38);
    for (puVar2 = *(undefined8 **)(this + 0x30); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      cpShapeSetSensor(*puVar2,param_1);
    }
    this[0x58] = (PhysicsShape)param_1;
  }
  return;
}

