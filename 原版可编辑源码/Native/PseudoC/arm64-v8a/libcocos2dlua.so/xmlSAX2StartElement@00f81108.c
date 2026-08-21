
/* cocos2d::RapidXmlSaxHander::xmlSAX2StartElement(char const*, unsigned long, char const**,
   unsigned long) */

void cocos2d::RapidXmlSaxHander::xmlSAX2StartElement
               (char *param_1,ulong param_2,char **param_3,ulong param_4)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00f81120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x30),param_2);
  return;
}

