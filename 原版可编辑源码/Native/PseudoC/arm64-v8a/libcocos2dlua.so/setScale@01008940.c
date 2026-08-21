
/* cocos2d::PhysicsShape::setScale(float, float) */

void __thiscall cocos2d::PhysicsShape::setScale(PhysicsShape *this,float param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  
                    /* try { // try from 01008954 to 0110895b has its CatchHandler @ 010089ec */
                    /* try { // try from 01008970 to 0110897f has its CatchHandler @ 010089f4 */
                    /* try { // try from 01008980 to 01108a17 has its CatchHandler @ 01008918 */
  if (((1.1920929e-07 < ABS(*(float *)(this + 0x5c) - param_1)) ||
      (1.1920929e-07 < ABS(*(float *)(this + 0x60) - param_2))) &&
     ((param_1 == param_2 || (*(int *)(this + 0x48) != 1)))) {
    *(float *)(this + 100) = param_1;
    *(float *)(this + 0x68) = param_2;
    (**(code **)(*(long *)this + 0x38))(this);
    fVar1 = (float)(**(code **)(*(long *)this + 0x28))(this);
    *(float *)(this + 0x4c) = fVar1;
    *(float *)(this + 0x50) = fVar1 * *(float *)(this + 0x6c);
    uVar2 = (**(code **)(*(long *)this + 0x10))(this);
    *(undefined4 *)(this + 0x54) = uVar2;
  }
  return;
}

