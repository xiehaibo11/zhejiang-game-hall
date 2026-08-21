
/* v8::internal::Scanner::BookmarkScope::Apply() */

void __thiscall v8::internal::Scanner::BookmarkScope::Apply(BookmarkScope *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)(lVar1 + 0x18);
  if (this[0x10] == (BookmarkScope)0x0) {
    *(undefined1 *)(lVar2 + 0x30) = 0;
    SeekNext(*(Scanner **)this,*(ulong *)(this + 8));
  }
  else if (*(char *)(lVar2 + 0x30) == '\0') {
    *(undefined4 *)(lVar1 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar2 + 0x30) = 1;
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined1 *)(lVar1 + 0x60) = 0x6d;
    *(undefined1 *)(lVar1 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar1 + 0x100) = 0x6d;
  }
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  return;
}

