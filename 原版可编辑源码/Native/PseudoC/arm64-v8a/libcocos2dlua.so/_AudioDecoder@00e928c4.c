
/* cocos2d::experimental::AudioDecoder::~AudioDecoder() */

void __thiscall cocos2d::experimental::AudioDecoder::~AudioDecoder(AudioDecoder *this)

{
  *(undefined ***)this = &PTR__AudioDecoder_016f4290;
  Data::~Data((Data *)(this + 0x58));
  PcmData::~PcmData((PcmData *)(this + 0x20));
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

