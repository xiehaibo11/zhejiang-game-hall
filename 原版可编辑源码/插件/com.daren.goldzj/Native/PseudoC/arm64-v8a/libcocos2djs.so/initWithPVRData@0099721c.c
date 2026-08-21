
/* cocos2d::Image::initWithPVRData(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithPVRData(Image *this,uchar *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0099721c to 00a97313 has its CatchHandler @ 00996ed0 */
                    /* catch() { ... } // from try @ 00996fe4 with catch @ 00997230 */
                    /* catch() { ... } // from try @ 00996fc8 with catch @ 00997234 */
                    /* catch() { ... } // from try @ 00996ff4 with catch @ 00997238
                       catch() { ... } // from try @ 009971d8 with catch @ 00997238 */
  uVar1 = initWithPVRv2Data(this,param_1,param_2);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = initWithPVRv3Data(this,param_1,param_2);
  return uVar2;
}

