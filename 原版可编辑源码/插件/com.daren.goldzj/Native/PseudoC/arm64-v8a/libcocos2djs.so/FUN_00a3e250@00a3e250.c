
int FUN_00a3e250(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  char *__s;
  size_t sVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
                    /* try { // try from 00a3e258 to 00b3e33b has its CatchHandler @ 00a3e0f8 */
  plVar4 = *(long **)(param_1 + 0x58);
  lVar2 = FUN_00a0e870("%s\r\n");
  if (lVar2 != 0) {
    uStack_58 = param_3[3];
    local_60 = param_3[2];
    uStack_68 = param_3[1];
    local_70 = *param_3;
    __s = (char *)FUN_00a0ea44(lVar2,&local_70);
    (*(code *)PTR_free_01d1b748)(lVar2);
    if (__s != (char *)0x0) {
      local_48 = 0;
      sVar3 = strlen(__s);
                    /* catch() { ... } // from try @ 00a3e178 with catch @ 00a3e2cc */
                    /* catch() { ... } // from try @ 00a3e16c with catch @ 00a3e2d0 */
      *(undefined8 *)(param_1 + 0x10) = 0;
                    /* catch() { ... } // from try @ 00a3e14c with catch @ 00a3e2d4 */
      lVar2 = **(long **)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x20) = 1;
                    /* catch() { ... } // from try @ 00a3e184 with catch @ 00a3e2e4 */
      *(long *)(param_1 + 0x18) = lVar2 + 0xb08;
      auVar5 = FUN_00a18e40();
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar5;
      iVar1 = FUN_00a232e8(plVar4,(int)plVar4[0x4c],__s,sVar3,&local_48);
      if (iVar1 != 0) {
        (*(code *)PTR_free_01d1b748)(__s);
        return iVar1;
      }
      if (*(char *)(*plVar4 + 0x628) != '\0') {
        FUN_00a22e78(*plVar4,2,__s,local_48,plVar4);
      }
      if (sVar3 - local_48 == 0) {
        (*(code *)PTR_free_01d1b748)(__s);
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        auVar5 = FUN_00a18e40();
        *(undefined1 (*) [16])(param_1 + 0x40) = auVar5;
        return 0;
                    /* try { // try from 00a3e390 to 00b3e3a7 has its CatchHandler @ 00a3e568 */
      }
      *(size_t *)(param_1 + 0x30) = sVar3 - local_48;
      *(size_t *)(param_1 + 0x38) = sVar3;
      *(char **)(param_1 + 0x28) = __s;
      return 0;
    }
  }
                    /* try { // try from 00a3e33c to 00b3e38f has its CatchHandler @ 00a3e33c
                       catch() { ... } // from try @ 00a3e33c with catch @ 00a3e33c
                       catch() { ... } // from try @ 00a3e490 with catch @ 00a3e33c */
  return 0x1b;
}

