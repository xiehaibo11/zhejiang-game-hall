
/* cocos2d::FastLZCompressor::decompress(unsigned char const*, int, unsigned char*, int, int*) */

undefined4 __thiscall
cocos2d::FastLZCompressor::decompress
          (FastLZCompressor *this,uchar *param_1,int param_2,uchar *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fastlz_decompress(param_1,param_2,param_3,param_4);
  *param_5 = iVar1;
  uVar2 = 0x80000000;
  if (-1 < iVar1) {
    uVar2 = 0x40000000;
  }
  return uVar2;
}

