
/* cocos2d::Application::getCurrentLanguage() */

void __thiscall cocos2d::Application::getCurrentLanguage(Application *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(*(long *)this + 0x40))();
  utils::getLanguageTypeByISO2(pcVar1);
  return;
}

