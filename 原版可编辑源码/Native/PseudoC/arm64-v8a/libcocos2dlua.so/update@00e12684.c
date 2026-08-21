
/* cocos2d::extension::ControlStepper::update(float) */

undefined8 cocos2d::extension::ControlStepper::update(float param_1)

{
  int iVar1;
  long lVar2;
  long *in_x0;
  undefined4 in_register_00005004;
  undefined8 uVar3;
  
  lVar2 = in_x0[0x71];
  iVar1 = (int)lVar2 + 1;
  *(int *)(in_x0 + 0x71) = iVar1;
                    /* try { // try from 00e12694 to 00f1269f has its CatchHandler @ 00e12934 */
                    /* try { // try from 00e126a0 to 00f126cb has its CatchHandler @ 00e1219c */
  if ((10 < (int)lVar2) || (iVar1 % 3 == 0)) {
    if (*(int *)((long)in_x0 + 900) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00e12704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*in_x0 + 0x6e8))
                        ((double)in_x0[0x6b] + (double)in_x0[0x6f],in_x0,(char)in_x0[0x6c]);
      return uVar3;
    }
    if (*(int *)((long)in_x0 + 900) == 0) {
                    /* try { // try from 00e126cc to 00f126d7 has its CatchHandler @ 00e12930 */
                    /* try { // try from 00e126d8 to 00f1271f has its CatchHandler @ 00e1219c */
                    /* WARNING: Could not recover jumptable at 0x00e126e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*in_x0 + 0x6e8))
                        ((double)in_x0[0x6b] - (double)in_x0[0x6f],in_x0,(char)in_x0[0x6c]);
      return uVar3;
    }
  }
  return CONCAT44(in_register_00005004,param_1);
}

