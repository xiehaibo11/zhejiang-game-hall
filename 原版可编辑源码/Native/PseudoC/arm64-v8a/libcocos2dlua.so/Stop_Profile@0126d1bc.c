
/* CProfileManager::Stop_Profile() */

CProfileManager * __thiscall CProfileManager::Stop_Profile(CProfileManager *this)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  timeval local_30;
  
  puVar2 = CurrentNode;
  iVar1 = *(int *)(CurrentNode + 0x18);
  *(int *)(CurrentNode + 0x18) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    puVar4 = puVar2;
    if (*(int *)(puVar2 + 8) != 0) {
      uVar3 = gettimeofday(&local_30,(__timezone_ptr_t)0x0);
      this = (CProfileManager *)(ulong)uVar3;
      *(float *)(puVar2 + 0xc) =
           *(float *)(puVar2 + 0xc) +
           (float)(ulong)(((local_30.tv_usec - DAT_01795b80[1]) +
                          (local_30.tv_sec - *DAT_01795b80) * 1000000) - *(long *)(puVar2 + 0x10)) /
           1000.0;
      puVar4 = CurrentNode;
      if (*(int *)(puVar2 + 0x18) != 0) {
        return this;
      }
    }
    CurrentNode = *(undefined **)(puVar4 + 0x20);
  }
  return this;
}

