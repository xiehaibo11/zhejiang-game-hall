
/* CProfileManager::Reset() */

int CProfileManager::Reset(void)

{
  bool bVar1;
  int iVar2;
  timeval local_40;
  
  gettimeofday(DAT_01795b80,(__timezone_ptr_t)0x0);
  CProfileNode::Reset((CProfileNode *)&Root);
  DAT_01795b90 = DAT_01795b90 + 1;
  iVar2 = DAT_01795ba0 + 1;
  bVar1 = DAT_01795ba0 == 0;
  DAT_01795ba0 = iVar2;
  if (bVar1) {
    gettimeofday(&local_40,(__timezone_ptr_t)0x0);
    DAT_01795b98 = (local_40.tv_usec - DAT_01795b80->tv_usec) +
                   (local_40.tv_sec - DAT_01795b80->tv_sec) * 1000000;
  }
  FrameCounter = 0;
  iVar2 = gettimeofday(&local_40,(__timezone_ptr_t)0x0);
  ResetTime = (local_40.tv_usec - DAT_01795b80->tv_usec) +
              (local_40.tv_sec - DAT_01795b80->tv_sec) * 1000000;
  return iVar2;
}

