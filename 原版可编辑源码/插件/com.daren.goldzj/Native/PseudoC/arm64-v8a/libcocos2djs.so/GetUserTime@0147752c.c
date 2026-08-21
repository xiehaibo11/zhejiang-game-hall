
/* v8::base::OS::GetUserTime(unsigned int*, unsigned int*) */

undefined8 v8::base::OS::GetUserTime(uint *param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  rusage local_b0;
  
  iVar1 = getrusage(RUSAGE_SELF,&local_b0);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_1 = (uint)local_b0.ru_utime.tv_sec;
    *param_2 = (uint)local_b0.ru_utime.tv_usec;
  }
  return uVar2;
}

