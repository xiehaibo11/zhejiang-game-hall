
/* CProfileNode::Call() */

CProfileNode * __thiscall CProfileNode::Call(CProfileNode *this)

{
  int iVar1;
  uint uVar2;
  timeval local_30;
  CProfileNode *pCVar3;
  
  iVar1 = *(int *)(this + 0x18);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  *(int *)(this + 0x18) = iVar1 + 1;
  pCVar3 = this;
  if (iVar1 == 0) {
    uVar2 = gettimeofday(&local_30,(__timezone_ptr_t)0x0);
    pCVar3 = (CProfileNode *)(ulong)uVar2;
    *(__suseconds_t *)(this + 0x10) =
         (local_30.tv_usec - DAT_01795b80[1]) + (local_30.tv_sec - *DAT_01795b80) * 1000000;
  }
  return pCVar3;
}

