
/* cocos2d::UniformValue::setFloatv(long, float const*) */

void __thiscall cocos2d::UniformValue::setFloatv(UniformValue *this,long param_1,float *param_2)

{
                    /* try { // try from 00fd6bb4 to 010d6bb7 has its CatchHandler @ 00fd6c48 */
                    /* try { // try from 00fd6bb8 to 010d6c73 has its CatchHandler @ 00fd6b60 */
  *(float **)(this + 0x18) = param_2;
  *(int *)(this + 0x20) = (int)param_1;
  *(undefined4 *)(this + 0x10) = 1;
  return;
}

