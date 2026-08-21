
bool FT_Outline_GetOutsideBorder(void)

{
  int iVar1;
  
  iVar1 = FT_Outline_Get_Orientation();
  return iVar1 != 0;
}

