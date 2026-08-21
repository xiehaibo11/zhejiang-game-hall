
/* spine::Json::skip(char const*) */

void spine::Json::skip(char *param_1)

{
  byte *pbVar1;
  
  if (param_1 != (char *)0x0) {
    pbVar1 = (byte *)(param_1 + -1);
    do {
      pbVar1 = pbVar1 + 1;
    } while (*pbVar1 - 1 < 0x20);
  }
  return;
}

