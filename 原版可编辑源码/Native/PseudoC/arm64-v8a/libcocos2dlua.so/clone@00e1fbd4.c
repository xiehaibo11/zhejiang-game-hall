
/* cocos2d::PUParticleSystem3D::clone() */

PUParticleSystem3D * __thiscall cocos2d::PUParticleSystem3D::clone(PUParticleSystem3D *this)

{
  long *plVar1;
  long *plVar2;
  PUParticleSystem3D *this_00;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  this_00 = operator_new(0x4d0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e1fbfc to 00f1fc03 has its CatchHandler @ 00e1fd58 */
  if (this_00 != (PUParticleSystem3D *)0x0) {
    PUParticleSystem3D(this_00);
  }
  Ref::autorelease((Ref *)this_00);
  (**(code **)(*(long *)this + 0x570))(this,this_00);
  plVar1 = *(long **)(this + 0x178);
  plVar2 = *(long **)(this + 0x180);
  if (plVar1 != plVar2) {
    lVar3 = *plVar1;
    while( true ) {
      if ((lVar3 != 0) &&
         (plVar4 = (long *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0), plVar4 != (long *)0x0)
         ) {
        uVar5 = (**(code **)(*plVar4 + 0x568))();
        (**(code **)(*(long *)this_00 + 0x208))(this_00,uVar5);
      }
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) break;
      lVar3 = *plVar1;
    }
  }
  return this_00;
}

