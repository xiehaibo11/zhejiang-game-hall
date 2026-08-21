
/* v8::internal::Assembler::WriteCodeComments() */

int __thiscall v8::internal::Assembler::WriteCodeComments(Assembler *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (FLAG_code_comments == '\0') {
    iVar2 = 0;
  }
  else {
    lVar3 = CodeCommentsWriter::entry_count((CodeCommentsWriter *)(this + 0x28));
    iVar2 = 0;
    if (lVar3 != 0) {
      iVar2 = *(int *)(this + 0x20);
      iVar1 = *(int *)(this + 0x10);
      CodeCommentsWriter::Emit((CodeCommentsWriter *)(this + 0x28),this);
      iVar2 = (*(int *)(this + 0x20) - *(int *)(this + 0x10)) + (iVar1 - iVar2);
    }
  }
  return iVar2;
}

