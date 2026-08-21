
/* cocos2d::FontFreeType::shutdownFreeType() */

void cocos2d::FontFreeType::shutdownFreeType(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  
                    /* try { // try from 00f05010 to 0100501b has its CatchHandler @ 00f05188 */
  if (_FTInitialized != '\0') {
                    /* try { // try from 00f0501c to 01005037 has its CatchHandler @ 00f05158 */
    FT_Done_FreeType(_FTlibrary);
    lVar1 = DAT_0178f808;
    puVar2 = DAT_0178f810;
    if (DAT_0178f818 != 0) {
      while (DAT_0178f808 = lVar1, puVar2 != (void *)0x0) {
        pvVar4 = (void *)*puVar2;
                    /* try { // try from 00f0505c to 01005077 has its CatchHandler @ 00f05150 */
        Data::~Data((Data *)(puVar2 + 5));
        if ((*(byte *)(puVar2 + 2) & 1) != 0) {
          operator_delete((void *)puVar2[4]);
        }
        operator_delete(puVar2);
                    /* try { // try from 00f05050 to 0100505b has its CatchHandler @ 00f05154 */
        lVar1 = DAT_0178f808;
        puVar2 = pvVar4;
      }
                    /* try { // try from 00f05078 to 0100508f has its CatchHandler @ 00f04f84 */
      DAT_0178f810 = (undefined8 *)0x0;
      if (lVar1 != 0) {
        lVar3 = 0;
                    /* try { // try from 00f05090 to 0100509b has its CatchHandler @ 00f0514c */
        do {
          *(undefined8 *)(DAT_0178f800 + lVar3 * 8) = 0;
                    /* try { // try from 00f0509c to 010050b7 has its CatchHandler @ 00f05148 */
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
      DAT_0178f818 = 0;
    }
    _FTInitialized = '\0';
  }
                    /* try { // try from 00f050b8 to 010050cf has its CatchHandler @ 00f04f84 */
  return;
}

