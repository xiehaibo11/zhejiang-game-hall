
/* cocos2d::Spawn::create(cocos2d::FiniteTimeAction*, ...) */

void cocos2d::Spawn::create(FiniteTimeAction *param_1,...)

{
  long lVar1;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = auStack_b0;
  uStack_58 = 0xffffff80ffffffc8;
  local_a8 = in_x1;
  uStack_a0 = in_x2;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
                    /* try { // try from 00edd97c to 00fdd987 has its CatchHandler @ 00edd988 */
  createWithVariableList(param_1,&local_70);
                    /* catch() { ... } // from try @ 00edd8d0 with catch @ 00edd988
                       catch() { ... } // from try @ 00edd97c with catch @ 00edd988
                       try { // try from 00edd988 to 00fdd99f has its CatchHandler @ 00edd760 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

