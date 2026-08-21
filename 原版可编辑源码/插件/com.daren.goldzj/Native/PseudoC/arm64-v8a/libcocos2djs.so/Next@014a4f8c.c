
/* v8::internal::PrivateNameScopeIterator::Next() */

void __thiscall v8::internal::PrivateNameScopeIterator::Next(PrivateNameScopeIterator *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x10);
  lVar2 = *(long *)(*(long *)(this + 0x10) + 8);
  do {
    if (lVar2 == 0) {
      *(undefined8 *)(this + 0x10) = 0;
      return;
    }
    if (*(char *)(lVar2 + 0x80) == '\0') {
      if ((*(byte *)(lVar1 + 0x82) >> 1 & 1) == 0) {
        *(long *)(this + 0x10) = lVar2;
        return;
      }
      *this = (PrivateNameScopeIterator)0x1;
    }
    lVar1 = lVar2;
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}

