
/* cocos2d::ActionInterval::step(float) */

void __thiscall cocos2d::ActionInterval::step(ActionInterval *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float local_3c;
  long local_38;
  
                    /* try { // try from 00edc178 to 00fdc19f has its CatchHandler @ 00edc3f0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x54] == (ActionInterval)0x0) {
    fVar3 = *(float *)(this + 0x50) + param_1;
    *(float *)(this + 0x50) = fVar3;
  }
  else {
                    /* try { // try from 00edc1a0 to 00fdc1af has its CatchHandler @ 00edc3ac */
    fVar3 = 1e-06;
    this[0x54] = (ActionInterval)0x0;
    *(undefined4 *)(this + 0x50) = 0x358637bd;
                    /* try { // try from 00edc1b0 to 00fdc1bb has its CatchHandler @ 00edc398 */
  }
  fVar3 = (float)NEON_fminnm(fVar3 / *(float *)(this + 0x4c),0x3f800000);
                    /* try { // try from 00edc1d4 to 00fdc1e3 has its CatchHandler @ 00edc390 */
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  local_3c = fVar3;
                    /* try { // try from 00edc1e4 to 00fdc1ff has its CatchHandler @ 00edc3d0 */
  if ((*(int *)(this + 0x48) != 2) ||
     (uVar2 = ScriptEngineManager::sendActionEventToJS((Action *)this,0,&local_3c), (uVar2 & 1) == 0
     )) {
                    /* try { // try from 00edc20c to 00fdc22f has its CatchHandler @ 00edc3b0 */
    (**(code **)(*(long *)this + 0x48))(fVar3,this);
    this[0x55] = (ActionInterval)(*(float *)(this + 0x4c) <= *(float *)(this + 0x50));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

