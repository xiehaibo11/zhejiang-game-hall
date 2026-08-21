
/* tinyxml2::XMLUtil::ToDouble(char const*, double*) */

bool tinyxml2::XMLUtil::ToDouble(char *param_1,double *param_2)

{
  int iVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010217d0 with catch @ 01021790
                        */
  iVar1 = sscanf(param_1,"%lf",param_2);
  return iVar1 == 1;
}

