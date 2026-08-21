
/* v8::internal::Map::TransitionRemovesTaggedField(v8::internal::Map) const */

undefined8 __thiscall v8::internal::Map::TransitionRemovesTaggedField(Map *this,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  
  uVar1 = *(ulong *)this;
  uVar4 = (ulong)(*(uint *)(uVar1 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    puVar5 = (uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0x17)) + 0x13);
    do {
      uVar4 = uVar4 - 1;
      iVar2 = ((*puVar5 >> 2 ^ 0xffffffff) & 1) + iVar2;
      puVar5 = puVar5 + 3;
    } while (uVar4 != 0);
  }
  uVar4 = (ulong)(*(uint *)(param_2 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar4 == 0) {
    if (iVar2 < 1) {
      return 0;
    }
  }
  else {
    iVar3 = 0;
    puVar5 = (uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x17)) + 0x13);
    do {
      uVar4 = uVar4 - 1;
      iVar3 = ((*puVar5 >> 2 ^ 0xffffffff) & 1) + iVar3;
      puVar5 = puVar5 + 3;
    } while (uVar4 != 0);
    if (iVar2 <= iVar3) {
      return 0;
    }
  }
  return 1;
}

