
/* cocos2d::Sprite3D::getBoundingBox() const */

void cocos2d::Sprite3D::getBoundingBox(void)

{
  Sprite3D *in_x0;
  float *pfVar1;
  Rect *in_x8;
  
  pfVar1 = (float *)getAABB(in_x0);
                    /* try { // try from 00d40568 to 00e4056f has its CatchHandler @ 00d40848 */
                    /* try { // try from 00d40570 to 00e406cb has its CatchHandler @ 00d40514 */
  Rect::Rect(in_x8,*pfVar1,pfVar1[1],pfVar1[3] - *pfVar1,pfVar1[4] - pfVar1[1]);
  return;
}

