
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* universe_core_init() */

void universe_core_init(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)universe::Translated::getInstance();
                    /* try { // try from 009fee4c to 00afee7f has its CatchHandler @ 009fee4c
                       catch() { ... } // from try @ 009fee4c with catch @ 009fee4c
                       catch() { ... } // from try @ 009fee84 with catch @ 009fee4c */
  universe::Translated::log(pcVar1,"universe version %s","1.0.2");
  universe::Translated::getInstance();
  universe::core::Service::getInstance();
  return;
}

