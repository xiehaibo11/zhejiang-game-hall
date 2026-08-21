
/* tinyxml2::XMLUtil::ToStr(float, char*, int) */

int tinyxml2::XMLUtil::ToStr(float param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = snprintf(param_2,(long)param_3,"%g",(double)param_1);
  return iVar1;
}

