
/* cocos2d::BundleReader::readMatrix(float*) */

bool __thiscall cocos2d::BundleReader::readMatrix(BundleReader *this,float *param_1)

{
  long lVar1;
  
  lVar1 = read(this,param_1,4,0x10);
  return lVar1 == 0x10;
}

