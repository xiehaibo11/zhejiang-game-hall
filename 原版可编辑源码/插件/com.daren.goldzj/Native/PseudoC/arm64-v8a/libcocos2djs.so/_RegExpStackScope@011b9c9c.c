
/* v8::internal::RegExpStackScope::~RegExpStackScope() */

void __thiscall v8::internal::RegExpStackScope::~RegExpStackScope(RegExpStackScope *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if ((*(char *)(lVar1 + 0x220) != '\0') && (*(void **)(lVar1 + 0x200) != (void *)0x0)) {
    operator_delete__(*(void **)(lVar1 + 0x200));
  }
  *(long *)(lVar1 + 0x200) = lVar1;
  *(long *)(lVar1 + 0x208) = lVar1 + 0x200;
  *(undefined8 *)(lVar1 + 0x210) = 0x200;
  *(long *)(lVar1 + 0x218) = lVar1 + 0x100;
  *(undefined1 *)(lVar1 + 0x220) = 0;
  return;
}

