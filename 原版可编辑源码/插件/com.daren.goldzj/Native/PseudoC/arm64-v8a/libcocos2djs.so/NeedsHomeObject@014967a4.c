
/* v8::internal::FunctionLiteral::NeedsHomeObject(v8::internal::Expression*) */

bool v8::internal::FunctionLiteral::NeedsHomeObject(Expression *param_1)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  bVar3 = false;
  if (param_1 != (Expression *)0x0) {
    if ((*(uint *)(param_1 + 4) & 0x3f) != 0x26) {
      return false;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if ((*(byte *)(lVar4 + 0x83) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar4 + 0x81) >> 6 & 1) == 0) {
        return false;
      }
      bVar1 = *(byte *)(lVar4 + 0x85);
      uVar2 = bVar1 - 0xc;
      if (((6 < uVar2) || ((0x73U >> (ulong)(uVar2 & 0x1f) & 1) == 0)) && (1 < bVar1 - 7)) {
        return bVar1 - 3 < 4;
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

