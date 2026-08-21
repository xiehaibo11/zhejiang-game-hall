
/* v8::internal::Scanner::CurrentSymbol(v8::internal::AstValueFactory*) const */

void __thiscall v8::internal::Scanner::CurrentSymbol(Scanner *this,AstValueFactory *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (*(char *)(lVar1 + 0x1c) != '\0') {
    AstValueFactory::GetOneByteStringInternal(param_1,*(undefined8 *)(lVar1 + 8));
    return;
  }
  AstValueFactory::GetTwoByteStringInternal
            (param_1,*(undefined8 *)(lVar1 + 8),((long)*(int *)(lVar1 + 0x18) << 0x20) >> 0x21);
  return;
}

