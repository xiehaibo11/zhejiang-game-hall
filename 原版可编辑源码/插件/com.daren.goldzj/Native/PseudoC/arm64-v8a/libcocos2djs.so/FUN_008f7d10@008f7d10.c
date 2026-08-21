
void FUN_008f7d10(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)cocos2d::FileUtils::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008f7d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf8))(plVar1,param_2);
  return;
}

