
/* v8::internal::CodeCommentEntry::size() const */

int __thiscall v8::internal::CodeCommentEntry::size(CodeCommentEntry *this)

{
  if (((byte)this[8] & 1) == 0) {
    return ((byte)this[8] >> 1) + 9;
  }
  return (int)*(undefined8 *)(this + 0x10) + 9;
}

