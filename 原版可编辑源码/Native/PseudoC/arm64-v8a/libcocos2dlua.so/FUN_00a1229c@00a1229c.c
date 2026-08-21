
undefined8 FUN_00a1229c(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
                    /* try { // try from 00a122a4 to 00b122fb has its CatchHandler @ 00a124c8 */
    *param_2 = (char)param_3;
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x58) {
    puVar3 = &DAT_012fe48c;
  }
  else {
    uVar2 = param_3 - 0x400;
    if (uVar2 < 0x98) {
      puVar3 = &DAT_012fe4e4;
    }
    else {
      uVar2 = param_3 - 0x2218;
      if (uVar2 < 0x50) {
        puVar3 = &DAT_012fe57c;
      }
      else {
                    /* try { // try from 00a122fc to 00b12307 has its CatchHandler @ 00a12498 */
        if (param_3 >> 3 == 0x464) {
                    /* try { // try from 00a12308 to 00b12317 has its CatchHandler @ 00a12488 */
                    /* try { // try from 00a1231c to 00b12337 has its CatchHandler @ 00a12468 */
          cVar1 = (&DAT_012fd134)[param_3 - 0x2320];
          goto joined_r0x00a12320;
        }
        uVar2 = param_3 - 0x2500;
        if (0xa7 < uVar2) {
          return 0xffffffff;
        }
                    /* try { // try from 00a12338 to 00b1259b has its CatchHandler @ 00a120d4 */
        puVar3 = &DAT_012fe5cc;
      }
    }
  }
  cVar1 = puVar3[uVar2];
joined_r0x00a12320:
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  *param_2 = cVar1;
  return 1;
}

