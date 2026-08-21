
/* v8::internal::CodeEntry::GetHash() const */

uint __thiscall v8::internal::CodeEntry::GetHash(CodeEntry *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + 0x20);
  uVar4 = ~(uint)(byte)*this + (uint)(byte)*this * 0x8000;
  uVar4 = (uVar4 ^ uVar4 >> 0xc) * 5;
  uVar4 = (uVar4 ^ uVar4 >> 4) * 0x809;
  uVar4 = uVar4 & 0x3fffffff ^ uVar4 >> 0x10;
  if (uVar5 == 0) {
    uVar5 = ~*(uint *)(this + 8) + *(uint *)(this + 8) * 0x8000;
    uVar1 = ~*(uint *)(this + 0x10) + *(uint *)(this + 0x10) * 0x8000;
    uVar2 = ~*(uint *)(this + 0x18) + *(uint *)(this + 0x18) * 0x8000;
    uVar5 = (uVar5 ^ uVar5 >> 0xc) * 5;
    uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
    uVar3 = (uVar2 ^ uVar2 >> 0xc) * 5;
    uVar1 = uVar1 ^ uVar1 >> 4;
    uVar2 = (uVar5 ^ uVar5 >> 4) * 0x809;
    uVar3 = (uVar3 ^ uVar3 >> 4) * 0x809;
    uVar5 = uVar4 ^ uVar2 >> 0x10;
    uVar4 = uVar3 & 0x3fffffff;
    uVar5 = uVar5 ^ uVar2 & 0x3fffffff ^ uVar3 >> 0x10;
  }
  else {
    uVar5 = ~uVar5 + uVar5 * 0x8000;
    uVar5 = (uVar5 ^ uVar5 >> 0xc) * 5;
    uVar2 = (uVar5 ^ uVar5 >> 4) * 0x809;
    uVar5 = ~*(uint *)(this + 0x24) + *(uint *)(this + 0x24) * 0x8000;
    uVar1 = (uVar5 ^ uVar5 >> 0xc) * 5;
    uVar1 = uVar1 ^ uVar1 >> 4;
    uVar5 = uVar2 & 0x3fffffff ^ uVar2 >> 0x10;
  }
  return uVar5 ^ uVar4 ^ uVar1 * 0x809 >> 0x10 ^ uVar1 * 0x809 & 0x3fffffff;
}

