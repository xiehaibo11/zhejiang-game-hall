
/* tinyxml2::XMLUtil::ToStr(bool, char*, int) */

int tinyxml2::XMLUtil::ToStr(bool param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = snprintf(param_2,(long)param_3,"%d",(ulong)param_1);
  return iVar1;
}

