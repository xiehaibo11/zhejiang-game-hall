
/* cocos2d::FontFreeType::getFTLibrary() */

undefined8 cocos2d::FontFreeType::getFTLibrary(void)

{
  int iVar1;
  
                    /* try { // try from 00f050d0 to 010050db has its CatchHandler @ 00f05144 */
                    /* try { // try from 00f050dc to 010050f7 has its CatchHandler @ 00f05140 */
  if ((_FTInitialized == '\0') && (iVar1 = FT_Init_FreeType(&_FTlibrary), iVar1 == 0)) {
    _FTInitialized = '\x01';
  }
                    /* try { // try from 00f050f8 to 010051a3 has its CatchHandler @ 00f04f84 */
  return _FTlibrary;
}

