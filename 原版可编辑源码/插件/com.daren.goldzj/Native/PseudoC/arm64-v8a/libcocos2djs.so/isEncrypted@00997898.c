
/* cocos2d::Image::isEncrypted(unsigned char const*, long) */

bool __thiscall cocos2d::Image::isEncrypted(Image *this,uchar *param_1,long param_2)

{
  int iVar1;
  
  if (param_2 < 5) {
                    /* try { // try from 009978a0 to 00a979d7 has its CatchHandler @ 0099766c */
    return false;
  }
  param_1[8] = param_1[8] ^ 0x32;
  *(ulong *)param_1 = *(ulong *)param_1 ^ 0xa4b914285d3b461d;
  iVar1 = memcmp(param_1,"CiGGeRWoOPVR!",9);
  return iVar1 != 0;
}

