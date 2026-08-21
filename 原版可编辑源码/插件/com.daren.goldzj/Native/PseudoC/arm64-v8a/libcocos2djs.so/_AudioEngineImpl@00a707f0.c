
/* cocos2d::AudioEngineImpl::~AudioEngineImpl() */

void __thiscall cocos2d::AudioEngineImpl::~AudioEngineImpl(AudioEngineImpl *this)

{
                    /* try { // try from 00a707f0 to 00b707fb has its CatchHandler @ 00a70dd8 */
  ~AudioEngineImpl(this);
  operator_delete(this);
  return;
}

