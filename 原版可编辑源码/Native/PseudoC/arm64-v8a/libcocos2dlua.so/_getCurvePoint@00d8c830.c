
/* dragonBones::JSONDataParser::_getCurvePoint(float, float, float, float, float, float, float,
   float, float, dragonBones::Point&) */

void dragonBones::JSONDataParser::_getCurvePoint
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,Point *param_10)

{
  float *in_x1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = 1.0 - param_9;
                    /* try { // try from 00d8c850 to 00e8c86b has its CatchHandler @ 00d8cc70 */
  fVar2 = fVar1 * fVar1 * fVar1;
  fVar4 = param_9 * 3.0 * fVar1 * fVar1;
  fVar3 = param_9 * param_9 * fVar1 * 3.0;
  fVar1 = param_9 * param_9 * param_9;
                    /* try { // try from 00d8c870 to 00e8c87f has its CatchHandler @ 00d8cc80 */
  *in_x1 = fVar1 * param_7 + fVar3 * param_5 + fVar2 * param_1 + fVar4 * param_3;
  in_x1[1] = fVar1 * param_8 + fVar3 * param_6 + fVar2 * param_2 + fVar4 * param_4;
  return;
}

