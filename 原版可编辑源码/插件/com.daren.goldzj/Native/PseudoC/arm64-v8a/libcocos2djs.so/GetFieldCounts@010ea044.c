
/* v8::internal::Map::GetFieldCounts() const */

undefined8 __thiscall v8::internal::Map::GetFieldCounts(Map *this)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)this;
  uVar5 = (ulong)(*(uint *)(uVar6 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar5 == 0) {
    iVar3 = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    puVar1 = (uint *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x17)) + 0x13);
    uVar2 = *puVar1;
    while( true ) {
      if ((uVar2 >> 2 & 1) == 0) {
        if ((uVar2 >> 3 & 1) == 0) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar3 = iVar3 + 1;
        }
      }
      uVar5 = uVar5 - 1;
      puVar1 = puVar1 + 3;
      if (uVar5 == 0) break;
      uVar2 = *puVar1;
    }
  }
  return CONCAT44(iVar3,iVar4);
}

