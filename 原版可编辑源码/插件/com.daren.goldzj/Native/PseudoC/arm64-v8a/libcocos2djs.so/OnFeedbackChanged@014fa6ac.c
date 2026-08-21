
/* v8::internal::IC::OnFeedbackChanged(char const*) */

void v8::internal::IC::OnFeedbackChanged(char *param_1)

{
  char *pcVar1;
  
  param_1[0x10] = '\x01';
  pcVar1 = param_1 + 0x58;
  if (*(char **)(param_1 + 0x50) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x50);
  }
  OnFeedbackChanged(*(undefined8 *)(param_1 + 8),*(undefined8 *)pcVar1);
  return;
}

