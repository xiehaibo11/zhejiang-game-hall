
/* v8::internal::HandlerTable::EmitReturnTableStart(v8::internal::Assembler*) */

int v8::internal::HandlerTable::EmitReturnTableStart(Assembler *param_1)

{
  int iVar1;
  int iVar2;
  ulong local_50 [2];
  char *local_40;
  
  Assembler::DataAlign(param_1,4);
  if (FLAG_code_comments != '\0') {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x10);
    local_40 = operator_new(0x20);
    builtin_strncpy(local_40,";;; Exception handler table.",0x1d);
    local_50[1] = 0x1c;
    local_50[0] = 0x21;
    CodeCommentsWriter::Add((CodeCommentsWriter *)(param_1 + 0x28),iVar1 - iVar2,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  return *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10);
}

