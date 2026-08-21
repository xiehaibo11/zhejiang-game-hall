
/* cocos2d::MoveTo::initWithDuration(float, cocos2d::Vec2 const&) */

undefined8 __thiscall cocos2d::MoveTo::initWithDuration(MoveTo *this,float param_1,Vec2 *param_2)

{
  long lVar1;
  float fVar2;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00edfbc0 to 00fdfbd7 has its CatchHandler @ 00edfd80 */
  Vec3::Vec3((Vec3 *)&local_48,*(float *)param_2,*(float *)(param_2 + 4),0.0);
  fVar2 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar2 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
                    /* try { // try from 00edfbf0 to 00fdfc03 has its CatchHandler @ 00edfd60 */
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar2;
  *(undefined4 *)(this + 0x84) = local_40;
  *(undefined8 *)(this + 0x7c) = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

