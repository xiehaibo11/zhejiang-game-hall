
/* universe::Downloader::init() */

void universe::Downloader::init(void)

{
  char *pcVar1;
  undefined8 uVar2;
  
                    /* try { // try from 009efbac to 00aefbbf has its CatchHandler @ 009efbc8 */
  if ((DAT_01782310 & 1) == 0) {
    FUN_00a2478c(3);
    pcVar1 = (char *)Translated::getInstance();
                    /* try { // try from 009efbc0 to 00aefbe3 has its CatchHandler @ 009efab8 */
    uVar2 = FUN_00a22c74();
                    /* catch() { ... } // from try @ 009efb08 with catch @ 009efbc8
                       catch() { ... } // from try @ 009efbac with catch @ 009efbc8 */
    Translated::log(pcVar1,"curl version %s",uVar2);
    DAT_01782310 = 1;
  }
                    /* try { // try from 009efbe4 to 00aefc2b has its CatchHandler @ 009efbe4
                       catch() { ... } // from try @ 009efbe4 with catch @ 009efbe4
                       catch() { ... } // from try @ 009efc34 with catch @ 009efbe4
                       catch() { ... } // from try @ 009efcbc with catch @ 009efbe4
                       catch() { ... } // from try @ 009efcf8 with catch @ 009efbe4
                       catch() { ... } // from try @ 009efd20 with catch @ 009efbe4 */
  return;
}

