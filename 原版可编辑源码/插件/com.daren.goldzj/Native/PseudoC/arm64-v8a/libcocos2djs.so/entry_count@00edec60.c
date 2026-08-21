
/* v8::internal::CodeCommentsWriter::entry_count() const */

long __thiscall v8::internal::CodeCommentsWriter::entry_count(CodeCommentsWriter *this)

{
  return *(long *)(this + 0x10) - *(long *)(this + 8) >> 5;
}

