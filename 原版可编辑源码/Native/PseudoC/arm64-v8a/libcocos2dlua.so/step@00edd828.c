
/* cocos2d::RepeatForever::step(float) */

void cocos2d::RepeatForever::step(float param_1)

{
  long in_x0;
  ulong uVar1;
  long *plVar2;
  float fVar3;
  undefined4 in_register_00005004;
  float __y;
  float __x;
  
  (**(code **)(**(long **)(in_x0 + 0x58) + 0x40))(CONCAT44(in_register_00005004,param_1));
  uVar1 = (**(code **)(**(long **)(in_x0 + 0x58) + 0x28))();
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(in_x0 + 0x58);
    __y = *(float *)((long)plVar2 + 0x4c);
    if (0.0 < __y) {
      __x = *(float *)(plVar2 + 10) - __y;
      fVar3 = fmodf(__x,__y);
      if (__x <= __y) {
        fVar3 = __x;
      }
      (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined8 *)(in_x0 + 0x38));
      (**(code **)(**(long **)(in_x0 + 0x58) + 0x40))(0);
                    /* WARNING: Could not recover jumptable at 0x00edd8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00edd8d0 to 00fdd8d3 has its CatchHandler @ 00edd988 */
      (**(code **)(**(long **)(in_x0 + 0x58) + 0x40))(fVar3);
      return;
    }
  }
                    /* try { // try from 00edd8d4 to 00fdd97b has its CatchHandler @ 00edd760 */
  return;
}

