
/* tinyxml2::XMLUtil::ToStr(int, char*, int) */

int tinyxml2::XMLUtil::ToStr(int param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = snprintf(param_2,(long)param_3,"%d",(ulong)(uint)param_1);
  return iVar1;
}

