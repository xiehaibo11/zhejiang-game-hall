
/* tinyxml2::XMLUtil::ToInt(char const*, int*) */

bool tinyxml2::XMLUtil::ToInt(char *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = sscanf(param_1,"%d",param_2);
  return iVar1 == 1;
}

