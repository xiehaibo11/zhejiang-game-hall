
/* cocos2d::PUNoise3D::initialise(unsigned short, double, double, double) */

void __thiscall
cocos2d::PUNoise3D::initialise
          (PUNoise3D *this,ushort param_1,double param_2,double param_3,double param_4)

{
  *(ushort *)(this + 0x808) = param_1;
  *(double *)(this + 0x810) = param_2;
  *(double *)(this + 0x818) = param_3;
  *(double *)(this + 0x820) = param_4;
  memcpy(this + 8,&DAT_01423cf4,0x400);
  memcpy(this + 0x408,&DAT_01423cf4,0x400);
  return;
}

