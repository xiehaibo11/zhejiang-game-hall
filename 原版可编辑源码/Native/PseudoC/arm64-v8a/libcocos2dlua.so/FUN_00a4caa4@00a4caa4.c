
undefined8 FUN_00a4caa4(long *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *(undefined4 *)((long)param_1 + 0xac) = 2;
  pcVar2 = strstr(*(char **)(lVar4 + 0x8cc0),";mode=");
  if ((pcVar2 != (char *)0x0) ||
     (pcVar2 = strstr((char *)param_1[0x16],";mode="), pcVar2 != (char *)0x0)) {
                    /* catch() { ... } // from try @ 00a4ca54 with catch @ 00a4caec */
                    /* catch() { ... } // from try @ 00a4ca6c with catch @ 00a4caf0 */
    *pcVar2 = '\0';
    cVar1 = FUN_00a4a0e0(pcVar2[6]);
    uVar3 = 1;
    if ((cVar1 != 'A') && (cVar1 != 'N')) {
      uVar3 = 0;
    }
    *(undefined1 *)(lVar4 + 0x613) = uVar3;
  }
                    /* catch() { ... } // from try @ 00a4ca20 with catch @ 00a4cb20 */
  return 0;
}

