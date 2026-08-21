
bool FT_Outline_GetInsideBorder(void)

{
  int iVar1;
  
                    /* try { // try from 01067848 to 0116784f has its CatchHandler @ 01067b50 */
  iVar1 = FT_Outline_Get_Orientation();
                    /* try { // try from 01067850 to 011678ab has its CatchHandler @ 010676a8 */
  return iVar1 == 0;
}

