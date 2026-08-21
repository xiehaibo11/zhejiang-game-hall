
int FUN_00a29298(char *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
  undefined8 local_40;
  long local_38;
  
  puVar2 = &local_40;
  local_40 = 0;
  local_38 = 0;
  if (param_1 != (char *)0x0) {
    sVar4 = strlen(param_1);
    plVar1 = &local_38;
    if (param_2 == (long *)0x0) {
      plVar1 = (long *)0x0;
    }
                    /* try { // try from 00a292d4 to 00b293b7 has its CatchHandler @ 00a29174 */
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    iVar3 = FUN_00a2d60c(param_1,sVar4,plVar1,puVar2,0);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (param_2 == (long *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    if ((param_1 != (char *)0x0) && (local_38 == 0)) {
      if (*param_1 == ':') {
        local_38 = (*(code *)PTR_strdup_01d1b758)(&DAT_0189703a);
        iVar3 = 0x1b;
        if (local_38 != 0) {
          iVar3 = 0;
        }
      }
      else {
                    /* catch() { ... } // from try @ 00a291c8 with catch @ 00a29350 */
        iVar3 = 0;
      }
    }
                    /* catch() { ... } // from try @ 00a29200 with catch @ 00a29360 */
    (*(code *)PTR_free_01d1b748)(*param_2);
    *param_2 = local_38;
  }
                    /* catch() { ... } // from try @ 00a291f4 with catch @ 00a29348 */
  if (param_3 != (undefined8 *)0x0) {
    (*(code *)PTR_free_01d1b748)(*param_3);
    *param_3 = local_40;
  }
  return iVar3;
}

