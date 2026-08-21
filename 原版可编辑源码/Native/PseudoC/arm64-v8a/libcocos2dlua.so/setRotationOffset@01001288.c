
/* cocos2d::PhysicsBody::setRotationOffset(float) */

void __thiscall cocos2d::PhysicsBody::setRotationOffset(PhysicsBody *this,float param_1)

{
  float fVar1;
  double dVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01001130 with catch @ 01001290
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01000fd0 with catch @ 010012a4
                        */
  if (0.5 < ABS(*(float *)(this + 0xcc) - param_1)) {
    dVar2 = *(double *)(this + 0xd8);
    fVar1 = (float)cpBodyGetAngle(*(undefined8 *)(this + 0x88));
    if (dVar2 == (double)fVar1) {
      fVar1 = *(float *)(this + 0xd0);
    }
    else {
      fVar1 = (float)cpBodyGetAngle(*(undefined8 *)(this + 0x88));
      *(double *)(this + 0xd8) = (double)fVar1;
      fVar1 = (float)(((double)fVar1 * -180.0) / 3.141592653589793 - (double)*(float *)(this + 0xcc)
                     );
      *(float *)(this + 0xd0) = fVar1;
    }
    *(float *)(this + 0xcc) = param_1;
                    /* WARNING: Could not recover jumptable at 0x01001340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xe0))(fVar1,this);
    return;
  }
  return;
}

