
void SSL_SESSION_get0_ticket(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_3 = *(undefined8 *)(param_1 + 0x138);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x130);
  }
  return;
}

