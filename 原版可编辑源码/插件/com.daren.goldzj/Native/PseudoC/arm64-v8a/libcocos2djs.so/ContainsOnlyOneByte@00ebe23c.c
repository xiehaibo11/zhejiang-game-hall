
/* v8::String::ContainsOnlyOneByte() const */

byte __thiscall v8::String::ContainsOnlyOneByte(String *this)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ContainsOnlyOneByteHelper local_18 [8];
  
  uVar3 = *(ulong *)this;
  bVar1 = 1;
  if ((*(byte *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) >> 3 & 1) == 0) {
    local_18[0] = (ContainsOnlyOneByteHelper)0x1;
    iVar2 = internal::String::VisitFlat<v8::ContainsOnlyOneByteHelper>(local_18,uVar3,0);
    if (iVar2 == 0) {
      bVar1 = local_18[0] != (ContainsOnlyOneByteHelper)0x0;
    }
    else {
      bVar1 = ContainsOnlyOneByteHelper::CheckCons(local_18);
    }
  }
  return bVar1 & 1;
}

