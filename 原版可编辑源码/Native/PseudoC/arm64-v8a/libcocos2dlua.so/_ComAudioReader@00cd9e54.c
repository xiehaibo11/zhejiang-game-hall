
/* cocostudio::ComAudioReader::~ComAudioReader() */

void __thiscall cocostudio::ComAudioReader::~ComAudioReader(ComAudioReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

