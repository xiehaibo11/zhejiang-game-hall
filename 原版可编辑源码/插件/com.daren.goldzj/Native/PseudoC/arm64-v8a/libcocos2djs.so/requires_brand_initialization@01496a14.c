
/* v8::internal::FunctionLiteral::requires_brand_initialization() const */

bool __thiscall v8::internal::FunctionLiteral::requires_brand_initialization(FunctionLiteral *this)

{
  ulong uVar1;
  long lVar2;
  
  if (*(char *)(*(long *)(*(long *)(this + 0x28) + 8) + 0x80) == '\0') {
    lVar2 = Scope::AsClassScope();
    uVar1 = *(ulong *)(lVar2 + 0x88) & 0xfffffffffffffff8;
    if (uVar1 != 0) {
      return *(long *)(uVar1 + 0x28) != 0;
    }
  }
  return false;
}

