
/* cocos2d::AudioDecoder::fileSeek(void*, long, int) */

undefined8 cocos2d::AudioDecoder::fileSeek(void *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 2) {
    uVar1 = Data::getSize((Data *)((long)param_1 + 0x58));
    *(undefined8 *)((long)param_1 + 0x68) = uVar1;
  }
  else if (param_3 == 1) {
    *(long *)((long)param_1 + 0x68) = *(long *)((long)param_1 + 0x68) + param_2;
  }
  else if (param_3 == 0) {
    *(long *)((long)param_1 + 0x68) = param_2;
  }
  return 0;
}

