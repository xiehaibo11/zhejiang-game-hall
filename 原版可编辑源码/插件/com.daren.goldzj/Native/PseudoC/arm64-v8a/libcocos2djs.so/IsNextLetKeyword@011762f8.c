
/* v8::internal::ParserBase<v8::internal::PreParser>::IsNextLetKeyword() */

bool __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::IsNextLetKeyword
          (ParserBase<v8::internal::PreParser> *this)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = Scanner::PeekAhead(*(Scanner **)(this + 200));
  uVar2 = uVar2 & 0xff;
  bVar1 = true;
  if (((7 < uVar2 - 0x5c) && (uVar2 != 3)) && (uVar2 != 8)) {
    if (uVar2 == 100) {
      bVar1 = (*(byte *)(*(long *)this + 0x81) & 1) == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

