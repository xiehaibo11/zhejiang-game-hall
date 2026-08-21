
void SSL_SESSION_get0_ticket(long param_1,undefined8 *param_2,undefined8 *param_3)

{
                    /* try { // try from 00add1d4 to 00bdd22b has its CatchHandler @ 00add114 */
  *param_3 = *(undefined8 *)(param_1 + 0x138);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x130);
  }
  return;
}

