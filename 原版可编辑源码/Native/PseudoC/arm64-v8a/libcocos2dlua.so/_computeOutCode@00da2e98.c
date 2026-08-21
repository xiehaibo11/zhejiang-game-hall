
/* dragonBones::RectangleBoundingBoxData::_computeOutCode(float, float, float, float, float, float)
    */

uint dragonBones::RectangleBoundingBoxData::_computeOutCode
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  uint uVar1;
  
  if (param_3 <= param_1) {
                    /* try { // try from 00da2eb8 to 00ea2ebf has its CatchHandler @ 00da2f4c */
    if (param_1 <= param_5) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
                    /* try { // try from 00da2ec0 to 00ea2fbb has its CatchHandler @ 00da2b74 */
    }
  }
  else {
    uVar1 = 1;
  }
  if (param_4 <= param_2) {
    if (param_6 < param_2) {
      uVar1 = uVar1 | 8;
    }
    return uVar1;
  }
  return uVar1 | 4;
}

