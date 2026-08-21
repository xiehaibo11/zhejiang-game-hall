
/* v8::internal::CodeCommentEntry::comment_length() const */

int __thiscall v8::internal::CodeCommentEntry::comment_length(CodeCommentEntry *this)

{
  if (((byte)this[8] & 1) == 0) {
    return ((byte)this[8] >> 1) + 1;
  }
  return (int)*(undefined8 *)(this + 0x10) + 1;
}

