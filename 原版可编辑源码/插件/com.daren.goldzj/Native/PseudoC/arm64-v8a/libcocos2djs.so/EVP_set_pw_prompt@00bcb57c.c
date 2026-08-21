
void EVP_set_pw_prompt(char *prompt)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_01d3b3bc;
  if (prompt != (char *)0x0) {
    strncpy(&DAT_01d3b3bc,prompt,0x4f);
    puVar1 = &DAT_01d3b40b;
  }
  *puVar1 = 0;
  return;
}

