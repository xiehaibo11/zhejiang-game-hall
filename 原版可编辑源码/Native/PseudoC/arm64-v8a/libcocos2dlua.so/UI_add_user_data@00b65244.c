
void * UI_add_user_data(UI *ui,void *user_data)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(ui + 0x10);
  *(void **)(ui + 0x10) = user_data;
  return pvVar1;
}

