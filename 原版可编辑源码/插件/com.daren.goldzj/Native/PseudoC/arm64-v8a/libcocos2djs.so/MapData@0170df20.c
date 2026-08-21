
/* v8::internal::compiler::MapData::MapData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::Map>) */

void __thiscall
v8::internal::compiler::MapData::MapData
          (MapData *this,undefined8 *param_1,undefined8 param_3,ulong *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  MapData MVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_18;
  
  HeapObjectData::HeapObjectData();
  *(undefined2 *)(this + 0x18) = *(undefined2 *)(*param_4 + 7);
  *(uint *)(this + 0x1c) = (uint)*(byte *)(*param_4 + 3) << 2;
  this[0x20] = *(MapData *)(*param_4 + 9);
  this[0x21] = *(MapData *)(*param_4 + 10);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(*param_4 + 0xb);
  uVar8 = *param_4;
  if ((*(uint *)(uVar8 + 0xb) & 0xffc00) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulong)(*(uint *)(uVar8 + 0xb) >> 10) & 0x3ff;
    if ((int)uVar6 != 0) {
      uVar9 = 0x1000000000;
      do {
        uVar4 = *(uint *)((uVar9 >> 0x20 | 3) +
                         (uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0x17)));
        if ((((uVar4 >> 9 & 1) == 0) && ((uVar4 >> 7 & 7) != 2)) || ((uVar4 & 6) == 4)) {
          uVar6 = 1;
          goto LAB_0170dff8;
        }
        uVar6 = uVar6 - 1;
        uVar9 = uVar9 + 0xc00000000;
      } while (uVar6 != 0);
      uVar6 = 0;
    }
  }
LAB_0170dff8:
  this[0x28] = SUB81(uVar6,0);
  this[0x29] = (MapData)(0xa9 < *(ushort *)(*param_4 + 7));
  if (*(ushort *)(*param_4 + 7) < 0xaa) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(byte *)(*param_4 + 4);
  }
  *(uint *)(this + 0x2c) = uVar4;
  uVar8 = *param_4;
  if (*(ushort *)(uVar8 + 7) < 0xaa) {
    iVar5 = 0;
  }
  else {
    iVar5 = (uint)*(byte *)(uVar8 + 3) - (uint)*(byte *)(uVar8 + 4);
  }
  *(int *)(this + 0x30) = iVar5;
  if (*(ushort *)(*param_4 + 7) < 0x44) {
    uVar4 = (uint)*(byte *)(*param_4 + 4);
  }
  else {
    uVar4 = 0;
  }
  *(uint *)(this + 0x34) = uVar4;
  local_18 = *param_4;
  uVar2 = Map::NextFreePropertyIndex((Map *)&local_18);
  *(undefined4 *)(this + 0x38) = uVar2;
  bVar1 = *(byte *)(*param_4 + 5);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)*(byte *)(*param_4 + 3) - (uint)bVar1;
  }
  *(uint *)(this + 0x3c) = uVar4;
  bVar1 = FUN_0170e154(*param_1,param_4);
  this[0x40] = (MapData)(bVar1 & 1);
  bVar1 = FUN_0170e21c(*param_1,param_4);
  this[0x41] = (MapData)(bVar1 & 1);
  if ((*(uint *)(*param_4 + 0xb) >> 0x14 & 1) == 0) {
    MVar3 = (MapData)0x0;
  }
  else {
    MVar3 = (MapData)(((byte)(*(uint *)(*param_4 + 0xb) >> 0x16) ^ 0xff) & 1);
  }
  this[0x42] = MVar3;
  this[0x43] = (MapData)0x0;
  uVar7 = param_1[2];
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x68] = (MapData)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (MapData)0x0;
  *(undefined8 *)(this + 0x80) = 0;
  this[0x88] = (MapData)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x98] = (MapData)0x0;
  *(undefined8 *)(this + 0xa0) = 0;
  this[0xa8] = (MapData)0x0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = uVar7;
  *(undefined2 *)(this + 0xb8) = 0;
  return;
}

