
/* cocos2d::MoveBy::update(float) */

void cocos2d::MoveBy::update(float param_1)

{
  long lVar1;
  long in_x0;
  float fVar2;
  float fVar3;
  float in_s1;
  float in_s2;
  float fVar4;
  undefined8 local_38;
  float local_30;
  long local_28;
  
                    /* try { // try from 00edf8fc to 00fdf903 has its CatchHandler @ 00edfa20 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long **)(in_x0 + 0x38) != (long *)0x0) {
                    /* try { // try from 00edf920 to 00fdf953 has its CatchHandler @ 00edfa30 */
    fVar2 = (float)(**(code **)(**(long **)(in_x0 + 0x38) + 0x100))();
    fVar2 = (fVar2 - (float)*(undefined8 *)(in_x0 + 0x70)) + (float)*(undefined8 *)(in_x0 + 100);
    fVar3 = (in_s1 - (float)((ulong)*(undefined8 *)(in_x0 + 0x70) >> 0x20)) +
            (float)((ulong)*(undefined8 *)(in_x0 + 100) >> 0x20);
    *(ulong *)(in_x0 + 100) = CONCAT44(fVar3,fVar2);
    fVar4 = (in_s2 - *(float *)(in_x0 + 0x78)) + *(float *)(in_x0 + 0x6c);
    local_30 = *(float *)(in_x0 + 0x60) * param_1 + fVar4;
    *(float *)(in_x0 + 0x6c) = fVar4;
    local_38 = CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x58) >> 0x20) * param_1 + fVar3,
                        (float)*(undefined8 *)(in_x0 + 0x58) * param_1 + fVar2);
                    /* try { // try from 00edf988 to 00fdf997 has its CatchHandler @ 00edfa20 */
    (**(code **)(**(long **)(in_x0 + 0x38) + 0xf8))(*(long **)(in_x0 + 0x38),&local_38);
                    /* try { // try from 00edf998 to 00fdfa8f has its CatchHandler @ 00edf7e8 */
    *(float *)(in_x0 + 0x78) = local_30;
    *(undefined8 *)(in_x0 + 0x70) = local_38;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

