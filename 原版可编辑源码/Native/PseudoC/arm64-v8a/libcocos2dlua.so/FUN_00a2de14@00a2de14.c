
void FUN_00a2de14(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  plVar1 = (long *)(param_1 + 0x8b30);
  lVar3 = *plVar1;
  if ((lVar3 != 0) &&
     ((*(byte **)(param_1 + 0x70) == (byte *)0x0 || ((**(byte **)(param_1 + 0x70) >> 4 & 1) == 0))))
  {
    uVar4 = *(ulong *)(param_1 + 0x5b8);
    if (uVar4 != 0) {
      uVar5 = 1;
                    /* try { // try from 00a2de60 to 00b2de63 has its CatchHandler @ 00a2dea4 */
      lVar6 = 0x48;
                    /* try { // try from 00a2de64 to 00b2debf has its CatchHandler @ 00a2de08 */
      while( true ) {
        puVar2 = (undefined8 *)(lVar3 + lVar6);
        if ((SSL_SESSION *)puVar2[-6] != (SSL_SESSION *)0x0) {
          SSL_SESSION_free((SSL_SESSION *)puVar2[-6]);
          puVar2[-6] = 0;
          puVar2[-4] = 0;
          (*(code *)PTR_free_01769a00)(puVar2[1]);
          puVar2[1] = 0;
                    /* catch() { ... } // from try @ 00a2de60 with catch @ 00a2dea4 */
          (*(code *)PTR_free_01769a00)(*puVar2);
          *puVar2 = 0;
          (*(code *)PTR_free_01769a00)(puVar2[5]);
          puVar2[5] = 0;
                    /* try { // try from 00a2dec0 to 00b2df0b has its CatchHandler @ 00a2dec0
                       catch() { ... } // from try @ 00a2dec0 with catch @ 00a2dec0
                       catch() { ... } // from try @ 00a2df10 with catch @ 00a2dec0 */
          (*(code *)PTR_free_01769a00)(puVar2[4]);
          puVar2[4] = 0;
          (*(code *)PTR_free_01769a00)(puVar2[3]);
          puVar2[3] = 0;
          (*(code *)PTR_free_01769a00)(puVar2[2]);
          puVar2[2] = 0;
          (*(code *)PTR_free_01769a00)(puVar2[-9]);
          puVar2[-9] = 0;
          (*(code *)PTR_free_01769a00)(puVar2[-8]);
          puVar2[-8] = 0;
                    /* try { // try from 00a2df0c to 00b2df0f has its CatchHandler @ 00a2df44 */
          uVar4 = *(ulong *)(param_1 + 0x5b8);
        }
                    /* try { // try from 00a2df10 to 00b2df57 has its CatchHandler @ 00a2dec0 */
        if (uVar4 <= uVar5) break;
        lVar3 = *plVar1;
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x78;
      }
      lVar3 = *plVar1;
    }
    (*(code *)PTR_free_01769a00)(lVar3);
    *plVar1 = 0;
  }
                    /* catch() { ... } // from try @ 00a2df0c with catch @ 00a2df44 */
  FUN_00a5d0fc(param_1);
  return;
}

