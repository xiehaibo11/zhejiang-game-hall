
/* cocos2d::ParticleSystemQuad::create() */

ParticleSystem * cocos2d::ParticleSystemQuad::create(void)

{
  ParticleSystem *this;
  ulong uVar1;
  
                    /* try { // try from 00f371bc to 01037227 has its CatchHandler @ 00f37080 */
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystem *)0x0) {
    ParticleSystem::ParticleSystem(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170e2d8;
    *(undefined ***)(this + 0x300) = &PTR__ParticleSystemQuad_0170e9f0;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleSystemQuad_0170e9b0;
    *(undefined4 *)(this + 0x540) = 0;
    *(undefined8 *)(this + 0x538) = 0;
    *(undefined8 *)(this + 0x530) = 0;
    QuadCommand::QuadCommand((QuadCommand *)(this + 0x550));
    *(undefined8 *)(this + 0x544) = 0;
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ParticleSystem *)0x0;
    }
    else {
                    /* try { // try from 00f37228 to 0103722f has its CatchHandler @ 00f37310 */
      Ref::autorelease((Ref *)this);
                    /* try { // try from 00f37230 to 0103723b has its CatchHandler @ 00f3730c */
    }
  }
  return this;
}

