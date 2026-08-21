
void FUN_00a2da58(long *param_1,SSL_SESSION *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(ulong *)(*param_1 + 0x5b8);
  if (uVar1 != 0) {
                    /* try { // try from 00a2da70 to 00b2dabb has its CatchHandler @ 00a2da70
                       catch() { ... } // from try @ 00a2da70 with catch @ 00a2da70
                       catch() { ... } // from try @ 00a2dac0 with catch @ 00a2da70 */
    uVar2 = 0;
    puVar3 = (undefined8 *)(*(long *)(*param_1 + 0x8b30) + 0x70);
    do {
      if ((SSL_SESSION *)puVar3[-0xb] == param_2) {
        if (param_2 == (SSL_SESSION *)0x0) {
          return;
        }
        SSL_SESSION_free(param_2);
        puVar3[-0xb] = 0;
        puVar3[-9] = 0;
                    /* try { // try from 00a2dabc to 00b2dabf has its CatchHandler @ 00a2daf4 */
                    /* try { // try from 00a2dac0 to 00b2db07 has its CatchHandler @ 00a2da70 */
        (*(code *)PTR_free_01769a00)(puVar3[-4]);
        puVar3[-4] = 0;
        (*(code *)PTR_free_01769a00)(puVar3[-5]);
        puVar3[-5] = 0;
        (*(code *)PTR_free_01769a00)(*puVar3);
        *puVar3 = 0;
                    /* catch() { ... } // from try @ 00a2dabc with catch @ 00a2daf4 */
        (*(code *)PTR_free_01769a00)(puVar3[-1]);
        puVar3[-1] = 0;
        (*(code *)PTR_free_01769a00)(puVar3[-2]);
                    /* try { // try from 00a2db08 to 00b2dc07 has its CatchHandler @ 00a2db08
                       catch() { ... } // from try @ 00a2db08 with catch @ 00a2db08
                       catch() { ... } // from try @ 00a2dc88 with catch @ 00a2db08 */
        puVar3[-2] = 0;
        (*(code *)PTR_free_01769a00)(puVar3[-3]);
        puVar3[-3] = 0;
        (*(code *)PTR_free_01769a00)(puVar3[-0xe]);
        puVar3[-0xe] = 0;
        (*(code *)PTR_free_01769a00)(puVar3[-0xd]);
        puVar3[-0xd] = 0;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0xf;
    } while (uVar2 < uVar1);
  }
  return;
}

