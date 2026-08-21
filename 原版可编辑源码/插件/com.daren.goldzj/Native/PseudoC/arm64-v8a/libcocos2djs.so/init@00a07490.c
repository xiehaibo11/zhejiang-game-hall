
/* universe::Downloader::init() */

void universe::Downloader::init(void)

{
  char *pcVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00a0738c with catch @ 00a07490 */
                    /* catch() { ... } // from try @ 00a0737c with catch @ 00a07494 */
                    /* catch() { ... } // from try @ 00a072c8 with catch @ 00a07498 */
  if ((DAT_01d38a80 & 1) == 0) {
    FUN_00a0eda4(3);
    pcVar1 = (char *)Translated::getInstance();
    uVar2 = FUN_00a0d28c();
    Translated::log(pcVar1,"curl version %s",uVar2);
    DAT_01d38a80 = 1;
  }
  return;
}

