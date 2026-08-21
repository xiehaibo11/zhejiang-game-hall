
undefined8 FUN_00a512b4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *param_1;
  puVar6 = *(undefined8 **)(lVar5 + 0x218);
  if (*(char *)((long)param_1 + 0x3ce) != '\0') {
    FUN_00a22d58(lVar5,"Doing the SSL/TLS handshake on the data stream\n");
                    /* try { // try from 00a512e8 to 00b5133b has its CatchHandler @ 00a512e8
                       catch() { ... } // from try @ 00a512e8 with catch @ 00a512e8
                       catch() { ... } // from try @ 00a514a4 with catch @ 00a512e8 */
    uVar1 = FUN_00a17ba8(param_1,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(int *)((long)param_1 + 0x6cc) == 0x21) {
    *(undefined8 *)*puVar6 = 0;
    FUN_00a1b4f0(lVar5,*(undefined8 *)(lVar5 + 0x8cf8));
    uVar4 = *puVar6;
    uVar1 = 0xffffffff;
    lVar5 = -1;
    uVar3 = 1;
    uVar2 = 0;
  }
  else {
                    /* try { // try from 00a5133c to 00b51353 has its CatchHandler @ 00a51520 */
    lVar5 = param_1[0xda];
    uVar2 = *puVar6;
    uVar1 = 1;
    uVar3 = 0xffffffff;
    uVar4 = 0;
  }
  FUN_00a335d8(param_1,uVar1,lVar5,0,uVar2,uVar3,uVar4);
                    /* try { // try from 00a5135c to 00b51367 has its CatchHandler @ 00a5151c */
  *(undefined1 *)(param_1 + 199) = 1;
                    /* try { // try from 00a51368 to 00b51373 has its CatchHandler @ 00a51518 */
  *(undefined4 *)(param_1 + 0xd9) = 0;
                    /* try { // try from 00a51374 to 00b514a3 has its CatchHandler @ 00a51530 */
  return 0;
}

