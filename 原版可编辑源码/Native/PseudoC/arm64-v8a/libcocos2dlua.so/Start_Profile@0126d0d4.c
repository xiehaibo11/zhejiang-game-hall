
/* CProfileManager::Start_Profile(char const*) */

char * CProfileManager::Start_Profile(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  CProfileNode *this;
  timeval local_40;
  
  puVar2 = CurrentNode;
  this = (CProfileNode *)CurrentNode;
  if (*(char **)CurrentNode != param_1) {
    for (this = *(CProfileNode **)(CurrentNode + 0x28); this != (CProfileNode *)0x0;
        this = *(CProfileNode **)((long)this + 0x30)) {
      if (*(char **)this == param_1) goto LAB_0126d158;
    }
    this = operator_new(0x40);
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(char **)this = param_1;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined **)(this + 0x20) = puVar2;
    *(undefined8 *)(this + 0x28) = 0;
    param_1 = (char *)CProfileNode::Reset(this);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(puVar2 + 0x28);
    *(CProfileNode **)(puVar2 + 0x28) = this;
  }
LAB_0126d158:
  CurrentNode = this;
  puVar2 = CurrentNode;
  iVar1 = *(int *)(CurrentNode + 0x18);
  *(int *)(CurrentNode + 8) = *(int *)(CurrentNode + 8) + 1;
  *(int *)(puVar2 + 0x18) = iVar1 + 1;
  if (iVar1 == 0) {
    uVar3 = gettimeofday(&local_40,(__timezone_ptr_t)0x0);
    param_1 = (char *)(ulong)uVar3;
    *(__suseconds_t *)(puVar2 + 0x10) =
         (local_40.tv_usec - DAT_01795b80[1]) + (local_40.tv_sec - *DAT_01795b80) * 1000000;
  }
  return param_1;
}

