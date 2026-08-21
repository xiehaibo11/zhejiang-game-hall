
void CTLOG_STORE_load_default_file(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = getenv("CTLOG_FILE");
  pcVar1 = 
  "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/install-android/arm64/ssl/ct_log_list.cnf"
  ;
  if (pcVar2 != (char *)0x0) {
    pcVar1 = pcVar2;
  }
                    /* try { // try from 00b02364 to 00c0236b has its CatchHandler @ 00b029e0 */
  CTLOG_STORE_load_file(param_1,pcVar1);
  return;
}

