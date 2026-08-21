
/* cocostudio::ComAudioReader::getInstance() */

Ref * cocostudio::ComAudioReader::getInstance(void)

{
  Ref *this;
  
  this = DAT_01786dc0;
  if (DAT_01786dc0 == (Ref *)0x0) {
    this = operator_new(0x30);
    cocos2d::Ref::Ref(this);
    DAT_01786dc0 = this;
    *(undefined ***)this = &PTR__ComAudioReader_016ce858;
    *(undefined ***)(this + 0x28) = &PTR__ComAudioReader_016ce890;
  }
  return this;
}

