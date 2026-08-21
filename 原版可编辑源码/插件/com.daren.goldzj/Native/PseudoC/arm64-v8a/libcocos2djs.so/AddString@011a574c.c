
/* v8::internal::OutputStreamWriter::AddString(char const*) */

void __thiscall v8::internal::OutputStreamWriter::AddString(OutputStreamWriter *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  
  sVar5 = strlen(param_1);
  if (0 < (int)sVar5) {
    iVar4 = *(int *)(this + 0x20);
    pcVar1 = param_1 + (sVar5 & 0xffffffff);
    do {
      iVar3 = (int)pcVar1 - (int)param_1;
      iVar2 = *(int *)(this + 8) - iVar4;
      if (iVar3 <= *(int *)(this + 8) - iVar4) {
        iVar2 = iVar3;
      }
      MemCopy((void *)(*(long *)(this + 0x10) + (long)iVar4),param_1,(long)iVar2);
      param_1 = param_1 + iVar2;
      iVar4 = iVar2 + *(int *)(this + 0x20);
      *(int *)(this + 0x20) = iVar4;
      if ((iVar4 == *(int *)(this + 8)) && (this[0x24] == (OutputStreamWriter)0x0)) {
        iVar4 = (**(code **)(**(long **)this + 0x20))(*(long **)this,*(undefined8 *)(this + 0x10));
        if (iVar4 == 1) {
          this[0x24] = (OutputStreamWriter)0x1;
        }
        iVar4 = 0;
        *(undefined4 *)(this + 0x20) = 0;
      }
    } while (param_1 < pcVar1);
  }
  return;
}

