
undefined8 FUN_01044e2c(long param_1,uint param_2)

{
  int iVar1;
  
                    /* try { // try from 01044e40 to 01144e4f has its CatchHandler @ 01045944 */
  iVar1 = FUN_010566c8(param_1,0x12,0,param_2);
  if (iVar1 < 0) {
                    /* try { // try from 01044ed0 to 01144edf has its CatchHandler @ 01045950 */
    return 0;
  }
                    /* try { // try from 01044e54 to 01144e73 has its CatchHandler @ 01045994 */
  if (*(char *)(param_1 + 0x303) != '\0') {
    if (*(long *)(param_1 + 0x218) < (long)(ulong)param_2) {
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
      if (*(char *)(param_1 + 0x2fe) == '\'') {
                    /* try { // try from 01044e88 to 01144e97 has its CatchHandler @ 01045934 */
                    /* try { // try from 01044e9c to 01144ebb has its CatchHandler @ 010459a0 */
        (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                  (param_1,1,*(undefined8 *)(param_1 + 0x270),"Timed out waiting SSL",0x15);
      }
      FUN_010417b8(param_1,0);
      return 1;
    }
                    /* try { // try from 01044ee4 to 01144f03 has its CatchHandler @ 010459ac */
    return 0;
  }
  return 0;
}

