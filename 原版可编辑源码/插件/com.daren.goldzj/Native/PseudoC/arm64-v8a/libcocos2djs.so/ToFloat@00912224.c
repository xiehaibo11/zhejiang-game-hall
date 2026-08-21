
/* tinyxml2::XMLUtil::ToFloat(char const*, float*) */

bool tinyxml2::XMLUtil::ToFloat(char *param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = sscanf(param_1,"%f",param_2);
  return iVar1 == 1;
}

