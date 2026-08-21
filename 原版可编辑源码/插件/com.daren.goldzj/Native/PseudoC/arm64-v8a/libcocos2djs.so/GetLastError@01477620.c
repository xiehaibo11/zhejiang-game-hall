
/* v8::base::OS::GetLastError() */

undefined4 v8::base::OS::GetLastError(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  return *puVar1;
}

