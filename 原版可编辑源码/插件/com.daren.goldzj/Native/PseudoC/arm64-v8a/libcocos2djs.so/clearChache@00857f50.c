
/* FileImplement::clearChache() */

void FileImplement::clearChache(void)

{
  long *plVar1;
  
  plVar1 = (long *)cocos2d::FileUtils::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00857f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}

