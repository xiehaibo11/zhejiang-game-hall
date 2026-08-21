
/* v8::internal::TranslationIterator::Next() */

uint __thiscall v8::internal::TranslationIterator::Next(TranslationIterator *this)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = 0;
  uVar2 = 0;
  lVar4 = (long)*(int *)(this + 8);
  do {
    *(int *)(this + 8) = (int)(lVar4 + 1);
    bVar1 = *(byte *)(*(long *)this + 7 + lVar4);
    uVar2 = (uint)(bVar1 >> 1) << (ulong)(uVar3 & 0x1f) | uVar2;
    uVar3 = uVar3 + 7;
    lVar4 = lVar4 + 1;
  } while ((bVar1 & 1) != 0);
  uVar3 = -(uVar2 >> 1);
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2 >> 1;
  }
  return uVar3;
}

