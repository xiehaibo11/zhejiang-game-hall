
/* cocos2d::inRange(float const*, float const*, float, float) */

bool cocos2d::inRange(float *param_1,float *param_2,float param_3,float param_4)

{
  if ((*param_2 - *param_1) * (*param_2 - *param_1) +
      (param_2[2] - param_1[2]) * (param_2[2] - param_1[2]) < param_3 * param_3) {
    return ABS(param_2[1] - param_1[1]) < param_4;
  }
                    /* try { // try from 0101f080 to 0111f087 has its CatchHandler @ 0101f124 */
  return false;
}

