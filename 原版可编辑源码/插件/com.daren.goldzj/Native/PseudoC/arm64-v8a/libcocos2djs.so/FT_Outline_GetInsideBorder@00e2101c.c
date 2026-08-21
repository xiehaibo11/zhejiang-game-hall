
bool FT_Outline_GetInsideBorder(void)

{
  int iVar1;
  
  iVar1 = FT_Outline_Get_Orientation();
  return iVar1 == 0;
}

