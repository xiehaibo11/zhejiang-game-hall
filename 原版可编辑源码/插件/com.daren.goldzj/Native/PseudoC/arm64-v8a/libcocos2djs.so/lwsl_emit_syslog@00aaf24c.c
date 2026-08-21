
void lwsl_emit_syslog(int param_1,undefined8 param_2)

{
  if (param_1 - 1U < 8) {
    syslog(*(int *)(&DAT_018a1270 + (long)(int)(param_1 - 1U) * 4),"%s",param_2);
    return;
  }
  syslog(7,"%s",param_2);
  return;
}

