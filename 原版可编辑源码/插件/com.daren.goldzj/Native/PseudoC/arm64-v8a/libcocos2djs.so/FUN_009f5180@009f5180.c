
void FUN_009f5180(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  pcVar1 = (char *)__emutls_get_address(&DAT_01d1b630);
  if (*pcVar1 != '\0') {
    return;
  }
                    /* try { // try from 009f51b4 to 00af51bb has its CatchHandler @ 009f5958 */
  puVar2 = (undefined1 *)__emutls_get_address(&DAT_01d1b630);
                    /* try { // try from 009f51bc to 00af523f has its CatchHandler @ 009f4e58 */
  *puVar2 = 1;
  puVar3 = (undefined8 *)__emutls_get_address(&DAT_01d1b550);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __cxa_thread_atexit(FUN_009f39b4,puVar3,&PTR_LOOP_01d1b000);
  puVar3 = (undefined8 *)__emutls_get_address(&DAT_01d1b570);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __cxa_thread_atexit(FUN_009f39b4,puVar3,&PTR_LOOP_01d1b000);
  puVar3 = (undefined8 *)__emutls_get_address(&DAT_01d1b590);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 009f5240 to 00af5247 has its CatchHandler @ 009f5948 */
  __cxa_thread_atexit(FUN_009f39cc,puVar3,&PTR_LOOP_01d1b000);
                    /* try { // try from 009f5248 to 00af5297 has its CatchHandler @ 009f4e58 */
  puVar3 = (undefined8 *)__emutls_get_address(&DAT_01d1b5b0);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __cxa_thread_atexit(FUN_009f39cc,puVar3,&PTR_LOOP_01d1b000);
  puVar3 = (undefined8 *)__emutls_get_address(&DAT_01d1b5d0);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __cxa_thread_atexit(FUN_009f39cc,puVar3,&PTR_LOOP_01d1b000);
  puVar3 = (undefined8 *)__emutls_get_address(&DAT_01d1b5f0);
                    /* try { // try from 009f5298 to 00af529f has its CatchHandler @ 009f59ac */
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __cxa_thread_atexit(FUN_009f39cc,puVar3,&PTR_LOOP_01d1b000);
  puVar3 = (undefined8 *)__emutls_get_address(&DAT_01d1b610);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __cxa_thread_atexit(FUN_009f39cc,puVar3,&PTR_LOOP_01d1b000);
  return;
}

