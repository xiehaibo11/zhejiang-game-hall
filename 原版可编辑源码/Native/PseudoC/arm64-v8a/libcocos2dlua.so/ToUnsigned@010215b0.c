
/* tinyxml2::XMLUtil::ToUnsigned(char const*, unsigned int*) */

bool tinyxml2::XMLUtil::ToUnsigned(char *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = sscanf(param_1,"%u",param_2);
  return iVar1 == 1;
}

