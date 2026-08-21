
/* v8::internal::MapUpdater::MapUpdater(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>) */

void __thiscall
v8::internal::MapUpdater::MapUpdater(MapUpdater *this,Isolate *param_1,ulong *param_3)

{
  uint uVar1;
  byte bVar2;
  MapUpdater MVar3;
  ulong *puVar4;
  ulong uVar5;
  
  *(Isolate **)this = param_1;
  *(ulong **)(this + 8) = param_3;
  uVar5 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(param_1 + 0x95a0);
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  *(ulong **)(this + 0x10) = puVar4;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  uVar1 = *(uint *)(**(long **)(this + 8) + 0xb);
  this[0x34] = (MapUpdater)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(uint *)(this + 0x30) = uVar1 >> 10 & 0x3ff;
  bVar2 = *(byte *)(**(long **)(this + 8) + 10);
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (MapUpdater)0x0;
  MVar3 = (MapUpdater)(bVar2 >> 3);
  this[0x54] = MVar3;
  this[0x55] = (MapUpdater)(bVar2 < 0x30 && MVar3 != (MapUpdater)0x3);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  return;
}

