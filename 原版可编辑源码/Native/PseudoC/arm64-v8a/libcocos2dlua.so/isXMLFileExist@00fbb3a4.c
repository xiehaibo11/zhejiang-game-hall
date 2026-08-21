
/* cocos2d::UserDefault::isXMLFileExist() */

void cocos2d::UserDefault::isXMLFileExist(void)

{
  long *plVar1;
  
  plVar1 = (long *)FileUtils::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00fbb3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x128))(plVar1,&_filePath);
  return;
}

