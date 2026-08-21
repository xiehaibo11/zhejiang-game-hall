
void FUN_00a2d9a0(undefined8 *param_1)

{
  if ((SSL_SESSION *)param_1[3] != (SSL_SESSION *)0x0) {
    SSL_SESSION_free((SSL_SESSION *)param_1[3]);
    param_1[3] = 0;
    param_1[5] = 0;
    (*(code *)PTR_free_01769a00)(param_1[10]);
    param_1[10] = 0;
    (*(code *)PTR_free_01769a00)(param_1[9]);
    param_1[9] = 0;
                    /* try { // try from 00a2d9f4 to 00b2d9f7 has its CatchHandler @ 00a2da54 */
    (*(code *)PTR_free_01769a00)(param_1[0xe]);
                    /* try { // try from 00a2d9f8 to 00b2da6f has its CatchHandler @ 00a2d99c */
    param_1[0xe] = 0;
    (*(code *)PTR_free_01769a00)(param_1[0xd]);
    param_1[0xd] = 0;
    (*(code *)PTR_free_01769a00)(param_1[0xc]);
    param_1[0xc] = 0;
    (*(code *)PTR_free_01769a00)(param_1[0xb]);
    param_1[0xb] = 0;
    (*(code *)PTR_free_01769a00)(*param_1);
    *param_1 = 0;
    (*(code *)PTR_free_01769a00)(param_1[1]);
    param_1[1] = 0;
  }
                    /* catch() { ... } // from try @ 00a2d9f4 with catch @ 00a2da54 */
  return;
}

