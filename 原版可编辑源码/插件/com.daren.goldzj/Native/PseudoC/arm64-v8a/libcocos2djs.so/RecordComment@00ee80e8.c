
/* v8::internal::AssemblerBase::RecordComment(char const*) */

void __thiscall v8::internal::AssemblerBase::RecordComment(AssemblerBase *this,char *param_1)

{
  int iVar1;
  int iVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  if (FLAG_code_comments == '\0') {
    return;
  }
  iVar1 = *(int *)(this + 0x20);
  iVar2 = *(int *)(this + 0x10);
  local_50 = 0;
  local_48 = (void *)0x0;
  local_58 = 0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_58 | 1);
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00ee8194;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_58 = uVar3 | 1;
    local_50 = __n;
    local_48 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00ee8194:
  *(undefined1 *)((long)__dest + __n) = 0;
  CodeCommentsWriter::Add((CodeCommentsWriter *)(this + 0x28),iVar1 - iVar2,&local_58);
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}

