
/* cocos2d::RapidXmlSaxHander::xmlSAX2EndElement(char const*, unsigned long) */

void cocos2d::RapidXmlSaxHander::xmlSAX2EndElement(char *param_1,ulong param_2)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00f8113c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 **)(param_1 + 0x30),param_2);
  return;
}

