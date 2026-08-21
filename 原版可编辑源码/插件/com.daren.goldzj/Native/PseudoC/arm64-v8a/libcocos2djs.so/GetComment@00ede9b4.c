
/* v8::internal::CodeCommentsIterator::GetComment() const */

char * __thiscall v8::internal::CodeCommentsIterator::GetComment(CodeCommentsIterator *this)

{
  char *__s;
  uint uVar1;
  size_t sVar2;
  
  uVar1 = *(uint *)(*(long *)(this + 0x10) + 4);
  __s = (char *)(*(long *)(this + 0x10) + 8);
  sVar2 = strlen(__s);
  if (sVar2 + 1 == (ulong)uVar1) {
    return __s;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","GetCommentSize() == strlen(comment_string) + 1");
}

