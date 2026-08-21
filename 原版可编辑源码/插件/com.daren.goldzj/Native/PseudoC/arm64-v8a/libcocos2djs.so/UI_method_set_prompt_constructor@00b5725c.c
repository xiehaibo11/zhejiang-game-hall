
int UI_method_set_prompt_constructor(UI_METHOD *method,prompt_constructor *prompt_constructor)

{
                    /* catch() { ... } // from try @ 00b571d8 with catch @ 00b5725c
                       catch() { ... } // from try @ 00b57218 with catch @ 00b5725c */
  if (method != (UI_METHOD *)0x0) {
    *(prompt_constructor **)(method + 0x30) = prompt_constructor;
    return 0;
  }
  return -1;
}

