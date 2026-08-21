
/* v8::internal::EmbeddedData::CreateEmbeddedBlobHash() const */

ulong __thiscall v8::internal::EmbeddedData::CreateEmbeddedBlobHash(EmbeddedData *this)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  
  if (*(uint *)(this + 8) == 8) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    lVar4 = (ulong)*(uint *)(this + 8) - 8;
    pbVar3 = (byte *)(*(long *)this + 8);
    do {
      uVar1 = base::hash_combine(0,(ulong)*pbVar3);
      uVar2 = base::hash_value(uVar2);
      uVar2 = base::hash_combine(uVar1,uVar2);
      lVar4 = lVar4 + -1;
      pbVar3 = pbVar3 + 1;
    } while (lVar4 != 0);
  }
  return uVar2;
}

