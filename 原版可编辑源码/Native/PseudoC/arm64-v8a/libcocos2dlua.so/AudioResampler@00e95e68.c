
/* cocos2d::experimental::AudioResampler::AudioResampler(int, int,
   cocos2d::experimental::AudioResampler::src_quality) */

void __thiscall
cocos2d::experimental::AudioResampler::AudioResampler
          (AudioResampler *this,int param_1,int param_2,undefined8 param_4)

{
  *(int *)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  *(int *)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined ***)this = &PTR__AudioResampler_016f4440;
  *(undefined8 *)(this + 0x48) = 0x7fffffffffffffff;
  *(undefined8 *)(this + 0x40) = 0;
  *(int *)(this + 0x50) = (int)param_4;
  if (1 < param_1 - 1U) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert
              (0,"AudioResampler","Unsupported sample format %d quality %d channels",param_4,param_1
              );
  }
  if (0 < param_2) {
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(0,"AudioResampler","Unsupported sample rate %d Hz",param_2);
}

