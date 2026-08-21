
undefined8 TIFFPredictorCleanup(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x350);
                    /* try { // try from 0113cddc to 0123cde3 has its CatchHandler @ 0113cef4 */
  *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(lVar1 + 0x58);
                    /* try { // try from 0113cde4 to 0123cdf3 has its CatchHandler @ 0113cee4 */
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(lVar1 + 0x60);
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(lVar1 + 0x68);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(lVar1 + 0x78);
  return 1;
}

