
/* v8::internal::Map::InstancesNeedRewriting(v8::internal::Map) const */

uint v8::internal::Map::InstancesNeedRewriting
               (Map *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  undefined1 auStack_14 [4];
  
  iVar2 = 0;
  uVar3 = (ulong)(*(uint *)(param_2 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar3 != 0) {
    puVar4 = (uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x17)) + 0x13);
    do {
      uVar3 = uVar3 - 1;
      iVar2 = ((*puVar4 >> 2 ^ 0xffffffff) & 1) + iVar2;
      puVar4 = puVar4 + 3;
    } while (uVar3 != 0);
  }
  uVar1 = InstancesNeedRewriting
                    (param_1,param_2,iVar2,
                     (uint)*(byte *)(param_2 + 3) - (uint)*(byte *)(param_2 + 4),param_5,auStack_14)
  ;
  return uVar1 & 1;
}

