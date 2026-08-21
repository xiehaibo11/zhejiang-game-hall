
/* cocos2d::MoveBy::initWithDuration(float, cocos2d::Vec2 const&) */

undefined8 __thiscall cocos2d::MoveBy::initWithDuration(MoveBy *this,float param_1,Vec2 *param_2)

{
  long lVar1;
  float fVar2;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
                    /* try { // try from 00edf794 to 00fdf7e7 has its CatchHandler @ 00edf71c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_48,*(float *)param_2,*(float *)(param_2 + 4),0.0);
                    /* catch() { ... } // from try @ 00edf784 with catch @ 00edf7cc */
  fVar2 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar2 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
                    /* try { // try from 00edf7e8 to 00fdf847 has its CatchHandler @ 00edf7e8
                       catch() { ... } // from try @ 00edf7e8 with catch @ 00edf7e8
                       catch() { ... } // from try @ 00edf998 with catch @ 00edf7e8 */
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar2;
  this[0x56] = (MoveBy)0x1;
  *(undefined4 *)(this + 0x60) = local_40;
  *(undefined8 *)(this + 0x58) = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

