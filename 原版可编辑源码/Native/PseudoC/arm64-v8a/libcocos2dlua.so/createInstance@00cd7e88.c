
/* cocostudio::ParticleReader::createInstance() */

Ref * cocostudio::ParticleReader::createInstance(void)

{
  Ref *this;
  
  this = DAT_01786d30;
  if ((DAT_01786d30 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__ParticleReader_016ce660;
    *(undefined ***)(this + 0x28) = &PTR__ParticleReader_016ce698;
  }
  DAT_01786d30 = this;
  return DAT_01786d30;
}

