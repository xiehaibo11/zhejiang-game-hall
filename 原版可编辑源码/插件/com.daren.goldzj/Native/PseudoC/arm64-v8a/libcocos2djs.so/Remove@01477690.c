
/* v8::base::OS::Remove(char const*) */

bool v8::base::OS::Remove(char *param_1)

{
  int iVar1;
  
  iVar1 = ::remove(param_1);
  return iVar1 == 0;
}

