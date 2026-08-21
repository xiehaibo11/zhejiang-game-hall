
/* v8::internal::Map::InstancesNeedRewriting(v8::internal::Map, int, int, int, int*) const */

bool __thiscall
v8::internal::Map::InstancesNeedRewriting
          (Map *this,ulong param_2,int param_3,int param_4,undefined8 param_5,int *param_6)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  
  uVar4 = *(ulong *)this;
  uVar2 = (ulong)(*(uint *)(uVar4 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    puVar3 = (uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0x17)) + 0x13);
    do {
      uVar2 = uVar2 - 1;
      iVar1 = ((*puVar3 >> 2 ^ 0xffffffff) & 1) + iVar1;
      puVar3 = puVar3 + 3;
    } while (uVar2 != 0);
  }
  *param_6 = iVar1;
  if (iVar1 == param_3) {
    uVar4 = *(ulong *)this;
    uVar2 = (ulong)(*(uint *)(uVar4 + 0xb) >> 10) & 0x3ff;
    if ((int)uVar2 != 0) {
      puVar3 = (uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0x17)) + 0x13);
      puVar5 = (uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x17)) + 0x13);
      do {
        if (((*puVar5 & 0x380) != 0x100) == ((*puVar3 & 0x380) == 0x100)) {
          return true;
        }
        puVar3 = puVar3 + 3;
        uVar2 = uVar2 - 1;
        puVar5 = puVar5 + 3;
      } while (uVar2 != 0);
    }
    return param_4 < param_3 && (uint)*(byte *)(uVar4 + 3) - (uint)*(byte *)(uVar4 + 4) != param_4;
  }
  return true;
}

