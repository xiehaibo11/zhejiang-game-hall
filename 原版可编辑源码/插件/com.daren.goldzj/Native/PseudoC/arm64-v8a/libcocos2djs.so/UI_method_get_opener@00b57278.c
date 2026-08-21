
int UI_method_get_opener(UI *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (UI *)0x0) {
                    /* catch() { ... } // from try @ 00b56e4c with catch @ 00b5727c */
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
  }
  return iVar1;
}

