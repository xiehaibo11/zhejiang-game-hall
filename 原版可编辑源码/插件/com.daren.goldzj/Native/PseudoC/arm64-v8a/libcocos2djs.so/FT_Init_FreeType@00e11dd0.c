
int FT_Init_FreeType(undefined8 *param_1)

{
  int iVar1;
  void *__ptr;
  
  __ptr = (void *)FUN_00e85180();
  if (__ptr == (void *)0x0) {
    iVar1 = 7;
  }
  else {
    iVar1 = FT_New_Library(__ptr,param_1);
    if (iVar1 == 0) {
      FT_Add_Default_Modules(*param_1);
    }
    else {
      free(__ptr);
    }
    FT_Set_Default_Properties(*param_1);
  }
  return iVar1;
}

