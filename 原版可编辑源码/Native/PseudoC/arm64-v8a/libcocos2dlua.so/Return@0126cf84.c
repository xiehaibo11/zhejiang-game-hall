
/* CProfileNode::Return() */

bool __thiscall CProfileNode::Return(CProfileNode *this)

{
  int iVar1;
  timeval local_30;
  
  iVar1 = *(int *)(this + 0x18) + -1;
  *(int *)(this + 0x18) = iVar1;
  if ((iVar1 == 0) && (iVar1 = 0, *(int *)(this + 8) != 0)) {
    gettimeofday(&local_30,(__timezone_ptr_t)0x0);
    iVar1 = *(int *)(this + 0x18);
    *(float *)(this + 0xc) =
         *(float *)(this + 0xc) +
         (float)(ulong)(((local_30.tv_usec - DAT_01795b80[1]) +
                        (local_30.tv_sec - *DAT_01795b80) * 1000000) - *(long *)(this + 0x10)) /
         1000.0;
  }
  return iVar1 == 0;
}

