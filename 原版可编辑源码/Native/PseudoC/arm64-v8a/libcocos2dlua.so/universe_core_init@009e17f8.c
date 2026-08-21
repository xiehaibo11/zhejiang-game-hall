
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* universe_core_init() */

void universe_core_init(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)universe::Translated::getInstance();
  universe::Translated::log(pcVar1,"universe version %s",&DAT_012f2697);
  universe::Translated::getInstance();
  universe::core::Service::getInstance();
  return;
}

