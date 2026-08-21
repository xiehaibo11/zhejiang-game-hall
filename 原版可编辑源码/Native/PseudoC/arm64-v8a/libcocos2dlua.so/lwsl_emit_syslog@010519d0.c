
void lwsl_emit_syslog(int param_1,undefined8 param_2)

{
  if (param_1 - 1U < 8) {
                    /* try { // try from 010519e0 to 01151a07 has its CatchHandler @ 01053914 */
    syslog(*(int *)(&DAT_0145bf30 + (long)(int)(param_1 - 1U) * 4),"%s",param_2);
    return;
  }
  syslog(7,"%s",param_2);
  return;
}

