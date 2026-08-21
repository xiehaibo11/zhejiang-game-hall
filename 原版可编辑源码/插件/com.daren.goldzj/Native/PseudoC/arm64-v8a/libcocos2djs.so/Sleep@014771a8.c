
/* v8::base::OS::Sleep(v8::base::TimeDelta) */

int v8::base::OS::Sleep(undefined8 param_1)

{
  __useconds_t __useconds;
  int iVar1;
  undefined8 local_18;
  
  local_18 = param_1;
  __useconds = TimeDelta::InMicroseconds((TimeDelta *)&local_18);
  iVar1 = usleep(__useconds);
  return iVar1;
}

