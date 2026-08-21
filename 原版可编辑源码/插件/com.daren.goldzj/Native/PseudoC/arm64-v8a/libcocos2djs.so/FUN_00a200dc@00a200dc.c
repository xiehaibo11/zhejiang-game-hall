
int FUN_00a200dc(long *param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x218);
  FUN_00a22d58(lVar1,"Curl_http_done: called premature == %d\n",param_3 & 1);
  FUN_00a350ec(param_1);
  param_1[0x94] = *(long *)(lVar1 + 0x298);
  param_1[0x95] = *(long *)(lVar1 + 0x328);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x80);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)PTR_free_01d1b748)(*puVar3);
      (*(code *)PTR_free_01d1b748)(puVar3);
                    /* try { // try from 00a20160 to 00b2016f has its CatchHandler @ 00a2039c */
      *(undefined8 *)(lVar2 + 0x80) = 0;
    }
    if (*(int *)(lVar1 + 0x430) == 4) {
      *(long *)(lVar1 + 0x98) = *(long *)(lVar2 + 0x30) + *(long *)(lVar2 + 0x28);
    }
    else {
                    /* try { // try from 00a20170 to 00b203bf has its CatchHandler @ 00a200c4 */
      if (*(int *)(lVar1 + 0x430) == 3) {
        *(long *)(lVar1 + 0x98) = *(long *)(lVar2 + 0x30) + *(long *)(lVar2 + 0x28);
        FUN_00a4bf28(lVar2);
        if (*(FILE **)(lVar2 + 0x48) != (FILE *)0x0) {
          fclose(*(FILE **)(lVar2 + 0x48));
          *(undefined8 *)(lVar2 + 0x48) = 0;
        }
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
      FUN_00a23020(lVar1,"Empty reply from server");
      return 0x34;
    }
  }
  return 0;
}

