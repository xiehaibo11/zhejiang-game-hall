
/* cocos2d::Image::isS3TC(unsigned char const*, long) */

bool cocos2d::Image::isS3TC(uchar *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = strncmp((char *)param_2,"DDS",3);
                    /* try { // try from 00997864 to 00a9789f has its CatchHandler @ 00997980 */
  return iVar1 == 0;
}

