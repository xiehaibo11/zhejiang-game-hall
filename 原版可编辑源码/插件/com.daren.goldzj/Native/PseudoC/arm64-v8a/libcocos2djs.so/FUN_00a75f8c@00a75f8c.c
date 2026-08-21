
void FUN_00a75f8c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[0xe];
  *param_1 = &PTR_FUN_01c6efc0;
  if (param_1 + 10 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
                    /* try { // try from 00a75fb8 to 00b75ffb has its CatchHandler @ 00a76110 */
    if (plVar1 == (long *)0x0) goto LAB_00a75fd4;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a75fd4:
  cocos2d::PcmData::~PcmData((PcmData *)(param_1 + 4));
  operator_delete(param_1);
  return;
}

