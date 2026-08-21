
/* cocos2d::FastLZCompressor::compress(unsigned char const*, int, unsigned char*, int, int*) */

undefined8 __thiscall
cocos2d::FastLZCompressor::compress
          (FastLZCompressor *this,uchar *param_1,int param_2,uchar *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  
  iVar1 = fastlz_compress(param_1,param_2,param_3,param_3,param_4);
  *param_5 = iVar1;
  return 0x40000000;
}

