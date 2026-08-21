
/* v8::internal::ObjectLiteral::InitFlagsForPendingNullPrototype(int) */

void __thiscall
v8::internal::ObjectLiteral::InitFlagsForPendingNullPrototype(ObjectLiteral *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 < *(int *)(this + 0x24)) {
    lVar1 = (long)param_1;
    do {
      lVar2 = *(long *)(*(long *)(this + 0x18) + lVar1 * 8);
      if ((*(char *)(lVar2 + 0x10) == '\x05') &&
         ((*(uint *)(*(long *)(lVar2 + 8) + 4) & 0x7bf) == 0x3a9)) {
        *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000;
        return;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x24));
  }
  return;
}

