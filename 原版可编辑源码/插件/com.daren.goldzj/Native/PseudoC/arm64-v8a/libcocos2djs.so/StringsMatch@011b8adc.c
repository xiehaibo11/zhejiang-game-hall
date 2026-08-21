
/* v8::internal::StringsStorage::StringsMatch(void*, void*) */

bool v8::internal::StringsStorage::StringsMatch(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,param_2);
  return iVar1 == 0;
}

