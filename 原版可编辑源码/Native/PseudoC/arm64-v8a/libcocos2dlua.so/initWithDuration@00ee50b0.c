
/* cocos2d::ActionFloat::initWithDuration(float, float, float, std::__ndk1::function<void (float)>)
    */

undefined8 __thiscall
cocos2d::ActionFloat::initWithDuration
          (float param_1,undefined4 param_2,undefined4 param_3,ActionFloat *this,long *param_5)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar4 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar4 = param_1;
  }
  *(float *)(this + 0x4c) = fVar4;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(undefined4 *)(this + 0x58) = param_2;
  *(undefined4 *)(this + 0x5c) = param_3;
  plVar2 = (long *)param_5[4];
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else if (param_5 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
                    /* try { // try from 00ee5140 to 00fe519b has its CatchHandler @ 00ee5140
                       catch() { ... } // from try @ 00ee5140 with catch @ 00ee5140
                       catch() { ... } // from try @ 00ee5288 with catch @ 00ee5140 */
  FUN_00ee5dfc(alStack_60,this + 0x70);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00ee5178;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00ee5178:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ee519c to 00fe5287 has its CatchHandler @ 00ee52c4 */
  __stack_chk_fail();
}

