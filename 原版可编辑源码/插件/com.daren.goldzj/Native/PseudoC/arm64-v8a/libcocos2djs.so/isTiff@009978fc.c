
/* cocos2d::Image::isTiff(unsigned char const*, long) */

bool __thiscall cocos2d::Image::isTiff(Image *this,uchar *param_1,long param_2)

{
  if (param_2 < 5) {
    return false;
  }
                    /* catch() { ... } // from try @ 00997730 with catch @ 00997918
                       catch() { ... } // from try @ 009977d0 with catch @ 00997918 */
  if (((*(short *)param_1 == 0x4949) && (param_1[2] == '*')) && (param_1[3] == '\0')) {
                    /* catch() { ... } // from try @ 009976f0 with catch @ 00997968 */
                    /* catch() { ... } // from try @ 009976e4 with catch @ 0099796c */
    return true;
  }
  if (*(short *)param_1 != 0x4d4d) {
    return false;
  }
  if (param_1[2] != '\0') {
    return false;
  }
  return param_1[3] == '*';
}

