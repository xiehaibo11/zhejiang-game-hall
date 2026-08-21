
void EVP_set_pw_prompt(char *prompt)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_0178513c;
  if (prompt != (char *)0x0) {
    strncpy(&DAT_0178513c,prompt,0x4f);
    puVar1 = &DAT_0178518b;
  }
  *puVar1 = 0;
  return;
}

