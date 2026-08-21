
undefined8 FUN_00a360bc(long *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 uVar3;
  long lVar4;
  
                    /* try { // try from 00a360bc to 00b360c7 has its CatchHandler @ 00a36448 */
                    /* try { // try from 00a360c8 to 00b360d3 has its CatchHandler @ 00a36444 */
  lVar4 = *param_1;
                    /* try { // try from 00a360d4 to 00b360eb has its CatchHandler @ 00a3645c */
  *(undefined4 *)((long)param_1 + 0xac) = 2;
  pcVar2 = strstr(*(char **)(lVar4 + 0x8cc0),";mode=");
  if ((pcVar2 != (char *)0x0) ||
     (pcVar2 = strstr((char *)param_1[0x16],";mode="), pcVar2 != (char *)0x0)) {
    *pcVar2 = '\0';
    cVar1 = FUN_00a336f8(pcVar2[6]);
                    /* try { // try from 00a36118 to 00b3611f has its CatchHandler @ 00a3642c */
    uVar3 = 1;
                    /* try { // try from 00a36124 to 00b36197 has its CatchHandler @ 00a36424 */
    if ((cVar1 != 'A') && (cVar1 != 'N')) {
      uVar3 = 0;
    }
    *(undefined1 *)(lVar4 + 0x613) = uVar3;
  }
  return 0;
}

