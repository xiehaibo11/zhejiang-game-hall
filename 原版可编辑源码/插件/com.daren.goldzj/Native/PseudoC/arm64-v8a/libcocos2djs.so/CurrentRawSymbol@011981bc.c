
/* v8::internal::Scanner::CurrentRawSymbol(v8::internal::AstValueFactory*) const */

void __thiscall v8::internal::Scanner::CurrentRawSymbol(Scanner *this,AstValueFactory *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (*(char *)(lVar1 + 0x34) != '\0') {
    AstValueFactory::GetOneByteStringInternal(param_1,*(undefined8 *)(lVar1 + 0x20));
    return;
  }
  AstValueFactory::GetTwoByteStringInternal
            (param_1,*(undefined8 *)(lVar1 + 0x20),((long)*(int *)(lVar1 + 0x30) << 0x20) >> 0x21);
  return;
}

