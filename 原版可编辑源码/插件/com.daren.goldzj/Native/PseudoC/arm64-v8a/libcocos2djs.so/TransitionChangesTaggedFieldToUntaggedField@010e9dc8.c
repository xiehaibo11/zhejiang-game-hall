
/* v8::internal::Map::TransitionChangesTaggedFieldToUntaggedField(v8::internal::Map) const */

undefined8 __thiscall
v8::internal::Map::TransitionChangesTaggedFieldToUntaggedField(Map *this,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)this;
  uVar3 = (ulong)(*(uint *)(uVar5 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    puVar4 = (uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x17)) + 0x13);
    do {
      uVar3 = uVar3 - 1;
      iVar1 = ((*puVar4 >> 2 ^ 0xffffffff) & 1) + iVar1;
      puVar4 = puVar4 + 3;
    } while (uVar3 != 0);
  }
  uVar3 = (ulong)(*(uint *)(param_2 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    puVar4 = (uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x17)) + 0x13);
    do {
      uVar3 = uVar3 - 1;
      iVar2 = ((*puVar4 >> 2 ^ 0xffffffff) & 1) + iVar2;
      puVar4 = puVar4 + 3;
    } while (uVar3 != 0);
  }
  if (iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

