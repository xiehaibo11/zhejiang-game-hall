
void ssl3_record_sequence_update(char *param_1)

{
  char cVar1;
  
  cVar1 = param_1[7];
  param_1[7] = cVar1 + '\x01';
                    /* try { // try from 00acaa34 to 00bcaa3b has its CatchHandler @ 00acaaa4 */
                    /* try { // try from 00acaa48 to 00bcaa4b has its CatchHandler @ 00acaa8c */
                    /* try { // try from 00acaa4c to 00bcab0f has its CatchHandler @ 00aca9d8 */
  if (((((char)(cVar1 + '\x01') == '\0') &&
       (cVar1 = param_1[6], param_1[6] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')) &&
      (cVar1 = param_1[5], param_1[5] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')) &&
     (((cVar1 = param_1[4], param_1[4] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0' &&
       (cVar1 = param_1[3], param_1[3] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')) &&
      ((cVar1 = param_1[2], param_1[2] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0' &&
       (cVar1 = param_1[1], param_1[1] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')))))) {
    *param_1 = *param_1 + '\x01';
  }
  return;
}

