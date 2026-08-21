
int FUN_00a35ac4(long *param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
                    /* try { // try from 00a35aec to 00b35aff has its CatchHandler @ 00a35bd8 */
  lVar2 = *(long *)(lVar1 + 0x218);
  FUN_00a38740(lVar1,"Curl_http_done: called premature == %d\n",param_3 & 1);
  FUN_00a4bad4(param_1);
  param_1[0x94] = *(long *)(lVar1 + 0x298);
                    /* try { // try from 00a35b14 to 00b35bbb has its CatchHandler @ 00a35be8 */
  param_1[0x95] = *(long *)(lVar1 + 0x328);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x80);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)PTR_free_01769a00)(*puVar3);
      (*(code *)PTR_free_01769a00)(puVar3);
      *(undefined8 *)(lVar2 + 0x80) = 0;
    }
    if (*(int *)(lVar1 + 0x430) == 4) {
                    /* catch() { ... } // from try @ 00a35a18 with catch @ 00a35bd0 */
                    /* catch() { ... } // from try @ 00a35a08 with catch @ 00a35bd4 */
                    /* catch() { ... } // from try @ 00a359a4 with catch @ 00a35bd8
                       catch() { ... } // from try @ 00a35a40 with catch @ 00a35bd8
                       catch() { ... } // from try @ 00a35aec with catch @ 00a35bd8 */
      *(long *)(lVar1 + 0x98) = *(long *)(lVar2 + 0x30) + *(long *)(lVar2 + 0x28);
    }
    else if (*(int *)(lVar1 + 0x430) == 3) {
      *(long *)(lVar1 + 0x98) = *(long *)(lVar2 + 0x30) + *(long *)(lVar2 + 0x28);
      FUN_00a62910(lVar2);
      if (*(FILE **)(lVar2 + 0x48) != (FILE *)0x0) {
        fclose(*(FILE **)(lVar2 + 0x48));
        *(undefined8 *)(lVar2 + 0x48) = 0;
      }
    }
    if (param_2 != 0) {
      return param_2;
    }
    if ((param_3 & 1) != 0) {
      return 0;
    }
    if ((((char)param_1[0x79] == '\0') && (*(char *)(lVar1 + 0x641) == '\0')) &&
       (*(long *)(lVar1 + 0xa8) + *(long *)(lVar2 + 0x28) <= *(long *)(lVar1 + 0xb0))) {
                    /* catch() { ... } // from try @ 00a35a5c with catch @ 00a35be8
                       catch() { ... } // from try @ 00a35b14 with catch @ 00a35be8 */
      FUN_00a38a08(lVar1,"Empty reply from server");
      return 0x34;
    }
  }
                    /* try { // try from 00a35bbc to 00b35c23 has its CatchHandler @ 00a3594c */
  return 0;
}

