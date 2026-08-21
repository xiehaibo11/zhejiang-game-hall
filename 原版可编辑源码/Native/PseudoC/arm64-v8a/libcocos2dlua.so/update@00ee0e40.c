
/* cocos2d::JumpBy::update(float) */

void __thiscall cocos2d::JumpBy::update(JumpBy *this,float param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(this + 0x38);
  if (plVar3 != (long *)0x0) {
    fVar4 = fmodf((float)*(int *)(this + 0x6c) * param_1,1.0);
    fVar7 = *(float *)(this + 100);
    fVar5 = *(float *)(this + 0x68);
    fVar6 = *(float *)(this + 0x60);
    puVar2 = (undefined8 *)(**(code **)(*plVar3 + 0xb0))(plVar3);
    local_50 = ((float)*puVar2 - (float)*(undefined8 *)(this + 0x70)) +
               (float)*(undefined8 *)(this + 0x58);
    fStack_4c = ((float)((ulong)*puVar2 >> 0x20) -
                (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20)) +
                (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20);
    *(ulong *)(this + 0x58) = CONCAT44(fStack_4c,local_50);
    local_50 = fVar6 * param_1 + local_50;
    fStack_4c = fVar7 * param_1 + fVar5 * 4.0 * fVar4 * (1.0 - fVar4) + fStack_4c;
                    /* catch() { ... } // from try @ 00ee0e28 with catch @ 00ee0ef8 */
    (**(code **)(**(long **)(this + 0x38) + 0x98))(*(long **)(this + 0x38),&local_50);
    *(ulong *)(this + 0x70) = CONCAT44(fStack_4c,local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

