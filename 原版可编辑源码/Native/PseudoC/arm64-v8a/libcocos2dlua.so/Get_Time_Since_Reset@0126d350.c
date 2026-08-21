
/* CProfileManager::Get_Time_Since_Reset() */

int CProfileManager::Get_Time_Since_Reset(void)

{
  int iVar1;
  timeval local_20;
  
  iVar1 = gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  return iVar1;
}

