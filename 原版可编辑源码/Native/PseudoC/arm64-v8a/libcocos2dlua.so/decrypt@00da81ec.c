
/* hdq::decrypt(char*, unsigned long, unsigned long*) */

char * hdq::decrypt(char *param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ResKey *this;
  undefined8 uVar4;
  char *__dest;
  ulong __size;
  ulong uVar5;
  
                    /* try { // try from 00da81f0 to 00ea81f3 has its CatchHandler @ 00da8244 */
                    /* try { // try from 00da81f4 to 00ea825f has its CatchHandler @ 00da818c */
  plVar3 = (long *)ResKey::getInstance();
  if (((10 < param_2) && (*plVar3 != 0)) && (iVar2 = memcmp(param_1,&DAT_017774c0,5), iVar2 == 0)) {
    bVar1 = param_1[5];
    if ((int)(uint)bVar1 < (int)plVar3[1]) {
      __size = (ulong)*(uint *)(param_1 + 6);
      this = (ResKey *)ResKey::getInstance();
      uVar4 = ResKey::getKey(this,(uint)bVar1);
                    /* try { // try from 00da8284 to 00ea828b has its CatchHandler @ 00da82d4 */
      uVar5 = 0;
                    /* try { // try from 00da828c to 00ea82ef has its CatchHandler @ 00da8260 */
      do {
        blowfish_decrypt(param_1 + uVar5 + 10,param_1 + uVar5 + 10,uVar4);
        uVar5 = uVar5 + 8;
      } while (uVar5 < param_2 - 10);
      __dest = malloc(__size);
      memcpy(__dest,param_1 + 10,__size);
      free(param_1);
      param_1 = __dest;
      param_2 = __size;
                    /* catch() { ... } // from try @ 00da8284 with catch @ 00da82d4 */
    }
    else {
      param_2 = 0;
      param_1 = (char *)0x0;
    }
  }
                    /* catch() { ... } // from try @ 00da81f0 with catch @ 00da8244 */
  *param_3 = param_2;
                    /* catch() { ... } // from try @ 00da828c with catch @ 00da8260 */
  return param_1;
}

