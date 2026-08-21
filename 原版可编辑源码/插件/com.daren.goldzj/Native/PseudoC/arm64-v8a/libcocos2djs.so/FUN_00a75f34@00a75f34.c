
void FUN_00a75f34(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[0xe];
                    /* try { // try from 00a75f4c to 00b75fb3 has its CatchHandler @ 00a76140 */
  *param_1 = &PTR_FUN_01c6efc0;
  if (param_1 + 10 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00a75f7c;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a75f7c:
  cocos2d::PcmData::~PcmData((PcmData *)(param_1 + 4));
  return;
}

